#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 514
#define SYMBOL_COUNT 126
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
  sym_intrinsic_type = 88,
  sym_type_qualifier = 89,
  sym_statement_label = 90,
  sym_subroutine_call = 91,
  sym_keyword_statement = 92,
  sym_do_loop_statement = 93,
  sym_if_statement = 94,
  sym__inline_if_statement = 95,
  sym__block_if_statement = 96,
  sym_elseif_clause = 97,
  sym_else_clause = 98,
  sym__expression = 99,
  sym_parenthesized_expression = 100,
  sym_assignment_expression = 101,
  sym_pointer_assignment_expression = 102,
  sym_derived_type_member_expression = 103,
  sym_logical_expression = 104,
  sym_relational_expression = 105,
  sym_concatenation_expression = 106,
  sym_math_expression = 107,
  sym_call_expression = 108,
  sym_argument_list = 109,
  sym_keyword_argument = 110,
  sym_array_slice = 111,
  sym_assumed_size = 112,
  sym_assumed_shape = 113,
  sym__block_label = 114,
  sym_loop_control_expression = 115,
  sym_complex_literal = 116,
  sym_string_literal = 117,
  sym__end_of_statement = 118,
  aux_sym_translation_unit_repeat1 = 119,
  aux_sym_program_block_repeat1 = 120,
  aux_sym_program_block_repeat2 = 121,
  aux_sym_variable_declaration_repeat1 = 122,
  aux_sym_variable_declaration_repeat2 = 123,
  aux_sym__block_if_statement_repeat1 = 124,
  aux_sym_argument_list_repeat1 = 125,
  alias_sym_block_label = 126,
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
  [aux_sym_variable_declaration_repeat2] = "variable_declaration_repeat2",
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
  [aux_sym_variable_declaration_repeat2] = {
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
        ADVANCE(152);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(170);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(177);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(191);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(198);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(206);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(237);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(245);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(263);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(272);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(281);
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
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(118);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(135);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 118:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(118);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(119);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(126);
      END_STATE();
    case 119:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      END_STATE();
    case 126:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(153);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(161);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
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
        ADVANCE(71);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(156);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 156:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(156);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(172);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 172:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(172);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(178);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(181);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
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
        ADVANCE(71);
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
        ADVANCE(71);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(201);
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
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(207);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(215);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(221);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(222);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
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
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(239);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(246);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(249);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(247);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(257);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH);
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
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(281);
      END_STATE();
    case 282:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(282);
      END_STATE();
    case 283:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(284);
      END_STATE();
    case 284:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(285);
      END_STATE();
    case 285:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(286);
      END_STATE();
    case 286:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(287);
      END_STATE();
    case 287:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(288);
      END_STATE();
    case 288:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(289);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 290:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(290);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHd_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(291);
      END_STATE();
    case 292:
      if (lookahead == '\n')
        ADVANCE(293);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(292);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(283);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(294);
      if (lookahead == '!')
        ADVANCE(295);
      if (lookahead == '\"')
        ADVANCE(308);
      if (lookahead == '\'')
        ADVANCE(322);
      if (lookahead == '(')
        ADVANCE(336);
      if (lookahead == '+')
        ADVANCE(349);
      if (lookahead == '-')
        ADVANCE(350);
      if (lookahead == '.')
        ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(352);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(353);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(371);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(399);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(422);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(430);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(438);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(447);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(455);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(462);
      if (lookahead != 0)
        ADVANCE(463);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(296);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(302);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
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
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(305);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 308:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(315);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 309:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 310:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 311:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 312:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 313:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 315:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 316:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 317:
      if (lookahead == '\"')
        ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(319);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\"')
        ADVANCE(5);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 320:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 321:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 322:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(11);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(323);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(329);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(334);
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
    case 323:
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 324:
      if (lookahead == '\'')
        ADVANCE(17);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 325:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 326:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 327:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(328);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 329:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 330:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 331:
      if (lookahead == '\'')
        ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(333);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\'')
        ADVANCE(9);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 334:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 335:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(10);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(337);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(343);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(347);
      END_STATE();
    case 337:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(339);
      END_STATE();
    case 339:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(340);
      END_STATE();
    case 340:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(341);
      END_STATE();
    case 341:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(342);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 343:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(344);
      END_STATE();
    case 344:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(346);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 347:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(348);
      END_STATE();
    case 348:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(340);
      END_STATE();
    case 349:
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
        ADVANCE(337);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(343);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(347);
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
    case 350:
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
        ADVANCE(337);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(343);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(38);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(347);
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
    case 351:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(337);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(343);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(347);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(294);
      if (lookahead == '!')
        ADVANCE(295);
      if (lookahead == '\"')
        ADVANCE(308);
      if (lookahead == '\'')
        ADVANCE(322);
      if (lookahead == '(')
        ADVANCE(336);
      if (lookahead == '+')
        ADVANCE(349);
      if (lookahead == '-')
        ADVANCE(350);
      if (lookahead == '.')
        ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(352);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(353);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(371);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(399);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(422);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(425);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(430);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(438);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(445);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(447);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(455);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(459);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(462);
      if (lookahead != 0)
        ADVANCE(463);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(362);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_block_label_start_expression);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(342);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(346);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(372);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(375);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(362);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(384);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(362);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(400);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(118);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(405);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(423);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(424);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(356);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(362);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(362);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(427);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(172);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(431);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(432);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(363);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(362);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(439);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(362);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(363);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(362);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(448);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(362);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(449);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(362);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(457);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(362);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(367);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(43);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(362);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(337);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(343);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(347);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(281);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(362);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 463:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(337);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(343);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(347);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(464);
      if (lookahead == '!')
        ADVANCE(295);
      if (lookahead == '\"')
        ADVANCE(308);
      if (lookahead == '\'')
        ADVANCE(322);
      if (lookahead == '(')
        ADVANCE(336);
      if (lookahead == '*')
        ADVANCE(465);
      if (lookahead == '+')
        ADVANCE(349);
      if (lookahead == ',')
        ADVANCE(466);
      if (lookahead == '-')
        ADVANCE(350);
      if (lookahead == '.')
        ADVANCE(351);
      if (lookahead == ':')
        ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(468);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(469);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(484);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(486);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(489);
      if (lookahead != 0)
        ADVANCE(463);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(337);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(343);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(347);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(337);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(343);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(347);
      END_STATE();
    case 467:
      if (lookahead == ':')
        ADVANCE(51);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(337);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(343);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(347);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(464);
      if (lookahead == '!')
        ADVANCE(295);
      if (lookahead == '\"')
        ADVANCE(308);
      if (lookahead == '\'')
        ADVANCE(322);
      if (lookahead == '(')
        ADVANCE(336);
      if (lookahead == '*')
        ADVANCE(465);
      if (lookahead == '+')
        ADVANCE(349);
      if (lookahead == ',')
        ADVANCE(466);
      if (lookahead == '-')
        ADVANCE(350);
      if (lookahead == '.')
        ADVANCE(351);
      if (lookahead == ':')
        ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(468);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(469);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(482);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(483);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(484);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(485);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(486);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(489);
      if (lookahead != 0)
        ADVANCE(463);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(476);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(342);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(346);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(471);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(476);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(476);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(477);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(476);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(476);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(481);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(43);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(476);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(476);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(337);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(343);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(347);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(476);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(490);
      if (lookahead == '!')
        ADVANCE(295);
      if (lookahead == '\"')
        ADVANCE(308);
      if (lookahead == '\'')
        ADVANCE(322);
      if (lookahead == '(')
        ADVANCE(336);
      if (lookahead == '+')
        ADVANCE(349);
      if (lookahead == '-')
        ADVANCE(350);
      if (lookahead == '.')
        ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(491);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(492);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(493);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(497);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(498);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(499);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(455);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(462);
      if (lookahead != 0)
        ADVANCE(463);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(490);
      if (lookahead == '!')
        ADVANCE(295);
      if (lookahead == '\"')
        ADVANCE(308);
      if (lookahead == '\'')
        ADVANCE(322);
      if (lookahead == '(')
        ADVANCE(336);
      if (lookahead == '+')
        ADVANCE(349);
      if (lookahead == '-')
        ADVANCE(350);
      if (lookahead == '.')
        ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(491);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(492);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(493);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(497);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(425);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(498);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(445);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(499);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(455);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(459);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(462);
      if (lookahead != 0)
        ADVANCE(463);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(362);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(372);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(362);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(494);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(362);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(496);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(362);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(431);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(362);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(500);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(362);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        ADVANCE(293);
      if (lookahead == '!')
        ADVANCE(295);
      if (lookahead == '\"')
        ADVANCE(308);
      if (lookahead == '\'')
        ADVANCE(322);
      if (lookahead == '(')
        ADVANCE(336);
      if (lookahead == '+')
        ADVANCE(349);
      if (lookahead == '-')
        ADVANCE(350);
      if (lookahead == '.')
        ADVANCE(351);
      if (lookahead == ';')
        ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(503);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(469);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(484);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(486);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(489);
      if (lookahead != 0)
        ADVANCE(463);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__semicolon);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(337);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(343);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(347);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        ADVANCE(293);
      if (lookahead == '!')
        ADVANCE(295);
      if (lookahead == '\"')
        ADVANCE(308);
      if (lookahead == '\'')
        ADVANCE(322);
      if (lookahead == '(')
        ADVANCE(336);
      if (lookahead == '+')
        ADVANCE(349);
      if (lookahead == '-')
        ADVANCE(350);
      if (lookahead == '.')
        ADVANCE(351);
      if (lookahead == ';')
        ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(503);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(469);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(482);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(483);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(484);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(485);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(486);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(489);
      if (lookahead != 0)
        ADVANCE(463);
      END_STATE();
    case 504:
      if (lookahead == '\n')
        ADVANCE(293);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(45);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(504);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 505:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(506);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(508);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(505);
      END_STATE();
    case 506:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(507);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 508:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(509);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 510:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(511);
      END_STATE();
    case 511:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(512);
      END_STATE();
    case 512:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(513);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 514:
      if (lookahead == '\n')
        SKIP(514);
      if (lookahead == '!')
        ADVANCE(515);
      if (lookahead == '%')
        ADVANCE(544);
      if (lookahead == '(')
        ADVANCE(573);
      if (lookahead == ')')
        ADVANCE(574);
      if (lookahead == '*')
        ADVANCE(575);
      if (lookahead == '+')
        ADVANCE(576);
      if (lookahead == ',')
        ADVANCE(577);
      if (lookahead == '-')
        ADVANCE(578);
      if (lookahead == '/')
        ADVANCE(579);
      if (lookahead == ':')
        ADVANCE(580);
      if (lookahead == '<')
        ADVANCE(581);
      if (lookahead == '=')
        ADVANCE(582);
      if (lookahead == '>')
        ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(584);
      if (lookahead != 0)
        ADVANCE(598);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(516);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(520);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(525);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(530);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(535);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(519);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(524);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(523);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(526);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(527);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(529);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(531);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(532);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(534);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(540);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(539);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(543);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(549);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(554);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(559);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(564);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(570);
      END_STATE();
    case 545:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(546);
      END_STATE();
    case 546:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(547);
      END_STATE();
    case 547:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(548);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH);
      END_STATE();
    case 549:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(550);
      END_STATE();
    case 550:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(553);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(552);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      END_STATE();
    case 554:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(555);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(557);
      END_STATE();
    case 555:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(556);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 557:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(558);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 559:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(560);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(562);
      END_STATE();
    case 560:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(561);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 562:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(563);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 564:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(565);
      END_STATE();
    case 565:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(569);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(567);
      END_STATE();
    case 567:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(568);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 570:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(571);
      END_STATE();
    case 571:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(572);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(549);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(554);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(559);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(564);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(570);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(549);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(554);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(559);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(564);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(570);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(549);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(554);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(559);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(564);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(570);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(549);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(554);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(559);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(564);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(570);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(549);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(554);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(559);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(564);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(570);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(549);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(554);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(559);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(564);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(570);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(48);
      if (lookahead == '=')
        ADVANCE(49);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(549);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(554);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(559);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(564);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(570);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(549);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(554);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(559);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(564);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(570);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(54);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(549);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(554);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(559);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(564);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(570);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(56);
      if (lookahead == '>')
        ADVANCE(57);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(549);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(554);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(559);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(564);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(570);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(59);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(549);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(554);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(559);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(564);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(570);
      END_STATE();
    case 584:
      if (lookahead == '\n')
        SKIP(514);
      if (lookahead == '!')
        ADVANCE(515);
      if (lookahead == '%')
        ADVANCE(544);
      if (lookahead == '(')
        ADVANCE(573);
      if (lookahead == ')')
        ADVANCE(574);
      if (lookahead == '*')
        ADVANCE(575);
      if (lookahead == '+')
        ADVANCE(576);
      if (lookahead == ',')
        ADVANCE(577);
      if (lookahead == '-')
        ADVANCE(578);
      if (lookahead == '/')
        ADVANCE(579);
      if (lookahead == ':')
        ADVANCE(580);
      if (lookahead == '<')
        ADVANCE(581);
      if (lookahead == '=')
        ADVANCE(582);
      if (lookahead == '>')
        ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(584);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(585);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(587);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(588);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(591);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(594);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(597);
      if (lookahead != 0)
        ADVANCE(598);
      END_STATE();
    case 585:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(549);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(554);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(559);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(586);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(570);
      END_STATE();
    case 586:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(547);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(565);
      END_STATE();
    case 587:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(549);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(554);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(559);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(564);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(570);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(550);
      END_STATE();
    case 588:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(589);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(554);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(559);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(564);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(570);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(557);
      END_STATE();
    case 589:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(556);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(553);
      END_STATE();
    case 591:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(592);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(554);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(559);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(564);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(570);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(562);
      END_STATE();
    case 592:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(561);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(553);
      END_STATE();
    case 594:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(595);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(554);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(559);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(564);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(570);
      END_STATE();
    case 595:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(569);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(553);
      END_STATE();
    case 597:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(549);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(554);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(559);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(564);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(570);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(571);
      END_STATE();
    case 598:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(549);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(554);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(559);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(564);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(570);
      END_STATE();
    case 599:
      if (lookahead == '\n')
        ADVANCE(293);
      if (lookahead == '!')
        ADVANCE(515);
      if (lookahead == '%')
        ADVANCE(544);
      if (lookahead == '(')
        ADVANCE(573);
      if (lookahead == '*')
        ADVANCE(575);
      if (lookahead == '+')
        ADVANCE(576);
      if (lookahead == ',')
        ADVANCE(577);
      if (lookahead == '-')
        ADVANCE(578);
      if (lookahead == '/')
        ADVANCE(579);
      if (lookahead == ';')
        ADVANCE(600);
      if (lookahead == '<')
        ADVANCE(581);
      if (lookahead == '=')
        ADVANCE(582);
      if (lookahead == '>')
        ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(601);
      if (lookahead != 0)
        ADVANCE(598);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__semicolon);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(549);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(554);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(559);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(564);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(570);
      END_STATE();
    case 601:
      if (lookahead == '\n')
        ADVANCE(293);
      if (lookahead == '!')
        ADVANCE(515);
      if (lookahead == '%')
        ADVANCE(544);
      if (lookahead == '(')
        ADVANCE(573);
      if (lookahead == '*')
        ADVANCE(575);
      if (lookahead == '+')
        ADVANCE(576);
      if (lookahead == ',')
        ADVANCE(577);
      if (lookahead == '-')
        ADVANCE(578);
      if (lookahead == '/')
        ADVANCE(579);
      if (lookahead == ';')
        ADVANCE(600);
      if (lookahead == '<')
        ADVANCE(581);
      if (lookahead == '=')
        ADVANCE(582);
      if (lookahead == '>')
        ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(601);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(585);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(587);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(588);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(591);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(594);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(597);
      if (lookahead != 0)
        ADVANCE(598);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(602);
      if (lookahead == '!')
        ADVANCE(295);
      if (lookahead == '\"')
        ADVANCE(308);
      if (lookahead == '\'')
        ADVANCE(322);
      if (lookahead == '(')
        ADVANCE(336);
      if (lookahead == '+')
        ADVANCE(349);
      if (lookahead == '-')
        ADVANCE(350);
      if (lookahead == '.')
        ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(603);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(492);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(493);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(422);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(498);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(499);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(455);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(462);
      if (lookahead != 0)
        ADVANCE(463);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(602);
      if (lookahead == '!')
        ADVANCE(295);
      if (lookahead == '\"')
        ADVANCE(308);
      if (lookahead == '\'')
        ADVANCE(322);
      if (lookahead == '(')
        ADVANCE(336);
      if (lookahead == '+')
        ADVANCE(349);
      if (lookahead == '-')
        ADVANCE(350);
      if (lookahead == '.')
        ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(603);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(492);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(493);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(422);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(425);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(498);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(445);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(499);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(455);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(459);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(462);
      if (lookahead != 0)
        ADVANCE(463);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(604);
      if (lookahead == '!')
        ADVANCE(295);
      if (lookahead == '\"')
        ADVANCE(308);
      if (lookahead == '\'')
        ADVANCE(322);
      if (lookahead == '(')
        ADVANCE(336);
      if (lookahead == ')')
        ADVANCE(605);
      if (lookahead == '*')
        ADVANCE(465);
      if (lookahead == '+')
        ADVANCE(349);
      if (lookahead == ',')
        ADVANCE(466);
      if (lookahead == '-')
        ADVANCE(350);
      if (lookahead == '.')
        ADVANCE(351);
      if (lookahead == ':')
        ADVANCE(606);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(607);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(469);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(484);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(486);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(489);
      if (lookahead != 0)
        ADVANCE(463);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(337);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(343);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(347);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(337);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(343);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(347);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(604);
      if (lookahead == '!')
        ADVANCE(295);
      if (lookahead == '\"')
        ADVANCE(308);
      if (lookahead == '\'')
        ADVANCE(322);
      if (lookahead == '(')
        ADVANCE(336);
      if (lookahead == ')')
        ADVANCE(605);
      if (lookahead == '*')
        ADVANCE(465);
      if (lookahead == '+')
        ADVANCE(349);
      if (lookahead == ',')
        ADVANCE(466);
      if (lookahead == '-')
        ADVANCE(350);
      if (lookahead == '.')
        ADVANCE(351);
      if (lookahead == ':')
        ADVANCE(606);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(607);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(469);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(482);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(483);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(484);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(485);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(486);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(489);
      if (lookahead != 0)
        ADVANCE(463);
      END_STATE();
    case 608:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(45);
      if (lookahead == '=')
        ADVANCE(609);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(608);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(610);
      if (lookahead == '!')
        ADVANCE(295);
      if (lookahead == '\"')
        ADVANCE(308);
      if (lookahead == '\'')
        ADVANCE(322);
      if (lookahead == '(')
        ADVANCE(336);
      if (lookahead == '+')
        ADVANCE(349);
      if (lookahead == '-')
        ADVANCE(350);
      if (lookahead == '.')
        ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(611);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(492);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(493);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(612);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(498);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(499);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(455);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(462);
      if (lookahead != 0)
        ADVANCE(463);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(610);
      if (lookahead == '!')
        ADVANCE(295);
      if (lookahead == '\"')
        ADVANCE(308);
      if (lookahead == '\'')
        ADVANCE(322);
      if (lookahead == '(')
        ADVANCE(336);
      if (lookahead == '+')
        ADVANCE(349);
      if (lookahead == '-')
        ADVANCE(350);
      if (lookahead == '.')
        ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(611);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(492);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(493);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(612);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(425);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(498);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(445);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(499);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(455);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(459);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(462);
      if (lookahead != 0)
        ADVANCE(463);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(613);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(614);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(615);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 615:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(615);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(616);
      END_STATE();
    case 616:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(617);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(620);
      if (lookahead == '!')
        ADVANCE(295);
      if (lookahead == '\"')
        ADVANCE(308);
      if (lookahead == '\'')
        ADVANCE(322);
      if (lookahead == '(')
        ADVANCE(336);
      if (lookahead == '+')
        ADVANCE(349);
      if (lookahead == '-')
        ADVANCE(350);
      if (lookahead == '.')
        ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(621);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(492);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(493);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(497);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(498);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(499);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(455);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(626);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(462);
      if (lookahead != 0)
        ADVANCE(463);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(620);
      if (lookahead == '!')
        ADVANCE(295);
      if (lookahead == '\"')
        ADVANCE(308);
      if (lookahead == '\'')
        ADVANCE(322);
      if (lookahead == '(')
        ADVANCE(336);
      if (lookahead == '+')
        ADVANCE(349);
      if (lookahead == '-')
        ADVANCE(350);
      if (lookahead == '.')
        ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(621);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(492);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(493);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(497);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(425);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(498);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(445);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(499);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(455);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(622);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(462);
      if (lookahead != 0)
        ADVANCE(463);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(623);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(362);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(367);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(623);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(362);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 627:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(628);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(647);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(656);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(664);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(676);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(684);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(710);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(726);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(732);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(627);
      END_STATE();
    case 628:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(629);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(639);
      END_STATE();
    case 629:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(630);
      END_STATE();
    case 630:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(631);
      END_STATE();
    case 631:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(632);
      END_STATE();
    case 632:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(633);
      END_STATE();
    case 633:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(634);
      END_STATE();
    case 634:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(635);
      END_STATE();
    case 635:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(636);
      END_STATE();
    case 636:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(637);
      END_STATE();
    case 637:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(638);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 639:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(640);
      END_STATE();
    case 640:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(641);
      END_STATE();
    case 641:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(642);
      END_STATE();
    case 642:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(643);
      END_STATE();
    case 643:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(644);
      END_STATE();
    case 644:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(645);
      END_STATE();
    case 645:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(646);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      END_STATE();
    case 647:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(648);
      END_STATE();
    case 648:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(649);
      END_STATE();
    case 649:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(650);
      END_STATE();
    case 650:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(651);
      END_STATE();
    case 651:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(652);
      END_STATE();
    case 652:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(653);
      END_STATE();
    case 653:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(654);
      END_STATE();
    case 654:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(655);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 656:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(657);
      END_STATE();
    case 657:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(658);
      END_STATE();
    case 658:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(659);
      END_STATE();
    case 659:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(660);
      END_STATE();
    case 660:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(661);
      END_STATE();
    case 661:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(662);
      END_STATE();
    case 662:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(663);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
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
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(667);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(670);
      END_STATE();
    case 667:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(668);
      END_STATE();
    case 668:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(669);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 670:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(671);
      END_STATE();
    case 671:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(672);
      END_STATE();
    case 672:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(673);
      END_STATE();
    case 673:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(674);
      END_STATE();
    case 674:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(675);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      END_STATE();
    case 676:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(677);
      END_STATE();
    case 677:
      if (lookahead == 'T' ||
          lookahead == 't')
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
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(682);
      END_STATE();
    case 682:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(683);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 684:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(685);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(693);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(699);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(705);
      END_STATE();
    case 685:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(686);
      END_STATE();
    case 686:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(687);
      END_STATE();
    case 687:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(688);
      END_STATE();
    case 688:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(689);
      END_STATE();
    case 689:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(690);
      END_STATE();
    case 690:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(691);
      END_STATE();
    case 691:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(692);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      END_STATE();
    case 693:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(694);
      END_STATE();
    case 694:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(695);
      END_STATE();
    case 695:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(696);
      END_STATE();
    case 696:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(697);
      END_STATE();
    case 697:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(698);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      END_STATE();
    case 699:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(700);
      END_STATE();
    case 700:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(701);
      END_STATE();
    case 701:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(702);
      END_STATE();
    case 702:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(703);
      END_STATE();
    case 703:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(704);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 705:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(706);
      END_STATE();
    case 706:
      if (lookahead == 'L' ||
          lookahead == 'l')
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      END_STATE();
    case 710:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(711);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(714);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(721);
      END_STATE();
    case 711:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(712);
      END_STATE();
    case 712:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(713);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 714:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(715);
      END_STATE();
    case 715:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(716);
      END_STATE();
    case 716:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(717);
      END_STATE();
    case 717:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(718);
      END_STATE();
    case 718:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(719);
      END_STATE();
    case 719:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(720);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 721:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(722);
      END_STATE();
    case 722:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(723);
      END_STATE();
    case 723:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(724);
      END_STATE();
    case 724:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(725);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      END_STATE();
    case 726:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(727);
      END_STATE();
    case 727:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(728);
      END_STATE();
    case 728:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(729);
      END_STATE();
    case 729:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(730);
      END_STATE();
    case 730:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(731);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 732:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(733);
      END_STATE();
    case 733:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(734);
      END_STATE();
    case 734:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(735);
      END_STATE();
    case 735:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(736);
      END_STATE();
    case 736:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(737);
      END_STATE();
    case 737:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(738);
      END_STATE();
    case 738:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(739);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 740:
      if (lookahead == '\n')
        SKIP(740);
      if (lookahead == '!')
        ADVANCE(515);
      if (lookahead == '%')
        ADVANCE(544);
      if (lookahead == '(')
        ADVANCE(573);
      if (lookahead == ')')
        ADVANCE(574);
      if (lookahead == '*')
        ADVANCE(575);
      if (lookahead == '+')
        ADVANCE(576);
      if (lookahead == ',')
        ADVANCE(577);
      if (lookahead == '-')
        ADVANCE(578);
      if (lookahead == '/')
        ADVANCE(579);
      if (lookahead == ':')
        ADVANCE(580);
      if (lookahead == '<')
        ADVANCE(581);
      if (lookahead == '=')
        ADVANCE(741);
      if (lookahead == '>')
        ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(742);
      if (lookahead != 0)
        ADVANCE(598);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(56);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(549);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(554);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(559);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(564);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(570);
      END_STATE();
    case 742:
      if (lookahead == '\n')
        SKIP(740);
      if (lookahead == '!')
        ADVANCE(515);
      if (lookahead == '%')
        ADVANCE(544);
      if (lookahead == '(')
        ADVANCE(573);
      if (lookahead == ')')
        ADVANCE(574);
      if (lookahead == '*')
        ADVANCE(575);
      if (lookahead == '+')
        ADVANCE(576);
      if (lookahead == ',')
        ADVANCE(577);
      if (lookahead == '-')
        ADVANCE(578);
      if (lookahead == '/')
        ADVANCE(579);
      if (lookahead == ':')
        ADVANCE(580);
      if (lookahead == '<')
        ADVANCE(581);
      if (lookahead == '=')
        ADVANCE(741);
      if (lookahead == '>')
        ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(742);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(585);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(587);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(588);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(591);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(594);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(597);
      if (lookahead != 0)
        ADVANCE(598);
      END_STATE();
    case 743:
      if (lookahead == '\n')
        ADVANCE(293);
      if (lookahead == '!')
        ADVANCE(515);
      if (lookahead == '%')
        ADVANCE(544);
      if (lookahead == '(')
        ADVANCE(573);
      if (lookahead == '*')
        ADVANCE(575);
      if (lookahead == '+')
        ADVANCE(576);
      if (lookahead == ',')
        ADVANCE(577);
      if (lookahead == '-')
        ADVANCE(578);
      if (lookahead == '/')
        ADVANCE(579);
      if (lookahead == ';')
        ADVANCE(600);
      if (lookahead == '<')
        ADVANCE(581);
      if (lookahead == '=')
        ADVANCE(741);
      if (lookahead == '>')
        ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(744);
      if (lookahead != 0)
        ADVANCE(598);
      END_STATE();
    case 744:
      if (lookahead == '\n')
        ADVANCE(293);
      if (lookahead == '!')
        ADVANCE(515);
      if (lookahead == '%')
        ADVANCE(544);
      if (lookahead == '(')
        ADVANCE(573);
      if (lookahead == '*')
        ADVANCE(575);
      if (lookahead == '+')
        ADVANCE(576);
      if (lookahead == ',')
        ADVANCE(577);
      if (lookahead == '-')
        ADVANCE(578);
      if (lookahead == '/')
        ADVANCE(579);
      if (lookahead == ';')
        ADVANCE(600);
      if (lookahead == '<')
        ADVANCE(581);
      if (lookahead == '=')
        ADVANCE(741);
      if (lookahead == '>')
        ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(744);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(585);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(587);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(588);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(591);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(594);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(597);
      if (lookahead != 0)
        ADVANCE(598);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(746);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(747);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(748);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(745);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(71);
      END_STATE();
    case 746:
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
    case 747:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(71);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(750);
      if (lookahead == '!')
        ADVANCE(295);
      if (lookahead == '\"')
        ADVANCE(308);
      if (lookahead == '\'')
        ADVANCE(322);
      if (lookahead == '(')
        ADVANCE(336);
      if (lookahead == '+')
        ADVANCE(349);
      if (lookahead == '-')
        ADVANCE(350);
      if (lookahead == '.')
        ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(751);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(492);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(493);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(752);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(498);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(499);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(455);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(462);
      if (lookahead != 0)
        ADVANCE(463);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(750);
      if (lookahead == '!')
        ADVANCE(295);
      if (lookahead == '\"')
        ADVANCE(308);
      if (lookahead == '\'')
        ADVANCE(322);
      if (lookahead == '(')
        ADVANCE(336);
      if (lookahead == '+')
        ADVANCE(349);
      if (lookahead == '-')
        ADVANCE(350);
      if (lookahead == '.')
        ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(751);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(492);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(493);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(752);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(425);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(498);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(445);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(499);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(455);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(459);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(462);
      if (lookahead != 0)
        ADVANCE(463);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(753);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(758);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(156);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(759);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(760);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 760:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(760);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(761);
      END_STATE();
    case 761:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(762);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    case 765:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(766);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(772);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(765);
      END_STATE();
    case 766:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(767);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(768);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(769);
      END_STATE();
    case 768:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(768);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(769);
      END_STATE();
    case 769:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(770);
      END_STATE();
    case 770:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(771);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 772:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(773);
      END_STATE();
    case 773:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(774);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 775:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(776);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(775);
      END_STATE();
    case 776:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(777);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(780);
      END_STATE();
    case 777:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(778);
      END_STATE();
    case 778:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(779);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(156);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(157);
      END_STATE();
    case 780:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(760);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(781);
      if (lookahead == '!')
        ADVANCE(295);
      if (lookahead == '\"')
        ADVANCE(308);
      if (lookahead == '\'')
        ADVANCE(322);
      if (lookahead == '(')
        ADVANCE(336);
      if (lookahead == '+')
        ADVANCE(349);
      if (lookahead == '-')
        ADVANCE(350);
      if (lookahead == '.')
        ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(782);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(492);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(493);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(783);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(498);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(499);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(455);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(462);
      if (lookahead != 0)
        ADVANCE(463);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(781);
      if (lookahead == '!')
        ADVANCE(295);
      if (lookahead == '\"')
        ADVANCE(308);
      if (lookahead == '\'')
        ADVANCE(322);
      if (lookahead == '(')
        ADVANCE(336);
      if (lookahead == '+')
        ADVANCE(349);
      if (lookahead == '-')
        ADVANCE(350);
      if (lookahead == '.')
        ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(782);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(492);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(493);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(495);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(783);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(425);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(426);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(498);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(445);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(446);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(499);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(455);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(459);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(461);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(462);
      if (lookahead != 0)
        ADVANCE(463);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(354);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(355);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(758);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(361);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 282},
  [2] = {.lex_state = 290},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 282},
  [5] = {.lex_state = 282},
  [6] = {.lex_state = 292},
  [7] = {.lex_state = 282},
  [8] = {.lex_state = 292},
  [9] = {.lex_state = 294},
  [10] = {.lex_state = 294},
  [11] = {.lex_state = 294},
  [12] = {.lex_state = 292},
  [13] = {.lex_state = 464},
  [14] = {.lex_state = 490},
  [15] = {.lex_state = 464},
  [16] = {.lex_state = 290},
  [17] = {.lex_state = 292},
  [18] = {.lex_state = 290},
  [19] = {.lex_state = 290},
  [20] = {.lex_state = 501},
  [21] = {.lex_state = 504},
  [22] = {.lex_state = 290},
  [23] = {.lex_state = 464},
  [24] = {.lex_state = 464},
  [25] = {.lex_state = 505},
  [26] = {.lex_state = 514},
  [27] = {.lex_state = 514},
  [28] = {.lex_state = 514},
  [29] = {.lex_state = 294},
  [30] = {.lex_state = 292},
  [31] = {.lex_state = 464},
  [32] = {.lex_state = 490},
  [33] = {.lex_state = 292},
  [34] = {.lex_state = 292},
  [35] = {.lex_state = 514},
  [36] = {.lex_state = 599},
  [37] = {.lex_state = 294},
  [38] = {.lex_state = 602},
  [39] = {.lex_state = 292},
  [40] = {.lex_state = 294},
  [41] = {.lex_state = 602},
  [42] = {.lex_state = 504},
  [43] = {.lex_state = 282},
  [44] = {.lex_state = 282},
  [45] = {.lex_state = 290},
  [46] = {.lex_state = 604},
  [47] = {.lex_state = 464},
  [48] = {.lex_state = 464},
  [49] = {.lex_state = 464},
  [50] = {.lex_state = 514},
  [51] = {.lex_state = 514},
  [52] = {.lex_state = 514},
  [53] = {.lex_state = 290},
  [54] = {.lex_state = 292},
  [55] = {.lex_state = 292},
  [56] = {.lex_state = 292},
  [57] = {.lex_state = 464},
  [58] = {.lex_state = 464},
  [59] = {.lex_state = 464},
  [60] = {.lex_state = 599},
  [61] = {.lex_state = 599},
  [62] = {.lex_state = 599},
  [63] = {.lex_state = 599},
  [64] = {.lex_state = 608},
  [65] = {.lex_state = 610},
  [66] = {.lex_state = 292},
  [67] = {.lex_state = 610},
  [68] = {.lex_state = 464},
  [69] = {.lex_state = 620},
  [70] = {.lex_state = 514},
  [71] = {.lex_state = 514},
  [72] = {.lex_state = 514},
  [73] = {.lex_state = 504},
  [74] = {.lex_state = 290},
  [75] = {.lex_state = 604},
  [76] = {.lex_state = 599},
  [77] = {.lex_state = 294},
  [78] = {.lex_state = 627},
  [79] = {.lex_state = 464},
  [80] = {.lex_state = 464},
  [81] = {.lex_state = 464},
  [82] = {.lex_state = 464},
  [83] = {.lex_state = 740},
  [84] = {.lex_state = 740},
  [85] = {.lex_state = 743},
  [86] = {.lex_state = 740},
  [87] = {.lex_state = 504},
  [88] = {.lex_state = 743},
  [89] = {.lex_state = 292},
  [90] = {.lex_state = 599},
  [91] = {.lex_state = 602},
  [92] = {.lex_state = 602},
  [93] = {.lex_state = 464},
  [94] = {.lex_state = 464},
  [95] = {.lex_state = 464},
  [96] = {.lex_state = 464},
  [97] = {.lex_state = 464},
  [98] = {.lex_state = 464},
  [99] = {.lex_state = 464},
  [100] = {.lex_state = 464},
  [101] = {.lex_state = 464},
  [102] = {.lex_state = 464},
  [103] = {.lex_state = 464},
  [104] = {.lex_state = 294},
  [105] = {.lex_state = 602},
  [106] = {.lex_state = 504},
  [107] = {.lex_state = 282},
  [108] = {.lex_state = 292},
  [109] = {.lex_state = 602},
  [110] = {.lex_state = 292},
  [111] = {.lex_state = 464},
  [112] = {.lex_state = 464},
  [113] = {.lex_state = 608},
  [114] = {.lex_state = 464},
  [115] = {.lex_state = 464},
  [116] = {.lex_state = 464},
  [117] = {.lex_state = 604},
  [118] = {.lex_state = 740},
  [119] = {.lex_state = 514},
  [120] = {.lex_state = 608},
  [121] = {.lex_state = 514},
  [122] = {.lex_state = 514},
  [123] = {.lex_state = 745},
  [124] = {.lex_state = 604},
  [125] = {.lex_state = 514},
  [126] = {.lex_state = 464},
  [127] = {.lex_state = 514},
  [128] = {.lex_state = 464},
  [129] = {.lex_state = 464},
  [130] = {.lex_state = 464},
  [131] = {.lex_state = 464},
  [132] = {.lex_state = 464},
  [133] = {.lex_state = 464},
  [134] = {.lex_state = 464},
  [135] = {.lex_state = 464},
  [136] = {.lex_state = 604},
  [137] = {.lex_state = 292},
  [138] = {.lex_state = 514},
  [139] = {.lex_state = 514},
  [140] = {.lex_state = 514},
  [141] = {.lex_state = 599},
  [142] = {.lex_state = 599},
  [143] = {.lex_state = 464},
  [144] = {.lex_state = 464},
  [145] = {.lex_state = 464},
  [146] = {.lex_state = 464},
  [147] = {.lex_state = 464},
  [148] = {.lex_state = 464},
  [149] = {.lex_state = 464},
  [150] = {.lex_state = 464},
  [151] = {.lex_state = 464},
  [152] = {.lex_state = 464},
  [153] = {.lex_state = 610},
  [154] = {.lex_state = 504},
  [155] = {.lex_state = 490},
  [156] = {.lex_state = 292},
  [157] = {.lex_state = 599},
  [158] = {.lex_state = 610},
  [159] = {.lex_state = 514},
  [160] = {.lex_state = 504},
  [161] = {.lex_state = 490},
  [162] = {.lex_state = 292},
  [163] = {.lex_state = 599},
  [164] = {.lex_state = 292},
  [165] = {.lex_state = 464},
  [166] = {.lex_state = 505},
  [167] = {.lex_state = 599},
  [168] = {.lex_state = 514},
  [169] = {.lex_state = 608},
  [170] = {.lex_state = 464},
  [171] = {.lex_state = 290},
  [172] = {.lex_state = 290},
  [173] = {.lex_state = 464},
  [174] = {.lex_state = 743},
  [175] = {.lex_state = 504},
  [176] = {.lex_state = 743},
  [177] = {.lex_state = 514},
  [178] = {.lex_state = 514},
  [179] = {.lex_state = 514},
  [180] = {.lex_state = 740},
  [181] = {.lex_state = 740},
  [182] = {.lex_state = 740},
  [183] = {.lex_state = 464},
  [184] = {.lex_state = 604},
  [185] = {.lex_state = 743},
  [186] = {.lex_state = 504},
  [187] = {.lex_state = 464},
  [188] = {.lex_state = 464},
  [189] = {.lex_state = 464},
  [190] = {.lex_state = 464},
  [191] = {.lex_state = 464},
  [192] = {.lex_state = 464},
  [193] = {.lex_state = 464},
  [194] = {.lex_state = 464},
  [195] = {.lex_state = 464},
  [196] = {.lex_state = 464},
  [197] = {.lex_state = 602},
  [198] = {.lex_state = 514},
  [199] = {.lex_state = 599},
  [200] = {.lex_state = 599},
  [201] = {.lex_state = 514},
  [202] = {.lex_state = 514},
  [203] = {.lex_state = 514},
  [204] = {.lex_state = 514},
  [205] = {.lex_state = 514},
  [206] = {.lex_state = 514},
  [207] = {.lex_state = 514},
  [208] = {.lex_state = 514},
  [209] = {.lex_state = 292},
  [210] = {.lex_state = 282},
  [211] = {.lex_state = 504},
  [212] = {.lex_state = 292},
  [213] = {.lex_state = 514},
  [214] = {.lex_state = 514},
  [215] = {.lex_state = 514},
  [216] = {.lex_state = 464},
  [217] = {.lex_state = 514},
  [218] = {.lex_state = 604},
  [219] = {.lex_state = 604},
  [220] = {.lex_state = 464},
  [221] = {.lex_state = 464},
  [222] = {.lex_state = 464},
  [223] = {.lex_state = 464},
  [224] = {.lex_state = 464},
  [225] = {.lex_state = 464},
  [226] = {.lex_state = 464},
  [227] = {.lex_state = 464},
  [228] = {.lex_state = 464},
  [229] = {.lex_state = 464},
  [230] = {.lex_state = 604},
  [231] = {.lex_state = 608},
  [232] = {.lex_state = 608},
  [233] = {.lex_state = 514},
  [234] = {.lex_state = 514},
  [235] = {.lex_state = 608},
  [236] = {.lex_state = 514},
  [237] = {.lex_state = 514},
  [238] = {.lex_state = 514},
  [239] = {.lex_state = 514},
  [240] = {.lex_state = 514},
  [241] = {.lex_state = 514},
  [242] = {.lex_state = 514},
  [243] = {.lex_state = 514},
  [244] = {.lex_state = 514},
  [245] = {.lex_state = 292},
  [246] = {.lex_state = 514},
  [247] = {.lex_state = 608},
  [248] = {.lex_state = 745},
  [249] = {.lex_state = 599},
  [250] = {.lex_state = 599},
  [251] = {.lex_state = 599},
  [252] = {.lex_state = 599},
  [253] = {.lex_state = 599},
  [254] = {.lex_state = 599},
  [255] = {.lex_state = 599},
  [256] = {.lex_state = 599},
  [257] = {.lex_state = 599},
  [258] = {.lex_state = 599},
  [259] = {.lex_state = 464},
  [260] = {.lex_state = 464},
  [261] = {.lex_state = 514},
  [262] = {.lex_state = 504},
  [263] = {.lex_state = 610},
  [264] = {.lex_state = 292},
  [265] = {.lex_state = 292},
  [266] = {.lex_state = 292},
  [267] = {.lex_state = 599},
  [268] = {.lex_state = 610},
  [269] = {.lex_state = 610},
  [270] = {.lex_state = 620},
  [271] = {.lex_state = 750},
  [272] = {.lex_state = 292},
  [273] = {.lex_state = 750},
  [274] = {.lex_state = 292},
  [275] = {.lex_state = 599},
  [276] = {.lex_state = 292},
  [277] = {.lex_state = 292},
  [278] = {.lex_state = 610},
  [279] = {.lex_state = 514},
  [280] = {.lex_state = 504},
  [281] = {.lex_state = 599},
  [282] = {.lex_state = 608},
  [283] = {.lex_state = 464},
  [284] = {.lex_state = 765},
  [285] = {.lex_state = 627},
  [286] = {.lex_state = 464},
  [287] = {.lex_state = 743},
  [288] = {.lex_state = 504},
  [289] = {.lex_state = 743},
  [290] = {.lex_state = 464},
  [291] = {.lex_state = 504},
  [292] = {.lex_state = 745},
  [293] = {.lex_state = 740},
  [294] = {.lex_state = 604},
  [295] = {.lex_state = 740},
  [296] = {.lex_state = 743},
  [297] = {.lex_state = 504},
  [298] = {.lex_state = 743},
  [299] = {.lex_state = 743},
  [300] = {.lex_state = 514},
  [301] = {.lex_state = 608},
  [302] = {.lex_state = 504},
  [303] = {.lex_state = 740},
  [304] = {.lex_state = 464},
  [305] = {.lex_state = 464},
  [306] = {.lex_state = 599},
  [307] = {.lex_state = 740},
  [308] = {.lex_state = 740},
  [309] = {.lex_state = 740},
  [310] = {.lex_state = 740},
  [311] = {.lex_state = 740},
  [312] = {.lex_state = 740},
  [313] = {.lex_state = 740},
  [314] = {.lex_state = 740},
  [315] = {.lex_state = 282},
  [316] = {.lex_state = 292},
  [317] = {.lex_state = 504},
  [318] = {.lex_state = 464},
  [319] = {.lex_state = 464},
  [320] = {.lex_state = 464},
  [321] = {.lex_state = 514},
  [322] = {.lex_state = 464},
  [323] = {.lex_state = 608},
  [324] = {.lex_state = 514},
  [325] = {.lex_state = 608},
  [326] = {.lex_state = 514},
  [327] = {.lex_state = 608},
  [328] = {.lex_state = 514},
  [329] = {.lex_state = 514},
  [330] = {.lex_state = 514},
  [331] = {.lex_state = 514},
  [332] = {.lex_state = 514},
  [333] = {.lex_state = 514},
  [334] = {.lex_state = 514},
  [335] = {.lex_state = 514},
  [336] = {.lex_state = 514},
  [337] = {.lex_state = 514},
  [338] = {.lex_state = 464},
  [339] = {.lex_state = 608},
  [340] = {.lex_state = 514},
  [341] = {.lex_state = 514},
  [342] = {.lex_state = 608},
  [343] = {.lex_state = 292},
  [344] = {.lex_state = 608},
  [345] = {.lex_state = 608},
  [346] = {.lex_state = 514},
  [347] = {.lex_state = 514},
  [348] = {.lex_state = 464},
  [349] = {.lex_state = 464},
  [350] = {.lex_state = 464},
  [351] = {.lex_state = 464},
  [352] = {.lex_state = 464},
  [353] = {.lex_state = 464},
  [354] = {.lex_state = 464},
  [355] = {.lex_state = 464},
  [356] = {.lex_state = 464},
  [357] = {.lex_state = 464},
  [358] = {.lex_state = 292},
  [359] = {.lex_state = 504},
  [360] = {.lex_state = 610},
  [361] = {.lex_state = 750},
  [362] = {.lex_state = 504},
  [363] = {.lex_state = 290},
  [364] = {.lex_state = 504},
  [365] = {.lex_state = 490},
  [366] = {.lex_state = 292},
  [367] = {.lex_state = 775},
  [368] = {.lex_state = 775},
  [369] = {.lex_state = 599},
  [370] = {.lex_state = 750},
  [371] = {.lex_state = 775},
  [372] = {.lex_state = 292},
  [373] = {.lex_state = 610},
  [374] = {.lex_state = 505},
  [375] = {.lex_state = 292},
  [376] = {.lex_state = 599},
  [377] = {.lex_state = 608},
  [378] = {.lex_state = 464},
  [379] = {.lex_state = 743},
  [380] = {.lex_state = 504},
  [381] = {.lex_state = 743},
  [382] = {.lex_state = 504},
  [383] = {.lex_state = 464},
  [384] = {.lex_state = 464},
  [385] = {.lex_state = 608},
  [386] = {.lex_state = 740},
  [387] = {.lex_state = 514},
  [388] = {.lex_state = 608},
  [389] = {.lex_state = 743},
  [390] = {.lex_state = 608},
  [391] = {.lex_state = 599},
  [392] = {.lex_state = 599},
  [393] = {.lex_state = 464},
  [394] = {.lex_state = 464},
  [395] = {.lex_state = 464},
  [396] = {.lex_state = 464},
  [397] = {.lex_state = 464},
  [398] = {.lex_state = 464},
  [399] = {.lex_state = 464},
  [400] = {.lex_state = 464},
  [401] = {.lex_state = 464},
  [402] = {.lex_state = 282},
  [403] = {.lex_state = 292},
  [404] = {.lex_state = 514},
  [405] = {.lex_state = 514},
  [406] = {.lex_state = 464},
  [407] = {.lex_state = 464},
  [408] = {.lex_state = 464},
  [409] = {.lex_state = 464},
  [410] = {.lex_state = 464},
  [411] = {.lex_state = 464},
  [412] = {.lex_state = 464},
  [413] = {.lex_state = 464},
  [414] = {.lex_state = 464},
  [415] = {.lex_state = 514},
  [416] = {.lex_state = 464},
  [417] = {.lex_state = 514},
  [418] = {.lex_state = 292},
  [419] = {.lex_state = 599},
  [420] = {.lex_state = 599},
  [421] = {.lex_state = 514},
  [422] = {.lex_state = 514},
  [423] = {.lex_state = 514},
  [424] = {.lex_state = 514},
  [425] = {.lex_state = 514},
  [426] = {.lex_state = 514},
  [427] = {.lex_state = 514},
  [428] = {.lex_state = 514},
  [429] = {.lex_state = 514},
  [430] = {.lex_state = 292},
  [431] = {.lex_state = 504},
  [432] = {.lex_state = 775},
  [433] = {.lex_state = 750},
  [434] = {.lex_state = 775},
  [435] = {.lex_state = 292},
  [436] = {.lex_state = 505},
  [437] = {.lex_state = 781},
  [438] = {.lex_state = 292},
  [439] = {.lex_state = 781},
  [440] = {.lex_state = 292},
  [441] = {.lex_state = 599},
  [442] = {.lex_state = 750},
  [443] = {.lex_state = 750},
  [444] = {.lex_state = 775},
  [445] = {.lex_state = 504},
  [446] = {.lex_state = 750},
  [447] = {.lex_state = 464},
  [448] = {.lex_state = 504},
  [449] = {.lex_state = 743},
  [450] = {.lex_state = 504},
  [451] = {.lex_state = 743},
  [452] = {.lex_state = 740},
  [453] = {.lex_state = 740},
  [454] = {.lex_state = 608},
  [455] = {.lex_state = 743},
  [456] = {.lex_state = 599},
  [457] = {.lex_state = 599},
  [458] = {.lex_state = 599},
  [459] = {.lex_state = 599},
  [460] = {.lex_state = 599},
  [461] = {.lex_state = 599},
  [462] = {.lex_state = 599},
  [463] = {.lex_state = 599},
  [464] = {.lex_state = 599},
  [465] = {.lex_state = 282},
  [466] = {.lex_state = 514},
  [467] = {.lex_state = 514},
  [468] = {.lex_state = 514},
  [469] = {.lex_state = 514},
  [470] = {.lex_state = 514},
  [471] = {.lex_state = 514},
  [472] = {.lex_state = 514},
  [473] = {.lex_state = 514},
  [474] = {.lex_state = 514},
  [475] = {.lex_state = 514},
  [476] = {.lex_state = 464},
  [477] = {.lex_state = 292},
  [478] = {.lex_state = 504},
  [479] = {.lex_state = 775},
  [480] = {.lex_state = 775},
  [481] = {.lex_state = 504},
  [482] = {.lex_state = 781},
  [483] = {.lex_state = 490},
  [484] = {.lex_state = 292},
  [485] = {.lex_state = 599},
  [486] = {.lex_state = 781},
  [487] = {.lex_state = 750},
  [488] = {.lex_state = 292},
  [489] = {.lex_state = 750},
  [490] = {.lex_state = 504},
  [491] = {.lex_state = 740},
  [492] = {.lex_state = 599},
  [493] = {.lex_state = 292},
  [494] = {.lex_state = 504},
  [495] = {.lex_state = 775},
  [496] = {.lex_state = 292},
  [497] = {.lex_state = 750},
  [498] = {.lex_state = 781},
  [499] = {.lex_state = 292},
  [500] = {.lex_state = 599},
  [501] = {.lex_state = 781},
  [502] = {.lex_state = 781},
  [503] = {.lex_state = 775},
  [504] = {.lex_state = 292},
  [505] = {.lex_state = 504},
  [506] = {.lex_state = 750},
  [507] = {.lex_state = 750},
  [508] = {.lex_state = 781},
  [509] = {.lex_state = 775},
  [510] = {.lex_state = 292},
  [511] = {.lex_state = 750},
  [512] = {.lex_state = 504},
  [513] = {.lex_state = 292},
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
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(3),
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
  [10] = {
    [sym__variable_declaration_statement] = STATE(29),
    [sym_variable_declaration] = STATE(30),
    [sym_intrinsic_type] = STATE(31),
    [sym_statement_label] = STATE(32),
    [sym_subroutine_call] = STATE(33),
    [sym_keyword_statement] = STATE(33),
    [sym_do_loop_statement] = STATE(33),
    [sym_if_statement] = STATE(33),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(36),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat1] = STATE(37),
    [aux_sym_program_block_repeat2] = STATE(38),
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
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
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
    [sym__variable_declaration_statement] = STATE(29),
    [sym_variable_declaration] = STATE(30),
    [sym_intrinsic_type] = STATE(31),
    [sym_statement_label] = STATE(32),
    [sym_subroutine_call] = STATE(33),
    [sym_keyword_statement] = STATE(33),
    [sym_do_loop_statement] = STATE(33),
    [sym_if_statement] = STATE(33),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(36),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat1] = STATE(40),
    [aux_sym_program_block_repeat2] = STATE(41),
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
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
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
    [sym__end_of_statement] = STATE(44),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [13] = {
    [sym_argument_list] = STATE(47),
    [anon_sym_COMMA] = ACTIONS(80),
    [anon_sym_COLON_COLON] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(80),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [sym_number_literal] = ACTIONS(88),
    [sym__double_quoted_string] = ACTIONS(88),
    [sym__single_quoted_string] = ACTIONS(88),
    [sym_boolean_literal] = ACTIONS(88),
    [sym_identifier] = ACTIONS(88),
    [sym_comment] = ACTIONS(34),
  },
  [14] = {
    [anon_sym_LPAREN] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(90),
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
    [sym__expression] = STATE(52),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [16] = {
    [sym_call_expression] = STATE(54),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(14),
  },
  [17] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(104),
    [sym__newline] = ACTIONS(104),
  },
  [18] = {
    [sym_identifier] = ACTIONS(106),
    [sym_comment] = ACTIONS(14),
  },
  [19] = {
    [sym_statement_label] = STATE(55),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(108),
    [sym_comment] = ACTIONS(14),
  },
  [20] = {
    [sym__expression] = STATE(63),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(110),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(114),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(104),
    [sym__newline] = ACTIONS(104),
  },
  [21] = {
    [sym_loop_control_expression] = STATE(66),
    [sym__end_of_statement] = STATE(67),
    [sym_identifier] = ACTIONS(122),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(124),
    [sym__newline] = ACTIONS(124),
  },
  [22] = {
    [sym_parenthesized_expression] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(126),
    [sym_comment] = ACTIONS(14),
  },
  [23] = {
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
    [anon_sym_LPAREN] = ACTIONS(46),
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
    [sym__expression] = STATE(72),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
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
    [sym_argument_list] = STATE(76),
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
    [anon_sym_LPAREN] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(148),
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
    [sym__end_of_statement] = STATE(77),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [31] = {
    [sym__expression] = STATE(86),
    [sym_parenthesized_expression] = STATE(83),
    [sym_assignment_expression] = STATE(87),
    [sym_derived_type_member_expression] = STATE(83),
    [sym_logical_expression] = STATE(83),
    [sym_relational_expression] = STATE(83),
    [sym_concatenation_expression] = STATE(83),
    [sym_math_expression] = STATE(83),
    [sym_call_expression] = STATE(88),
    [sym_complex_literal] = STATE(83),
    [sym_string_literal] = STATE(83),
    [anon_sym_COMMA] = ACTIONS(152),
    [anon_sym_COLON_COLON] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [sym_number_literal] = ACTIONS(162),
    [sym__double_quoted_string] = ACTIONS(164),
    [sym__single_quoted_string] = ACTIONS(164),
    [sym_boolean_literal] = ACTIONS(162),
    [sym_identifier] = ACTIONS(166),
    [sym_comment] = ACTIONS(34),
  },
  [32] = {
    [sym_subroutine_call] = STATE(89),
    [sym_keyword_statement] = STATE(89),
    [sym_do_loop_statement] = STATE(89),
    [sym_if_statement] = STATE(89),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(89),
    [sym_pointer_assignment_expression] = STATE(89),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(90),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
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
  [33] = {
    [sym__end_of_statement] = STATE(92),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(168),
    [sym__newline] = ACTIONS(168),
  },
  [34] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(170),
    [sym__newline] = ACTIONS(170),
  },
  [35] = {
    [anon_sym_STAR] = ACTIONS(172),
    [anon_sym_EQ] = ACTIONS(174),
    [anon_sym_EQ_GT] = ACTIONS(176),
    [anon_sym_PERCENT] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_LT] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_GT] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_LT_EQ] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_GT_EQ] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_EQ_EQ] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_SLASH_EQ] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_SLASH_SLASH] = ACTIONS(192),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(172),
    [anon_sym_STAR_STAR] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
  },
  [36] = {
    [sym__end_of_statement] = STATE(92),
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
    [sym__semicolon] = ACTIONS(168),
    [sym__newline] = ACTIONS(168),
  },
  [37] = {
    [sym__variable_declaration_statement] = STATE(29),
    [sym_variable_declaration] = STATE(30),
    [sym_intrinsic_type] = STATE(31),
    [sym_statement_label] = STATE(32),
    [sym_subroutine_call] = STATE(33),
    [sym_keyword_statement] = STATE(33),
    [sym_do_loop_statement] = STATE(33),
    [sym_if_statement] = STATE(33),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(36),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat1] = STATE(104),
    [aux_sym_program_block_repeat2] = STATE(41),
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
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
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
    [sym_statement_label] = STATE(32),
    [sym_subroutine_call] = STATE(33),
    [sym_keyword_statement] = STATE(33),
    [sym_do_loop_statement] = STATE(33),
    [sym_if_statement] = STATE(33),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(36),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(105),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
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
  [39] = {
    [sym__end_of_statement] = STATE(107),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(198),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [40] = {
    [sym__variable_declaration_statement] = STATE(29),
    [sym_variable_declaration] = STATE(30),
    [sym_intrinsic_type] = STATE(31),
    [sym_statement_label] = STATE(32),
    [sym_subroutine_call] = STATE(33),
    [sym_keyword_statement] = STATE(33),
    [sym_do_loop_statement] = STATE(33),
    [sym_if_statement] = STATE(33),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(36),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat1] = STATE(104),
    [aux_sym_program_block_repeat2] = STATE(109),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
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
    [sym_statement_label] = STATE(32),
    [sym_subroutine_call] = STATE(33),
    [sym_keyword_statement] = STATE(33),
    [sym_do_loop_statement] = STATE(33),
    [sym_if_statement] = STATE(33),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(36),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(105),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
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
  [42] = {
    [sym__end_of_statement] = STATE(107),
    [sym_identifier] = ACTIONS(202),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(204),
    [sym_comment] = ACTIONS(14),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(206),
    [sym_comment] = ACTIONS(14),
  },
  [45] = {
    [sym_parenthesized_expression] = STATE(111),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(208),
    [anon_sym_LPAREN] = ACTIONS(210),
    [sym_comment] = ACTIONS(14),
  },
  [46] = {
    [sym__expression] = STATE(119),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_keyword_argument] = STATE(120),
    [sym_array_slice] = STATE(120),
    [sym_assumed_size] = STATE(120),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_STAR] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_COLON] = ACTIONS(220),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(222),
    [sym_comment] = ACTIONS(34),
  },
  [47] = {
    [anon_sym_COMMA] = ACTIONS(224),
    [anon_sym_COLON_COLON] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(224),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(224),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_DASH] = ACTIONS(224),
    [sym_number_literal] = ACTIONS(228),
    [sym__double_quoted_string] = ACTIONS(228),
    [sym__single_quoted_string] = ACTIONS(228),
    [sym_boolean_literal] = ACTIONS(228),
    [sym_identifier] = ACTIONS(228),
    [sym_comment] = ACTIONS(34),
  },
  [48] = {
    [sym__expression] = STATE(121),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [49] = {
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
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [50] = {
    [anon_sym_COMMA] = ACTIONS(230),
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
  [51] = {
    [sym_argument_list] = STATE(125),
    [anon_sym_COMMA] = ACTIONS(230),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(232),
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
  [52] = {
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_PERCENT] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(246),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(234),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [53] = {
    [sym_argument_list] = STATE(137),
    [anon_sym_LPAREN] = ACTIONS(258),
    [sym_comment] = ACTIONS(14),
  },
  [54] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(260),
    [sym__newline] = ACTIONS(260),
  },
  [55] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(262),
    [sym__newline] = ACTIONS(262),
  },
  [56] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(92),
    [sym__newline] = ACTIONS(92),
  },
  [57] = {
    [sym__expression] = STATE(140),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_number_literal] = ACTIONS(264),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(266),
    [sym_comment] = ACTIONS(34),
  },
  [58] = {
    [sym__expression] = STATE(141),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [59] = {
    [sym__expression] = STATE(142),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [60] = {
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
  [61] = {
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
  [62] = {
    [sym_argument_list] = STATE(76),
    [anon_sym_COMMA] = ACTIONS(138),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(274),
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
  [63] = {
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(284),
    [anon_sym_LT] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_GT] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_LT_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_GT_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_EQ_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_SLASH_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_SLASH_SLASH] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_DASH] = ACTIONS(290),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_STAR_STAR] = ACTIONS(292),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(262),
    [sym__newline] = ACTIONS(262),
  },
  [64] = {
    [anon_sym_EQ] = ACTIONS(294),
    [sym_comment] = ACTIONS(14),
  },
  [65] = {
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
  [66] = {
    [sym__end_of_statement] = STATE(153),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(124),
    [sym__newline] = ACTIONS(124),
  },
  [67] = {
    [sym_statement_label] = STATE(155),
    [sym_subroutine_call] = STATE(156),
    [sym_keyword_statement] = STATE(156),
    [sym_do_loop_statement] = STATE(156),
    [sym_if_statement] = STATE(156),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(156),
    [sym_pointer_assignment_expression] = STATE(156),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(157),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(158),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
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
  [68] = {
    [sym__expression] = STATE(159),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [69] = {
    [sym_statement_label] = STATE(161),
    [sym_subroutine_call] = STATE(162),
    [sym_keyword_statement] = STATE(162),
    [sym_do_loop_statement] = STATE(162),
    [sym_if_statement] = STATE(162),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(162),
    [sym_pointer_assignment_expression] = STATE(162),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(163),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(298),
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
  [70] = {
    [sym_argument_list] = STATE(125),
    [anon_sym_COMMA] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(232),
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
  [71] = {
    [anon_sym_STAR] = ACTIONS(172),
    [anon_sym_EQ] = ACTIONS(300),
    [anon_sym_EQ_GT] = ACTIONS(302),
    [anon_sym_PERCENT] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_LT] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_GT] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_LT_EQ] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_GT_EQ] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_EQ_EQ] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_SLASH_EQ] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_SLASH_SLASH] = ACTIONS(192),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(172),
    [anon_sym_STAR_STAR] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
  },
  [72] = {
    [anon_sym_STAR] = ACTIONS(306),
    [anon_sym_EQ] = ACTIONS(306),
    [anon_sym_EQ_GT] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_GT] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_LT_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_GT_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_EQ_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_SLASH_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_SLASH_SLASH] = ACTIONS(308),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_SLASH] = ACTIONS(306),
    [anon_sym_STAR_STAR] = ACTIONS(308),
    [sym_comment] = ACTIONS(34),
  },
  [73] = {
    [sym_loop_control_expression] = STATE(164),
    [sym__end_of_statement] = STATE(153),
    [sym_identifier] = ACTIONS(122),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(124),
    [sym__newline] = ACTIONS(124),
  },
  [74] = {
    [sym_parenthesized_expression] = STATE(166),
    [anon_sym_LPAREN] = ACTIONS(312),
    [sym_comment] = ACTIONS(14),
  },
  [75] = {
    [sym__expression] = STATE(168),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_keyword_argument] = STATE(169),
    [sym_array_slice] = STATE(169),
    [sym_assumed_size] = STATE(169),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_STAR] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_COLON] = ACTIONS(220),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(222),
    [sym_comment] = ACTIONS(34),
  },
  [76] = {
    [anon_sym_COMMA] = ACTIONS(316),
    [anon_sym_STAR] = ACTIONS(316),
    [anon_sym_EQ] = ACTIONS(316),
    [anon_sym_EQ_GT] = ACTIONS(316),
    [anon_sym_PERCENT] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(316),
    [anon_sym_LT] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(316),
    [anon_sym_GT] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(316),
    [anon_sym_LT_EQ] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(316),
    [anon_sym_GT_EQ] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(316),
    [anon_sym_EQ_EQ] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(316),
    [anon_sym_SLASH_EQ] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(316),
    [anon_sym_SLASH_SLASH] = ACTIONS(316),
    [anon_sym_PLUS] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(316),
    [anon_sym_SLASH] = ACTIONS(316),
    [anon_sym_STAR_STAR] = ACTIONS(316),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(316),
    [sym__newline] = ACTIONS(316),
  },
  [77] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(318),
    [anon_sym_LPAREN] = ACTIONS(318),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(318),
    [anon_sym_PLUS] = ACTIONS(318),
    [anon_sym_DASH] = ACTIONS(318),
    [sym_block_label_start_expression] = ACTIONS(320),
    [sym_number_literal] = ACTIONS(320),
    [sym__double_quoted_string] = ACTIONS(320),
    [sym__single_quoted_string] = ACTIONS(320),
    [sym_boolean_literal] = ACTIONS(320),
    [sym_identifier] = ACTIONS(320),
    [sym_comment] = ACTIONS(34),
  },
  [78] = {
    [sym_type_qualifier] = STATE(173),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(322),
    [sym_comment] = ACTIONS(14),
  },
  [79] = {
    [sym__expression] = STATE(86),
    [sym_parenthesized_expression] = STATE(83),
    [sym_assignment_expression] = STATE(175),
    [sym_derived_type_member_expression] = STATE(83),
    [sym_logical_expression] = STATE(83),
    [sym_relational_expression] = STATE(83),
    [sym_concatenation_expression] = STATE(83),
    [sym_math_expression] = STATE(83),
    [sym_call_expression] = STATE(176),
    [sym_complex_literal] = STATE(83),
    [sym_string_literal] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [sym_number_literal] = ACTIONS(162),
    [sym__double_quoted_string] = ACTIONS(164),
    [sym__single_quoted_string] = ACTIONS(164),
    [sym_boolean_literal] = ACTIONS(162),
    [sym_identifier] = ACTIONS(328),
    [sym_comment] = ACTIONS(34),
  },
  [80] = {
    [sym__expression] = STATE(179),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_number_literal] = ACTIONS(330),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(332),
    [sym_comment] = ACTIONS(34),
  },
  [81] = {
    [sym__expression] = STATE(181),
    [sym_parenthesized_expression] = STATE(83),
    [sym_derived_type_member_expression] = STATE(83),
    [sym_logical_expression] = STATE(83),
    [sym_relational_expression] = STATE(83),
    [sym_concatenation_expression] = STATE(83),
    [sym_math_expression] = STATE(83),
    [sym_call_expression] = STATE(83),
    [sym_complex_literal] = STATE(83),
    [sym_string_literal] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [sym_number_literal] = ACTIONS(162),
    [sym__double_quoted_string] = ACTIONS(164),
    [sym__single_quoted_string] = ACTIONS(164),
    [sym_boolean_literal] = ACTIONS(162),
    [sym_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
  },
  [82] = {
    [sym__expression] = STATE(182),
    [sym_parenthesized_expression] = STATE(83),
    [sym_derived_type_member_expression] = STATE(83),
    [sym_logical_expression] = STATE(83),
    [sym_relational_expression] = STATE(83),
    [sym_concatenation_expression] = STATE(83),
    [sym_math_expression] = STATE(83),
    [sym_call_expression] = STATE(83),
    [sym_complex_literal] = STATE(83),
    [sym_string_literal] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [sym_number_literal] = ACTIONS(162),
    [sym__double_quoted_string] = ACTIONS(164),
    [sym__single_quoted_string] = ACTIONS(164),
    [sym_boolean_literal] = ACTIONS(162),
    [sym_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
  },
  [83] = {
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
  [84] = {
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
  [85] = {
    [sym_argument_list] = STATE(185),
    [aux_sym_variable_declaration_repeat2] = STATE(186),
    [anon_sym_COMMA] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(338),
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
    [sym__semicolon] = ACTIONS(340),
    [sym__newline] = ACTIONS(340),
  },
  [86] = {
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_EQ] = ACTIONS(344),
    [anon_sym_PERCENT] = ACTIONS(346),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(354),
    [anon_sym_LT] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_GT] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_LT_EQ] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_GT_EQ] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_SLASH_EQ] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_SLASH_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_STAR_STAR] = ACTIONS(364),
    [sym_comment] = ACTIONS(34),
  },
  [87] = {
    [aux_sym_variable_declaration_repeat2] = STATE(186),
    [anon_sym_COMMA] = ACTIONS(336),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(340),
    [sym__newline] = ACTIONS(340),
  },
  [88] = {
    [aux_sym_variable_declaration_repeat2] = STATE(186),
    [anon_sym_COMMA] = ACTIONS(336),
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
    [sym__semicolon] = ACTIONS(340),
    [sym__newline] = ACTIONS(340),
  },
  [89] = {
    [sym__end_of_statement] = STATE(197),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(168),
    [sym__newline] = ACTIONS(168),
  },
  [90] = {
    [sym__end_of_statement] = STATE(197),
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
    [sym__semicolon] = ACTIONS(168),
    [sym__newline] = ACTIONS(168),
  },
  [91] = {
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
  [92] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(366),
    [anon_sym_LPAREN] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(366),
    [anon_sym_PLUS] = ACTIONS(366),
    [anon_sym_DASH] = ACTIONS(366),
    [sym_block_label_start_expression] = ACTIONS(368),
    [sym_number_literal] = ACTIONS(368),
    [sym__double_quoted_string] = ACTIONS(368),
    [sym__single_quoted_string] = ACTIONS(368),
    [sym_boolean_literal] = ACTIONS(368),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
  },
  [93] = {
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
    [anon_sym_LPAREN] = ACTIONS(46),
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
    [sym__expression] = STATE(199),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [95] = {
    [sym__expression] = STATE(200),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [96] = {
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
    [anon_sym_LPAREN] = ACTIONS(46),
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
    [anon_sym_LPAREN] = ACTIONS(46),
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
    [sym__expression] = STATE(203),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
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
    [sym__expression] = STATE(204),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
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
    [sym__expression] = STATE(205),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
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
    [sym__expression] = STATE(206),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
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
  [102] = {
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
    [anon_sym_LPAREN] = ACTIONS(46),
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
  [103] = {
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
    [anon_sym_LPAREN] = ACTIONS(46),
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
  [104] = {
    [sym__variable_declaration_statement] = STATE(29),
    [sym_variable_declaration] = STATE(30),
    [sym_intrinsic_type] = STATE(31),
    [aux_sym_program_block_repeat1] = STATE(104),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(372),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(370),
    [anon_sym_LPAREN] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(370),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(370),
    [anon_sym_PLUS] = ACTIONS(370),
    [anon_sym_DASH] = ACTIONS(370),
    [sym_block_label_start_expression] = ACTIONS(375),
    [sym_number_literal] = ACTIONS(375),
    [sym__double_quoted_string] = ACTIONS(375),
    [sym__single_quoted_string] = ACTIONS(375),
    [sym_boolean_literal] = ACTIONS(375),
    [sym_identifier] = ACTIONS(375),
    [sym_comment] = ACTIONS(34),
  },
  [105] = {
    [sym_statement_label] = STATE(32),
    [sym_subroutine_call] = STATE(33),
    [sym_keyword_statement] = STATE(33),
    [sym_do_loop_statement] = STATE(33),
    [sym_if_statement] = STATE(33),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(36),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(105),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(377),
    [anon_sym_LPAREN] = ACTIONS(380),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(383),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(389),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(401),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(407),
    [anon_sym_DASH] = ACTIONS(407),
    [sym_block_label_start_expression] = ACTIONS(410),
    [sym_number_literal] = ACTIONS(413),
    [sym__double_quoted_string] = ACTIONS(416),
    [sym__single_quoted_string] = ACTIONS(416),
    [sym_boolean_literal] = ACTIONS(413),
    [sym_identifier] = ACTIONS(419),
    [sym_comment] = ACTIONS(34),
  },
  [106] = {
    [sym__end_of_statement] = STATE(210),
    [sym_identifier] = ACTIONS(422),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [107] = {
    [ts_builtin_sym_end] = ACTIONS(424),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(424),
    [sym_comment] = ACTIONS(14),
  },
  [108] = {
    [sym__end_of_statement] = STATE(210),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(426),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [109] = {
    [sym_statement_label] = STATE(32),
    [sym_subroutine_call] = STATE(33),
    [sym_keyword_statement] = STATE(33),
    [sym_do_loop_statement] = STATE(33),
    [sym_if_statement] = STATE(33),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(33),
    [sym_pointer_assignment_expression] = STATE(33),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(36),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(105),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(428),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
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
  [110] = {
    [sym__end_of_statement] = STATE(210),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [111] = {
    [anon_sym_COMMA] = ACTIONS(430),
    [anon_sym_COLON_COLON] = ACTIONS(432),
    [anon_sym_LPAREN] = ACTIONS(430),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(430),
    [anon_sym_PLUS] = ACTIONS(430),
    [anon_sym_DASH] = ACTIONS(430),
    [sym_number_literal] = ACTIONS(434),
    [sym__double_quoted_string] = ACTIONS(434),
    [sym__single_quoted_string] = ACTIONS(434),
    [sym_boolean_literal] = ACTIONS(434),
    [sym_identifier] = ACTIONS(434),
    [sym_comment] = ACTIONS(34),
  },
  [112] = {
    [sym__expression] = STATE(213),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [113] = {
    [anon_sym_COMMA] = ACTIONS(436),
    [anon_sym_RPAREN] = ACTIONS(436),
    [sym_comment] = ACTIONS(14),
  },
  [114] = {
    [anon_sym_COMMA] = ACTIONS(438),
    [anon_sym_COLON_COLON] = ACTIONS(440),
    [anon_sym_LPAREN] = ACTIONS(438),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(438),
    [anon_sym_PLUS] = ACTIONS(438),
    [anon_sym_DASH] = ACTIONS(438),
    [sym_number_literal] = ACTIONS(442),
    [sym__double_quoted_string] = ACTIONS(442),
    [sym__single_quoted_string] = ACTIONS(442),
    [sym_boolean_literal] = ACTIONS(442),
    [sym_identifier] = ACTIONS(442),
    [sym_comment] = ACTIONS(34),
  },
  [115] = {
    [sym__expression] = STATE(214),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [116] = {
    [sym__expression] = STATE(215),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [117] = {
    [sym__expression] = STATE(217),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(444),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_COLON] = ACTIONS(446),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [118] = {
    [sym_argument_list] = STATE(125),
    [anon_sym_COMMA] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(232),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_EQ] = ACTIONS(448),
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
  [119] = {
    [aux_sym_argument_list_repeat1] = STATE(231),
    [anon_sym_COMMA] = ACTIONS(450),
    [anon_sym_STAR] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(454),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_LT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_LT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_EQ_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_SLASH] = ACTIONS(470),
    [anon_sym_PLUS] = ACTIONS(472),
    [anon_sym_DASH] = ACTIONS(472),
    [anon_sym_SLASH] = ACTIONS(452),
    [anon_sym_STAR_STAR] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(476),
    [sym_comment] = ACTIONS(34),
  },
  [120] = {
    [aux_sym_argument_list_repeat1] = STATE(231),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(480),
    [sym_comment] = ACTIONS(14),
  },
  [121] = {
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(300),
    [anon_sym_PERCENT] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(304),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(234),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [122] = {
    [anon_sym_STAR] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_GT] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_LT_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_GT_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_EQ_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_SLASH_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_SLASH_SLASH] = ACTIONS(308),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_SLASH] = ACTIONS(306),
    [anon_sym_STAR_STAR] = ACTIONS(308),
    [sym_comment] = ACTIONS(34),
  },
  [123] = {
    [sym_number_literal] = ACTIONS(482),
    [sym_identifier] = ACTIONS(484),
    [sym_comment] = ACTIONS(14),
  },
  [124] = {
    [sym__expression] = STATE(234),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_keyword_argument] = STATE(235),
    [sym_array_slice] = STATE(235),
    [sym_assumed_size] = STATE(235),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_STAR] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(486),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_COLON] = ACTIONS(220),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(222),
    [sym_comment] = ACTIONS(34),
  },
  [125] = {
    [anon_sym_COMMA] = ACTIONS(488),
    [anon_sym_STAR] = ACTIONS(488),
    [anon_sym_RPAREN] = ACTIONS(488),
    [anon_sym_EQ] = ACTIONS(488),
    [anon_sym_EQ_GT] = ACTIONS(490),
    [anon_sym_PERCENT] = ACTIONS(488),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(316),
    [anon_sym_LT] = ACTIONS(488),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(488),
    [anon_sym_GT] = ACTIONS(488),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(488),
    [anon_sym_LT_EQ] = ACTIONS(490),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(488),
    [anon_sym_GT_EQ] = ACTIONS(490),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(488),
    [anon_sym_EQ_EQ] = ACTIONS(490),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(488),
    [anon_sym_SLASH_EQ] = ACTIONS(490),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(488),
    [anon_sym_SLASH_SLASH] = ACTIONS(490),
    [anon_sym_PLUS] = ACTIONS(488),
    [anon_sym_DASH] = ACTIONS(488),
    [anon_sym_SLASH] = ACTIONS(488),
    [anon_sym_STAR_STAR] = ACTIONS(490),
    [anon_sym_COLON] = ACTIONS(488),
    [sym_comment] = ACTIONS(34),
  },
  [126] = {
    [sym__expression] = STATE(236),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [127] = {
    [anon_sym_COMMA] = ACTIONS(492),
    [anon_sym_STAR] = ACTIONS(492),
    [anon_sym_RPAREN] = ACTIONS(492),
    [anon_sym_EQ] = ACTIONS(492),
    [anon_sym_EQ_GT] = ACTIONS(494),
    [anon_sym_PERCENT] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(496),
    [anon_sym_LT] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(492),
    [anon_sym_GT] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(492),
    [anon_sym_LT_EQ] = ACTIONS(494),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(492),
    [anon_sym_GT_EQ] = ACTIONS(494),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(492),
    [anon_sym_EQ_EQ] = ACTIONS(494),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(492),
    [anon_sym_SLASH_EQ] = ACTIONS(494),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(492),
    [anon_sym_SLASH_SLASH] = ACTIONS(494),
    [anon_sym_PLUS] = ACTIONS(492),
    [anon_sym_DASH] = ACTIONS(492),
    [anon_sym_SLASH] = ACTIONS(492),
    [anon_sym_STAR_STAR] = ACTIONS(494),
    [anon_sym_COLON] = ACTIONS(492),
    [sym_comment] = ACTIONS(34),
  },
  [128] = {
    [sym__expression] = STATE(237),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [129] = {
    [sym__expression] = STATE(238),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [130] = {
    [sym__expression] = STATE(239),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [131] = {
    [sym__expression] = STATE(240),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [132] = {
    [sym__expression] = STATE(241),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [133] = {
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
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [134] = {
    [sym__expression] = STATE(243),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [135] = {
    [sym__expression] = STATE(244),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [136] = {
    [sym__expression] = STATE(246),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_keyword_argument] = STATE(247),
    [sym_array_slice] = STATE(247),
    [sym_assumed_size] = STATE(247),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_STAR] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(498),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_COLON] = ACTIONS(220),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(222),
    [sym_comment] = ACTIONS(34),
  },
  [137] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(316),
    [sym__newline] = ACTIONS(316),
  },
  [138] = {
    [anon_sym_COMMA] = ACTIONS(500),
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
  [139] = {
    [sym_argument_list] = STATE(125),
    [anon_sym_COMMA] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(232),
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
  [140] = {
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(502),
    [anon_sym_PERCENT] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(246),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(234),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [141] = {
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_LT] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_GT] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_LT_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_GT_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_EQ_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_SLASH_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_SLASH_SLASH] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_DASH] = ACTIONS(290),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_STAR_STAR] = ACTIONS(292),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(304),
    [sym__newline] = ACTIONS(304),
  },
  [142] = {
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(310),
    [anon_sym_GT] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(310),
    [anon_sym_LT_EQ] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(310),
    [anon_sym_GT_EQ] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(310),
    [anon_sym_EQ_EQ] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(310),
    [anon_sym_SLASH_EQ] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(310),
    [anon_sym_SLASH_SLASH] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(310),
    [anon_sym_DASH] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_STAR_STAR] = ACTIONS(310),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(310),
    [sym__newline] = ACTIONS(310),
  },
  [143] = {
    [sym__expression] = STATE(250),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [144] = {
    [sym__expression] = STATE(251),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [145] = {
    [sym__expression] = STATE(252),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [146] = {
    [sym__expression] = STATE(253),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [147] = {
    [sym__expression] = STATE(254),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [148] = {
    [sym__expression] = STATE(255),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [149] = {
    [sym__expression] = STATE(256),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [150] = {
    [sym__expression] = STATE(257),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [151] = {
    [sym__expression] = STATE(258),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [152] = {
    [sym__expression] = STATE(261),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(504),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [153] = {
    [sym_statement_label] = STATE(155),
    [sym_subroutine_call] = STATE(156),
    [sym_keyword_statement] = STATE(156),
    [sym_do_loop_statement] = STATE(156),
    [sym_if_statement] = STATE(156),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(156),
    [sym_pointer_assignment_expression] = STATE(156),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(157),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(263),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(508),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
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
  [154] = {
    [sym__block_label] = STATE(265),
    [sym_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(512),
    [sym__newline] = ACTIONS(512),
  },
  [155] = {
    [sym_subroutine_call] = STATE(266),
    [sym_keyword_statement] = STATE(266),
    [sym_do_loop_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(266),
    [sym_pointer_assignment_expression] = STATE(266),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(267),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
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
  [156] = {
    [sym__end_of_statement] = STATE(268),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(124),
    [sym__newline] = ACTIONS(124),
  },
  [157] = {
    [sym__end_of_statement] = STATE(268),
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
    [sym__semicolon] = ACTIONS(124),
    [sym__newline] = ACTIONS(124),
  },
  [158] = {
    [sym_statement_label] = STATE(155),
    [sym_subroutine_call] = STATE(156),
    [sym_keyword_statement] = STATE(156),
    [sym_do_loop_statement] = STATE(156),
    [sym_if_statement] = STATE(156),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(156),
    [sym_pointer_assignment_expression] = STATE(156),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(157),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(269),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(508),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
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
  [159] = {
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(514),
    [anon_sym_PERCENT] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(246),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(234),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [160] = {
    [sym__block_label] = STATE(272),
    [sym__end_of_statement] = STATE(273),
    [sym_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(516),
    [sym__newline] = ACTIONS(516),
  },
  [161] = {
    [sym_subroutine_call] = STATE(274),
    [sym_keyword_statement] = STATE(274),
    [sym_do_loop_statement] = STATE(274),
    [sym_if_statement] = STATE(274),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(274),
    [sym_pointer_assignment_expression] = STATE(274),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(275),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
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
  [162] = {
    [sym__end_of_statement] = STATE(277),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(518),
    [sym__newline] = ACTIONS(518),
  },
  [163] = {
    [sym__end_of_statement] = STATE(277),
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
    [sym__semicolon] = ACTIONS(518),
    [sym__newline] = ACTIONS(518),
  },
  [164] = {
    [sym__end_of_statement] = STATE(278),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(124),
    [sym__newline] = ACTIONS(124),
  },
  [165] = {
    [sym__expression] = STATE(279),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [166] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(520),
    [sym_comment] = ACTIONS(14),
  },
  [167] = {
    [anon_sym_COMMA] = ACTIONS(442),
    [anon_sym_STAR] = ACTIONS(442),
    [anon_sym_EQ] = ACTIONS(442),
    [anon_sym_EQ_GT] = ACTIONS(442),
    [anon_sym_PERCENT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(442),
    [anon_sym_LT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(442),
    [anon_sym_GT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(442),
    [anon_sym_LT_EQ] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(442),
    [anon_sym_GT_EQ] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(442),
    [anon_sym_EQ_EQ] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(442),
    [anon_sym_SLASH_EQ] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(442),
    [anon_sym_SLASH_SLASH] = ACTIONS(442),
    [anon_sym_PLUS] = ACTIONS(442),
    [anon_sym_DASH] = ACTIONS(442),
    [anon_sym_SLASH] = ACTIONS(442),
    [anon_sym_STAR_STAR] = ACTIONS(442),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(442),
    [sym__newline] = ACTIONS(442),
  },
  [168] = {
    [aux_sym_argument_list_repeat1] = STATE(282),
    [anon_sym_COMMA] = ACTIONS(450),
    [anon_sym_STAR] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(522),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_LT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_LT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_EQ_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_SLASH] = ACTIONS(470),
    [anon_sym_PLUS] = ACTIONS(472),
    [anon_sym_DASH] = ACTIONS(472),
    [anon_sym_SLASH] = ACTIONS(452),
    [anon_sym_STAR_STAR] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(476),
    [sym_comment] = ACTIONS(34),
  },
  [169] = {
    [aux_sym_argument_list_repeat1] = STATE(282),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(524),
    [sym_comment] = ACTIONS(14),
  },
  [170] = {
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_COLON_COLON] = ACTIONS(528),
    [anon_sym_LPAREN] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(526),
    [sym_number_literal] = ACTIONS(530),
    [sym__double_quoted_string] = ACTIONS(530),
    [sym__single_quoted_string] = ACTIONS(530),
    [sym_boolean_literal] = ACTIONS(530),
    [sym_identifier] = ACTIONS(530),
    [sym_comment] = ACTIONS(34),
  },
  [171] = {
    [sym_argument_list] = STATE(283),
    [anon_sym_LPAREN] = ACTIONS(532),
    [sym_comment] = ACTIONS(14),
  },
  [172] = {
    [anon_sym_LPAREN] = ACTIONS(534),
    [sym_comment] = ACTIONS(14),
  },
  [173] = {
    [sym__expression] = STATE(86),
    [sym_parenthesized_expression] = STATE(83),
    [sym_assignment_expression] = STATE(288),
    [sym_derived_type_member_expression] = STATE(83),
    [sym_logical_expression] = STATE(83),
    [sym_relational_expression] = STATE(83),
    [sym_concatenation_expression] = STATE(83),
    [sym_math_expression] = STATE(83),
    [sym_call_expression] = STATE(289),
    [sym_complex_literal] = STATE(83),
    [sym_string_literal] = STATE(83),
    [aux_sym_variable_declaration_repeat1] = STATE(290),
    [anon_sym_COMMA] = ACTIONS(536),
    [anon_sym_COLON_COLON] = ACTIONS(538),
    [anon_sym_LPAREN] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [sym_number_literal] = ACTIONS(162),
    [sym__double_quoted_string] = ACTIONS(164),
    [sym__single_quoted_string] = ACTIONS(164),
    [sym_boolean_literal] = ACTIONS(162),
    [sym_identifier] = ACTIONS(540),
    [sym_comment] = ACTIONS(34),
  },
  [174] = {
    [sym_argument_list] = STATE(185),
    [aux_sym_variable_declaration_repeat2] = STATE(291),
    [anon_sym_COMMA] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(338),
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
    [sym__semicolon] = ACTIONS(542),
    [sym__newline] = ACTIONS(542),
  },
  [175] = {
    [aux_sym_variable_declaration_repeat2] = STATE(291),
    [anon_sym_COMMA] = ACTIONS(336),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(542),
    [sym__newline] = ACTIONS(542),
  },
  [176] = {
    [aux_sym_variable_declaration_repeat2] = STATE(291),
    [anon_sym_COMMA] = ACTIONS(336),
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
    [sym__semicolon] = ACTIONS(542),
    [sym__newline] = ACTIONS(542),
  },
  [177] = {
    [anon_sym_COMMA] = ACTIONS(544),
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
  [178] = {
    [sym_argument_list] = STATE(125),
    [anon_sym_COMMA] = ACTIONS(544),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(232),
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
  [179] = {
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(546),
    [anon_sym_PERCENT] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(246),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(234),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [180] = {
    [sym_argument_list] = STATE(295),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(548),
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
  [181] = {
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_EQ] = ACTIONS(300),
    [anon_sym_PERCENT] = ACTIONS(346),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_LT] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_GT] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_LT_EQ] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_GT_EQ] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_SLASH_EQ] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_SLASH_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_STAR_STAR] = ACTIONS(364),
    [sym_comment] = ACTIONS(34),
  },
  [182] = {
    [anon_sym_STAR] = ACTIONS(306),
    [anon_sym_EQ] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(346),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_GT] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_LT_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_GT_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_EQ_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_SLASH_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_SLASH_SLASH] = ACTIONS(308),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_SLASH] = ACTIONS(306),
    [anon_sym_STAR_STAR] = ACTIONS(308),
    [sym_comment] = ACTIONS(34),
  },
  [183] = {
    [sym__expression] = STATE(86),
    [sym_parenthesized_expression] = STATE(83),
    [sym_assignment_expression] = STATE(297),
    [sym_derived_type_member_expression] = STATE(83),
    [sym_logical_expression] = STATE(83),
    [sym_relational_expression] = STATE(83),
    [sym_concatenation_expression] = STATE(83),
    [sym_math_expression] = STATE(83),
    [sym_call_expression] = STATE(298),
    [sym_complex_literal] = STATE(83),
    [sym_string_literal] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [sym_number_literal] = ACTIONS(162),
    [sym__double_quoted_string] = ACTIONS(164),
    [sym__single_quoted_string] = ACTIONS(164),
    [sym_boolean_literal] = ACTIONS(162),
    [sym_identifier] = ACTIONS(550),
    [sym_comment] = ACTIONS(34),
  },
  [184] = {
    [sym__expression] = STATE(300),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_keyword_argument] = STATE(301),
    [sym_array_slice] = STATE(301),
    [sym_assumed_size] = STATE(301),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_STAR] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(552),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_COLON] = ACTIONS(220),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(222),
    [sym_comment] = ACTIONS(34),
  },
  [185] = {
    [anon_sym_COMMA] = ACTIONS(316),
    [anon_sym_STAR] = ACTIONS(316),
    [anon_sym_EQ] = ACTIONS(316),
    [anon_sym_PERCENT] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(316),
    [anon_sym_LT] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(316),
    [anon_sym_GT] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(316),
    [anon_sym_LT_EQ] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(316),
    [anon_sym_GT_EQ] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(316),
    [anon_sym_EQ_EQ] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(316),
    [anon_sym_SLASH_EQ] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(316),
    [anon_sym_SLASH_SLASH] = ACTIONS(316),
    [anon_sym_PLUS] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(316),
    [anon_sym_SLASH] = ACTIONS(316),
    [anon_sym_STAR_STAR] = ACTIONS(316),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(316),
    [sym__newline] = ACTIONS(316),
  },
  [186] = {
    [aux_sym_variable_declaration_repeat2] = STATE(302),
    [anon_sym_COMMA] = ACTIONS(336),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(542),
    [sym__newline] = ACTIONS(542),
  },
  [187] = {
    [sym__expression] = STATE(303),
    [sym_parenthesized_expression] = STATE(83),
    [sym_derived_type_member_expression] = STATE(83),
    [sym_logical_expression] = STATE(83),
    [sym_relational_expression] = STATE(83),
    [sym_concatenation_expression] = STATE(83),
    [sym_math_expression] = STATE(83),
    [sym_call_expression] = STATE(83),
    [sym_complex_literal] = STATE(83),
    [sym_string_literal] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [sym_number_literal] = ACTIONS(162),
    [sym__double_quoted_string] = ACTIONS(164),
    [sym__single_quoted_string] = ACTIONS(164),
    [sym_boolean_literal] = ACTIONS(162),
    [sym_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
  },
  [188] = {
    [sym__expression] = STATE(306),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [189] = {
    [sym__expression] = STATE(307),
    [sym_parenthesized_expression] = STATE(83),
    [sym_derived_type_member_expression] = STATE(83),
    [sym_logical_expression] = STATE(83),
    [sym_relational_expression] = STATE(83),
    [sym_concatenation_expression] = STATE(83),
    [sym_math_expression] = STATE(83),
    [sym_call_expression] = STATE(83),
    [sym_complex_literal] = STATE(83),
    [sym_string_literal] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [sym_number_literal] = ACTIONS(162),
    [sym__double_quoted_string] = ACTIONS(164),
    [sym__single_quoted_string] = ACTIONS(164),
    [sym_boolean_literal] = ACTIONS(162),
    [sym_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
  },
  [190] = {
    [sym__expression] = STATE(308),
    [sym_parenthesized_expression] = STATE(83),
    [sym_derived_type_member_expression] = STATE(83),
    [sym_logical_expression] = STATE(83),
    [sym_relational_expression] = STATE(83),
    [sym_concatenation_expression] = STATE(83),
    [sym_math_expression] = STATE(83),
    [sym_call_expression] = STATE(83),
    [sym_complex_literal] = STATE(83),
    [sym_string_literal] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [sym_number_literal] = ACTIONS(162),
    [sym__double_quoted_string] = ACTIONS(164),
    [sym__single_quoted_string] = ACTIONS(164),
    [sym_boolean_literal] = ACTIONS(162),
    [sym_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
  },
  [191] = {
    [sym__expression] = STATE(309),
    [sym_parenthesized_expression] = STATE(83),
    [sym_derived_type_member_expression] = STATE(83),
    [sym_logical_expression] = STATE(83),
    [sym_relational_expression] = STATE(83),
    [sym_concatenation_expression] = STATE(83),
    [sym_math_expression] = STATE(83),
    [sym_call_expression] = STATE(83),
    [sym_complex_literal] = STATE(83),
    [sym_string_literal] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [sym_number_literal] = ACTIONS(162),
    [sym__double_quoted_string] = ACTIONS(164),
    [sym__single_quoted_string] = ACTIONS(164),
    [sym_boolean_literal] = ACTIONS(162),
    [sym_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
  },
  [192] = {
    [sym__expression] = STATE(310),
    [sym_parenthesized_expression] = STATE(83),
    [sym_derived_type_member_expression] = STATE(83),
    [sym_logical_expression] = STATE(83),
    [sym_relational_expression] = STATE(83),
    [sym_concatenation_expression] = STATE(83),
    [sym_math_expression] = STATE(83),
    [sym_call_expression] = STATE(83),
    [sym_complex_literal] = STATE(83),
    [sym_string_literal] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [sym_number_literal] = ACTIONS(162),
    [sym__double_quoted_string] = ACTIONS(164),
    [sym__single_quoted_string] = ACTIONS(164),
    [sym_boolean_literal] = ACTIONS(162),
    [sym_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
  },
  [193] = {
    [sym__expression] = STATE(311),
    [sym_parenthesized_expression] = STATE(83),
    [sym_derived_type_member_expression] = STATE(83),
    [sym_logical_expression] = STATE(83),
    [sym_relational_expression] = STATE(83),
    [sym_concatenation_expression] = STATE(83),
    [sym_math_expression] = STATE(83),
    [sym_call_expression] = STATE(83),
    [sym_complex_literal] = STATE(83),
    [sym_string_literal] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [sym_number_literal] = ACTIONS(162),
    [sym__double_quoted_string] = ACTIONS(164),
    [sym__single_quoted_string] = ACTIONS(164),
    [sym_boolean_literal] = ACTIONS(162),
    [sym_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
  },
  [194] = {
    [sym__expression] = STATE(312),
    [sym_parenthesized_expression] = STATE(83),
    [sym_derived_type_member_expression] = STATE(83),
    [sym_logical_expression] = STATE(83),
    [sym_relational_expression] = STATE(83),
    [sym_concatenation_expression] = STATE(83),
    [sym_math_expression] = STATE(83),
    [sym_call_expression] = STATE(83),
    [sym_complex_literal] = STATE(83),
    [sym_string_literal] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [sym_number_literal] = ACTIONS(162),
    [sym__double_quoted_string] = ACTIONS(164),
    [sym__single_quoted_string] = ACTIONS(164),
    [sym_boolean_literal] = ACTIONS(162),
    [sym_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
  },
  [195] = {
    [sym__expression] = STATE(313),
    [sym_parenthesized_expression] = STATE(83),
    [sym_derived_type_member_expression] = STATE(83),
    [sym_logical_expression] = STATE(83),
    [sym_relational_expression] = STATE(83),
    [sym_concatenation_expression] = STATE(83),
    [sym_math_expression] = STATE(83),
    [sym_call_expression] = STATE(83),
    [sym_complex_literal] = STATE(83),
    [sym_string_literal] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [sym_number_literal] = ACTIONS(162),
    [sym__double_quoted_string] = ACTIONS(164),
    [sym__single_quoted_string] = ACTIONS(164),
    [sym_boolean_literal] = ACTIONS(162),
    [sym_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
  },
  [196] = {
    [sym__expression] = STATE(314),
    [sym_parenthesized_expression] = STATE(83),
    [sym_derived_type_member_expression] = STATE(83),
    [sym_logical_expression] = STATE(83),
    [sym_relational_expression] = STATE(83),
    [sym_concatenation_expression] = STATE(83),
    [sym_math_expression] = STATE(83),
    [sym_call_expression] = STATE(83),
    [sym_complex_literal] = STATE(83),
    [sym_string_literal] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [sym_number_literal] = ACTIONS(162),
    [sym__double_quoted_string] = ACTIONS(164),
    [sym__single_quoted_string] = ACTIONS(164),
    [sym_boolean_literal] = ACTIONS(162),
    [sym_identifier] = ACTIONS(334),
    [sym_comment] = ACTIONS(34),
  },
  [197] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(558),
    [anon_sym_LPAREN] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(558),
    [anon_sym_PLUS] = ACTIONS(558),
    [anon_sym_DASH] = ACTIONS(558),
    [sym_block_label_start_expression] = ACTIONS(560),
    [sym_number_literal] = ACTIONS(560),
    [sym__double_quoted_string] = ACTIONS(560),
    [sym__single_quoted_string] = ACTIONS(560),
    [sym_boolean_literal] = ACTIONS(560),
    [sym_identifier] = ACTIONS(560),
    [sym_comment] = ACTIONS(34),
  },
  [198] = {
    [anon_sym_STAR] = ACTIONS(562),
    [anon_sym_EQ] = ACTIONS(562),
    [anon_sym_EQ_GT] = ACTIONS(564),
    [anon_sym_PERCENT] = ACTIONS(178),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(564),
    [anon_sym_PLUS] = ACTIONS(562),
    [anon_sym_DASH] = ACTIONS(562),
    [anon_sym_SLASH] = ACTIONS(562),
    [anon_sym_STAR_STAR] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
  },
  [199] = {
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(284),
    [anon_sym_LT] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_GT] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_LT_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_GT_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_EQ_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_SLASH_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_SLASH_SLASH] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_DASH] = ACTIONS(290),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_STAR_STAR] = ACTIONS(292),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(568),
    [sym__newline] = ACTIONS(568),
  },
  [200] = {
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(284),
    [anon_sym_LT] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_GT] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_LT_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_GT_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_EQ_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_SLASH_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_SLASH_SLASH] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_DASH] = ACTIONS(290),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_STAR_STAR] = ACTIONS(292),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(570),
    [sym__newline] = ACTIONS(570),
  },
  [201] = {
    [anon_sym_STAR] = ACTIONS(572),
    [anon_sym_EQ] = ACTIONS(572),
    [anon_sym_EQ_GT] = ACTIONS(574),
    [anon_sym_PERCENT] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_LT] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_GT] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_LT_EQ] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_GT_EQ] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_EQ_EQ] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_SLASH_EQ] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_SLASH_SLASH] = ACTIONS(574),
    [anon_sym_PLUS] = ACTIONS(572),
    [anon_sym_DASH] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_STAR_STAR] = ACTIONS(574),
    [sym_comment] = ACTIONS(34),
  },
  [202] = {
    [anon_sym_STAR] = ACTIONS(172),
    [anon_sym_EQ] = ACTIONS(578),
    [anon_sym_EQ_GT] = ACTIONS(580),
    [anon_sym_PERCENT] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [anon_sym_LT] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_GT] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_LT_EQ] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_GT_EQ] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_EQ_EQ] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_SLASH_EQ] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_SLASH_SLASH] = ACTIONS(192),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(172),
    [anon_sym_STAR_STAR] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
  },
  [203] = {
    [anon_sym_STAR] = ACTIONS(172),
    [anon_sym_EQ] = ACTIONS(578),
    [anon_sym_EQ_GT] = ACTIONS(580),
    [anon_sym_PERCENT] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [anon_sym_LT] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_GT] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_LT_EQ] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_GT_EQ] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_EQ_EQ] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_SLASH_EQ] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_SLASH_SLASH] = ACTIONS(192),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(172),
    [anon_sym_STAR_STAR] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
  },
  [204] = {
    [anon_sym_STAR] = ACTIONS(172),
    [anon_sym_EQ] = ACTIONS(578),
    [anon_sym_EQ_GT] = ACTIONS(580),
    [anon_sym_PERCENT] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [anon_sym_LT] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_GT] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_LT_EQ] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_GT_EQ] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_EQ_EQ] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_SLASH_EQ] = ACTIONS(190),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(188),
    [anon_sym_SLASH_SLASH] = ACTIONS(192),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(172),
    [anon_sym_STAR_STAR] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
  },
  [205] = {
    [anon_sym_STAR] = ACTIONS(172),
    [anon_sym_EQ] = ACTIONS(584),
    [anon_sym_EQ_GT] = ACTIONS(586),
    [anon_sym_PERCENT] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_LT] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_GT] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_LT_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_GT_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_EQ_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_SLASH_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_SLASH_SLASH] = ACTIONS(192),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(172),
    [anon_sym_STAR_STAR] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
  },
  [206] = {
    [anon_sym_STAR] = ACTIONS(172),
    [anon_sym_EQ] = ACTIONS(590),
    [anon_sym_EQ_GT] = ACTIONS(592),
    [anon_sym_PERCENT] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(594),
    [anon_sym_LT] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_GT] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_LT_EQ] = ACTIONS(592),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_GT_EQ] = ACTIONS(592),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_EQ_EQ] = ACTIONS(592),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_SLASH_EQ] = ACTIONS(592),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_SLASH_SLASH] = ACTIONS(192),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(172),
    [anon_sym_STAR_STAR] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
  },
  [207] = {
    [anon_sym_STAR] = ACTIONS(172),
    [anon_sym_EQ] = ACTIONS(562),
    [anon_sym_EQ_GT] = ACTIONS(564),
    [anon_sym_PERCENT] = ACTIONS(178),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(564),
    [anon_sym_PLUS] = ACTIONS(562),
    [anon_sym_DASH] = ACTIONS(562),
    [anon_sym_SLASH] = ACTIONS(172),
    [anon_sym_STAR_STAR] = ACTIONS(196),
    [sym_comment] = ACTIONS(34),
  },
  [208] = {
    [anon_sym_STAR] = ACTIONS(562),
    [anon_sym_EQ] = ACTIONS(562),
    [anon_sym_EQ_GT] = ACTIONS(564),
    [anon_sym_PERCENT] = ACTIONS(178),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(564),
    [anon_sym_PLUS] = ACTIONS(562),
    [anon_sym_DASH] = ACTIONS(562),
    [anon_sym_SLASH] = ACTIONS(562),
    [anon_sym_STAR_STAR] = ACTIONS(564),
    [sym_comment] = ACTIONS(34),
  },
  [209] = {
    [sym__end_of_statement] = STATE(315),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [210] = {
    [ts_builtin_sym_end] = ACTIONS(596),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(596),
    [sym_comment] = ACTIONS(14),
  },
  [211] = {
    [sym__end_of_statement] = STATE(315),
    [sym_identifier] = ACTIONS(598),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [212] = {
    [sym__end_of_statement] = STATE(315),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(600),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [213] = {
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(602),
    [anon_sym_PERCENT] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(246),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(234),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [214] = {
    [anon_sym_COMMA] = ACTIONS(300),
    [anon_sym_STAR] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(300),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_LT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_LT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_EQ_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_SLASH] = ACTIONS(470),
    [anon_sym_PLUS] = ACTIONS(472),
    [anon_sym_DASH] = ACTIONS(472),
    [anon_sym_SLASH] = ACTIONS(452),
    [anon_sym_STAR_STAR] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(300),
    [sym_comment] = ACTIONS(34),
  },
  [215] = {
    [anon_sym_COMMA] = ACTIONS(306),
    [anon_sym_STAR] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_GT] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_LT_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_GT_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_EQ_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_SLASH_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_SLASH_SLASH] = ACTIONS(308),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_SLASH] = ACTIONS(306),
    [anon_sym_STAR_STAR] = ACTIONS(308),
    [anon_sym_COLON] = ACTIONS(306),
    [sym_comment] = ACTIONS(34),
  },
  [216] = {
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
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [217] = {
    [anon_sym_COMMA] = ACTIONS(608),
    [anon_sym_STAR] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(608),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_LT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_LT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_EQ_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_SLASH] = ACTIONS(470),
    [anon_sym_PLUS] = ACTIONS(472),
    [anon_sym_DASH] = ACTIONS(472),
    [anon_sym_SLASH] = ACTIONS(452),
    [anon_sym_STAR_STAR] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(610),
    [sym_comment] = ACTIONS(34),
  },
  [218] = {
    [sym__expression] = STATE(324),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_assumed_size] = STATE(325),
    [sym_assumed_shape] = STATE(325),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_STAR] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [anon_sym_COLON] = ACTIONS(612),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [219] = {
    [sym__expression] = STATE(326),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_keyword_argument] = STATE(327),
    [sym_array_slice] = STATE(327),
    [sym_assumed_size] = STATE(327),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_STAR] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_COLON] = ACTIONS(220),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(222),
    [sym_comment] = ACTIONS(34),
  },
  [220] = {
    [sym__expression] = STATE(328),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [221] = {
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_COLON_COLON] = ACTIONS(616),
    [anon_sym_LPAREN] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(614),
    [anon_sym_PLUS] = ACTIONS(614),
    [anon_sym_DASH] = ACTIONS(614),
    [sym_number_literal] = ACTIONS(618),
    [sym__double_quoted_string] = ACTIONS(618),
    [sym__single_quoted_string] = ACTIONS(618),
    [sym_boolean_literal] = ACTIONS(618),
    [sym_identifier] = ACTIONS(618),
    [sym_comment] = ACTIONS(34),
  },
  [222] = {
    [sym__expression] = STATE(329),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [223] = {
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
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [224] = {
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
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [225] = {
    [sym__expression] = STATE(332),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [226] = {
    [sym__expression] = STATE(333),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [227] = {
    [sym__expression] = STATE(334),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [228] = {
    [sym__expression] = STATE(335),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [229] = {
    [sym__expression] = STATE(336),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [230] = {
    [sym__expression] = STATE(337),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_COMMA] = ACTIONS(608),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(608),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_COLON] = ACTIONS(610),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [231] = {
    [aux_sym_argument_list_repeat1] = STATE(339),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(620),
    [sym_comment] = ACTIONS(14),
  },
  [232] = {
    [anon_sym_RPAREN] = ACTIONS(622),
    [sym_comment] = ACTIONS(14),
  },
  [233] = {
    [anon_sym_COMMA] = ACTIONS(438),
    [anon_sym_STAR] = ACTIONS(438),
    [anon_sym_RPAREN] = ACTIONS(438),
    [anon_sym_EQ] = ACTIONS(438),
    [anon_sym_EQ_GT] = ACTIONS(440),
    [anon_sym_PERCENT] = ACTIONS(438),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(442),
    [anon_sym_LT] = ACTIONS(438),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(438),
    [anon_sym_GT] = ACTIONS(438),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(438),
    [anon_sym_LT_EQ] = ACTIONS(440),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(438),
    [anon_sym_GT_EQ] = ACTIONS(440),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(438),
    [anon_sym_EQ_EQ] = ACTIONS(440),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(438),
    [anon_sym_SLASH_EQ] = ACTIONS(440),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(438),
    [anon_sym_SLASH_SLASH] = ACTIONS(440),
    [anon_sym_PLUS] = ACTIONS(438),
    [anon_sym_DASH] = ACTIONS(438),
    [anon_sym_SLASH] = ACTIONS(438),
    [anon_sym_STAR_STAR] = ACTIONS(440),
    [anon_sym_COLON] = ACTIONS(438),
    [sym_comment] = ACTIONS(34),
  },
  [234] = {
    [aux_sym_argument_list_repeat1] = STATE(342),
    [anon_sym_COMMA] = ACTIONS(450),
    [anon_sym_STAR] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(624),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_LT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_LT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_EQ_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_SLASH] = ACTIONS(470),
    [anon_sym_PLUS] = ACTIONS(472),
    [anon_sym_DASH] = ACTIONS(472),
    [anon_sym_SLASH] = ACTIONS(452),
    [anon_sym_STAR_STAR] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(476),
    [sym_comment] = ACTIONS(34),
  },
  [235] = {
    [aux_sym_argument_list_repeat1] = STATE(342),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(626),
    [sym_comment] = ACTIONS(14),
  },
  [236] = {
    [anon_sym_STAR] = ACTIONS(562),
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(238),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(564),
    [anon_sym_PLUS] = ACTIONS(562),
    [anon_sym_DASH] = ACTIONS(562),
    [anon_sym_SLASH] = ACTIONS(562),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [237] = {
    [anon_sym_STAR] = ACTIONS(572),
    [anon_sym_RPAREN] = ACTIONS(572),
    [anon_sym_PERCENT] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_LT] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_GT] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_LT_EQ] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_GT_EQ] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_EQ_EQ] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_SLASH_EQ] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_SLASH_SLASH] = ACTIONS(574),
    [anon_sym_PLUS] = ACTIONS(572),
    [anon_sym_DASH] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_STAR_STAR] = ACTIONS(574),
    [sym_comment] = ACTIONS(34),
  },
  [238] = {
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(578),
    [anon_sym_PERCENT] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(234),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [239] = {
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(578),
    [anon_sym_PERCENT] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(234),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [240] = {
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(578),
    [anon_sym_PERCENT] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(234),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [241] = {
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(584),
    [anon_sym_PERCENT] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_LT] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_GT] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_LT_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_GT_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_EQ_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_SLASH_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_SLASH_SLASH] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(234),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [242] = {
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(590),
    [anon_sym_PERCENT] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(594),
    [anon_sym_LT] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_GT] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_LT_EQ] = ACTIONS(592),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_GT_EQ] = ACTIONS(592),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_EQ_EQ] = ACTIONS(592),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_SLASH_EQ] = ACTIONS(592),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_SLASH_SLASH] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(234),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [243] = {
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(238),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(564),
    [anon_sym_PLUS] = ACTIONS(562),
    [anon_sym_DASH] = ACTIONS(562),
    [anon_sym_SLASH] = ACTIONS(234),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [244] = {
    [anon_sym_STAR] = ACTIONS(562),
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(238),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(564),
    [anon_sym_PLUS] = ACTIONS(562),
    [anon_sym_DASH] = ACTIONS(562),
    [anon_sym_SLASH] = ACTIONS(562),
    [anon_sym_STAR_STAR] = ACTIONS(564),
    [sym_comment] = ACTIONS(34),
  },
  [245] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(442),
    [sym__newline] = ACTIONS(442),
  },
  [246] = {
    [aux_sym_argument_list_repeat1] = STATE(344),
    [anon_sym_COMMA] = ACTIONS(450),
    [anon_sym_STAR] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(628),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_LT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_LT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_EQ_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_SLASH] = ACTIONS(470),
    [anon_sym_PLUS] = ACTIONS(472),
    [anon_sym_DASH] = ACTIONS(472),
    [anon_sym_SLASH] = ACTIONS(452),
    [anon_sym_STAR_STAR] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(476),
    [sym_comment] = ACTIONS(34),
  },
  [247] = {
    [aux_sym_argument_list_repeat1] = STATE(344),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(630),
    [sym_comment] = ACTIONS(14),
  },
  [248] = {
    [sym_number_literal] = ACTIONS(632),
    [sym_identifier] = ACTIONS(634),
    [sym_comment] = ACTIONS(14),
  },
  [249] = {
    [anon_sym_COMMA] = ACTIONS(496),
    [anon_sym_STAR] = ACTIONS(496),
    [anon_sym_PERCENT] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(496),
    [anon_sym_LT] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(496),
    [anon_sym_GT] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(496),
    [anon_sym_LT_EQ] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(496),
    [anon_sym_GT_EQ] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(496),
    [anon_sym_EQ_EQ] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(496),
    [anon_sym_SLASH_EQ] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(496),
    [anon_sym_SLASH_SLASH] = ACTIONS(496),
    [anon_sym_PLUS] = ACTIONS(496),
    [anon_sym_DASH] = ACTIONS(496),
    [anon_sym_SLASH] = ACTIONS(496),
    [anon_sym_STAR_STAR] = ACTIONS(496),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(496),
    [sym__newline] = ACTIONS(496),
  },
  [250] = {
    [anon_sym_STAR] = ACTIONS(566),
    [anon_sym_PERCENT] = ACTIONS(278),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(566),
    [anon_sym_PLUS] = ACTIONS(566),
    [anon_sym_DASH] = ACTIONS(566),
    [anon_sym_SLASH] = ACTIONS(566),
    [anon_sym_STAR_STAR] = ACTIONS(292),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(566),
    [sym__newline] = ACTIONS(566),
  },
  [251] = {
    [anon_sym_STAR] = ACTIONS(576),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_LT] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_GT] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_LT_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_GT_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_EQ_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_SLASH_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_SLASH_SLASH] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(576),
    [anon_sym_DASH] = ACTIONS(576),
    [anon_sym_SLASH] = ACTIONS(576),
    [anon_sym_STAR_STAR] = ACTIONS(576),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(576),
    [sym__newline] = ACTIONS(576),
  },
  [252] = {
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(582),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [anon_sym_LT] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_GT] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_LT_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_GT_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_EQ_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_SLASH_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_SLASH_SLASH] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_DASH] = ACTIONS(290),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_STAR_STAR] = ACTIONS(292),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(582),
    [sym__newline] = ACTIONS(582),
  },
  [253] = {
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(582),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(582),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [anon_sym_LT] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_GT] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_LT_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_GT_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_EQ_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_SLASH_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_SLASH_SLASH] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_DASH] = ACTIONS(290),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_STAR_STAR] = ACTIONS(292),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(582),
    [sym__newline] = ACTIONS(582),
  },
  [254] = {
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [anon_sym_LT] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_GT] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_LT_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_GT_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_EQ_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_SLASH_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_SLASH_SLASH] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_DASH] = ACTIONS(290),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_STAR_STAR] = ACTIONS(292),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(582),
    [sym__newline] = ACTIONS(582),
  },
  [255] = {
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_LT] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_GT] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_LT_EQ] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_GT_EQ] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_EQ_EQ] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_SLASH_EQ] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_SLASH_SLASH] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_DASH] = ACTIONS(290),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_STAR_STAR] = ACTIONS(292),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(588),
    [sym__newline] = ACTIONS(588),
  },
  [256] = {
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(278),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_DASH] = ACTIONS(290),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_STAR_STAR] = ACTIONS(292),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(594),
    [sym__newline] = ACTIONS(594),
  },
  [257] = {
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(278),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(566),
    [anon_sym_PLUS] = ACTIONS(566),
    [anon_sym_DASH] = ACTIONS(566),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_STAR_STAR] = ACTIONS(292),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(566),
    [sym__newline] = ACTIONS(566),
  },
  [258] = {
    [anon_sym_STAR] = ACTIONS(566),
    [anon_sym_PERCENT] = ACTIONS(278),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(566),
    [anon_sym_PLUS] = ACTIONS(566),
    [anon_sym_DASH] = ACTIONS(566),
    [anon_sym_SLASH] = ACTIONS(566),
    [anon_sym_STAR_STAR] = ACTIONS(566),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(566),
    [sym__newline] = ACTIONS(566),
  },
  [259] = {
    [sym__expression] = STATE(346),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(504),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [260] = {
    [sym__expression] = STATE(347),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(504),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [261] = {
    [anon_sym_COMMA] = ACTIONS(636),
    [anon_sym_STAR] = ACTIONS(638),
    [anon_sym_PERCENT] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(646),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(648),
    [anon_sym_LT] = ACTIONS(650),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_GT] = ACTIONS(650),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_LT_EQ] = ACTIONS(652),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_GT_EQ] = ACTIONS(652),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_EQ_EQ] = ACTIONS(652),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_SLASH_EQ] = ACTIONS(652),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_SLASH_SLASH] = ACTIONS(654),
    [anon_sym_PLUS] = ACTIONS(656),
    [anon_sym_DASH] = ACTIONS(656),
    [anon_sym_SLASH] = ACTIONS(638),
    [anon_sym_STAR_STAR] = ACTIONS(658),
    [sym_comment] = ACTIONS(34),
  },
  [262] = {
    [sym__block_label] = STATE(358),
    [sym_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(660),
    [sym__newline] = ACTIONS(660),
  },
  [263] = {
    [sym_statement_label] = STATE(155),
    [sym_subroutine_call] = STATE(156),
    [sym_keyword_statement] = STATE(156),
    [sym_do_loop_statement] = STATE(156),
    [sym_if_statement] = STATE(156),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(156),
    [sym_pointer_assignment_expression] = STATE(156),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(157),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(269),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(662),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
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
  [264] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(664),
    [sym__newline] = ACTIONS(664),
  },
  [265] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(660),
    [sym__newline] = ACTIONS(660),
  },
  [266] = {
    [sym__end_of_statement] = STATE(360),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(124),
    [sym__newline] = ACTIONS(124),
  },
  [267] = {
    [sym__end_of_statement] = STATE(360),
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
    [sym__semicolon] = ACTIONS(124),
    [sym__newline] = ACTIONS(124),
  },
  [268] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(366),
    [anon_sym_LPAREN] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(366),
    [anon_sym_PLUS] = ACTIONS(366),
    [anon_sym_DASH] = ACTIONS(366),
    [sym_block_label_start_expression] = ACTIONS(368),
    [sym_number_literal] = ACTIONS(368),
    [sym__double_quoted_string] = ACTIONS(368),
    [sym__single_quoted_string] = ACTIONS(368),
    [sym_boolean_literal] = ACTIONS(368),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
  },
  [269] = {
    [sym_statement_label] = STATE(155),
    [sym_subroutine_call] = STATE(156),
    [sym_keyword_statement] = STATE(156),
    [sym_do_loop_statement] = STATE(156),
    [sym_if_statement] = STATE(156),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(156),
    [sym_pointer_assignment_expression] = STATE(156),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(157),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(269),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(377),
    [anon_sym_LPAREN] = ACTIONS(380),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(383),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(389),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(401),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(407),
    [anon_sym_DASH] = ACTIONS(407),
    [sym_block_label_start_expression] = ACTIONS(410),
    [sym_number_literal] = ACTIONS(413),
    [sym__double_quoted_string] = ACTIONS(416),
    [sym__single_quoted_string] = ACTIONS(416),
    [sym_boolean_literal] = ACTIONS(413),
    [sym_identifier] = ACTIONS(419),
    [sym_comment] = ACTIONS(34),
  },
  [270] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(492),
    [anon_sym_LPAREN] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(492),
    [anon_sym_PLUS] = ACTIONS(492),
    [anon_sym_DASH] = ACTIONS(492),
    [sym_block_label_start_expression] = ACTIONS(496),
    [sym_number_literal] = ACTIONS(496),
    [sym__double_quoted_string] = ACTIONS(496),
    [sym__single_quoted_string] = ACTIONS(496),
    [sym_boolean_literal] = ACTIONS(496),
    [sym_identifier] = ACTIONS(496),
    [sym_comment] = ACTIONS(34),
  },
  [271] = {
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
  [272] = {
    [sym__end_of_statement] = STATE(361),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(516),
    [sym__newline] = ACTIONS(516),
  },
  [273] = {
    [sym_statement_label] = STATE(365),
    [sym_subroutine_call] = STATE(366),
    [sym_keyword_statement] = STATE(366),
    [sym_do_loop_statement] = STATE(366),
    [sym_if_statement] = STATE(366),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym_elseif_clause] = STATE(367),
    [sym_else_clause] = STATE(368),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(366),
    [sym_pointer_assignment_expression] = STATE(366),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(369),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(370),
    [aux_sym__block_if_statement_repeat1] = STATE(371),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(666),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(668),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(670),
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
  [274] = {
    [sym__end_of_statement] = STATE(372),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(518),
    [sym__newline] = ACTIONS(518),
  },
  [275] = {
    [sym__end_of_statement] = STATE(372),
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
    [sym__semicolon] = ACTIONS(518),
    [sym__newline] = ACTIONS(518),
  },
  [276] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(38),
    [sym__newline] = ACTIONS(38),
  },
  [277] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(672),
    [sym__newline] = ACTIONS(672),
  },
  [278] = {
    [sym_statement_label] = STATE(155),
    [sym_subroutine_call] = STATE(156),
    [sym_keyword_statement] = STATE(156),
    [sym_do_loop_statement] = STATE(156),
    [sym_if_statement] = STATE(156),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(156),
    [sym_pointer_assignment_expression] = STATE(156),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(157),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(373),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(662),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
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
  [279] = {
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(674),
    [anon_sym_PERCENT] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(246),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(252),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(234),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [280] = {
    [sym__block_label] = STATE(375),
    [sym__end_of_statement] = STATE(361),
    [sym_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(516),
    [sym__newline] = ACTIONS(516),
  },
  [281] = {
    [anon_sym_COMMA] = ACTIONS(618),
    [anon_sym_STAR] = ACTIONS(618),
    [anon_sym_EQ] = ACTIONS(618),
    [anon_sym_EQ_GT] = ACTIONS(618),
    [anon_sym_PERCENT] = ACTIONS(618),
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
  [282] = {
    [aux_sym_argument_list_repeat1] = STATE(339),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(676),
    [sym_comment] = ACTIONS(14),
  },
  [283] = {
    [anon_sym_COMMA] = ACTIONS(678),
    [anon_sym_COLON_COLON] = ACTIONS(680),
    [anon_sym_LPAREN] = ACTIONS(678),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(678),
    [anon_sym_PLUS] = ACTIONS(678),
    [anon_sym_DASH] = ACTIONS(678),
    [sym_number_literal] = ACTIONS(682),
    [sym__double_quoted_string] = ACTIONS(682),
    [sym__single_quoted_string] = ACTIONS(682),
    [sym_boolean_literal] = ACTIONS(682),
    [sym_identifier] = ACTIONS(682),
    [sym_comment] = ACTIONS(34),
  },
  [284] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(684),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(686),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(686),
    [sym_comment] = ACTIONS(14),
  },
  [285] = {
    [sym_type_qualifier] = STATE(378),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(326),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKcC_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(322),
    [sym_comment] = ACTIONS(14),
  },
  [286] = {
    [sym__expression] = STATE(86),
    [sym_parenthesized_expression] = STATE(83),
    [sym_assignment_expression] = STATE(380),
    [sym_derived_type_member_expression] = STATE(83),
    [sym_logical_expression] = STATE(83),
    [sym_relational_expression] = STATE(83),
    [sym_concatenation_expression] = STATE(83),
    [sym_math_expression] = STATE(83),
    [sym_call_expression] = STATE(381),
    [sym_complex_literal] = STATE(83),
    [sym_string_literal] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [sym_number_literal] = ACTIONS(162),
    [sym__double_quoted_string] = ACTIONS(164),
    [sym__single_quoted_string] = ACTIONS(164),
    [sym_boolean_literal] = ACTIONS(162),
    [sym_identifier] = ACTIONS(688),
    [sym_comment] = ACTIONS(34),
  },
  [287] = {
    [sym_argument_list] = STATE(185),
    [aux_sym_variable_declaration_repeat2] = STATE(382),
    [anon_sym_COMMA] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(338),
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
    [sym__semicolon] = ACTIONS(690),
    [sym__newline] = ACTIONS(690),
  },
  [288] = {
    [aux_sym_variable_declaration_repeat2] = STATE(382),
    [anon_sym_COMMA] = ACTIONS(336),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(690),
    [sym__newline] = ACTIONS(690),
  },
  [289] = {
    [aux_sym_variable_declaration_repeat2] = STATE(382),
    [anon_sym_COMMA] = ACTIONS(336),
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
    [sym__semicolon] = ACTIONS(690),
    [sym__newline] = ACTIONS(690),
  },
  [290] = {
    [sym__expression] = STATE(86),
    [sym_parenthesized_expression] = STATE(83),
    [sym_assignment_expression] = STATE(380),
    [sym_derived_type_member_expression] = STATE(83),
    [sym_logical_expression] = STATE(83),
    [sym_relational_expression] = STATE(83),
    [sym_concatenation_expression] = STATE(83),
    [sym_math_expression] = STATE(83),
    [sym_call_expression] = STATE(381),
    [sym_complex_literal] = STATE(83),
    [sym_string_literal] = STATE(83),
    [aux_sym_variable_declaration_repeat1] = STATE(384),
    [anon_sym_COMMA] = ACTIONS(536),
    [anon_sym_COLON_COLON] = ACTIONS(692),
    [anon_sym_LPAREN] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [sym_number_literal] = ACTIONS(162),
    [sym__double_quoted_string] = ACTIONS(164),
    [sym__single_quoted_string] = ACTIONS(164),
    [sym_boolean_literal] = ACTIONS(162),
    [sym_identifier] = ACTIONS(688),
    [sym_comment] = ACTIONS(34),
  },
  [291] = {
    [aux_sym_variable_declaration_repeat2] = STATE(302),
    [anon_sym_COMMA] = ACTIONS(336),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(690),
    [sym__newline] = ACTIONS(690),
  },
  [292] = {
    [sym_number_literal] = ACTIONS(694),
    [sym_identifier] = ACTIONS(696),
    [sym_comment] = ACTIONS(14),
  },
  [293] = {
    [anon_sym_STAR] = ACTIONS(492),
    [anon_sym_EQ] = ACTIONS(492),
    [anon_sym_PERCENT] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(496),
    [anon_sym_LT] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(492),
    [anon_sym_GT] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(492),
    [anon_sym_LT_EQ] = ACTIONS(494),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(492),
    [anon_sym_GT_EQ] = ACTIONS(494),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(492),
    [anon_sym_EQ_EQ] = ACTIONS(494),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(492),
    [anon_sym_SLASH_EQ] = ACTIONS(494),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(492),
    [anon_sym_SLASH_SLASH] = ACTIONS(494),
    [anon_sym_PLUS] = ACTIONS(492),
    [anon_sym_DASH] = ACTIONS(492),
    [anon_sym_SLASH] = ACTIONS(492),
    [anon_sym_STAR_STAR] = ACTIONS(494),
    [sym_comment] = ACTIONS(34),
  },
  [294] = {
    [sym__expression] = STATE(387),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_keyword_argument] = STATE(388),
    [sym_array_slice] = STATE(388),
    [sym_assumed_size] = STATE(388),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_STAR] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(698),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(216),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [anon_sym_COLON] = ACTIONS(220),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(222),
    [sym_comment] = ACTIONS(34),
  },
  [295] = {
    [anon_sym_STAR] = ACTIONS(488),
    [anon_sym_EQ] = ACTIONS(488),
    [anon_sym_PERCENT] = ACTIONS(488),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(488),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(316),
    [anon_sym_LT] = ACTIONS(488),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(488),
    [anon_sym_GT] = ACTIONS(488),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(488),
    [anon_sym_LT_EQ] = ACTIONS(490),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(488),
    [anon_sym_GT_EQ] = ACTIONS(490),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(488),
    [anon_sym_EQ_EQ] = ACTIONS(490),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(488),
    [anon_sym_SLASH_EQ] = ACTIONS(490),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(488),
    [anon_sym_SLASH_SLASH] = ACTIONS(490),
    [anon_sym_PLUS] = ACTIONS(488),
    [anon_sym_DASH] = ACTIONS(488),
    [anon_sym_SLASH] = ACTIONS(488),
    [anon_sym_STAR_STAR] = ACTIONS(490),
    [sym_comment] = ACTIONS(34),
  },
  [296] = {
    [sym_argument_list] = STATE(185),
    [anon_sym_COMMA] = ACTIONS(700),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(338),
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
    [sym__semicolon] = ACTIONS(700),
    [sym__newline] = ACTIONS(700),
  },
  [297] = {
    [anon_sym_COMMA] = ACTIONS(700),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(700),
    [sym__newline] = ACTIONS(700),
  },
  [298] = {
    [anon_sym_COMMA] = ACTIONS(700),
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
    [sym__semicolon] = ACTIONS(700),
    [sym__newline] = ACTIONS(700),
  },
  [299] = {
    [anon_sym_COMMA] = ACTIONS(442),
    [anon_sym_STAR] = ACTIONS(442),
    [anon_sym_EQ] = ACTIONS(442),
    [anon_sym_PERCENT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(442),
    [anon_sym_LT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(442),
    [anon_sym_GT] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(442),
    [anon_sym_LT_EQ] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(442),
    [anon_sym_GT_EQ] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(442),
    [anon_sym_EQ_EQ] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(442),
    [anon_sym_SLASH_EQ] = ACTIONS(442),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(442),
    [anon_sym_SLASH_SLASH] = ACTIONS(442),
    [anon_sym_PLUS] = ACTIONS(442),
    [anon_sym_DASH] = ACTIONS(442),
    [anon_sym_SLASH] = ACTIONS(442),
    [anon_sym_STAR_STAR] = ACTIONS(442),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(442),
    [sym__newline] = ACTIONS(442),
  },
  [300] = {
    [aux_sym_argument_list_repeat1] = STATE(390),
    [anon_sym_COMMA] = ACTIONS(450),
    [anon_sym_STAR] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(702),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_LT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_LT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_EQ_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_SLASH] = ACTIONS(470),
    [anon_sym_PLUS] = ACTIONS(472),
    [anon_sym_DASH] = ACTIONS(472),
    [anon_sym_SLASH] = ACTIONS(452),
    [anon_sym_STAR_STAR] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(476),
    [sym_comment] = ACTIONS(34),
  },
  [301] = {
    [aux_sym_argument_list_repeat1] = STATE(390),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(704),
    [sym_comment] = ACTIONS(14),
  },
  [302] = {
    [aux_sym_variable_declaration_repeat2] = STATE(302),
    [anon_sym_COMMA] = ACTIONS(706),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(700),
    [sym__newline] = ACTIONS(700),
  },
  [303] = {
    [anon_sym_STAR] = ACTIONS(562),
    [anon_sym_EQ] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(346),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(564),
    [anon_sym_PLUS] = ACTIONS(562),
    [anon_sym_DASH] = ACTIONS(562),
    [anon_sym_SLASH] = ACTIONS(562),
    [anon_sym_STAR_STAR] = ACTIONS(364),
    [sym_comment] = ACTIONS(34),
  },
  [304] = {
    [sym__expression] = STATE(391),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [305] = {
    [sym__expression] = STATE(392),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [306] = {
    [anon_sym_COMMA] = ACTIONS(568),
    [anon_sym_STAR] = ACTIONS(709),
    [anon_sym_PERCENT] = ACTIONS(711),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(713),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(715),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(717),
    [anon_sym_LT] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_GT] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_LT_EQ] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_GT_EQ] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_EQ_EQ] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_SLASH_EQ] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_SLASH_SLASH] = ACTIONS(721),
    [anon_sym_PLUS] = ACTIONS(723),
    [anon_sym_DASH] = ACTIONS(723),
    [anon_sym_SLASH] = ACTIONS(709),
    [anon_sym_STAR_STAR] = ACTIONS(725),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(568),
    [sym__newline] = ACTIONS(568),
  },
  [307] = {
    [anon_sym_STAR] = ACTIONS(572),
    [anon_sym_EQ] = ACTIONS(572),
    [anon_sym_PERCENT] = ACTIONS(346),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_LT] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_GT] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_LT_EQ] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_GT_EQ] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_EQ_EQ] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_SLASH_EQ] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_SLASH_SLASH] = ACTIONS(574),
    [anon_sym_PLUS] = ACTIONS(572),
    [anon_sym_DASH] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_STAR_STAR] = ACTIONS(574),
    [sym_comment] = ACTIONS(34),
  },
  [308] = {
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_EQ] = ACTIONS(578),
    [anon_sym_PERCENT] = ACTIONS(346),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [anon_sym_LT] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_GT] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_LT_EQ] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_GT_EQ] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_SLASH_EQ] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_SLASH_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_STAR_STAR] = ACTIONS(364),
    [sym_comment] = ACTIONS(34),
  },
  [309] = {
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_EQ] = ACTIONS(578),
    [anon_sym_PERCENT] = ACTIONS(346),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [anon_sym_LT] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_GT] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_LT_EQ] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_GT_EQ] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_SLASH_EQ] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_SLASH_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_STAR_STAR] = ACTIONS(364),
    [sym_comment] = ACTIONS(34),
  },
  [310] = {
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_EQ] = ACTIONS(578),
    [anon_sym_PERCENT] = ACTIONS(346),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(350),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [anon_sym_LT] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_GT] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_LT_EQ] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_GT_EQ] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_SLASH_EQ] = ACTIONS(358),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(356),
    [anon_sym_SLASH_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_STAR_STAR] = ACTIONS(364),
    [sym_comment] = ACTIONS(34),
  },
  [311] = {
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_EQ] = ACTIONS(584),
    [anon_sym_PERCENT] = ACTIONS(346),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_LT] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_GT] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_LT_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_GT_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_EQ_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_SLASH_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_SLASH_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_STAR_STAR] = ACTIONS(364),
    [sym_comment] = ACTIONS(34),
  },
  [312] = {
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_EQ] = ACTIONS(590),
    [anon_sym_PERCENT] = ACTIONS(346),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(594),
    [anon_sym_LT] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_GT] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_LT_EQ] = ACTIONS(592),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_GT_EQ] = ACTIONS(592),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_EQ_EQ] = ACTIONS(592),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_SLASH_EQ] = ACTIONS(592),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_SLASH_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_STAR_STAR] = ACTIONS(364),
    [sym_comment] = ACTIONS(34),
  },
  [313] = {
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_EQ] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(346),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(564),
    [anon_sym_PLUS] = ACTIONS(562),
    [anon_sym_DASH] = ACTIONS(562),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_STAR_STAR] = ACTIONS(364),
    [sym_comment] = ACTIONS(34),
  },
  [314] = {
    [anon_sym_STAR] = ACTIONS(562),
    [anon_sym_EQ] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(346),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(564),
    [anon_sym_PLUS] = ACTIONS(562),
    [anon_sym_DASH] = ACTIONS(562),
    [anon_sym_SLASH] = ACTIONS(562),
    [anon_sym_STAR_STAR] = ACTIONS(564),
    [sym_comment] = ACTIONS(34),
  },
  [315] = {
    [ts_builtin_sym_end] = ACTIONS(727),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(727),
    [sym_comment] = ACTIONS(14),
  },
  [316] = {
    [sym__end_of_statement] = STATE(402),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [317] = {
    [sym__end_of_statement] = STATE(402),
    [sym_identifier] = ACTIONS(729),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [318] = {
    [anon_sym_COMMA] = ACTIONS(492),
    [anon_sym_COLON_COLON] = ACTIONS(494),
    [anon_sym_LPAREN] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(492),
    [anon_sym_PLUS] = ACTIONS(492),
    [anon_sym_DASH] = ACTIONS(492),
    [sym_number_literal] = ACTIONS(496),
    [sym__double_quoted_string] = ACTIONS(496),
    [sym__single_quoted_string] = ACTIONS(496),
    [sym_boolean_literal] = ACTIONS(496),
    [sym_identifier] = ACTIONS(496),
    [sym_comment] = ACTIONS(34),
  },
  [319] = {
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
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [320] = {
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
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [321] = {
    [anon_sym_COMMA] = ACTIONS(731),
    [anon_sym_STAR] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(731),
    [anon_sym_PERCENT] = ACTIONS(735),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(737),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(739),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(743),
    [anon_sym_LT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_GT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_LT_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_GT_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_EQ_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_SLASH_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_SLASH_SLASH] = ACTIONS(749),
    [anon_sym_PLUS] = ACTIONS(751),
    [anon_sym_DASH] = ACTIONS(751),
    [anon_sym_SLASH] = ACTIONS(733),
    [anon_sym_STAR_STAR] = ACTIONS(753),
    [sym_comment] = ACTIONS(34),
  },
  [322] = {
    [sym__expression] = STATE(415),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [323] = {
    [anon_sym_COMMA] = ACTIONS(755),
    [anon_sym_RPAREN] = ACTIONS(755),
    [sym_comment] = ACTIONS(14),
  },
  [324] = {
    [anon_sym_COMMA] = ACTIONS(757),
    [anon_sym_STAR] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(757),
    [anon_sym_PERCENT] = ACTIONS(735),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(737),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(739),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(743),
    [anon_sym_LT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_GT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_LT_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_GT_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_EQ_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_SLASH_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_SLASH_SLASH] = ACTIONS(749),
    [anon_sym_PLUS] = ACTIONS(751),
    [anon_sym_DASH] = ACTIONS(751),
    [anon_sym_SLASH] = ACTIONS(733),
    [anon_sym_STAR_STAR] = ACTIONS(753),
    [sym_comment] = ACTIONS(34),
  },
  [325] = {
    [anon_sym_COMMA] = ACTIONS(759),
    [anon_sym_RPAREN] = ACTIONS(759),
    [sym_comment] = ACTIONS(14),
  },
  [326] = {
    [anon_sym_COMMA] = ACTIONS(761),
    [anon_sym_STAR] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(761),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_LT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_LT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_EQ_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_SLASH] = ACTIONS(470),
    [anon_sym_PLUS] = ACTIONS(472),
    [anon_sym_DASH] = ACTIONS(472),
    [anon_sym_SLASH] = ACTIONS(452),
    [anon_sym_STAR_STAR] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(476),
    [sym_comment] = ACTIONS(34),
  },
  [327] = {
    [anon_sym_COMMA] = ACTIONS(763),
    [anon_sym_RPAREN] = ACTIONS(763),
    [sym_comment] = ACTIONS(14),
  },
  [328] = {
    [anon_sym_COMMA] = ACTIONS(562),
    [anon_sym_STAR] = ACTIONS(562),
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(456),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(564),
    [anon_sym_PLUS] = ACTIONS(562),
    [anon_sym_DASH] = ACTIONS(562),
    [anon_sym_SLASH] = ACTIONS(562),
    [anon_sym_STAR_STAR] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(562),
    [sym_comment] = ACTIONS(34),
  },
  [329] = {
    [anon_sym_COMMA] = ACTIONS(572),
    [anon_sym_STAR] = ACTIONS(572),
    [anon_sym_RPAREN] = ACTIONS(572),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_LT] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_GT] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_LT_EQ] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_GT_EQ] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_EQ_EQ] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_SLASH_EQ] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_SLASH_SLASH] = ACTIONS(574),
    [anon_sym_PLUS] = ACTIONS(572),
    [anon_sym_DASH] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_STAR_STAR] = ACTIONS(574),
    [anon_sym_COLON] = ACTIONS(572),
    [sym_comment] = ACTIONS(34),
  },
  [330] = {
    [anon_sym_COMMA] = ACTIONS(578),
    [anon_sym_STAR] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(578),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [anon_sym_LT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_LT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_EQ_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_SLASH] = ACTIONS(470),
    [anon_sym_PLUS] = ACTIONS(472),
    [anon_sym_DASH] = ACTIONS(472),
    [anon_sym_SLASH] = ACTIONS(452),
    [anon_sym_STAR_STAR] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(578),
    [sym_comment] = ACTIONS(34),
  },
  [331] = {
    [anon_sym_COMMA] = ACTIONS(578),
    [anon_sym_STAR] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(578),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [anon_sym_LT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_LT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_EQ_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_SLASH] = ACTIONS(470),
    [anon_sym_PLUS] = ACTIONS(472),
    [anon_sym_DASH] = ACTIONS(472),
    [anon_sym_SLASH] = ACTIONS(452),
    [anon_sym_STAR_STAR] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(578),
    [sym_comment] = ACTIONS(34),
  },
  [332] = {
    [anon_sym_COMMA] = ACTIONS(578),
    [anon_sym_STAR] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(578),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [anon_sym_LT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_LT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_EQ_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_SLASH] = ACTIONS(470),
    [anon_sym_PLUS] = ACTIONS(472),
    [anon_sym_DASH] = ACTIONS(472),
    [anon_sym_SLASH] = ACTIONS(452),
    [anon_sym_STAR_STAR] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(578),
    [sym_comment] = ACTIONS(34),
  },
  [333] = {
    [anon_sym_COMMA] = ACTIONS(584),
    [anon_sym_STAR] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(584),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_LT] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_GT] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_LT_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_GT_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_EQ_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_SLASH_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_SLASH_SLASH] = ACTIONS(470),
    [anon_sym_PLUS] = ACTIONS(472),
    [anon_sym_DASH] = ACTIONS(472),
    [anon_sym_SLASH] = ACTIONS(452),
    [anon_sym_STAR_STAR] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(584),
    [sym_comment] = ACTIONS(34),
  },
  [334] = {
    [anon_sym_COMMA] = ACTIONS(590),
    [anon_sym_STAR] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(590),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(594),
    [anon_sym_LT] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_GT] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_LT_EQ] = ACTIONS(592),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_GT_EQ] = ACTIONS(592),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_EQ_EQ] = ACTIONS(592),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_SLASH_EQ] = ACTIONS(592),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_SLASH_SLASH] = ACTIONS(470),
    [anon_sym_PLUS] = ACTIONS(472),
    [anon_sym_DASH] = ACTIONS(472),
    [anon_sym_SLASH] = ACTIONS(452),
    [anon_sym_STAR_STAR] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(590),
    [sym_comment] = ACTIONS(34),
  },
  [335] = {
    [anon_sym_COMMA] = ACTIONS(562),
    [anon_sym_STAR] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(456),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(564),
    [anon_sym_PLUS] = ACTIONS(562),
    [anon_sym_DASH] = ACTIONS(562),
    [anon_sym_SLASH] = ACTIONS(452),
    [anon_sym_STAR_STAR] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(562),
    [sym_comment] = ACTIONS(34),
  },
  [336] = {
    [anon_sym_COMMA] = ACTIONS(562),
    [anon_sym_STAR] = ACTIONS(562),
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(456),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(564),
    [anon_sym_PLUS] = ACTIONS(562),
    [anon_sym_DASH] = ACTIONS(562),
    [anon_sym_SLASH] = ACTIONS(562),
    [anon_sym_STAR_STAR] = ACTIONS(564),
    [anon_sym_COLON] = ACTIONS(562),
    [sym_comment] = ACTIONS(34),
  },
  [337] = {
    [anon_sym_COMMA] = ACTIONS(731),
    [anon_sym_STAR] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(731),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_LT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_LT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_EQ_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_SLASH] = ACTIONS(470),
    [anon_sym_PLUS] = ACTIONS(472),
    [anon_sym_DASH] = ACTIONS(472),
    [anon_sym_SLASH] = ACTIONS(452),
    [anon_sym_STAR_STAR] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(765),
    [sym_comment] = ACTIONS(34),
  },
  [338] = {
    [anon_sym_COMMA] = ACTIONS(767),
    [anon_sym_COLON_COLON] = ACTIONS(769),
    [anon_sym_LPAREN] = ACTIONS(767),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(767),
    [anon_sym_PLUS] = ACTIONS(767),
    [anon_sym_DASH] = ACTIONS(767),
    [sym_number_literal] = ACTIONS(771),
    [sym__double_quoted_string] = ACTIONS(771),
    [sym__single_quoted_string] = ACTIONS(771),
    [sym_boolean_literal] = ACTIONS(771),
    [sym_identifier] = ACTIONS(771),
    [sym_comment] = ACTIONS(34),
  },
  [339] = {
    [aux_sym_argument_list_repeat1] = STATE(339),
    [anon_sym_COMMA] = ACTIONS(773),
    [anon_sym_RPAREN] = ACTIONS(763),
    [sym_comment] = ACTIONS(14),
  },
  [340] = {
    [anon_sym_COMMA] = ACTIONS(776),
    [anon_sym_STAR] = ACTIONS(776),
    [anon_sym_RPAREN] = ACTIONS(776),
    [anon_sym_EQ] = ACTIONS(776),
    [anon_sym_EQ_GT] = ACTIONS(778),
    [anon_sym_PERCENT] = ACTIONS(776),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(776),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(776),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(776),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_LT] = ACTIONS(776),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(776),
    [anon_sym_GT] = ACTIONS(776),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(776),
    [anon_sym_LT_EQ] = ACTIONS(778),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(776),
    [anon_sym_GT_EQ] = ACTIONS(778),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(776),
    [anon_sym_EQ_EQ] = ACTIONS(778),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(776),
    [anon_sym_SLASH_EQ] = ACTIONS(778),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(776),
    [anon_sym_SLASH_SLASH] = ACTIONS(778),
    [anon_sym_PLUS] = ACTIONS(776),
    [anon_sym_DASH] = ACTIONS(776),
    [anon_sym_SLASH] = ACTIONS(776),
    [anon_sym_STAR_STAR] = ACTIONS(778),
    [anon_sym_COLON] = ACTIONS(776),
    [sym_comment] = ACTIONS(34),
  },
  [341] = {
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_STAR] = ACTIONS(614),
    [anon_sym_RPAREN] = ACTIONS(614),
    [anon_sym_EQ] = ACTIONS(614),
    [anon_sym_EQ_GT] = ACTIONS(616),
    [anon_sym_PERCENT] = ACTIONS(614),
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
    [anon_sym_COLON] = ACTIONS(614),
    [sym_comment] = ACTIONS(34),
  },
  [342] = {
    [aux_sym_argument_list_repeat1] = STATE(339),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(782),
    [sym_comment] = ACTIONS(14),
  },
  [343] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(618),
    [sym__newline] = ACTIONS(618),
  },
  [344] = {
    [aux_sym_argument_list_repeat1] = STATE(339),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(784),
    [sym_comment] = ACTIONS(14),
  },
  [345] = {
    [anon_sym_RPAREN] = ACTIONS(786),
    [sym_comment] = ACTIONS(14),
  },
  [346] = {
    [anon_sym_COMMA] = ACTIONS(300),
    [anon_sym_STAR] = ACTIONS(638),
    [anon_sym_PERCENT] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_LT] = ACTIONS(650),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_GT] = ACTIONS(650),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_LT_EQ] = ACTIONS(652),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_GT_EQ] = ACTIONS(652),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_EQ_EQ] = ACTIONS(652),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_SLASH_EQ] = ACTIONS(652),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_SLASH_SLASH] = ACTIONS(654),
    [anon_sym_PLUS] = ACTIONS(656),
    [anon_sym_DASH] = ACTIONS(656),
    [anon_sym_SLASH] = ACTIONS(638),
    [anon_sym_STAR_STAR] = ACTIONS(658),
    [sym_comment] = ACTIONS(34),
  },
  [347] = {
    [anon_sym_COMMA] = ACTIONS(306),
    [anon_sym_STAR] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_GT] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_LT_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_GT_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_EQ_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_SLASH_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_SLASH_SLASH] = ACTIONS(308),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_SLASH] = ACTIONS(306),
    [anon_sym_STAR_STAR] = ACTIONS(308),
    [sym_comment] = ACTIONS(34),
  },
  [348] = {
    [sym__expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [349] = {
    [sym__expression] = STATE(421),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(504),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [350] = {
    [sym__expression] = STATE(422),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(504),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [351] = {
    [sym__expression] = STATE(423),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(504),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [352] = {
    [sym__expression] = STATE(424),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(504),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [353] = {
    [sym__expression] = STATE(425),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(504),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [354] = {
    [sym__expression] = STATE(426),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(504),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [355] = {
    [sym__expression] = STATE(427),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(504),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [356] = {
    [sym__expression] = STATE(428),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(504),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [357] = {
    [sym__expression] = STATE(429),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(504),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [358] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(788),
    [sym__newline] = ACTIONS(788),
  },
  [359] = {
    [sym__block_label] = STATE(430),
    [sym_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(788),
    [sym__newline] = ACTIONS(788),
  },
  [360] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(558),
    [anon_sym_LPAREN] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(558),
    [anon_sym_PLUS] = ACTIONS(558),
    [anon_sym_DASH] = ACTIONS(558),
    [sym_block_label_start_expression] = ACTIONS(560),
    [sym_number_literal] = ACTIONS(560),
    [sym__double_quoted_string] = ACTIONS(560),
    [sym__single_quoted_string] = ACTIONS(560),
    [sym_boolean_literal] = ACTIONS(560),
    [sym_identifier] = ACTIONS(560),
    [sym_comment] = ACTIONS(34),
  },
  [361] = {
    [sym_statement_label] = STATE(365),
    [sym_subroutine_call] = STATE(366),
    [sym_keyword_statement] = STATE(366),
    [sym_do_loop_statement] = STATE(366),
    [sym_if_statement] = STATE(366),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym_elseif_clause] = STATE(367),
    [sym_else_clause] = STATE(432),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(366),
    [sym_pointer_assignment_expression] = STATE(366),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(369),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(433),
    [aux_sym__block_if_statement_repeat1] = STATE(434),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(790),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(668),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(670),
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
  [362] = {
    [sym__block_label] = STATE(435),
    [sym_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(792),
    [sym__newline] = ACTIONS(792),
  },
  [363] = {
    [sym_parenthesized_expression] = STATE(436),
    [anon_sym_LPAREN] = ACTIONS(312),
    [sym_comment] = ACTIONS(14),
  },
  [364] = {
    [sym__block_label] = STATE(438),
    [sym__end_of_statement] = STATE(439),
    [sym_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(794),
    [sym__newline] = ACTIONS(794),
  },
  [365] = {
    [sym_subroutine_call] = STATE(440),
    [sym_keyword_statement] = STATE(440),
    [sym_do_loop_statement] = STATE(440),
    [sym_if_statement] = STATE(440),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(440),
    [sym_pointer_assignment_expression] = STATE(440),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(441),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
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
  [366] = {
    [sym__end_of_statement] = STATE(442),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(516),
    [sym__newline] = ACTIONS(516),
  },
  [367] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(796),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(796),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(798),
    [sym_comment] = ACTIONS(14),
  },
  [368] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(800),
    [sym_comment] = ACTIONS(14),
  },
  [369] = {
    [sym__end_of_statement] = STATE(442),
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
    [sym__semicolon] = ACTIONS(516),
    [sym__newline] = ACTIONS(516),
  },
  [370] = {
    [sym_statement_label] = STATE(365),
    [sym_subroutine_call] = STATE(366),
    [sym_keyword_statement] = STATE(366),
    [sym_do_loop_statement] = STATE(366),
    [sym_if_statement] = STATE(366),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym_elseif_clause] = STATE(367),
    [sym_else_clause] = STATE(432),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(366),
    [sym_pointer_assignment_expression] = STATE(366),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(369),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(443),
    [aux_sym__block_if_statement_repeat1] = STATE(434),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(790),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(668),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(670),
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
  [371] = {
    [sym_elseif_clause] = STATE(367),
    [sym_else_clause] = STATE(432),
    [aux_sym__block_if_statement_repeat1] = STATE(444),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(800),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(802),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(670),
    [sym_comment] = ACTIONS(14),
  },
  [372] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(804),
    [sym__newline] = ACTIONS(804),
  },
  [373] = {
    [sym_statement_label] = STATE(155),
    [sym_subroutine_call] = STATE(156),
    [sym_keyword_statement] = STATE(156),
    [sym_do_loop_statement] = STATE(156),
    [sym_if_statement] = STATE(156),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(156),
    [sym_pointer_assignment_expression] = STATE(156),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(157),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(269),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(806),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
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
  [374] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(494),
    [sym_comment] = ACTIONS(14),
  },
  [375] = {
    [sym__end_of_statement] = STATE(446),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(516),
    [sym__newline] = ACTIONS(516),
  },
  [376] = {
    [anon_sym_COMMA] = ACTIONS(771),
    [anon_sym_STAR] = ACTIONS(771),
    [anon_sym_EQ] = ACTIONS(771),
    [anon_sym_EQ_GT] = ACTIONS(771),
    [anon_sym_PERCENT] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(771),
    [anon_sym_LT] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(771),
    [anon_sym_GT] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(771),
    [anon_sym_LT_EQ] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(771),
    [anon_sym_GT_EQ] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(771),
    [anon_sym_EQ_EQ] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(771),
    [anon_sym_SLASH_EQ] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(771),
    [anon_sym_SLASH_SLASH] = ACTIONS(771),
    [anon_sym_PLUS] = ACTIONS(771),
    [anon_sym_DASH] = ACTIONS(771),
    [anon_sym_SLASH] = ACTIONS(771),
    [anon_sym_STAR_STAR] = ACTIONS(771),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(771),
    [sym__newline] = ACTIONS(771),
  },
  [377] = {
    [anon_sym_RPAREN] = ACTIONS(808),
    [sym_comment] = ACTIONS(14),
  },
  [378] = {
    [anon_sym_COMMA] = ACTIONS(810),
    [anon_sym_COLON_COLON] = ACTIONS(812),
    [anon_sym_LPAREN] = ACTIONS(810),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(810),
    [anon_sym_PLUS] = ACTIONS(810),
    [anon_sym_DASH] = ACTIONS(810),
    [sym_number_literal] = ACTIONS(814),
    [sym__double_quoted_string] = ACTIONS(814),
    [sym__single_quoted_string] = ACTIONS(814),
    [sym_boolean_literal] = ACTIONS(814),
    [sym_identifier] = ACTIONS(814),
    [sym_comment] = ACTIONS(34),
  },
  [379] = {
    [sym_argument_list] = STATE(185),
    [aux_sym_variable_declaration_repeat2] = STATE(448),
    [anon_sym_COMMA] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(338),
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
    [sym__semicolon] = ACTIONS(816),
    [sym__newline] = ACTIONS(816),
  },
  [380] = {
    [aux_sym_variable_declaration_repeat2] = STATE(448),
    [anon_sym_COMMA] = ACTIONS(336),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(816),
    [sym__newline] = ACTIONS(816),
  },
  [381] = {
    [aux_sym_variable_declaration_repeat2] = STATE(448),
    [anon_sym_COMMA] = ACTIONS(336),
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
    [sym__semicolon] = ACTIONS(816),
    [sym__newline] = ACTIONS(816),
  },
  [382] = {
    [aux_sym_variable_declaration_repeat2] = STATE(302),
    [anon_sym_COMMA] = ACTIONS(336),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(816),
    [sym__newline] = ACTIONS(816),
  },
  [383] = {
    [sym__expression] = STATE(86),
    [sym_parenthesized_expression] = STATE(83),
    [sym_assignment_expression] = STATE(450),
    [sym_derived_type_member_expression] = STATE(83),
    [sym_logical_expression] = STATE(83),
    [sym_relational_expression] = STATE(83),
    [sym_concatenation_expression] = STATE(83),
    [sym_math_expression] = STATE(83),
    [sym_call_expression] = STATE(451),
    [sym_complex_literal] = STATE(83),
    [sym_string_literal] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [sym_number_literal] = ACTIONS(162),
    [sym__double_quoted_string] = ACTIONS(164),
    [sym__single_quoted_string] = ACTIONS(164),
    [sym_boolean_literal] = ACTIONS(162),
    [sym_identifier] = ACTIONS(818),
    [sym_comment] = ACTIONS(34),
  },
  [384] = {
    [aux_sym_variable_declaration_repeat1] = STATE(384),
    [anon_sym_COMMA] = ACTIONS(820),
    [anon_sym_COLON_COLON] = ACTIONS(812),
    [anon_sym_LPAREN] = ACTIONS(810),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(810),
    [anon_sym_PLUS] = ACTIONS(810),
    [anon_sym_DASH] = ACTIONS(810),
    [sym_number_literal] = ACTIONS(814),
    [sym__double_quoted_string] = ACTIONS(814),
    [sym__single_quoted_string] = ACTIONS(814),
    [sym_boolean_literal] = ACTIONS(814),
    [sym_identifier] = ACTIONS(814),
    [sym_comment] = ACTIONS(34),
  },
  [385] = {
    [anon_sym_RPAREN] = ACTIONS(823),
    [sym_comment] = ACTIONS(14),
  },
  [386] = {
    [anon_sym_STAR] = ACTIONS(438),
    [anon_sym_EQ] = ACTIONS(438),
    [anon_sym_PERCENT] = ACTIONS(438),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(442),
    [anon_sym_LT] = ACTIONS(438),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(438),
    [anon_sym_GT] = ACTIONS(438),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(438),
    [anon_sym_LT_EQ] = ACTIONS(440),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(438),
    [anon_sym_GT_EQ] = ACTIONS(440),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(438),
    [anon_sym_EQ_EQ] = ACTIONS(440),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(438),
    [anon_sym_SLASH_EQ] = ACTIONS(440),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(438),
    [anon_sym_SLASH_SLASH] = ACTIONS(440),
    [anon_sym_PLUS] = ACTIONS(438),
    [anon_sym_DASH] = ACTIONS(438),
    [anon_sym_SLASH] = ACTIONS(438),
    [anon_sym_STAR_STAR] = ACTIONS(440),
    [sym_comment] = ACTIONS(34),
  },
  [387] = {
    [aux_sym_argument_list_repeat1] = STATE(454),
    [anon_sym_COMMA] = ACTIONS(450),
    [anon_sym_STAR] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(825),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_LT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_LT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_GT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_EQ_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(466),
    [anon_sym_SLASH_SLASH] = ACTIONS(470),
    [anon_sym_PLUS] = ACTIONS(472),
    [anon_sym_DASH] = ACTIONS(472),
    [anon_sym_SLASH] = ACTIONS(452),
    [anon_sym_STAR_STAR] = ACTIONS(474),
    [anon_sym_COLON] = ACTIONS(476),
    [sym_comment] = ACTIONS(34),
  },
  [388] = {
    [aux_sym_argument_list_repeat1] = STATE(454),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(827),
    [sym_comment] = ACTIONS(14),
  },
  [389] = {
    [anon_sym_COMMA] = ACTIONS(618),
    [anon_sym_STAR] = ACTIONS(618),
    [anon_sym_EQ] = ACTIONS(618),
    [anon_sym_PERCENT] = ACTIONS(618),
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
  [390] = {
    [aux_sym_argument_list_repeat1] = STATE(339),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(829),
    [sym_comment] = ACTIONS(14),
  },
  [391] = {
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_STAR] = ACTIONS(709),
    [anon_sym_PERCENT] = ACTIONS(711),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_LT] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_GT] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_LT_EQ] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_GT_EQ] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_EQ_EQ] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_SLASH_EQ] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_SLASH_SLASH] = ACTIONS(721),
    [anon_sym_PLUS] = ACTIONS(723),
    [anon_sym_DASH] = ACTIONS(723),
    [anon_sym_SLASH] = ACTIONS(709),
    [anon_sym_STAR_STAR] = ACTIONS(725),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(304),
    [sym__newline] = ACTIONS(304),
  },
  [392] = {
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_PERCENT] = ACTIONS(711),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(310),
    [anon_sym_GT] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(310),
    [anon_sym_LT_EQ] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(310),
    [anon_sym_GT_EQ] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(310),
    [anon_sym_EQ_EQ] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(310),
    [anon_sym_SLASH_EQ] = ACTIONS(310),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(310),
    [anon_sym_SLASH_SLASH] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(310),
    [anon_sym_DASH] = ACTIONS(310),
    [anon_sym_SLASH] = ACTIONS(310),
    [anon_sym_STAR_STAR] = ACTIONS(310),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(310),
    [sym__newline] = ACTIONS(310),
  },
  [393] = {
    [sym__expression] = STATE(456),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [394] = {
    [sym__expression] = STATE(457),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [395] = {
    [sym__expression] = STATE(458),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [396] = {
    [sym__expression] = STATE(459),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [397] = {
    [sym__expression] = STATE(460),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [398] = {
    [sym__expression] = STATE(461),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [399] = {
    [sym__expression] = STATE(462),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [400] = {
    [sym__expression] = STATE(463),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [401] = {
    [sym__expression] = STATE(464),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(554),
    [anon_sym_PLUS] = ACTIONS(556),
    [anon_sym_DASH] = ACTIONS(556),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [402] = {
    [ts_builtin_sym_end] = ACTIONS(831),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(831),
    [sym_comment] = ACTIONS(14),
  },
  [403] = {
    [sym__end_of_statement] = STATE(465),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [404] = {
    [anon_sym_COMMA] = ACTIONS(300),
    [anon_sym_STAR] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(300),
    [anon_sym_PERCENT] = ACTIONS(735),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(304),
    [anon_sym_LT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_GT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_LT_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_GT_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_EQ_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_SLASH_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_SLASH_SLASH] = ACTIONS(749),
    [anon_sym_PLUS] = ACTIONS(751),
    [anon_sym_DASH] = ACTIONS(751),
    [anon_sym_SLASH] = ACTIONS(733),
    [anon_sym_STAR_STAR] = ACTIONS(753),
    [sym_comment] = ACTIONS(34),
  },
  [405] = {
    [anon_sym_COMMA] = ACTIONS(306),
    [anon_sym_STAR] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(735),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(310),
    [anon_sym_LT] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_GT] = ACTIONS(306),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_LT_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_GT_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_EQ_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_SLASH_EQ] = ACTIONS(308),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(306),
    [anon_sym_SLASH_SLASH] = ACTIONS(308),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_SLASH] = ACTIONS(306),
    [anon_sym_STAR_STAR] = ACTIONS(308),
    [sym_comment] = ACTIONS(34),
  },
  [406] = {
    [sym__expression] = STATE(466),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [407] = {
    [sym__expression] = STATE(467),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [408] = {
    [sym__expression] = STATE(468),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [409] = {
    [sym__expression] = STATE(469),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [410] = {
    [sym__expression] = STATE(470),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [411] = {
    [sym__expression] = STATE(471),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [412] = {
    [sym__expression] = STATE(472),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [413] = {
    [sym__expression] = STATE(473),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [414] = {
    [sym__expression] = STATE(474),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [415] = {
    [anon_sym_COMMA] = ACTIONS(833),
    [anon_sym_STAR] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(833),
    [anon_sym_PERCENT] = ACTIONS(735),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(737),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(739),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(743),
    [anon_sym_LT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_GT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_LT_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_GT_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_EQ_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_SLASH_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_SLASH_SLASH] = ACTIONS(749),
    [anon_sym_PLUS] = ACTIONS(751),
    [anon_sym_DASH] = ACTIONS(751),
    [anon_sym_SLASH] = ACTIONS(733),
    [anon_sym_STAR_STAR] = ACTIONS(753),
    [sym_comment] = ACTIONS(34),
  },
  [416] = {
    [sym__expression] = STATE(475),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_DASH] = ACTIONS(606),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [417] = {
    [anon_sym_COMMA] = ACTIONS(767),
    [anon_sym_STAR] = ACTIONS(767),
    [anon_sym_RPAREN] = ACTIONS(767),
    [anon_sym_EQ] = ACTIONS(767),
    [anon_sym_EQ_GT] = ACTIONS(769),
    [anon_sym_PERCENT] = ACTIONS(767),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(767),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(767),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(767),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(771),
    [anon_sym_LT] = ACTIONS(767),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(767),
    [anon_sym_GT] = ACTIONS(767),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(767),
    [anon_sym_LT_EQ] = ACTIONS(769),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(767),
    [anon_sym_GT_EQ] = ACTIONS(769),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(767),
    [anon_sym_EQ_EQ] = ACTIONS(769),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(767),
    [anon_sym_SLASH_EQ] = ACTIONS(769),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(767),
    [anon_sym_SLASH_SLASH] = ACTIONS(769),
    [anon_sym_PLUS] = ACTIONS(767),
    [anon_sym_DASH] = ACTIONS(767),
    [anon_sym_SLASH] = ACTIONS(767),
    [anon_sym_STAR_STAR] = ACTIONS(769),
    [anon_sym_COLON] = ACTIONS(767),
    [sym_comment] = ACTIONS(34),
  },
  [418] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(771),
    [sym__newline] = ACTIONS(771),
  },
  [419] = {
    [anon_sym_COMMA] = ACTIONS(780),
    [anon_sym_STAR] = ACTIONS(780),
    [anon_sym_PERCENT] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_LT] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_GT] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_LT_EQ] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_GT_EQ] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_EQ_EQ] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_SLASH_EQ] = ACTIONS(780),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_SLASH_SLASH] = ACTIONS(780),
    [anon_sym_PLUS] = ACTIONS(780),
    [anon_sym_DASH] = ACTIONS(780),
    [anon_sym_SLASH] = ACTIONS(780),
    [anon_sym_STAR_STAR] = ACTIONS(780),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(780),
    [sym__newline] = ACTIONS(780),
  },
  [420] = {
    [anon_sym_COMMA] = ACTIONS(835),
    [anon_sym_STAR] = ACTIONS(709),
    [anon_sym_PERCENT] = ACTIONS(711),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(713),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(715),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(717),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(717),
    [anon_sym_LT] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_GT] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_LT_EQ] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_GT_EQ] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_EQ_EQ] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_SLASH_EQ] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_SLASH_SLASH] = ACTIONS(721),
    [anon_sym_PLUS] = ACTIONS(723),
    [anon_sym_DASH] = ACTIONS(723),
    [anon_sym_SLASH] = ACTIONS(709),
    [anon_sym_STAR_STAR] = ACTIONS(725),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(837),
    [sym__newline] = ACTIONS(837),
  },
  [421] = {
    [anon_sym_COMMA] = ACTIONS(562),
    [anon_sym_STAR] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(640),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(564),
    [anon_sym_PLUS] = ACTIONS(562),
    [anon_sym_DASH] = ACTIONS(562),
    [anon_sym_SLASH] = ACTIONS(562),
    [anon_sym_STAR_STAR] = ACTIONS(658),
    [sym_comment] = ACTIONS(34),
  },
  [422] = {
    [anon_sym_COMMA] = ACTIONS(572),
    [anon_sym_STAR] = ACTIONS(572),
    [anon_sym_PERCENT] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_LT] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_GT] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_LT_EQ] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_GT_EQ] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_EQ_EQ] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_SLASH_EQ] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_SLASH_SLASH] = ACTIONS(574),
    [anon_sym_PLUS] = ACTIONS(572),
    [anon_sym_DASH] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_STAR_STAR] = ACTIONS(574),
    [sym_comment] = ACTIONS(34),
  },
  [423] = {
    [anon_sym_COMMA] = ACTIONS(578),
    [anon_sym_STAR] = ACTIONS(638),
    [anon_sym_PERCENT] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [anon_sym_LT] = ACTIONS(650),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_GT] = ACTIONS(650),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_LT_EQ] = ACTIONS(652),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_GT_EQ] = ACTIONS(652),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_EQ_EQ] = ACTIONS(652),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_SLASH_EQ] = ACTIONS(652),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_SLASH_SLASH] = ACTIONS(654),
    [anon_sym_PLUS] = ACTIONS(656),
    [anon_sym_DASH] = ACTIONS(656),
    [anon_sym_SLASH] = ACTIONS(638),
    [anon_sym_STAR_STAR] = ACTIONS(658),
    [sym_comment] = ACTIONS(34),
  },
  [424] = {
    [anon_sym_COMMA] = ACTIONS(578),
    [anon_sym_STAR] = ACTIONS(638),
    [anon_sym_PERCENT] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [anon_sym_LT] = ACTIONS(650),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_GT] = ACTIONS(650),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_LT_EQ] = ACTIONS(652),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_GT_EQ] = ACTIONS(652),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_EQ_EQ] = ACTIONS(652),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_SLASH_EQ] = ACTIONS(652),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_SLASH_SLASH] = ACTIONS(654),
    [anon_sym_PLUS] = ACTIONS(656),
    [anon_sym_DASH] = ACTIONS(656),
    [anon_sym_SLASH] = ACTIONS(638),
    [anon_sym_STAR_STAR] = ACTIONS(658),
    [sym_comment] = ACTIONS(34),
  },
  [425] = {
    [anon_sym_COMMA] = ACTIONS(578),
    [anon_sym_STAR] = ACTIONS(638),
    [anon_sym_PERCENT] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [anon_sym_LT] = ACTIONS(650),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_GT] = ACTIONS(650),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_LT_EQ] = ACTIONS(652),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_GT_EQ] = ACTIONS(652),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_EQ_EQ] = ACTIONS(652),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_SLASH_EQ] = ACTIONS(652),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(650),
    [anon_sym_SLASH_SLASH] = ACTIONS(654),
    [anon_sym_PLUS] = ACTIONS(656),
    [anon_sym_DASH] = ACTIONS(656),
    [anon_sym_SLASH] = ACTIONS(638),
    [anon_sym_STAR_STAR] = ACTIONS(658),
    [sym_comment] = ACTIONS(34),
  },
  [426] = {
    [anon_sym_COMMA] = ACTIONS(584),
    [anon_sym_STAR] = ACTIONS(638),
    [anon_sym_PERCENT] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_LT] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_GT] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_LT_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_GT_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_EQ_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_SLASH_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_SLASH_SLASH] = ACTIONS(654),
    [anon_sym_PLUS] = ACTIONS(656),
    [anon_sym_DASH] = ACTIONS(656),
    [anon_sym_SLASH] = ACTIONS(638),
    [anon_sym_STAR_STAR] = ACTIONS(658),
    [sym_comment] = ACTIONS(34),
  },
  [427] = {
    [anon_sym_COMMA] = ACTIONS(590),
    [anon_sym_STAR] = ACTIONS(638),
    [anon_sym_PERCENT] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(594),
    [anon_sym_LT] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_GT] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_LT_EQ] = ACTIONS(592),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_GT_EQ] = ACTIONS(592),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_EQ_EQ] = ACTIONS(592),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_SLASH_EQ] = ACTIONS(592),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_SLASH_SLASH] = ACTIONS(654),
    [anon_sym_PLUS] = ACTIONS(656),
    [anon_sym_DASH] = ACTIONS(656),
    [anon_sym_SLASH] = ACTIONS(638),
    [anon_sym_STAR_STAR] = ACTIONS(658),
    [sym_comment] = ACTIONS(34),
  },
  [428] = {
    [anon_sym_COMMA] = ACTIONS(562),
    [anon_sym_STAR] = ACTIONS(638),
    [anon_sym_PERCENT] = ACTIONS(640),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(564),
    [anon_sym_PLUS] = ACTIONS(562),
    [anon_sym_DASH] = ACTIONS(562),
    [anon_sym_SLASH] = ACTIONS(638),
    [anon_sym_STAR_STAR] = ACTIONS(658),
    [sym_comment] = ACTIONS(34),
  },
  [429] = {
    [anon_sym_COMMA] = ACTIONS(562),
    [anon_sym_STAR] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(640),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(564),
    [anon_sym_PLUS] = ACTIONS(562),
    [anon_sym_DASH] = ACTIONS(562),
    [anon_sym_SLASH] = ACTIONS(562),
    [anon_sym_STAR_STAR] = ACTIONS(564),
    [sym_comment] = ACTIONS(34),
  },
  [430] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(839),
    [sym__newline] = ACTIONS(839),
  },
  [431] = {
    [sym__block_label] = STATE(477),
    [sym_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(841),
    [sym__newline] = ACTIONS(841),
  },
  [432] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(843),
    [sym_comment] = ACTIONS(14),
  },
  [433] = {
    [sym_statement_label] = STATE(365),
    [sym_subroutine_call] = STATE(366),
    [sym_keyword_statement] = STATE(366),
    [sym_do_loop_statement] = STATE(366),
    [sym_if_statement] = STATE(366),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym_elseif_clause] = STATE(367),
    [sym_else_clause] = STATE(479),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(366),
    [sym_pointer_assignment_expression] = STATE(366),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(369),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(443),
    [aux_sym__block_if_statement_repeat1] = STATE(480),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(845),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(668),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(670),
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
  [434] = {
    [sym_elseif_clause] = STATE(367),
    [sym_else_clause] = STATE(479),
    [aux_sym__block_if_statement_repeat1] = STATE(444),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(843),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(802),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(670),
    [sym_comment] = ACTIONS(14),
  },
  [435] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(841),
    [sym__newline] = ACTIONS(841),
  },
  [436] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(847),
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
    [sym__end_of_statement] = STATE(482),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(794),
    [sym__newline] = ACTIONS(794),
  },
  [439] = {
    [sym_statement_label] = STATE(483),
    [sym_subroutine_call] = STATE(484),
    [sym_keyword_statement] = STATE(484),
    [sym_do_loop_statement] = STATE(484),
    [sym_if_statement] = STATE(484),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(484),
    [sym_pointer_assignment_expression] = STATE(484),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(485),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(486),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(849),
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
  [440] = {
    [sym__end_of_statement] = STATE(487),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(516),
    [sym__newline] = ACTIONS(516),
  },
  [441] = {
    [sym__end_of_statement] = STATE(487),
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
    [sym__semicolon] = ACTIONS(516),
    [sym__newline] = ACTIONS(516),
  },
  [442] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(366),
    [anon_sym_LPAREN] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(366),
    [anon_sym_PLUS] = ACTIONS(366),
    [anon_sym_DASH] = ACTIONS(366),
    [sym_block_label_start_expression] = ACTIONS(368),
    [sym_number_literal] = ACTIONS(368),
    [sym__double_quoted_string] = ACTIONS(368),
    [sym__single_quoted_string] = ACTIONS(368),
    [sym_boolean_literal] = ACTIONS(368),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
  },
  [443] = {
    [sym_statement_label] = STATE(365),
    [sym_subroutine_call] = STATE(366),
    [sym_keyword_statement] = STATE(366),
    [sym_do_loop_statement] = STATE(366),
    [sym_if_statement] = STATE(366),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(366),
    [sym_pointer_assignment_expression] = STATE(366),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(369),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(443),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(377),
    [anon_sym_LPAREN] = ACTIONS(380),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(383),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(389),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(401),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(407),
    [anon_sym_DASH] = ACTIONS(407),
    [sym_block_label_start_expression] = ACTIONS(410),
    [sym_number_literal] = ACTIONS(413),
    [sym__double_quoted_string] = ACTIONS(416),
    [sym__single_quoted_string] = ACTIONS(416),
    [sym_boolean_literal] = ACTIONS(413),
    [sym_identifier] = ACTIONS(419),
    [sym_comment] = ACTIONS(34),
  },
  [444] = {
    [sym_elseif_clause] = STATE(367),
    [aux_sym__block_if_statement_repeat1] = STATE(444),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(851),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(853),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(856),
    [sym_comment] = ACTIONS(14),
  },
  [445] = {
    [sym__block_label] = STATE(488),
    [sym_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(839),
    [sym__newline] = ACTIONS(839),
  },
  [446] = {
    [sym_statement_label] = STATE(365),
    [sym_subroutine_call] = STATE(366),
    [sym_keyword_statement] = STATE(366),
    [sym_do_loop_statement] = STATE(366),
    [sym_if_statement] = STATE(366),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym_elseif_clause] = STATE(367),
    [sym_else_clause] = STATE(479),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(366),
    [sym_pointer_assignment_expression] = STATE(366),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(369),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(489),
    [aux_sym__block_if_statement_repeat1] = STATE(480),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(845),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(668),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(670),
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
  [447] = {
    [anon_sym_COMMA] = ACTIONS(858),
    [anon_sym_COLON_COLON] = ACTIONS(860),
    [anon_sym_LPAREN] = ACTIONS(858),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(858),
    [anon_sym_PLUS] = ACTIONS(858),
    [anon_sym_DASH] = ACTIONS(858),
    [sym_number_literal] = ACTIONS(862),
    [sym__double_quoted_string] = ACTIONS(862),
    [sym__single_quoted_string] = ACTIONS(862),
    [sym_boolean_literal] = ACTIONS(862),
    [sym_identifier] = ACTIONS(862),
    [sym_comment] = ACTIONS(34),
  },
  [448] = {
    [aux_sym_variable_declaration_repeat2] = STATE(302),
    [anon_sym_COMMA] = ACTIONS(336),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(864),
    [sym__newline] = ACTIONS(864),
  },
  [449] = {
    [sym_argument_list] = STATE(185),
    [aux_sym_variable_declaration_repeat2] = STATE(490),
    [anon_sym_COMMA] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(338),
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
    [sym__semicolon] = ACTIONS(864),
    [sym__newline] = ACTIONS(864),
  },
  [450] = {
    [aux_sym_variable_declaration_repeat2] = STATE(490),
    [anon_sym_COMMA] = ACTIONS(336),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(864),
    [sym__newline] = ACTIONS(864),
  },
  [451] = {
    [aux_sym_variable_declaration_repeat2] = STATE(490),
    [anon_sym_COMMA] = ACTIONS(336),
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
    [sym__semicolon] = ACTIONS(864),
    [sym__newline] = ACTIONS(864),
  },
  [452] = {
    [anon_sym_STAR] = ACTIONS(776),
    [anon_sym_EQ] = ACTIONS(776),
    [anon_sym_PERCENT] = ACTIONS(776),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(776),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(776),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(776),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(780),
    [anon_sym_LT] = ACTIONS(776),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(776),
    [anon_sym_GT] = ACTIONS(776),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(776),
    [anon_sym_LT_EQ] = ACTIONS(778),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(776),
    [anon_sym_GT_EQ] = ACTIONS(778),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(776),
    [anon_sym_EQ_EQ] = ACTIONS(778),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(776),
    [anon_sym_SLASH_EQ] = ACTIONS(778),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(776),
    [anon_sym_SLASH_SLASH] = ACTIONS(778),
    [anon_sym_PLUS] = ACTIONS(776),
    [anon_sym_DASH] = ACTIONS(776),
    [anon_sym_SLASH] = ACTIONS(776),
    [anon_sym_STAR_STAR] = ACTIONS(778),
    [sym_comment] = ACTIONS(34),
  },
  [453] = {
    [anon_sym_STAR] = ACTIONS(614),
    [anon_sym_EQ] = ACTIONS(614),
    [anon_sym_PERCENT] = ACTIONS(614),
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
  [454] = {
    [aux_sym_argument_list_repeat1] = STATE(339),
    [anon_sym_COMMA] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(866),
    [sym_comment] = ACTIONS(14),
  },
  [455] = {
    [anon_sym_COMMA] = ACTIONS(771),
    [anon_sym_STAR] = ACTIONS(771),
    [anon_sym_EQ] = ACTIONS(771),
    [anon_sym_PERCENT] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(771),
    [anon_sym_LT] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(771),
    [anon_sym_GT] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(771),
    [anon_sym_LT_EQ] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(771),
    [anon_sym_GT_EQ] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(771),
    [anon_sym_EQ_EQ] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(771),
    [anon_sym_SLASH_EQ] = ACTIONS(771),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(771),
    [anon_sym_SLASH_SLASH] = ACTIONS(771),
    [anon_sym_PLUS] = ACTIONS(771),
    [anon_sym_DASH] = ACTIONS(771),
    [anon_sym_SLASH] = ACTIONS(771),
    [anon_sym_STAR_STAR] = ACTIONS(771),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(771),
    [sym__newline] = ACTIONS(771),
  },
  [456] = {
    [anon_sym_COMMA] = ACTIONS(566),
    [anon_sym_STAR] = ACTIONS(566),
    [anon_sym_PERCENT] = ACTIONS(711),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(566),
    [anon_sym_PLUS] = ACTIONS(566),
    [anon_sym_DASH] = ACTIONS(566),
    [anon_sym_SLASH] = ACTIONS(566),
    [anon_sym_STAR_STAR] = ACTIONS(725),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(566),
    [sym__newline] = ACTIONS(566),
  },
  [457] = {
    [anon_sym_COMMA] = ACTIONS(576),
    [anon_sym_STAR] = ACTIONS(576),
    [anon_sym_PERCENT] = ACTIONS(711),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_LT] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_GT] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_LT_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_GT_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_EQ_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_SLASH_EQ] = ACTIONS(576),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_SLASH_SLASH] = ACTIONS(576),
    [anon_sym_PLUS] = ACTIONS(576),
    [anon_sym_DASH] = ACTIONS(576),
    [anon_sym_SLASH] = ACTIONS(576),
    [anon_sym_STAR_STAR] = ACTIONS(576),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(576),
    [sym__newline] = ACTIONS(576),
  },
  [458] = {
    [anon_sym_COMMA] = ACTIONS(582),
    [anon_sym_STAR] = ACTIONS(709),
    [anon_sym_PERCENT] = ACTIONS(711),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(582),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(715),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [anon_sym_LT] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_GT] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_LT_EQ] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_GT_EQ] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_EQ_EQ] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_SLASH_EQ] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_SLASH_SLASH] = ACTIONS(721),
    [anon_sym_PLUS] = ACTIONS(723),
    [anon_sym_DASH] = ACTIONS(723),
    [anon_sym_SLASH] = ACTIONS(709),
    [anon_sym_STAR_STAR] = ACTIONS(725),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(582),
    [sym__newline] = ACTIONS(582),
  },
  [459] = {
    [anon_sym_COMMA] = ACTIONS(582),
    [anon_sym_STAR] = ACTIONS(709),
    [anon_sym_PERCENT] = ACTIONS(711),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(582),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(582),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [anon_sym_LT] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_GT] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_LT_EQ] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_GT_EQ] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_EQ_EQ] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_SLASH_EQ] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_SLASH_SLASH] = ACTIONS(721),
    [anon_sym_PLUS] = ACTIONS(723),
    [anon_sym_DASH] = ACTIONS(723),
    [anon_sym_SLASH] = ACTIONS(709),
    [anon_sym_STAR_STAR] = ACTIONS(725),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(582),
    [sym__newline] = ACTIONS(582),
  },
  [460] = {
    [anon_sym_COMMA] = ACTIONS(582),
    [anon_sym_STAR] = ACTIONS(709),
    [anon_sym_PERCENT] = ACTIONS(711),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(713),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(715),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [anon_sym_LT] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_GT] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_LT_EQ] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_GT_EQ] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_EQ_EQ] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_SLASH_EQ] = ACTIONS(719),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(719),
    [anon_sym_SLASH_SLASH] = ACTIONS(721),
    [anon_sym_PLUS] = ACTIONS(723),
    [anon_sym_DASH] = ACTIONS(723),
    [anon_sym_SLASH] = ACTIONS(709),
    [anon_sym_STAR_STAR] = ACTIONS(725),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(582),
    [sym__newline] = ACTIONS(582),
  },
  [461] = {
    [anon_sym_COMMA] = ACTIONS(588),
    [anon_sym_STAR] = ACTIONS(709),
    [anon_sym_PERCENT] = ACTIONS(711),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_LT] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_GT] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_LT_EQ] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_GT_EQ] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_EQ_EQ] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_SLASH_EQ] = ACTIONS(588),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_SLASH_SLASH] = ACTIONS(721),
    [anon_sym_PLUS] = ACTIONS(723),
    [anon_sym_DASH] = ACTIONS(723),
    [anon_sym_SLASH] = ACTIONS(709),
    [anon_sym_STAR_STAR] = ACTIONS(725),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(588),
    [sym__newline] = ACTIONS(588),
  },
  [462] = {
    [anon_sym_COMMA] = ACTIONS(594),
    [anon_sym_STAR] = ACTIONS(709),
    [anon_sym_PERCENT] = ACTIONS(711),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(721),
    [anon_sym_PLUS] = ACTIONS(723),
    [anon_sym_DASH] = ACTIONS(723),
    [anon_sym_SLASH] = ACTIONS(709),
    [anon_sym_STAR_STAR] = ACTIONS(725),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(594),
    [sym__newline] = ACTIONS(594),
  },
  [463] = {
    [anon_sym_COMMA] = ACTIONS(566),
    [anon_sym_STAR] = ACTIONS(709),
    [anon_sym_PERCENT] = ACTIONS(711),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(566),
    [anon_sym_PLUS] = ACTIONS(566),
    [anon_sym_DASH] = ACTIONS(566),
    [anon_sym_SLASH] = ACTIONS(709),
    [anon_sym_STAR_STAR] = ACTIONS(725),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(566),
    [sym__newline] = ACTIONS(566),
  },
  [464] = {
    [anon_sym_COMMA] = ACTIONS(566),
    [anon_sym_STAR] = ACTIONS(566),
    [anon_sym_PERCENT] = ACTIONS(711),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(566),
    [anon_sym_PLUS] = ACTIONS(566),
    [anon_sym_DASH] = ACTIONS(566),
    [anon_sym_SLASH] = ACTIONS(566),
    [anon_sym_STAR_STAR] = ACTIONS(566),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(566),
    [sym__newline] = ACTIONS(566),
  },
  [465] = {
    [ts_builtin_sym_end] = ACTIONS(868),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(868),
    [sym_comment] = ACTIONS(14),
  },
  [466] = {
    [anon_sym_COMMA] = ACTIONS(562),
    [anon_sym_STAR] = ACTIONS(562),
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(735),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(564),
    [anon_sym_PLUS] = ACTIONS(562),
    [anon_sym_DASH] = ACTIONS(562),
    [anon_sym_SLASH] = ACTIONS(562),
    [anon_sym_STAR_STAR] = ACTIONS(753),
    [sym_comment] = ACTIONS(34),
  },
  [467] = {
    [anon_sym_COMMA] = ACTIONS(572),
    [anon_sym_STAR] = ACTIONS(572),
    [anon_sym_RPAREN] = ACTIONS(572),
    [anon_sym_PERCENT] = ACTIONS(735),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(576),
    [anon_sym_LT] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_GT] = ACTIONS(572),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_LT_EQ] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_GT_EQ] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_EQ_EQ] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_SLASH_EQ] = ACTIONS(574),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(572),
    [anon_sym_SLASH_SLASH] = ACTIONS(574),
    [anon_sym_PLUS] = ACTIONS(572),
    [anon_sym_DASH] = ACTIONS(572),
    [anon_sym_SLASH] = ACTIONS(572),
    [anon_sym_STAR_STAR] = ACTIONS(574),
    [sym_comment] = ACTIONS(34),
  },
  [468] = {
    [anon_sym_COMMA] = ACTIONS(578),
    [anon_sym_STAR] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(578),
    [anon_sym_PERCENT] = ACTIONS(735),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(739),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [anon_sym_LT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_GT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_LT_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_GT_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_EQ_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_SLASH_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_SLASH_SLASH] = ACTIONS(749),
    [anon_sym_PLUS] = ACTIONS(751),
    [anon_sym_DASH] = ACTIONS(751),
    [anon_sym_SLASH] = ACTIONS(733),
    [anon_sym_STAR_STAR] = ACTIONS(753),
    [sym_comment] = ACTIONS(34),
  },
  [469] = {
    [anon_sym_COMMA] = ACTIONS(578),
    [anon_sym_STAR] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(578),
    [anon_sym_PERCENT] = ACTIONS(735),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [anon_sym_LT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_GT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_LT_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_GT_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_EQ_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_SLASH_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_SLASH_SLASH] = ACTIONS(749),
    [anon_sym_PLUS] = ACTIONS(751),
    [anon_sym_DASH] = ACTIONS(751),
    [anon_sym_SLASH] = ACTIONS(733),
    [anon_sym_STAR_STAR] = ACTIONS(753),
    [sym_comment] = ACTIONS(34),
  },
  [470] = {
    [anon_sym_COMMA] = ACTIONS(578),
    [anon_sym_STAR] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(578),
    [anon_sym_PERCENT] = ACTIONS(735),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(737),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(739),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(578),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(582),
    [anon_sym_LT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_GT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_LT_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_GT_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_EQ_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_SLASH_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_SLASH_SLASH] = ACTIONS(749),
    [anon_sym_PLUS] = ACTIONS(751),
    [anon_sym_DASH] = ACTIONS(751),
    [anon_sym_SLASH] = ACTIONS(733),
    [anon_sym_STAR_STAR] = ACTIONS(753),
    [sym_comment] = ACTIONS(34),
  },
  [471] = {
    [anon_sym_COMMA] = ACTIONS(584),
    [anon_sym_STAR] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(584),
    [anon_sym_PERCENT] = ACTIONS(735),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(588),
    [anon_sym_LT] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_GT] = ACTIONS(584),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_LT_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_GT_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_EQ_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_SLASH_EQ] = ACTIONS(586),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(584),
    [anon_sym_SLASH_SLASH] = ACTIONS(749),
    [anon_sym_PLUS] = ACTIONS(751),
    [anon_sym_DASH] = ACTIONS(751),
    [anon_sym_SLASH] = ACTIONS(733),
    [anon_sym_STAR_STAR] = ACTIONS(753),
    [sym_comment] = ACTIONS(34),
  },
  [472] = {
    [anon_sym_COMMA] = ACTIONS(590),
    [anon_sym_STAR] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(590),
    [anon_sym_PERCENT] = ACTIONS(735),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(594),
    [anon_sym_LT] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_GT] = ACTIONS(590),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_LT_EQ] = ACTIONS(592),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_GT_EQ] = ACTIONS(592),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_EQ_EQ] = ACTIONS(592),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_SLASH_EQ] = ACTIONS(592),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(590),
    [anon_sym_SLASH_SLASH] = ACTIONS(749),
    [anon_sym_PLUS] = ACTIONS(751),
    [anon_sym_DASH] = ACTIONS(751),
    [anon_sym_SLASH] = ACTIONS(733),
    [anon_sym_STAR_STAR] = ACTIONS(753),
    [sym_comment] = ACTIONS(34),
  },
  [473] = {
    [anon_sym_COMMA] = ACTIONS(562),
    [anon_sym_STAR] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(735),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(564),
    [anon_sym_PLUS] = ACTIONS(562),
    [anon_sym_DASH] = ACTIONS(562),
    [anon_sym_SLASH] = ACTIONS(733),
    [anon_sym_STAR_STAR] = ACTIONS(753),
    [sym_comment] = ACTIONS(34),
  },
  [474] = {
    [anon_sym_COMMA] = ACTIONS(562),
    [anon_sym_STAR] = ACTIONS(562),
    [anon_sym_RPAREN] = ACTIONS(562),
    [anon_sym_PERCENT] = ACTIONS(735),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(564),
    [anon_sym_PLUS] = ACTIONS(562),
    [anon_sym_DASH] = ACTIONS(562),
    [anon_sym_SLASH] = ACTIONS(562),
    [anon_sym_STAR_STAR] = ACTIONS(564),
    [sym_comment] = ACTIONS(34),
  },
  [475] = {
    [anon_sym_COMMA] = ACTIONS(870),
    [anon_sym_STAR] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(870),
    [anon_sym_PERCENT] = ACTIONS(735),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(737),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(739),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(741),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(743),
    [anon_sym_LT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_GT] = ACTIONS(745),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_LT_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_GT_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_EQ_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_SLASH_EQ] = ACTIONS(747),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(745),
    [anon_sym_SLASH_SLASH] = ACTIONS(749),
    [anon_sym_PLUS] = ACTIONS(751),
    [anon_sym_DASH] = ACTIONS(751),
    [anon_sym_SLASH] = ACTIONS(733),
    [anon_sym_STAR_STAR] = ACTIONS(753),
    [sym_comment] = ACTIONS(34),
  },
  [476] = {
    [sym__expression] = STATE(492),
    [sym_parenthesized_expression] = STATE(60),
    [sym_derived_type_member_expression] = STATE(60),
    [sym_logical_expression] = STATE(60),
    [sym_relational_expression] = STATE(60),
    [sym_concatenation_expression] = STATE(60),
    [sym_math_expression] = STATE(60),
    [sym_call_expression] = STATE(60),
    [sym_complex_literal] = STATE(60),
    [sym_string_literal] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [sym_number_literal] = ACTIONS(116),
    [sym__double_quoted_string] = ACTIONS(118),
    [sym__single_quoted_string] = ACTIONS(118),
    [sym_boolean_literal] = ACTIONS(116),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(34),
  },
  [477] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(872),
    [sym__newline] = ACTIONS(872),
  },
  [478] = {
    [sym__block_label] = STATE(493),
    [sym_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(872),
    [sym__newline] = ACTIONS(872),
  },
  [479] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(874),
    [sym_comment] = ACTIONS(14),
  },
  [480] = {
    [sym_elseif_clause] = STATE(367),
    [sym_else_clause] = STATE(495),
    [aux_sym__block_if_statement_repeat1] = STATE(444),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(874),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(802),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(670),
    [sym_comment] = ACTIONS(14),
  },
  [481] = {
    [sym__block_label] = STATE(496),
    [sym__end_of_statement] = STATE(497),
    [sym_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(516),
    [sym__newline] = ACTIONS(516),
  },
  [482] = {
    [sym_statement_label] = STATE(483),
    [sym_subroutine_call] = STATE(484),
    [sym_keyword_statement] = STATE(484),
    [sym_do_loop_statement] = STATE(484),
    [sym_if_statement] = STATE(484),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(484),
    [sym_pointer_assignment_expression] = STATE(484),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(485),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(498),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(876),
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
  [483] = {
    [sym_subroutine_call] = STATE(499),
    [sym_keyword_statement] = STATE(499),
    [sym_do_loop_statement] = STATE(499),
    [sym_if_statement] = STATE(499),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(499),
    [sym_pointer_assignment_expression] = STATE(499),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(500),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
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
  [484] = {
    [sym__end_of_statement] = STATE(501),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(794),
    [sym__newline] = ACTIONS(794),
  },
  [485] = {
    [sym__end_of_statement] = STATE(501),
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
    [sym__semicolon] = ACTIONS(794),
    [sym__newline] = ACTIONS(794),
  },
  [486] = {
    [sym_statement_label] = STATE(483),
    [sym_subroutine_call] = STATE(484),
    [sym_keyword_statement] = STATE(484),
    [sym_do_loop_statement] = STATE(484),
    [sym_if_statement] = STATE(484),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(484),
    [sym_pointer_assignment_expression] = STATE(484),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(485),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(502),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(876),
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
  [487] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(558),
    [anon_sym_LPAREN] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(558),
    [anon_sym_PLUS] = ACTIONS(558),
    [anon_sym_DASH] = ACTIONS(558),
    [sym_block_label_start_expression] = ACTIONS(560),
    [sym_number_literal] = ACTIONS(560),
    [sym__double_quoted_string] = ACTIONS(560),
    [sym__single_quoted_string] = ACTIONS(560),
    [sym_boolean_literal] = ACTIONS(560),
    [sym_identifier] = ACTIONS(560),
    [sym_comment] = ACTIONS(34),
  },
  [488] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(878),
    [sym__newline] = ACTIONS(878),
  },
  [489] = {
    [sym_statement_label] = STATE(365),
    [sym_subroutine_call] = STATE(366),
    [sym_keyword_statement] = STATE(366),
    [sym_do_loop_statement] = STATE(366),
    [sym_if_statement] = STATE(366),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym_elseif_clause] = STATE(367),
    [sym_else_clause] = STATE(495),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(366),
    [sym_pointer_assignment_expression] = STATE(366),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(369),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(443),
    [aux_sym__block_if_statement_repeat1] = STATE(503),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(880),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(668),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(670),
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
  [490] = {
    [aux_sym_variable_declaration_repeat2] = STATE(302),
    [anon_sym_COMMA] = ACTIONS(336),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(882),
    [sym__newline] = ACTIONS(882),
  },
  [491] = {
    [anon_sym_STAR] = ACTIONS(767),
    [anon_sym_EQ] = ACTIONS(767),
    [anon_sym_PERCENT] = ACTIONS(767),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(767),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(767),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(767),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(771),
    [anon_sym_LT] = ACTIONS(767),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(767),
    [anon_sym_GT] = ACTIONS(767),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(767),
    [anon_sym_LT_EQ] = ACTIONS(769),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(767),
    [anon_sym_GT_EQ] = ACTIONS(769),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(767),
    [anon_sym_EQ_EQ] = ACTIONS(769),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(767),
    [anon_sym_SLASH_EQ] = ACTIONS(769),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(767),
    [anon_sym_SLASH_SLASH] = ACTIONS(769),
    [anon_sym_PLUS] = ACTIONS(767),
    [anon_sym_DASH] = ACTIONS(767),
    [anon_sym_SLASH] = ACTIONS(767),
    [anon_sym_STAR_STAR] = ACTIONS(769),
    [sym_comment] = ACTIONS(34),
  },
  [492] = {
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(278),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(280),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(282),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(284),
    [anon_sym_LT] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_GT] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_LT_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_GT_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_EQ_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_SLASH_EQ] = ACTIONS(286),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_SLASH_SLASH] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_DASH] = ACTIONS(290),
    [anon_sym_SLASH] = ACTIONS(276),
    [anon_sym_STAR_STAR] = ACTIONS(292),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(884),
    [sym__newline] = ACTIONS(884),
  },
  [493] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(886),
    [sym__newline] = ACTIONS(886),
  },
  [494] = {
    [sym__block_label] = STATE(504),
    [sym_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(886),
    [sym__newline] = ACTIONS(886),
  },
  [495] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(888),
    [sym_comment] = ACTIONS(14),
  },
  [496] = {
    [sym__end_of_statement] = STATE(506),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(516),
    [sym__newline] = ACTIONS(516),
  },
  [497] = {
    [sym_statement_label] = STATE(365),
    [sym_subroutine_call] = STATE(366),
    [sym_keyword_statement] = STATE(366),
    [sym_do_loop_statement] = STATE(366),
    [sym_if_statement] = STATE(366),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(366),
    [sym_pointer_assignment_expression] = STATE(366),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(369),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(507),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(890),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(890),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(890),
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
  [498] = {
    [sym_statement_label] = STATE(483),
    [sym_subroutine_call] = STATE(484),
    [sym_keyword_statement] = STATE(484),
    [sym_do_loop_statement] = STATE(484),
    [sym_if_statement] = STATE(484),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(484),
    [sym_pointer_assignment_expression] = STATE(484),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(485),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(502),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(892),
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
  [499] = {
    [sym__end_of_statement] = STATE(508),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(794),
    [sym__newline] = ACTIONS(794),
  },
  [500] = {
    [sym__end_of_statement] = STATE(508),
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
    [sym__semicolon] = ACTIONS(794),
    [sym__newline] = ACTIONS(794),
  },
  [501] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(366),
    [anon_sym_LPAREN] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(366),
    [anon_sym_PLUS] = ACTIONS(366),
    [anon_sym_DASH] = ACTIONS(366),
    [sym_block_label_start_expression] = ACTIONS(368),
    [sym_number_literal] = ACTIONS(368),
    [sym__double_quoted_string] = ACTIONS(368),
    [sym__single_quoted_string] = ACTIONS(368),
    [sym_boolean_literal] = ACTIONS(368),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
  },
  [502] = {
    [sym_statement_label] = STATE(483),
    [sym_subroutine_call] = STATE(484),
    [sym_keyword_statement] = STATE(484),
    [sym_do_loop_statement] = STATE(484),
    [sym_if_statement] = STATE(484),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(484),
    [sym_pointer_assignment_expression] = STATE(484),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(485),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(502),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(377),
    [anon_sym_LPAREN] = ACTIONS(380),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(383),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(389),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(401),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(407),
    [anon_sym_DASH] = ACTIONS(407),
    [sym_block_label_start_expression] = ACTIONS(410),
    [sym_number_literal] = ACTIONS(413),
    [sym__double_quoted_string] = ACTIONS(416),
    [sym__single_quoted_string] = ACTIONS(416),
    [sym_boolean_literal] = ACTIONS(413),
    [sym_identifier] = ACTIONS(419),
    [sym_comment] = ACTIONS(34),
  },
  [503] = {
    [sym_elseif_clause] = STATE(367),
    [sym_else_clause] = STATE(509),
    [aux_sym__block_if_statement_repeat1] = STATE(444),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(888),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(802),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(670),
    [sym_comment] = ACTIONS(14),
  },
  [504] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(894),
    [sym__newline] = ACTIONS(894),
  },
  [505] = {
    [sym__block_label] = STATE(510),
    [sym_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(894),
    [sym__newline] = ACTIONS(894),
  },
  [506] = {
    [sym_statement_label] = STATE(365),
    [sym_subroutine_call] = STATE(366),
    [sym_keyword_statement] = STATE(366),
    [sym_do_loop_statement] = STATE(366),
    [sym_if_statement] = STATE(366),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(366),
    [sym_pointer_assignment_expression] = STATE(366),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(369),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(511),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(896),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(896),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(896),
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
  [507] = {
    [sym_statement_label] = STATE(365),
    [sym_subroutine_call] = STATE(366),
    [sym_keyword_statement] = STATE(366),
    [sym_do_loop_statement] = STATE(366),
    [sym_if_statement] = STATE(366),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(366),
    [sym_pointer_assignment_expression] = STATE(366),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(369),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(443),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(896),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(896),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(896),
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
  [508] = {
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(558),
    [anon_sym_LPAREN] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(558),
    [anon_sym_PLUS] = ACTIONS(558),
    [anon_sym_DASH] = ACTIONS(558),
    [sym_block_label_start_expression] = ACTIONS(560),
    [sym_number_literal] = ACTIONS(560),
    [sym__double_quoted_string] = ACTIONS(560),
    [sym__single_quoted_string] = ACTIONS(560),
    [sym_boolean_literal] = ACTIONS(560),
    [sym_identifier] = ACTIONS(560),
    [sym_comment] = ACTIONS(34),
  },
  [509] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(898),
    [sym_comment] = ACTIONS(14),
  },
  [510] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(900),
    [sym__newline] = ACTIONS(900),
  },
  [511] = {
    [sym_statement_label] = STATE(365),
    [sym_subroutine_call] = STATE(366),
    [sym_keyword_statement] = STATE(366),
    [sym_do_loop_statement] = STATE(366),
    [sym_if_statement] = STATE(366),
    [sym__inline_if_statement] = STATE(34),
    [sym__block_if_statement] = STATE(34),
    [sym__expression] = STATE(35),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(366),
    [sym_pointer_assignment_expression] = STATE(366),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(369),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(443),
    [aux_sym_SLASH_BSLASHd_PLUS_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(902),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(902),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(902),
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
  [512] = {
    [sym__block_label] = STATE(513),
    [sym_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(900),
    [sym__newline] = ACTIONS(900),
  },
  [513] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(904),
    [sym__newline] = ACTIONS(904),
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
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_intrinsic_type, 1, .fragile = true),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 1, .fragile = true),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 1, .fragile = true),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_label, 1),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_label, 1),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(53),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_keyword_statement, 1),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [122] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [124] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 1),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 1),
  [150] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 1),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(82),
  [162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(83),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(84),
  [166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(85),
  [168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(91),
  [170] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 1),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(99),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(102),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [198] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(106),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [202] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(110),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__end_of_statement, 1),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [222] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(118),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_intrinsic_type, 2),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 2),
  [228] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 2),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [246] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(131),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [260] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subroutine_call, 2),
  [262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_keyword_statement, 2),
  [264] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(138),
  [266] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(139),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(57),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
  [274] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [276] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(143),
  [278] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(144),
  [280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(145),
  [282] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(146),
  [284] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(147),
  [286] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(148),
  [288] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(149),
  [290] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(150),
  [292] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(151),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_logical_expression, 2),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 2),
  [304] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 2),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 2),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [310] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable_declaration_statement, 2),
  [320] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable_declaration_statement, 2),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(174),
  [330] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(177),
  [332] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(178),
  [334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(180),
  [336] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(183),
  [338] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(184),
  [340] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(188),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(191),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(192),
  [354] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(192),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2),
  [368] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2),
  [372] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(13),
  [375] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [377] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(14),
  [380] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(15),
  [383] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(16),
  [386] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(17),
  [389] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(18),
  [392] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(19),
  [395] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(20),
  [398] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(21),
  [401] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(22),
  [404] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(23),
  [407] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(24),
  [410] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(25),
  [413] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(26),
  [416] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(27),
  [419] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(28),
  [422] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(209),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [426] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(211),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_intrinsic_type, 3),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 3),
  [434] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 3),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assumed_size, 1),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [442] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 1),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(216),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
  [464] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(225),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(226),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(227),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(219),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(221),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [484] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(232),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 3),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [496] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(248),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(249),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(262),
  [510] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(264),
  [512] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 3),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(270),
  [516] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(271),
  [518] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(276),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(281),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_qualifier, 1),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 1),
  [530] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 1),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(285),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
  [540] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(287),
  [542] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(293),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
  [550] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(296),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(299),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 3),
  [560] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 3),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 3),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [566] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [568] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [570] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [576] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_logical_expression, 3),
  [580] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 3),
  [582] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 3),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [588] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [594] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [598] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(316),
  [600] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(317),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(318),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(319),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(320),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 2),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(322),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(323),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [618] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [620] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(341),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(343),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(343),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(345),
  [634] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(345),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(348),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(349),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(350),
  [642] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(351),
  [644] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(352),
  [646] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(353),
  [648] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(353),
  [650] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(354),
  [652] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(354),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(355),
  [656] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(356),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(357),
  [660] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 4),
  [662] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(359),
  [664] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_label, 1, .alias_sequence_id = 1),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(362),
  [668] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(363),
  [670] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(364),
  [672] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__inline_if_statement, 4),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(374),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(376),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_qualifier, 2),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 2),
  [682] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 2),
  [684] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(377),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(377),
  [688] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(379),
  [690] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 4),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(383),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(385),
  [696] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(385),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(386),
  [700] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat2, 2),
  [702] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(389),
  [704] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(389),
  [706] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat2, 2), SHIFT_REPEAT(183),
  [709] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(393),
  [711] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(394),
  [713] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(395),
  [715] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(396),
  [717] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(397),
  [719] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(398),
  [721] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(399),
  [723] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(400),
  [725] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(401),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 8),
  [729] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(403),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 3),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(406),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(407),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(408),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(409),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(410),
  [743] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(410),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(411),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(411),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(412),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(413),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(414),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assumed_shape, 1),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_keyword_argument, 3),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_keyword_argument, 3),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(416),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [771] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [773] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(219),
  [776] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_complex_literal, 5),
  [778] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [780] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [782] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(417),
  [784] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(418),
  [786] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(419),
  [788] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 5),
  [790] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(431),
  [792] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 5),
  [794] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(437),
  [796] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__block_if_statement_repeat1, 1),
  [798] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__block_if_statement_repeat1, 1),
  [800] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(431),
  [802] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
  [804] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__inline_if_statement, 5),
  [806] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(445),
  [808] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(447),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [814] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [816] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 5),
  [818] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(449),
  [820] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_declaration_repeat1, 2), SHIFT_REPEAT(285),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(452),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(453),
  [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(453),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(455),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 9),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 4),
  [835] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(476),
  [837] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_loop_control_expression, 5),
  [839] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 6),
  [841] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 6),
  [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(478),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(478),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(481),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2),
  [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__block_if_statement_repeat1, 2),
  [853] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__block_if_statement_repeat1, 2), SHIFT_REPEAT(363),
  [856] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__block_if_statement_repeat1, 2),
  [858] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_qualifier, 4),
  [860] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 4),
  [862] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 4),
  [864] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 6),
  [866] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(491),
  [868] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 10),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 5),
  [872] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 7),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(494),
  [876] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
  [878] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 7),
  [880] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(494),
  [882] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 7),
  [884] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_loop_control_expression, 7),
  [886] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 8),
  [888] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(505),
  [890] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 4),
  [892] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 4),
  [894] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 9),
  [896] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 5),
  [898] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(512),
  [900] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 10),
  [902] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 6),
  [904] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 11),
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
