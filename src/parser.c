#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 471
#define SYMBOL_COUNT 102
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
  sym_statement_label = 13,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH = 14,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH = 15,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH = 16,
  aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH = 17,
  aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH = 18,
  aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH = 19,
  aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH = 20,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH = 21,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH = 22,
  aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH = 23,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH = 24,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH = 25,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH = 26,
  anon_sym_LPAREN = 27,
  anon_sym_RPAREN = 28,
  anon_sym_EQ = 29,
  anon_sym_EQ_GT = 30,
  anon_sym_PERCENT = 31,
  aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH = 32,
  aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH = 33,
  aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH = 34,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH = 35,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 36,
  anon_sym_LT = 37,
  aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 38,
  anon_sym_GT = 39,
  aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 40,
  anon_sym_LT_EQ = 41,
  aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 42,
  anon_sym_GT_EQ = 43,
  aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 44,
  anon_sym_EQ_EQ = 45,
  aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH = 46,
  anon_sym_SLASH_EQ = 47,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 48,
  anon_sym_SLASH_SLASH = 49,
  anon_sym_PLUS = 50,
  anon_sym_DASH = 51,
  anon_sym_STAR = 52,
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
  sym_subroutine_call = 69,
  sym_keyword_statement = 70,
  sym_do_loop_statement = 71,
  sym_if_statement = 72,
  sym__inline_if_statement = 73,
  sym__block_if_statement = 74,
  sym_elseif_clause = 75,
  sym_else_clause = 76,
  sym__expression = 77,
  sym_parenthesized_expression = 78,
  sym_assignment_expression = 79,
  sym_pointer_assignment_expression = 80,
  sym_derived_type_member_expression = 81,
  sym_logical_expression = 82,
  sym_relational_expression = 83,
  sym_concatenation_expression = 84,
  sym_math_expression = 85,
  sym_call_expression = 86,
  sym_argument_list = 87,
  sym_keyword_argument = 88,
  sym_array_slice = 89,
  sym_assumed_size_dimension = 90,
  sym__block_label = 91,
  sym_loop_control_expression = 92,
  sym_complex_literal = 93,
  sym_string_literal = 94,
  sym__end_of_statement = 95,
  aux_sym_translation_unit_repeat1 = 96,
  aux_sym_program_block_repeat1 = 97,
  aux_sym_program_block_repeat2 = 98,
  aux_sym_variable_declaration_repeat1 = 99,
  aux_sym__block_if_statement_repeat1 = 100,
  aux_sym_argument_list_repeat1 = 101,
  alias_sym_block_label = 102,
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
  [sym_assumed_size_dimension] = "assumed_size_dimension",
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
  [sym_assumed_size_dimension] = {
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
      ACCEPT_TOKEN(sym_statement_label);
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
      ACCEPT_TOKEN(sym_statement_label);
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
      ACCEPT_TOKEN(sym_statement_label);
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
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == ':')
        ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(376);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(377);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(392);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(394);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(397);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 375:
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
    case 376:
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
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == ':')
        ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(376);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(377);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(390);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(391);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(392);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(393);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(394);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(397);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(378);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(384);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(252);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(256);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(378);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(384);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(378);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(384);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(385);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(378);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(384);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(378);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(384);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(389);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(43);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(378);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(384);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(378);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(384);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 396:
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
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(378);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(384);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(398);
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
        ADVANCE(399);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(400);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(401);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(403);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(405);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(406);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(407);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(365);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(398);
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
        ADVANCE(399);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(400);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(401);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(403);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(405);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(335);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(406);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(355);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(407);
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
        ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 400:
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
    case 401:
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
        ADVANCE(402);
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
    case 402:
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
    case 403:
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
        ADVANCE(404);
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
    case 404:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 405:
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
    case 406:
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
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(408);
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
    case 408:
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
    case 409:
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
        ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(411);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(377);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(392);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(394);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(397);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 410:
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
    case 411:
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
        ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(411);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(377);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(390);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(391);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(392);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(393);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(394);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(397);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 412:
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
        SKIP(412);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 413:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(414);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(416);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(418);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(413);
      END_STATE();
    case 414:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(415);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 416:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(417);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 418:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(419);
      END_STATE();
    case 419:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(420);
      END_STATE();
    case 420:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 422:
      if (lookahead == '\n')
        SKIP(422);
      if (lookahead == '!')
        ADVANCE(423);
      if (lookahead == '%')
        ADVANCE(452);
      if (lookahead == '(')
        ADVANCE(481);
      if (lookahead == ')')
        ADVANCE(482);
      if (lookahead == '*')
        ADVANCE(483);
      if (lookahead == '+')
        ADVANCE(484);
      if (lookahead == ',')
        ADVANCE(485);
      if (lookahead == '-')
        ADVANCE(486);
      if (lookahead == '/')
        ADVANCE(487);
      if (lookahead == ':')
        ADVANCE(488);
      if (lookahead == '<')
        ADVANCE(489);
      if (lookahead == '=')
        ADVANCE(490);
      if (lookahead == '>')
        ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(492);
      if (lookahead != 0)
        ADVANCE(506);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(424);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(428);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(433);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(438);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(443);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(427);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(432);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(431);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(434);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(435);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(437);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(439);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(440);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(442);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(448);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(447);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(451);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(457);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(462);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(467);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(472);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(478);
      END_STATE();
    case 453:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(454);
      END_STATE();
    case 454:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(455);
      END_STATE();
    case 455:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(456);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH);
      END_STATE();
    case 457:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(458);
      END_STATE();
    case 458:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(461);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(460);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      END_STATE();
    case 462:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(463);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(465);
      END_STATE();
    case 463:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(464);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 465:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(466);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 467:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(468);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(470);
      END_STATE();
    case 468:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(469);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 470:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(471);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 472:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(473);
      END_STATE();
    case 473:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(477);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(475);
      END_STATE();
    case 475:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(476);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 478:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(479);
      END_STATE();
    case 479:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(480);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(457);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(462);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(467);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(472);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(478);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(457);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(462);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(467);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(472);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(478);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(457);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(462);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(467);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(472);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(478);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(457);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(462);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(467);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(472);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(478);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(457);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(462);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(467);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(472);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(478);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(457);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(462);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(467);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(472);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(478);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(48);
      if (lookahead == '=')
        ADVANCE(49);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(457);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(462);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(467);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(472);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(478);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(457);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(462);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(467);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(472);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(478);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(54);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(457);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(462);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(467);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(472);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(478);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(56);
      if (lookahead == '>')
        ADVANCE(57);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(457);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(462);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(467);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(472);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(478);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(59);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(457);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(462);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(467);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(472);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(478);
      END_STATE();
    case 492:
      if (lookahead == '\n')
        SKIP(422);
      if (lookahead == '!')
        ADVANCE(423);
      if (lookahead == '%')
        ADVANCE(452);
      if (lookahead == '(')
        ADVANCE(481);
      if (lookahead == ')')
        ADVANCE(482);
      if (lookahead == '*')
        ADVANCE(483);
      if (lookahead == '+')
        ADVANCE(484);
      if (lookahead == ',')
        ADVANCE(485);
      if (lookahead == '-')
        ADVANCE(486);
      if (lookahead == '/')
        ADVANCE(487);
      if (lookahead == ':')
        ADVANCE(488);
      if (lookahead == '<')
        ADVANCE(489);
      if (lookahead == '=')
        ADVANCE(490);
      if (lookahead == '>')
        ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(492);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(493);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(495);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(496);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(499);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(502);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(505);
      if (lookahead != 0)
        ADVANCE(506);
      END_STATE();
    case 493:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(457);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(462);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(467);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(494);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(478);
      END_STATE();
    case 494:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(455);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(473);
      END_STATE();
    case 495:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(457);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(462);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(467);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(472);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(478);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(458);
      END_STATE();
    case 496:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(497);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(462);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(467);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(472);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(478);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(465);
      END_STATE();
    case 497:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(464);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(461);
      END_STATE();
    case 499:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(500);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(462);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(467);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(472);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(478);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(470);
      END_STATE();
    case 500:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(469);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(461);
      END_STATE();
    case 502:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(503);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(462);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(467);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(472);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(478);
      END_STATE();
    case 503:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(477);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(461);
      END_STATE();
    case 505:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(457);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(462);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(467);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(472);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(478);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(479);
      END_STATE();
    case 506:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(457);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(462);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(467);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(472);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(478);
      END_STATE();
    case 507:
      if (lookahead == '\n')
        ADVANCE(203);
      if (lookahead == '!')
        ADVANCE(423);
      if (lookahead == '%')
        ADVANCE(452);
      if (lookahead == '(')
        ADVANCE(481);
      if (lookahead == '*')
        ADVANCE(483);
      if (lookahead == '+')
        ADVANCE(484);
      if (lookahead == ',')
        ADVANCE(485);
      if (lookahead == '-')
        ADVANCE(486);
      if (lookahead == '/')
        ADVANCE(487);
      if (lookahead == ';')
        ADVANCE(508);
      if (lookahead == '<')
        ADVANCE(489);
      if (lookahead == '=')
        ADVANCE(490);
      if (lookahead == '>')
        ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(509);
      if (lookahead != 0)
        ADVANCE(506);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__semicolon);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(457);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(462);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(467);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(472);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(478);
      END_STATE();
    case 509:
      if (lookahead == '\n')
        ADVANCE(203);
      if (lookahead == '!')
        ADVANCE(423);
      if (lookahead == '%')
        ADVANCE(452);
      if (lookahead == '(')
        ADVANCE(481);
      if (lookahead == '*')
        ADVANCE(483);
      if (lookahead == '+')
        ADVANCE(484);
      if (lookahead == ',')
        ADVANCE(485);
      if (lookahead == '-')
        ADVANCE(486);
      if (lookahead == '/')
        ADVANCE(487);
      if (lookahead == ';')
        ADVANCE(508);
      if (lookahead == '<')
        ADVANCE(489);
      if (lookahead == '=')
        ADVANCE(490);
      if (lookahead == '>')
        ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(509);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(493);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(495);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(496);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(499);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(502);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(505);
      if (lookahead != 0)
        ADVANCE(506);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(510);
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
        ADVANCE(511);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(400);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(401);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(403);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(332);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(406);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(407);
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
    case 511:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(510);
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
        ADVANCE(511);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(400);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(401);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(403);
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
        ADVANCE(406);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(355);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(407);
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
    case 512:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(45);
      if (lookahead == '=')
        ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(512);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(514);
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
        ADVANCE(515);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(400);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(401);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(403);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(516);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(406);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(407);
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
    case 515:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(514);
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
        ADVANCE(515);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(400);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(401);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(403);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(516);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(335);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(406);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(355);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(407);
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
    case 516:
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
        ADVANCE(517);
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
    case 517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(518);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(519);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 519:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(519);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(520);
      END_STATE();
    case 520:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(521);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(524);
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
        ADVANCE(525);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(400);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(401);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(403);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(405);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(406);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(407);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(365);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(530);
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
    case 525:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(524);
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
        ADVANCE(525);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(400);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(401);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(403);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(405);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(335);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(406);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(355);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(407);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(365);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(526);
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
    case 526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(527);
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
    case 527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(527);
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
    case 531:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(531);
      if (lookahead == '!')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == ')')
        ADVANCE(532);
      if (lookahead == '*')
        ADVANCE(533);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == ',')
        ADVANCE(534);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == ':')
        ADVANCE(535);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(536);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(377);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(392);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(394);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(397);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 532:
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
    case 533:
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
    case 534:
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
    case 535:
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
    case 536:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(531);
      if (lookahead == '!')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == ')')
        ADVANCE(532);
      if (lookahead == '*')
        ADVANCE(533);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == ',')
        ADVANCE(534);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == ':')
        ADVANCE(535);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(536);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(377);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(390);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(391);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(392);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(393);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(394);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(396);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(397);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 537:
      if (lookahead == '\n')
        SKIP(537);
      if (lookahead == '!')
        ADVANCE(423);
      if (lookahead == '%')
        ADVANCE(452);
      if (lookahead == '(')
        ADVANCE(481);
      if (lookahead == ')')
        ADVANCE(482);
      if (lookahead == '*')
        ADVANCE(483);
      if (lookahead == '+')
        ADVANCE(484);
      if (lookahead == ',')
        ADVANCE(485);
      if (lookahead == '-')
        ADVANCE(486);
      if (lookahead == '/')
        ADVANCE(487);
      if (lookahead == ':')
        ADVANCE(488);
      if (lookahead == '<')
        ADVANCE(489);
      if (lookahead == '=')
        ADVANCE(538);
      if (lookahead == '>')
        ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(539);
      if (lookahead != 0)
        ADVANCE(506);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(56);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(453);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(457);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(462);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(467);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(472);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(478);
      END_STATE();
    case 539:
      if (lookahead == '\n')
        SKIP(537);
      if (lookahead == '!')
        ADVANCE(423);
      if (lookahead == '%')
        ADVANCE(452);
      if (lookahead == '(')
        ADVANCE(481);
      if (lookahead == ')')
        ADVANCE(482);
      if (lookahead == '*')
        ADVANCE(483);
      if (lookahead == '+')
        ADVANCE(484);
      if (lookahead == ',')
        ADVANCE(485);
      if (lookahead == '-')
        ADVANCE(486);
      if (lookahead == '/')
        ADVANCE(487);
      if (lookahead == ':')
        ADVANCE(488);
      if (lookahead == '<')
        ADVANCE(489);
      if (lookahead == '=')
        ADVANCE(538);
      if (lookahead == '>')
        ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(539);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(493);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(495);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(496);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(499);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(502);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(505);
      if (lookahead != 0)
        ADVANCE(506);
      END_STATE();
    case 540:
      if (lookahead == '\n')
        ADVANCE(203);
      if (lookahead == '!')
        ADVANCE(423);
      if (lookahead == '%')
        ADVANCE(452);
      if (lookahead == '(')
        ADVANCE(481);
      if (lookahead == '*')
        ADVANCE(483);
      if (lookahead == '+')
        ADVANCE(484);
      if (lookahead == ',')
        ADVANCE(485);
      if (lookahead == '-')
        ADVANCE(486);
      if (lookahead == '/')
        ADVANCE(487);
      if (lookahead == ';')
        ADVANCE(508);
      if (lookahead == '<')
        ADVANCE(489);
      if (lookahead == '=')
        ADVANCE(538);
      if (lookahead == '>')
        ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(541);
      if (lookahead != 0)
        ADVANCE(506);
      END_STATE();
    case 541:
      if (lookahead == '\n')
        ADVANCE(203);
      if (lookahead == '!')
        ADVANCE(423);
      if (lookahead == '%')
        ADVANCE(452);
      if (lookahead == '(')
        ADVANCE(481);
      if (lookahead == '*')
        ADVANCE(483);
      if (lookahead == '+')
        ADVANCE(484);
      if (lookahead == ',')
        ADVANCE(485);
      if (lookahead == '-')
        ADVANCE(486);
      if (lookahead == '/')
        ADVANCE(487);
      if (lookahead == ';')
        ADVANCE(508);
      if (lookahead == '<')
        ADVANCE(489);
      if (lookahead == '=')
        ADVANCE(538);
      if (lookahead == '>')
        ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(541);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(493);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(495);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(496);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(499);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(502);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(505);
      if (lookahead != 0)
        ADVANCE(506);
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
        ADVANCE(400);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(401);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(403);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(548);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(406);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(407);
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
        ADVANCE(400);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(401);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(403);
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
        ADVANCE(406);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(355);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(407);
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
        ADVANCE(400);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(401);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(403);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(569);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(406);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(407);
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
        ADVANCE(400);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(401);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(403);
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
        ADVANCE(406);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(355);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(407);
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
  [14] = {.lex_state = 398},
  [15] = {.lex_state = 200},
  [16] = {.lex_state = 202},
  [17] = {.lex_state = 200},
  [18] = {.lex_state = 200},
  [19] = {.lex_state = 409},
  [20] = {.lex_state = 412},
  [21] = {.lex_state = 200},
  [22] = {.lex_state = 374},
  [23] = {.lex_state = 374},
  [24] = {.lex_state = 374},
  [25] = {.lex_state = 413},
  [26] = {.lex_state = 422},
  [27] = {.lex_state = 422},
  [28] = {.lex_state = 422},
  [29] = {.lex_state = 204},
  [30] = {.lex_state = 374},
  [31] = {.lex_state = 202},
  [32] = {.lex_state = 202},
  [33] = {.lex_state = 422},
  [34] = {.lex_state = 507},
  [35] = {.lex_state = 204},
  [36] = {.lex_state = 510},
  [37] = {.lex_state = 202},
  [38] = {.lex_state = 204},
  [39] = {.lex_state = 510},
  [40] = {.lex_state = 412},
  [41] = {.lex_state = 192},
  [42] = {.lex_state = 192},
  [43] = {.lex_state = 202},
  [44] = {.lex_state = 507},
  [45] = {.lex_state = 200},
  [46] = {.lex_state = 202},
  [47] = {.lex_state = 202},
  [48] = {.lex_state = 374},
  [49] = {.lex_state = 374},
  [50] = {.lex_state = 374},
  [51] = {.lex_state = 507},
  [52] = {.lex_state = 507},
  [53] = {.lex_state = 507},
  [54] = {.lex_state = 507},
  [55] = {.lex_state = 512},
  [56] = {.lex_state = 514},
  [57] = {.lex_state = 202},
  [58] = {.lex_state = 514},
  [59] = {.lex_state = 374},
  [60] = {.lex_state = 524},
  [61] = {.lex_state = 374},
  [62] = {.lex_state = 374},
  [63] = {.lex_state = 422},
  [64] = {.lex_state = 422},
  [65] = {.lex_state = 422},
  [66] = {.lex_state = 422},
  [67] = {.lex_state = 422},
  [68] = {.lex_state = 422},
  [69] = {.lex_state = 412},
  [70] = {.lex_state = 200},
  [71] = {.lex_state = 531},
  [72] = {.lex_state = 507},
  [73] = {.lex_state = 374},
  [74] = {.lex_state = 374},
  [75] = {.lex_state = 374},
  [76] = {.lex_state = 374},
  [77] = {.lex_state = 537},
  [78] = {.lex_state = 537},
  [79] = {.lex_state = 540},
  [80] = {.lex_state = 537},
  [81] = {.lex_state = 412},
  [82] = {.lex_state = 540},
  [83] = {.lex_state = 510},
  [84] = {.lex_state = 510},
  [85] = {.lex_state = 374},
  [86] = {.lex_state = 374},
  [87] = {.lex_state = 374},
  [88] = {.lex_state = 374},
  [89] = {.lex_state = 374},
  [90] = {.lex_state = 374},
  [91] = {.lex_state = 374},
  [92] = {.lex_state = 374},
  [93] = {.lex_state = 374},
  [94] = {.lex_state = 374},
  [95] = {.lex_state = 374},
  [96] = {.lex_state = 204},
  [97] = {.lex_state = 510},
  [98] = {.lex_state = 412},
  [99] = {.lex_state = 192},
  [100] = {.lex_state = 202},
  [101] = {.lex_state = 510},
  [102] = {.lex_state = 202},
  [103] = {.lex_state = 510},
  [104] = {.lex_state = 531},
  [105] = {.lex_state = 202},
  [106] = {.lex_state = 422},
  [107] = {.lex_state = 422},
  [108] = {.lex_state = 422},
  [109] = {.lex_state = 507},
  [110] = {.lex_state = 507},
  [111] = {.lex_state = 374},
  [112] = {.lex_state = 374},
  [113] = {.lex_state = 374},
  [114] = {.lex_state = 374},
  [115] = {.lex_state = 374},
  [116] = {.lex_state = 374},
  [117] = {.lex_state = 374},
  [118] = {.lex_state = 374},
  [119] = {.lex_state = 374},
  [120] = {.lex_state = 374},
  [121] = {.lex_state = 514},
  [122] = {.lex_state = 398},
  [123] = {.lex_state = 412},
  [124] = {.lex_state = 202},
  [125] = {.lex_state = 507},
  [126] = {.lex_state = 514},
  [127] = {.lex_state = 422},
  [128] = {.lex_state = 398},
  [129] = {.lex_state = 412},
  [130] = {.lex_state = 202},
  [131] = {.lex_state = 507},
  [132] = {.lex_state = 422},
  [133] = {.lex_state = 422},
  [134] = {.lex_state = 542},
  [135] = {.lex_state = 531},
  [136] = {.lex_state = 422},
  [137] = {.lex_state = 422},
  [138] = {.lex_state = 374},
  [139] = {.lex_state = 374},
  [140] = {.lex_state = 374},
  [141] = {.lex_state = 374},
  [142] = {.lex_state = 374},
  [143] = {.lex_state = 374},
  [144] = {.lex_state = 374},
  [145] = {.lex_state = 374},
  [146] = {.lex_state = 374},
  [147] = {.lex_state = 202},
  [148] = {.lex_state = 374},
  [149] = {.lex_state = 413},
  [150] = {.lex_state = 507},
  [151] = {.lex_state = 374},
  [152] = {.lex_state = 374},
  [153] = {.lex_state = 512},
  [154] = {.lex_state = 531},
  [155] = {.lex_state = 537},
  [156] = {.lex_state = 422},
  [157] = {.lex_state = 512},
  [158] = {.lex_state = 540},
  [159] = {.lex_state = 412},
  [160] = {.lex_state = 540},
  [161] = {.lex_state = 422},
  [162] = {.lex_state = 422},
  [163] = {.lex_state = 422},
  [164] = {.lex_state = 537},
  [165] = {.lex_state = 537},
  [166] = {.lex_state = 537},
  [167] = {.lex_state = 374},
  [168] = {.lex_state = 531},
  [169] = {.lex_state = 540},
  [170] = {.lex_state = 204},
  [171] = {.lex_state = 412},
  [172] = {.lex_state = 374},
  [173] = {.lex_state = 374},
  [174] = {.lex_state = 374},
  [175] = {.lex_state = 374},
  [176] = {.lex_state = 374},
  [177] = {.lex_state = 374},
  [178] = {.lex_state = 374},
  [179] = {.lex_state = 374},
  [180] = {.lex_state = 374},
  [181] = {.lex_state = 374},
  [182] = {.lex_state = 507},
  [183] = {.lex_state = 507},
  [184] = {.lex_state = 422},
  [185] = {.lex_state = 422},
  [186] = {.lex_state = 422},
  [187] = {.lex_state = 422},
  [188] = {.lex_state = 422},
  [189] = {.lex_state = 422},
  [190] = {.lex_state = 422},
  [191] = {.lex_state = 422},
  [192] = {.lex_state = 422},
  [193] = {.lex_state = 202},
  [194] = {.lex_state = 192},
  [195] = {.lex_state = 412},
  [196] = {.lex_state = 202},
  [197] = {.lex_state = 202},
  [198] = {.lex_state = 422},
  [199] = {.lex_state = 512},
  [200] = {.lex_state = 542},
  [201] = {.lex_state = 507},
  [202] = {.lex_state = 507},
  [203] = {.lex_state = 507},
  [204] = {.lex_state = 507},
  [205] = {.lex_state = 507},
  [206] = {.lex_state = 507},
  [207] = {.lex_state = 507},
  [208] = {.lex_state = 507},
  [209] = {.lex_state = 507},
  [210] = {.lex_state = 507},
  [211] = {.lex_state = 374},
  [212] = {.lex_state = 374},
  [213] = {.lex_state = 422},
  [214] = {.lex_state = 412},
  [215] = {.lex_state = 514},
  [216] = {.lex_state = 202},
  [217] = {.lex_state = 507},
  [218] = {.lex_state = 202},
  [219] = {.lex_state = 202},
  [220] = {.lex_state = 514},
  [221] = {.lex_state = 514},
  [222] = {.lex_state = 524},
  [223] = {.lex_state = 202},
  [224] = {.lex_state = 507},
  [225] = {.lex_state = 546},
  [226] = {.lex_state = 202},
  [227] = {.lex_state = 546},
  [228] = {.lex_state = 202},
  [229] = {.lex_state = 202},
  [230] = {.lex_state = 512},
  [231] = {.lex_state = 422},
  [232] = {.lex_state = 422},
  [233] = {.lex_state = 512},
  [234] = {.lex_state = 422},
  [235] = {.lex_state = 422},
  [236] = {.lex_state = 422},
  [237] = {.lex_state = 422},
  [238] = {.lex_state = 422},
  [239] = {.lex_state = 422},
  [240] = {.lex_state = 422},
  [241] = {.lex_state = 422},
  [242] = {.lex_state = 422},
  [243] = {.lex_state = 514},
  [244] = {.lex_state = 422},
  [245] = {.lex_state = 412},
  [246] = {.lex_state = 422},
  [247] = {.lex_state = 422},
  [248] = {.lex_state = 374},
  [249] = {.lex_state = 422},
  [250] = {.lex_state = 374},
  [251] = {.lex_state = 531},
  [252] = {.lex_state = 507},
  [253] = {.lex_state = 374},
  [254] = {.lex_state = 374},
  [255] = {.lex_state = 374},
  [256] = {.lex_state = 374},
  [257] = {.lex_state = 374},
  [258] = {.lex_state = 374},
  [259] = {.lex_state = 374},
  [260] = {.lex_state = 374},
  [261] = {.lex_state = 374},
  [262] = {.lex_state = 531},
  [263] = {.lex_state = 512},
  [264] = {.lex_state = 204},
  [265] = {.lex_state = 412},
  [266] = {.lex_state = 542},
  [267] = {.lex_state = 537},
  [268] = {.lex_state = 531},
  [269] = {.lex_state = 537},
  [270] = {.lex_state = 540},
  [271] = {.lex_state = 412},
  [272] = {.lex_state = 540},
  [273] = {.lex_state = 540},
  [274] = {.lex_state = 422},
  [275] = {.lex_state = 512},
  [276] = {.lex_state = 412},
  [277] = {.lex_state = 374},
  [278] = {.lex_state = 374},
  [279] = {.lex_state = 507},
  [280] = {.lex_state = 537},
  [281] = {.lex_state = 537},
  [282] = {.lex_state = 537},
  [283] = {.lex_state = 537},
  [284] = {.lex_state = 537},
  [285] = {.lex_state = 537},
  [286] = {.lex_state = 537},
  [287] = {.lex_state = 537},
  [288] = {.lex_state = 537},
  [289] = {.lex_state = 192},
  [290] = {.lex_state = 202},
  [291] = {.lex_state = 412},
  [292] = {.lex_state = 202},
  [293] = {.lex_state = 512},
  [294] = {.lex_state = 512},
  [295] = {.lex_state = 422},
  [296] = {.lex_state = 422},
  [297] = {.lex_state = 374},
  [298] = {.lex_state = 374},
  [299] = {.lex_state = 374},
  [300] = {.lex_state = 374},
  [301] = {.lex_state = 374},
  [302] = {.lex_state = 374},
  [303] = {.lex_state = 374},
  [304] = {.lex_state = 374},
  [305] = {.lex_state = 374},
  [306] = {.lex_state = 374},
  [307] = {.lex_state = 202},
  [308] = {.lex_state = 412},
  [309] = {.lex_state = 514},
  [310] = {.lex_state = 202},
  [311] = {.lex_state = 546},
  [312] = {.lex_state = 398},
  [313] = {.lex_state = 412},
  [314] = {.lex_state = 200},
  [315] = {.lex_state = 412},
  [316] = {.lex_state = 202},
  [317] = {.lex_state = 561},
  [318] = {.lex_state = 561},
  [319] = {.lex_state = 507},
  [320] = {.lex_state = 546},
  [321] = {.lex_state = 561},
  [322] = {.lex_state = 422},
  [323] = {.lex_state = 422},
  [324] = {.lex_state = 512},
  [325] = {.lex_state = 514},
  [326] = {.lex_state = 413},
  [327] = {.lex_state = 202},
  [328] = {.lex_state = 374},
  [329] = {.lex_state = 374},
  [330] = {.lex_state = 422},
  [331] = {.lex_state = 374},
  [332] = {.lex_state = 422},
  [333] = {.lex_state = 422},
  [334] = {.lex_state = 512},
  [335] = {.lex_state = 422},
  [336] = {.lex_state = 422},
  [337] = {.lex_state = 422},
  [338] = {.lex_state = 422},
  [339] = {.lex_state = 422},
  [340] = {.lex_state = 422},
  [341] = {.lex_state = 422},
  [342] = {.lex_state = 422},
  [343] = {.lex_state = 422},
  [344] = {.lex_state = 422},
  [345] = {.lex_state = 507},
  [346] = {.lex_state = 512},
  [347] = {.lex_state = 204},
  [348] = {.lex_state = 512},
  [349] = {.lex_state = 537},
  [350] = {.lex_state = 422},
  [351] = {.lex_state = 512},
  [352] = {.lex_state = 540},
  [353] = {.lex_state = 512},
  [354] = {.lex_state = 507},
  [355] = {.lex_state = 507},
  [356] = {.lex_state = 374},
  [357] = {.lex_state = 374},
  [358] = {.lex_state = 374},
  [359] = {.lex_state = 374},
  [360] = {.lex_state = 374},
  [361] = {.lex_state = 374},
  [362] = {.lex_state = 374},
  [363] = {.lex_state = 374},
  [364] = {.lex_state = 374},
  [365] = {.lex_state = 192},
  [366] = {.lex_state = 202},
  [367] = {.lex_state = 202},
  [368] = {.lex_state = 507},
  [369] = {.lex_state = 507},
  [370] = {.lex_state = 422},
  [371] = {.lex_state = 422},
  [372] = {.lex_state = 422},
  [373] = {.lex_state = 422},
  [374] = {.lex_state = 422},
  [375] = {.lex_state = 422},
  [376] = {.lex_state = 422},
  [377] = {.lex_state = 422},
  [378] = {.lex_state = 422},
  [379] = {.lex_state = 202},
  [380] = {.lex_state = 412},
  [381] = {.lex_state = 561},
  [382] = {.lex_state = 546},
  [383] = {.lex_state = 561},
  [384] = {.lex_state = 202},
  [385] = {.lex_state = 507},
  [386] = {.lex_state = 202},
  [387] = {.lex_state = 413},
  [388] = {.lex_state = 567},
  [389] = {.lex_state = 202},
  [390] = {.lex_state = 567},
  [391] = {.lex_state = 546},
  [392] = {.lex_state = 546},
  [393] = {.lex_state = 561},
  [394] = {.lex_state = 422},
  [395] = {.lex_state = 412},
  [396] = {.lex_state = 546},
  [397] = {.lex_state = 422},
  [398] = {.lex_state = 422},
  [399] = {.lex_state = 374},
  [400] = {.lex_state = 374},
  [401] = {.lex_state = 374},
  [402] = {.lex_state = 374},
  [403] = {.lex_state = 374},
  [404] = {.lex_state = 374},
  [405] = {.lex_state = 374},
  [406] = {.lex_state = 374},
  [407] = {.lex_state = 374},
  [408] = {.lex_state = 422},
  [409] = {.lex_state = 374},
  [410] = {.lex_state = 537},
  [411] = {.lex_state = 537},
  [412] = {.lex_state = 512},
  [413] = {.lex_state = 540},
  [414] = {.lex_state = 507},
  [415] = {.lex_state = 507},
  [416] = {.lex_state = 507},
  [417] = {.lex_state = 507},
  [418] = {.lex_state = 507},
  [419] = {.lex_state = 507},
  [420] = {.lex_state = 507},
  [421] = {.lex_state = 507},
  [422] = {.lex_state = 507},
  [423] = {.lex_state = 192},
  [424] = {.lex_state = 374},
  [425] = {.lex_state = 202},
  [426] = {.lex_state = 412},
  [427] = {.lex_state = 561},
  [428] = {.lex_state = 561},
  [429] = {.lex_state = 546},
  [430] = {.lex_state = 412},
  [431] = {.lex_state = 567},
  [432] = {.lex_state = 398},
  [433] = {.lex_state = 202},
  [434] = {.lex_state = 507},
  [435] = {.lex_state = 567},
  [436] = {.lex_state = 202},
  [437] = {.lex_state = 546},
  [438] = {.lex_state = 422},
  [439] = {.lex_state = 422},
  [440] = {.lex_state = 422},
  [441] = {.lex_state = 422},
  [442] = {.lex_state = 422},
  [443] = {.lex_state = 422},
  [444] = {.lex_state = 422},
  [445] = {.lex_state = 422},
  [446] = {.lex_state = 422},
  [447] = {.lex_state = 422},
  [448] = {.lex_state = 537},
  [449] = {.lex_state = 507},
  [450] = {.lex_state = 202},
  [451] = {.lex_state = 412},
  [452] = {.lex_state = 561},
  [453] = {.lex_state = 202},
  [454] = {.lex_state = 546},
  [455] = {.lex_state = 567},
  [456] = {.lex_state = 202},
  [457] = {.lex_state = 507},
  [458] = {.lex_state = 567},
  [459] = {.lex_state = 567},
  [460] = {.lex_state = 561},
  [461] = {.lex_state = 202},
  [462] = {.lex_state = 412},
  [463] = {.lex_state = 546},
  [464] = {.lex_state = 546},
  [465] = {.lex_state = 567},
  [466] = {.lex_state = 561},
  [467] = {.lex_state = 202},
  [468] = {.lex_state = 546},
  [469] = {.lex_state = 412},
  [470] = {.lex_state = 202},
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
    [sym_variable_declaration] = STATE(29),
    [sym_intrinsic_type] = STATE(30),
    [sym_subroutine_call] = STATE(31),
    [sym_keyword_statement] = STATE(31),
    [sym_do_loop_statement] = STATE(31),
    [sym_if_statement] = STATE(31),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(31),
    [sym_pointer_assignment_expression] = STATE(31),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(34),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat1] = STATE(35),
    [aux_sym_program_block_repeat2] = STATE(36),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(40),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(42),
    [sym_statement_label] = ACTIONS(44),
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
    [sym_subroutine_call] = STATE(31),
    [sym_keyword_statement] = STATE(31),
    [sym_do_loop_statement] = STATE(31),
    [sym_if_statement] = STATE(31),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(31),
    [sym_pointer_assignment_expression] = STATE(31),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(34),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat1] = STATE(38),
    [aux_sym_program_block_repeat2] = STATE(39),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(42),
    [sym_statement_label] = ACTIONS(44),
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
    [sym__end_of_statement] = STATE(42),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [13] = {
    [anon_sym_COLON_COLON] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(82),
    [sym_number_literal] = ACTIONS(84),
    [sym__double_quoted_string] = ACTIONS(84),
    [sym__single_quoted_string] = ACTIONS(84),
    [sym_boolean_literal] = ACTIONS(84),
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [14] = {
    [sym_subroutine_call] = STATE(43),
    [sym_keyword_statement] = STATE(43),
    [sym_do_loop_statement] = STATE(43),
    [sym_if_statement] = STATE(43),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(43),
    [sym_pointer_assignment_expression] = STATE(43),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(44),
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
  [15] = {
    [sym_call_expression] = STATE(46),
    [sym_identifier] = ACTIONS(86),
    [sym_comment] = ACTIONS(14),
  },
  [16] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(88),
    [sym__newline] = ACTIONS(88),
  },
  [17] = {
    [sym_identifier] = ACTIONS(90),
    [sym_comment] = ACTIONS(14),
  },
  [18] = {
    [sym_statement_label] = ACTIONS(90),
    [sym_comment] = ACTIONS(14),
  },
  [19] = {
    [sym__expression] = STATE(54),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(92),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(94),
    [anon_sym_PLUS] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(88),
    [sym__newline] = ACTIONS(88),
  },
  [20] = {
    [sym_loop_control_expression] = STATE(57),
    [sym__end_of_statement] = STATE(58),
    [sym_identifier] = ACTIONS(104),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(106),
    [sym__newline] = ACTIONS(106),
  },
  [21] = {
    [sym_parenthesized_expression] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(108),
    [sym_comment] = ACTIONS(14),
  },
  [22] = {
    [sym__expression] = STATE(65),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [sym_number_literal] = ACTIONS(114),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [23] = {
    [sym__expression] = STATE(67),
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
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [24] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [25] = {
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(122),
    [sym_comment] = ACTIONS(14),
  },
  [26] = {
    [anon_sym_COMMA] = ACTIONS(124),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_EQ_GT] = ACTIONS(126),
    [anon_sym_PERCENT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_SLASH] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_STAR_STAR] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(124),
    [sym_comment] = ACTIONS(34),
  },
  [27] = {
    [anon_sym_COMMA] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(130),
    [anon_sym_EQ] = ACTIONS(130),
    [anon_sym_EQ_GT] = ACTIONS(132),
    [anon_sym_PERCENT] = ACTIONS(130),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_LT] = ACTIONS(130),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(130),
    [anon_sym_GT] = ACTIONS(130),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(130),
    [anon_sym_LT_EQ] = ACTIONS(132),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(130),
    [anon_sym_GT_EQ] = ACTIONS(132),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(130),
    [anon_sym_EQ_EQ] = ACTIONS(132),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(130),
    [anon_sym_SLASH_EQ] = ACTIONS(132),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(130),
    [anon_sym_SLASH_SLASH] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(130),
    [anon_sym_STAR_STAR] = ACTIONS(132),
    [anon_sym_COLON] = ACTIONS(130),
    [sym_comment] = ACTIONS(34),
  },
  [28] = {
    [sym_argument_list] = STATE(72),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_EQ_GT] = ACTIONS(126),
    [anon_sym_PERCENT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_SLASH] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_STAR_STAR] = ACTIONS(126),
    [sym_comment] = ACTIONS(34),
  },
  [29] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(138),
    [sym_statement_label] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(138),
    [sym_block_label_start_expression] = ACTIONS(140),
    [sym_number_literal] = ACTIONS(140),
    [sym__double_quoted_string] = ACTIONS(140),
    [sym__single_quoted_string] = ACTIONS(140),
    [sym_boolean_literal] = ACTIONS(140),
    [sym_identifier] = ACTIONS(140),
    [sym_comment] = ACTIONS(34),
  },
  [30] = {
    [sym__expression] = STATE(80),
    [sym_parenthesized_expression] = STATE(77),
    [sym_assignment_expression] = STATE(81),
    [sym_derived_type_member_expression] = STATE(77),
    [sym_logical_expression] = STATE(77),
    [sym_relational_expression] = STATE(77),
    [sym_concatenation_expression] = STATE(77),
    [sym_math_expression] = STATE(77),
    [sym_call_expression] = STATE(82),
    [sym_complex_literal] = STATE(77),
    [sym_string_literal] = STATE(77),
    [anon_sym_COLON_COLON] = ACTIONS(142),
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
  },
  [31] = {
    [sym__end_of_statement] = STATE(84),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(156),
    [sym__newline] = ACTIONS(156),
  },
  [32] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(158),
    [sym__newline] = ACTIONS(158),
  },
  [33] = {
    [anon_sym_EQ] = ACTIONS(160),
    [anon_sym_EQ_GT] = ACTIONS(162),
    [anon_sym_PERCENT] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(172),
    [anon_sym_LT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_EQ] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_STAR_STAR] = ACTIONS(184),
    [sym_comment] = ACTIONS(34),
  },
  [34] = {
    [sym__end_of_statement] = STATE(84),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_EQ_GT] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_SLASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(156),
    [sym__newline] = ACTIONS(156),
  },
  [35] = {
    [sym_variable_declaration] = STATE(29),
    [sym_intrinsic_type] = STATE(30),
    [sym_subroutine_call] = STATE(31),
    [sym_keyword_statement] = STATE(31),
    [sym_do_loop_statement] = STATE(31),
    [sym_if_statement] = STATE(31),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(31),
    [sym_pointer_assignment_expression] = STATE(31),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(34),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat1] = STATE(96),
    [aux_sym_program_block_repeat2] = STATE(39),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(42),
    [sym_statement_label] = ACTIONS(44),
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
  [36] = {
    [sym_subroutine_call] = STATE(31),
    [sym_keyword_statement] = STATE(31),
    [sym_do_loop_statement] = STATE(31),
    [sym_if_statement] = STATE(31),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(31),
    [sym_pointer_assignment_expression] = STATE(31),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(34),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(97),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(74),
    [sym_statement_label] = ACTIONS(44),
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
    [sym__end_of_statement] = STATE(99),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(186),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [38] = {
    [sym_variable_declaration] = STATE(29),
    [sym_intrinsic_type] = STATE(30),
    [sym_subroutine_call] = STATE(31),
    [sym_keyword_statement] = STATE(31),
    [sym_do_loop_statement] = STATE(31),
    [sym_if_statement] = STATE(31),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(31),
    [sym_pointer_assignment_expression] = STATE(31),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(34),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat1] = STATE(96),
    [aux_sym_program_block_repeat2] = STATE(101),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(188),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(42),
    [sym_statement_label] = ACTIONS(44),
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
  [39] = {
    [sym_subroutine_call] = STATE(31),
    [sym_keyword_statement] = STATE(31),
    [sym_do_loop_statement] = STATE(31),
    [sym_if_statement] = STATE(31),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(31),
    [sym_pointer_assignment_expression] = STATE(31),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(34),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(97),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(188),
    [sym_statement_label] = ACTIONS(44),
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
    [sym__end_of_statement] = STATE(99),
    [sym_identifier] = ACTIONS(190),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(192),
    [sym_comment] = ACTIONS(14),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(194),
    [sym_comment] = ACTIONS(14),
  },
  [43] = {
    [sym__end_of_statement] = STATE(103),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(156),
    [sym__newline] = ACTIONS(156),
  },
  [44] = {
    [sym__end_of_statement] = STATE(103),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_EQ_GT] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_SLASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(156),
    [sym__newline] = ACTIONS(156),
  },
  [45] = {
    [sym_argument_list] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(196),
    [sym_comment] = ACTIONS(14),
  },
  [46] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(198),
    [sym__newline] = ACTIONS(198),
  },
  [47] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(200),
    [sym__newline] = ACTIONS(200),
  },
  [48] = {
    [sym__expression] = STATE(108),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [sym_number_literal] = ACTIONS(202),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(204),
    [sym_comment] = ACTIONS(34),
  },
  [49] = {
    [sym__expression] = STATE(109),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(210),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [50] = {
    [sym__expression] = STATE(110),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(210),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [51] = {
    [anon_sym_COMMA] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_SLASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(128),
    [sym__newline] = ACTIONS(128),
  },
  [52] = {
    [anon_sym_COMMA] = ACTIONS(134),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_LT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_LT_EQ] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_GT_EQ] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_EQ_EQ] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_EQ] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_SLASH_SLASH] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(134),
    [anon_sym_STAR_STAR] = ACTIONS(134),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(134),
    [sym__newline] = ACTIONS(134),
  },
  [53] = {
    [sym_argument_list] = STATE(72),
    [anon_sym_COMMA] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(212),
    [anon_sym_PERCENT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_SLASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(128),
    [sym__newline] = ACTIONS(128),
  },
  [54] = {
    [anon_sym_PERCENT] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(220),
    [anon_sym_LT] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_GT] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_LT_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_GT_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_EQ_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_SLASH_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_SLASH_SLASH] = ACTIONS(224),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_STAR] = ACTIONS(228),
    [anon_sym_SLASH] = ACTIONS(228),
    [anon_sym_STAR_STAR] = ACTIONS(230),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(200),
    [sym__newline] = ACTIONS(200),
  },
  [55] = {
    [anon_sym_EQ] = ACTIONS(232),
    [sym_comment] = ACTIONS(14),
  },
  [56] = {
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
  [57] = {
    [sym__end_of_statement] = STATE(121),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(106),
    [sym__newline] = ACTIONS(106),
  },
  [58] = {
    [sym_subroutine_call] = STATE(124),
    [sym_keyword_statement] = STATE(124),
    [sym_do_loop_statement] = STATE(124),
    [sym_if_statement] = STATE(124),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(124),
    [sym_pointer_assignment_expression] = STATE(124),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(125),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(126),
    [sym_statement_label] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(236),
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
  [59] = {
    [sym__expression] = STATE(127),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [60] = {
    [sym_subroutine_call] = STATE(130),
    [sym_keyword_statement] = STATE(130),
    [sym_do_loop_statement] = STATE(130),
    [sym_if_statement] = STATE(130),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(130),
    [sym_pointer_assignment_expression] = STATE(130),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(131),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [sym_statement_label] = ACTIONS(238),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(240),
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
  [61] = {
    [sym__expression] = STATE(132),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [62] = {
    [sym__expression] = STATE(133),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [63] = {
    [anon_sym_COMMA] = ACTIONS(242),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_PERCENT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_SLASH] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_STAR_STAR] = ACTIONS(126),
    [sym_comment] = ACTIONS(34),
  },
  [64] = {
    [sym_argument_list] = STATE(136),
    [anon_sym_COMMA] = ACTIONS(242),
    [anon_sym_LPAREN] = ACTIONS(244),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_PERCENT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_SLASH] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_STAR_STAR] = ACTIONS(126),
    [sym_comment] = ACTIONS(34),
  },
  [65] = {
    [anon_sym_RPAREN] = ACTIONS(246),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_LT] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_GT] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_SLASH_SLASH] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(268),
    [sym_comment] = ACTIONS(34),
  },
  [66] = {
    [sym_argument_list] = STATE(136),
    [anon_sym_COMMA] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(244),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_EQ_GT] = ACTIONS(126),
    [anon_sym_PERCENT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_SLASH] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_STAR_STAR] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(124),
    [sym_comment] = ACTIONS(34),
  },
  [67] = {
    [anon_sym_EQ] = ACTIONS(270),
    [anon_sym_EQ_GT] = ACTIONS(272),
    [anon_sym_PERCENT] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(274),
    [anon_sym_LT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_EQ] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_STAR_STAR] = ACTIONS(184),
    [sym_comment] = ACTIONS(34),
  },
  [68] = {
    [anon_sym_EQ] = ACTIONS(276),
    [anon_sym_EQ_GT] = ACTIONS(278),
    [anon_sym_PERCENT] = ACTIONS(164),
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
    [sym_comment] = ACTIONS(34),
  },
  [69] = {
    [sym_loop_control_expression] = STATE(147),
    [sym__end_of_statement] = STATE(121),
    [sym_identifier] = ACTIONS(104),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(106),
    [sym__newline] = ACTIONS(106),
  },
  [70] = {
    [sym_parenthesized_expression] = STATE(149),
    [anon_sym_LPAREN] = ACTIONS(282),
    [sym_comment] = ACTIONS(14),
  },
  [71] = {
    [sym__expression] = STATE(156),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_keyword_argument] = STATE(157),
    [sym_array_slice] = STATE(157),
    [sym_assumed_size_dimension] = STATE(157),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(284),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(290),
    [anon_sym_COLON] = ACTIONS(292),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(294),
    [sym_comment] = ACTIONS(34),
  },
  [72] = {
    [anon_sym_COMMA] = ACTIONS(296),
    [anon_sym_EQ] = ACTIONS(296),
    [anon_sym_EQ_GT] = ACTIONS(296),
    [anon_sym_PERCENT] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(296),
    [anon_sym_GT] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(296),
    [anon_sym_LT_EQ] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(296),
    [anon_sym_GT_EQ] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(296),
    [anon_sym_EQ_EQ] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(296),
    [anon_sym_SLASH_EQ] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(296),
    [anon_sym_SLASH_SLASH] = ACTIONS(296),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_STAR] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(296),
    [anon_sym_STAR_STAR] = ACTIONS(296),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(296),
    [sym__newline] = ACTIONS(296),
  },
  [73] = {
    [sym__expression] = STATE(80),
    [sym_parenthesized_expression] = STATE(77),
    [sym_assignment_expression] = STATE(159),
    [sym_derived_type_member_expression] = STATE(77),
    [sym_logical_expression] = STATE(77),
    [sym_relational_expression] = STATE(77),
    [sym_concatenation_expression] = STATE(77),
    [sym_math_expression] = STATE(77),
    [sym_call_expression] = STATE(160),
    [sym_complex_literal] = STATE(77),
    [sym_string_literal] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(298),
    [sym_comment] = ACTIONS(34),
  },
  [74] = {
    [sym__expression] = STATE(163),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [sym_number_literal] = ACTIONS(300),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(302),
    [sym_comment] = ACTIONS(34),
  },
  [75] = {
    [sym__expression] = STATE(165),
    [sym_parenthesized_expression] = STATE(77),
    [sym_derived_type_member_expression] = STATE(77),
    [sym_logical_expression] = STATE(77),
    [sym_relational_expression] = STATE(77),
    [sym_concatenation_expression] = STATE(77),
    [sym_math_expression] = STATE(77),
    [sym_call_expression] = STATE(77),
    [sym_complex_literal] = STATE(77),
    [sym_string_literal] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(304),
    [sym_comment] = ACTIONS(34),
  },
  [76] = {
    [sym__expression] = STATE(166),
    [sym_parenthesized_expression] = STATE(77),
    [sym_derived_type_member_expression] = STATE(77),
    [sym_logical_expression] = STATE(77),
    [sym_relational_expression] = STATE(77),
    [sym_concatenation_expression] = STATE(77),
    [sym_math_expression] = STATE(77),
    [sym_call_expression] = STATE(77),
    [sym_complex_literal] = STATE(77),
    [sym_string_literal] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(304),
    [sym_comment] = ACTIONS(34),
  },
  [77] = {
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_PERCENT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_SLASH] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_STAR_STAR] = ACTIONS(126),
    [sym_comment] = ACTIONS(34),
  },
  [78] = {
    [anon_sym_EQ] = ACTIONS(130),
    [anon_sym_PERCENT] = ACTIONS(130),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(134),
    [anon_sym_LT] = ACTIONS(130),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(130),
    [anon_sym_GT] = ACTIONS(130),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(130),
    [anon_sym_LT_EQ] = ACTIONS(132),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(130),
    [anon_sym_GT_EQ] = ACTIONS(132),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(130),
    [anon_sym_EQ_EQ] = ACTIONS(132),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(130),
    [anon_sym_SLASH_EQ] = ACTIONS(132),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(130),
    [anon_sym_SLASH_SLASH] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(130),
    [anon_sym_STAR_STAR] = ACTIONS(132),
    [sym_comment] = ACTIONS(34),
  },
  [79] = {
    [sym_argument_list] = STATE(169),
    [sym__end_of_statement] = STATE(170),
    [aux_sym_variable_declaration_repeat1] = STATE(171),
    [anon_sym_COMMA] = ACTIONS(306),
    [anon_sym_LPAREN] = ACTIONS(308),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_SLASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [80] = {
    [anon_sym_EQ] = ACTIONS(310),
    [anon_sym_PERCENT] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(320),
    [anon_sym_LT] = ACTIONS(322),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_GT] = ACTIONS(322),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_LT_EQ] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_GT_EQ] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_EQ_EQ] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_SLASH_EQ] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_SLASH_SLASH] = ACTIONS(326),
    [anon_sym_PLUS] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(328),
    [anon_sym_STAR] = ACTIONS(330),
    [anon_sym_SLASH] = ACTIONS(330),
    [anon_sym_STAR_STAR] = ACTIONS(332),
    [sym_comment] = ACTIONS(34),
  },
  [81] = {
    [sym__end_of_statement] = STATE(170),
    [aux_sym_variable_declaration_repeat1] = STATE(171),
    [anon_sym_COMMA] = ACTIONS(306),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [82] = {
    [sym__end_of_statement] = STATE(170),
    [aux_sym_variable_declaration_repeat1] = STATE(171),
    [anon_sym_COMMA] = ACTIONS(306),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_SLASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [83] = {
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
  [84] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(334),
    [sym_statement_label] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(334),
    [anon_sym_LPAREN] = ACTIONS(334),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(334),
    [anon_sym_DASH] = ACTIONS(334),
    [sym_block_label_start_expression] = ACTIONS(336),
    [sym_number_literal] = ACTIONS(336),
    [sym__double_quoted_string] = ACTIONS(336),
    [sym__single_quoted_string] = ACTIONS(336),
    [sym_boolean_literal] = ACTIONS(336),
    [sym_identifier] = ACTIONS(336),
    [sym_comment] = ACTIONS(34),
  },
  [85] = {
    [sym__expression] = STATE(182),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(210),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [86] = {
    [sym__expression] = STATE(183),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(210),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [87] = {
    [sym__expression] = STATE(184),
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
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [88] = {
    [sym__expression] = STATE(185),
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
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [89] = {
    [sym__expression] = STATE(186),
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
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [90] = {
    [sym__expression] = STATE(187),
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
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [91] = {
    [sym__expression] = STATE(188),
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
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [92] = {
    [sym__expression] = STATE(189),
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
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [93] = {
    [sym__expression] = STATE(190),
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
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [94] = {
    [sym__expression] = STATE(191),
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
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [95] = {
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
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [96] = {
    [sym_variable_declaration] = STATE(29),
    [sym_intrinsic_type] = STATE(30),
    [aux_sym_program_block_repeat1] = STATE(96),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(340),
    [sym_statement_label] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(338),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(338),
    [anon_sym_LPAREN] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(338),
    [anon_sym_DASH] = ACTIONS(338),
    [sym_block_label_start_expression] = ACTIONS(343),
    [sym_number_literal] = ACTIONS(343),
    [sym__double_quoted_string] = ACTIONS(343),
    [sym__single_quoted_string] = ACTIONS(343),
    [sym_boolean_literal] = ACTIONS(343),
    [sym_identifier] = ACTIONS(343),
    [sym_comment] = ACTIONS(34),
  },
  [97] = {
    [sym_subroutine_call] = STATE(31),
    [sym_keyword_statement] = STATE(31),
    [sym_do_loop_statement] = STATE(31),
    [sym_if_statement] = STATE(31),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(31),
    [sym_pointer_assignment_expression] = STATE(31),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(34),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(97),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(334),
    [sym_statement_label] = ACTIONS(345),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(357),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(366),
    [anon_sym_LPAREN] = ACTIONS(369),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(372),
    [anon_sym_PLUS] = ACTIONS(375),
    [anon_sym_DASH] = ACTIONS(375),
    [sym_block_label_start_expression] = ACTIONS(378),
    [sym_number_literal] = ACTIONS(381),
    [sym__double_quoted_string] = ACTIONS(384),
    [sym__single_quoted_string] = ACTIONS(384),
    [sym_boolean_literal] = ACTIONS(381),
    [sym_identifier] = ACTIONS(387),
    [sym_comment] = ACTIONS(34),
  },
  [98] = {
    [sym__end_of_statement] = STATE(194),
    [sym_identifier] = ACTIONS(390),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(392),
    [sym_comment] = ACTIONS(14),
  },
  [100] = {
    [sym__end_of_statement] = STATE(194),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(394),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [101] = {
    [sym_subroutine_call] = STATE(31),
    [sym_keyword_statement] = STATE(31),
    [sym_do_loop_statement] = STATE(31),
    [sym_if_statement] = STATE(31),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(31),
    [sym_pointer_assignment_expression] = STATE(31),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(34),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(97),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(396),
    [sym_statement_label] = ACTIONS(44),
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
  [102] = {
    [sym__end_of_statement] = STATE(194),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [103] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(398),
    [sym_statement_label] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(398),
    [anon_sym_LPAREN] = ACTIONS(398),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_PLUS] = ACTIONS(398),
    [anon_sym_DASH] = ACTIONS(398),
    [sym_block_label_start_expression] = ACTIONS(400),
    [sym_number_literal] = ACTIONS(400),
    [sym__double_quoted_string] = ACTIONS(400),
    [sym__single_quoted_string] = ACTIONS(400),
    [sym_boolean_literal] = ACTIONS(400),
    [sym_identifier] = ACTIONS(400),
    [sym_comment] = ACTIONS(34),
  },
  [104] = {
    [sym__expression] = STATE(198),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_keyword_argument] = STATE(199),
    [sym_array_slice] = STATE(199),
    [sym_assumed_size_dimension] = STATE(199),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(402),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(290),
    [anon_sym_COLON] = ACTIONS(292),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(294),
    [sym_comment] = ACTIONS(34),
  },
  [105] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(296),
    [sym__newline] = ACTIONS(296),
  },
  [106] = {
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_PERCENT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_SLASH] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_STAR_STAR] = ACTIONS(126),
    [sym_comment] = ACTIONS(34),
  },
  [107] = {
    [sym_argument_list] = STATE(136),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_LPAREN] = ACTIONS(244),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_PERCENT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_SLASH] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_STAR_STAR] = ACTIONS(126),
    [sym_comment] = ACTIONS(34),
  },
  [108] = {
    [anon_sym_RPAREN] = ACTIONS(406),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_LT] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_GT] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_SLASH_SLASH] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(268),
    [sym_comment] = ACTIONS(34),
  },
  [109] = {
    [anon_sym_PERCENT] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(274),
    [anon_sym_LT] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_GT] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_LT_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_GT_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_EQ_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_SLASH_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_SLASH_SLASH] = ACTIONS(224),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_STAR] = ACTIONS(228),
    [anon_sym_SLASH] = ACTIONS(228),
    [anon_sym_STAR_STAR] = ACTIONS(230),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(274),
    [sym__newline] = ACTIONS(274),
  },
  [110] = {
    [anon_sym_PERCENT] = ACTIONS(214),
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
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(280),
    [sym__newline] = ACTIONS(280),
  },
  [111] = {
    [sym__expression] = STATE(202),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(210),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [112] = {
    [sym__expression] = STATE(203),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(210),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [113] = {
    [sym__expression] = STATE(204),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(210),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [114] = {
    [sym__expression] = STATE(205),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(210),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [115] = {
    [sym__expression] = STATE(206),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(210),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [116] = {
    [sym__expression] = STATE(207),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(210),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [117] = {
    [sym__expression] = STATE(208),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(210),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [118] = {
    [sym__expression] = STATE(209),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(210),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [119] = {
    [sym__expression] = STATE(210),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(210),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [120] = {
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
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [121] = {
    [sym_subroutine_call] = STATE(124),
    [sym_keyword_statement] = STATE(124),
    [sym_do_loop_statement] = STATE(124),
    [sym_if_statement] = STATE(124),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(124),
    [sym_pointer_assignment_expression] = STATE(124),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(125),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(215),
    [sym_statement_label] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(412),
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
  [122] = {
    [sym_subroutine_call] = STATE(216),
    [sym_keyword_statement] = STATE(216),
    [sym_do_loop_statement] = STATE(216),
    [sym_if_statement] = STATE(216),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(216),
    [sym_pointer_assignment_expression] = STATE(216),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(217),
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
  [123] = {
    [sym__block_label] = STATE(219),
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(416),
    [sym__newline] = ACTIONS(416),
  },
  [124] = {
    [sym__end_of_statement] = STATE(220),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(106),
    [sym__newline] = ACTIONS(106),
  },
  [125] = {
    [sym__end_of_statement] = STATE(220),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_EQ_GT] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_SLASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(106),
    [sym__newline] = ACTIONS(106),
  },
  [126] = {
    [sym_subroutine_call] = STATE(124),
    [sym_keyword_statement] = STATE(124),
    [sym_do_loop_statement] = STATE(124),
    [sym_if_statement] = STATE(124),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(124),
    [sym_pointer_assignment_expression] = STATE(124),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(125),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(221),
    [sym_statement_label] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(412),
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
  [127] = {
    [anon_sym_RPAREN] = ACTIONS(418),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_LT] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_GT] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_SLASH_SLASH] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(268),
    [sym_comment] = ACTIONS(34),
  },
  [128] = {
    [sym_subroutine_call] = STATE(223),
    [sym_keyword_statement] = STATE(223),
    [sym_do_loop_statement] = STATE(223),
    [sym_if_statement] = STATE(223),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(223),
    [sym_pointer_assignment_expression] = STATE(223),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(224),
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
  [129] = {
    [sym__block_label] = STATE(226),
    [sym__end_of_statement] = STATE(227),
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(420),
    [sym__newline] = ACTIONS(420),
  },
  [130] = {
    [sym__end_of_statement] = STATE(229),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(422),
    [sym__newline] = ACTIONS(422),
  },
  [131] = {
    [sym__end_of_statement] = STATE(229),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_EQ_GT] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_SLASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(422),
    [sym__newline] = ACTIONS(422),
  },
  [132] = {
    [anon_sym_RPAREN] = ACTIONS(270),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(274),
    [anon_sym_LT] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_GT] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_SLASH_SLASH] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(268),
    [sym_comment] = ACTIONS(34),
  },
  [133] = {
    [anon_sym_RPAREN] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(248),
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
    [sym_comment] = ACTIONS(34),
  },
  [134] = {
    [sym_number_literal] = ACTIONS(424),
    [sym_identifier] = ACTIONS(426),
    [sym_comment] = ACTIONS(14),
  },
  [135] = {
    [sym__expression] = STATE(232),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_keyword_argument] = STATE(233),
    [sym_array_slice] = STATE(233),
    [sym_assumed_size_dimension] = STATE(233),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(428),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(290),
    [anon_sym_COLON] = ACTIONS(292),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(294),
    [sym_comment] = ACTIONS(34),
  },
  [136] = {
    [anon_sym_COMMA] = ACTIONS(430),
    [anon_sym_RPAREN] = ACTIONS(430),
    [anon_sym_EQ] = ACTIONS(430),
    [anon_sym_EQ_GT] = ACTIONS(432),
    [anon_sym_PERCENT] = ACTIONS(430),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(430),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(430),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(430),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(430),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(430),
    [anon_sym_GT] = ACTIONS(430),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(430),
    [anon_sym_LT_EQ] = ACTIONS(432),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(430),
    [anon_sym_GT_EQ] = ACTIONS(432),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(430),
    [anon_sym_EQ_EQ] = ACTIONS(432),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(430),
    [anon_sym_SLASH_EQ] = ACTIONS(432),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(430),
    [anon_sym_SLASH_SLASH] = ACTIONS(432),
    [anon_sym_PLUS] = ACTIONS(430),
    [anon_sym_DASH] = ACTIONS(430),
    [anon_sym_STAR] = ACTIONS(430),
    [anon_sym_SLASH] = ACTIONS(430),
    [anon_sym_STAR_STAR] = ACTIONS(432),
    [anon_sym_COLON] = ACTIONS(430),
    [sym_comment] = ACTIONS(34),
  },
  [137] = {
    [anon_sym_COMMA] = ACTIONS(434),
    [anon_sym_RPAREN] = ACTIONS(434),
    [anon_sym_EQ] = ACTIONS(434),
    [anon_sym_EQ_GT] = ACTIONS(436),
    [anon_sym_PERCENT] = ACTIONS(434),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(438),
    [anon_sym_LT] = ACTIONS(434),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(434),
    [anon_sym_GT] = ACTIONS(434),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(434),
    [anon_sym_LT_EQ] = ACTIONS(436),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(434),
    [anon_sym_GT_EQ] = ACTIONS(436),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(434),
    [anon_sym_EQ_EQ] = ACTIONS(436),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(434),
    [anon_sym_SLASH_EQ] = ACTIONS(436),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(434),
    [anon_sym_SLASH_SLASH] = ACTIONS(436),
    [anon_sym_PLUS] = ACTIONS(434),
    [anon_sym_DASH] = ACTIONS(434),
    [anon_sym_STAR] = ACTIONS(434),
    [anon_sym_SLASH] = ACTIONS(434),
    [anon_sym_STAR_STAR] = ACTIONS(436),
    [anon_sym_COLON] = ACTIONS(434),
    [sym_comment] = ACTIONS(34),
  },
  [138] = {
    [sym__expression] = STATE(234),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [139] = {
    [sym__expression] = STATE(235),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [140] = {
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
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [141] = {
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
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [142] = {
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
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [143] = {
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
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [144] = {
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
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [145] = {
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
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [146] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [147] = {
    [sym__end_of_statement] = STATE(243),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(106),
    [sym__newline] = ACTIONS(106),
  },
  [148] = {
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
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [149] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(440),
    [sym_comment] = ACTIONS(14),
  },
  [150] = {
    [anon_sym_COMMA] = ACTIONS(442),
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
    [anon_sym_STAR] = ACTIONS(442),
    [anon_sym_SLASH] = ACTIONS(442),
    [anon_sym_STAR_STAR] = ACTIONS(442),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(442),
    [sym__newline] = ACTIONS(442),
  },
  [151] = {
    [sym__expression] = STATE(246),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [152] = {
    [sym__expression] = STATE(247),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [153] = {
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(444),
    [sym_comment] = ACTIONS(14),
  },
  [154] = {
    [sym__expression] = STATE(249),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_COMMA] = ACTIONS(446),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_COLON] = ACTIONS(448),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [155] = {
    [sym_argument_list] = STATE(136),
    [anon_sym_COMMA] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(244),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_EQ] = ACTIONS(450),
    [anon_sym_PERCENT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_SLASH] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_STAR_STAR] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(124),
    [sym_comment] = ACTIONS(34),
  },
  [156] = {
    [aux_sym_argument_list_repeat1] = STATE(263),
    [anon_sym_COMMA] = ACTIONS(452),
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
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_STAR_STAR] = ACTIONS(476),
    [anon_sym_COLON] = ACTIONS(478),
    [sym_comment] = ACTIONS(34),
  },
  [157] = {
    [aux_sym_argument_list_repeat1] = STATE(263),
    [anon_sym_COMMA] = ACTIONS(480),
    [anon_sym_RPAREN] = ACTIONS(482),
    [sym_comment] = ACTIONS(14),
  },
  [158] = {
    [sym_argument_list] = STATE(169),
    [sym__end_of_statement] = STATE(264),
    [aux_sym_variable_declaration_repeat1] = STATE(265),
    [anon_sym_COMMA] = ACTIONS(306),
    [anon_sym_LPAREN] = ACTIONS(308),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_SLASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [159] = {
    [sym__end_of_statement] = STATE(264),
    [aux_sym_variable_declaration_repeat1] = STATE(265),
    [anon_sym_COMMA] = ACTIONS(306),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [160] = {
    [sym__end_of_statement] = STATE(264),
    [aux_sym_variable_declaration_repeat1] = STATE(265),
    [anon_sym_COMMA] = ACTIONS(306),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_SLASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [161] = {
    [anon_sym_COMMA] = ACTIONS(484),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_PERCENT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_SLASH] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_STAR_STAR] = ACTIONS(126),
    [sym_comment] = ACTIONS(34),
  },
  [162] = {
    [sym_argument_list] = STATE(136),
    [anon_sym_COMMA] = ACTIONS(484),
    [anon_sym_LPAREN] = ACTIONS(244),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_PERCENT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_SLASH] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_STAR_STAR] = ACTIONS(126),
    [sym_comment] = ACTIONS(34),
  },
  [163] = {
    [anon_sym_RPAREN] = ACTIONS(486),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_LT] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_GT] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_SLASH_SLASH] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(268),
    [sym_comment] = ACTIONS(34),
  },
  [164] = {
    [sym_argument_list] = STATE(269),
    [anon_sym_LPAREN] = ACTIONS(488),
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_PERCENT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_GT] = ACTIONS(124),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_LT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_GT_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_EQ_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_EQ] = ACTIONS(126),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(124),
    [anon_sym_SLASH_SLASH] = ACTIONS(126),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(124),
    [anon_sym_STAR] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_STAR_STAR] = ACTIONS(126),
    [sym_comment] = ACTIONS(34),
  },
  [165] = {
    [anon_sym_EQ] = ACTIONS(270),
    [anon_sym_PERCENT] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(274),
    [anon_sym_LT] = ACTIONS(322),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_GT] = ACTIONS(322),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_LT_EQ] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_GT_EQ] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_EQ_EQ] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_SLASH_EQ] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_SLASH_SLASH] = ACTIONS(326),
    [anon_sym_PLUS] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(328),
    [anon_sym_STAR] = ACTIONS(330),
    [anon_sym_SLASH] = ACTIONS(330),
    [anon_sym_STAR_STAR] = ACTIONS(332),
    [sym_comment] = ACTIONS(34),
  },
  [166] = {
    [anon_sym_EQ] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(312),
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
    [sym_comment] = ACTIONS(34),
  },
  [167] = {
    [sym__expression] = STATE(80),
    [sym_parenthesized_expression] = STATE(77),
    [sym_assignment_expression] = STATE(271),
    [sym_derived_type_member_expression] = STATE(77),
    [sym_logical_expression] = STATE(77),
    [sym_relational_expression] = STATE(77),
    [sym_concatenation_expression] = STATE(77),
    [sym_math_expression] = STATE(77),
    [sym_call_expression] = STATE(272),
    [sym_complex_literal] = STATE(77),
    [sym_string_literal] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(490),
    [sym_comment] = ACTIONS(34),
  },
  [168] = {
    [sym__expression] = STATE(274),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_keyword_argument] = STATE(275),
    [sym_array_slice] = STATE(275),
    [sym_assumed_size_dimension] = STATE(275),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(290),
    [anon_sym_COLON] = ACTIONS(292),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(294),
    [sym_comment] = ACTIONS(34),
  },
  [169] = {
    [anon_sym_COMMA] = ACTIONS(296),
    [anon_sym_EQ] = ACTIONS(296),
    [anon_sym_PERCENT] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(296),
    [anon_sym_GT] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(296),
    [anon_sym_LT_EQ] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(296),
    [anon_sym_GT_EQ] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(296),
    [anon_sym_EQ_EQ] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(296),
    [anon_sym_SLASH_EQ] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(296),
    [anon_sym_SLASH_SLASH] = ACTIONS(296),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_STAR] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(296),
    [anon_sym_STAR_STAR] = ACTIONS(296),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(296),
    [sym__newline] = ACTIONS(296),
  },
  [170] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(494),
    [sym_statement_label] = ACTIONS(494),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(494),
    [anon_sym_LPAREN] = ACTIONS(494),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(494),
    [anon_sym_PLUS] = ACTIONS(494),
    [anon_sym_DASH] = ACTIONS(494),
    [sym_block_label_start_expression] = ACTIONS(496),
    [sym_number_literal] = ACTIONS(496),
    [sym__double_quoted_string] = ACTIONS(496),
    [sym__single_quoted_string] = ACTIONS(496),
    [sym_boolean_literal] = ACTIONS(496),
    [sym_identifier] = ACTIONS(496),
    [sym_comment] = ACTIONS(34),
  },
  [171] = {
    [sym__end_of_statement] = STATE(264),
    [aux_sym_variable_declaration_repeat1] = STATE(276),
    [anon_sym_COMMA] = ACTIONS(306),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [172] = {
    [sym__expression] = STATE(279),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [173] = {
    [sym__expression] = STATE(280),
    [sym_parenthesized_expression] = STATE(77),
    [sym_derived_type_member_expression] = STATE(77),
    [sym_logical_expression] = STATE(77),
    [sym_relational_expression] = STATE(77),
    [sym_concatenation_expression] = STATE(77),
    [sym_math_expression] = STATE(77),
    [sym_call_expression] = STATE(77),
    [sym_complex_literal] = STATE(77),
    [sym_string_literal] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(304),
    [sym_comment] = ACTIONS(34),
  },
  [174] = {
    [sym__expression] = STATE(281),
    [sym_parenthesized_expression] = STATE(77),
    [sym_derived_type_member_expression] = STATE(77),
    [sym_logical_expression] = STATE(77),
    [sym_relational_expression] = STATE(77),
    [sym_concatenation_expression] = STATE(77),
    [sym_math_expression] = STATE(77),
    [sym_call_expression] = STATE(77),
    [sym_complex_literal] = STATE(77),
    [sym_string_literal] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(304),
    [sym_comment] = ACTIONS(34),
  },
  [175] = {
    [sym__expression] = STATE(282),
    [sym_parenthesized_expression] = STATE(77),
    [sym_derived_type_member_expression] = STATE(77),
    [sym_logical_expression] = STATE(77),
    [sym_relational_expression] = STATE(77),
    [sym_concatenation_expression] = STATE(77),
    [sym_math_expression] = STATE(77),
    [sym_call_expression] = STATE(77),
    [sym_complex_literal] = STATE(77),
    [sym_string_literal] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(304),
    [sym_comment] = ACTIONS(34),
  },
  [176] = {
    [sym__expression] = STATE(283),
    [sym_parenthesized_expression] = STATE(77),
    [sym_derived_type_member_expression] = STATE(77),
    [sym_logical_expression] = STATE(77),
    [sym_relational_expression] = STATE(77),
    [sym_concatenation_expression] = STATE(77),
    [sym_math_expression] = STATE(77),
    [sym_call_expression] = STATE(77),
    [sym_complex_literal] = STATE(77),
    [sym_string_literal] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(304),
    [sym_comment] = ACTIONS(34),
  },
  [177] = {
    [sym__expression] = STATE(284),
    [sym_parenthesized_expression] = STATE(77),
    [sym_derived_type_member_expression] = STATE(77),
    [sym_logical_expression] = STATE(77),
    [sym_relational_expression] = STATE(77),
    [sym_concatenation_expression] = STATE(77),
    [sym_math_expression] = STATE(77),
    [sym_call_expression] = STATE(77),
    [sym_complex_literal] = STATE(77),
    [sym_string_literal] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(304),
    [sym_comment] = ACTIONS(34),
  },
  [178] = {
    [sym__expression] = STATE(285),
    [sym_parenthesized_expression] = STATE(77),
    [sym_derived_type_member_expression] = STATE(77),
    [sym_logical_expression] = STATE(77),
    [sym_relational_expression] = STATE(77),
    [sym_concatenation_expression] = STATE(77),
    [sym_math_expression] = STATE(77),
    [sym_call_expression] = STATE(77),
    [sym_complex_literal] = STATE(77),
    [sym_string_literal] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(304),
    [sym_comment] = ACTIONS(34),
  },
  [179] = {
    [sym__expression] = STATE(286),
    [sym_parenthesized_expression] = STATE(77),
    [sym_derived_type_member_expression] = STATE(77),
    [sym_logical_expression] = STATE(77),
    [sym_relational_expression] = STATE(77),
    [sym_concatenation_expression] = STATE(77),
    [sym_math_expression] = STATE(77),
    [sym_call_expression] = STATE(77),
    [sym_complex_literal] = STATE(77),
    [sym_string_literal] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(304),
    [sym_comment] = ACTIONS(34),
  },
  [180] = {
    [sym__expression] = STATE(287),
    [sym_parenthesized_expression] = STATE(77),
    [sym_derived_type_member_expression] = STATE(77),
    [sym_logical_expression] = STATE(77),
    [sym_relational_expression] = STATE(77),
    [sym_concatenation_expression] = STATE(77),
    [sym_math_expression] = STATE(77),
    [sym_call_expression] = STATE(77),
    [sym_complex_literal] = STATE(77),
    [sym_string_literal] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(304),
    [sym_comment] = ACTIONS(34),
  },
  [181] = {
    [sym__expression] = STATE(288),
    [sym_parenthesized_expression] = STATE(77),
    [sym_derived_type_member_expression] = STATE(77),
    [sym_logical_expression] = STATE(77),
    [sym_relational_expression] = STATE(77),
    [sym_concatenation_expression] = STATE(77),
    [sym_math_expression] = STATE(77),
    [sym_call_expression] = STATE(77),
    [sym_complex_literal] = STATE(77),
    [sym_string_literal] = STATE(77),
    [anon_sym_LPAREN] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_number_literal] = ACTIONS(150),
    [sym__double_quoted_string] = ACTIONS(152),
    [sym__single_quoted_string] = ACTIONS(152),
    [sym_boolean_literal] = ACTIONS(150),
    [sym_identifier] = ACTIONS(304),
    [sym_comment] = ACTIONS(34),
  },
  [182] = {
    [anon_sym_PERCENT] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(220),
    [anon_sym_LT] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_GT] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_LT_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_GT_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_EQ_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_SLASH_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_SLASH_SLASH] = ACTIONS(224),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_STAR] = ACTIONS(228),
    [anon_sym_SLASH] = ACTIONS(228),
    [anon_sym_STAR_STAR] = ACTIONS(230),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(502),
    [sym__newline] = ACTIONS(502),
  },
  [183] = {
    [anon_sym_PERCENT] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(220),
    [anon_sym_LT] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_GT] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_LT_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_GT_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_EQ_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_SLASH_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_SLASH_SLASH] = ACTIONS(224),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_STAR] = ACTIONS(228),
    [anon_sym_SLASH] = ACTIONS(228),
    [anon_sym_STAR_STAR] = ACTIONS(230),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(504),
    [sym__newline] = ACTIONS(504),
  },
  [184] = {
    [anon_sym_EQ] = ACTIONS(506),
    [anon_sym_EQ_GT] = ACTIONS(508),
    [anon_sym_PERCENT] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(510),
    [anon_sym_LT] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_GT] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_LT_EQ] = ACTIONS(508),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_GT_EQ] = ACTIONS(508),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(508),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_SLASH_EQ] = ACTIONS(508),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_SLASH_SLASH] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(506),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_STAR_STAR] = ACTIONS(508),
    [sym_comment] = ACTIONS(34),
  },
  [185] = {
    [anon_sym_EQ] = ACTIONS(512),
    [anon_sym_EQ_GT] = ACTIONS(514),
    [anon_sym_PERCENT] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
    [anon_sym_LT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_EQ] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_STAR_STAR] = ACTIONS(184),
    [sym_comment] = ACTIONS(34),
  },
  [186] = {
    [anon_sym_EQ] = ACTIONS(512),
    [anon_sym_EQ_GT] = ACTIONS(514),
    [anon_sym_PERCENT] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
    [anon_sym_LT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_EQ] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_STAR_STAR] = ACTIONS(184),
    [sym_comment] = ACTIONS(34),
  },
  [187] = {
    [anon_sym_EQ] = ACTIONS(512),
    [anon_sym_EQ_GT] = ACTIONS(514),
    [anon_sym_PERCENT] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
    [anon_sym_LT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT] = ACTIONS(174),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_LT_EQ] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_GT_EQ] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_EQ_EQ] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_EQ] = ACTIONS(176),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(174),
    [anon_sym_SLASH_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_STAR_STAR] = ACTIONS(184),
    [sym_comment] = ACTIONS(34),
  },
  [188] = {
    [anon_sym_EQ] = ACTIONS(518),
    [anon_sym_EQ_GT] = ACTIONS(520),
    [anon_sym_PERCENT] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_LT] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_GT] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_LT_EQ] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_GT_EQ] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_EQ_EQ] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_SLASH_EQ] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_SLASH_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_STAR_STAR] = ACTIONS(184),
    [sym_comment] = ACTIONS(34),
  },
  [189] = {
    [anon_sym_EQ] = ACTIONS(524),
    [anon_sym_EQ_GT] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_GT] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_EQ_EQ] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_SLASH_EQ] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_SLASH_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_STAR_STAR] = ACTIONS(184),
    [sym_comment] = ACTIONS(34),
  },
  [190] = {
    [anon_sym_EQ] = ACTIONS(530),
    [anon_sym_EQ_GT] = ACTIONS(532),
    [anon_sym_PERCENT] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_EQ_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_SLASH] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(530),
    [anon_sym_STAR] = ACTIONS(182),
    [anon_sym_SLASH] = ACTIONS(182),
    [anon_sym_STAR_STAR] = ACTIONS(184),
    [sym_comment] = ACTIONS(34),
  },
  [191] = {
    [anon_sym_EQ] = ACTIONS(530),
    [anon_sym_EQ_GT] = ACTIONS(532),
    [anon_sym_PERCENT] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_EQ_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_SLASH] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(530),
    [anon_sym_STAR] = ACTIONS(530),
    [anon_sym_SLASH] = ACTIONS(530),
    [anon_sym_STAR_STAR] = ACTIONS(184),
    [sym_comment] = ACTIONS(34),
  },
  [192] = {
    [anon_sym_EQ] = ACTIONS(530),
    [anon_sym_EQ_GT] = ACTIONS(532),
    [anon_sym_PERCENT] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_EQ_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_SLASH] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(530),
    [anon_sym_STAR] = ACTIONS(530),
    [anon_sym_SLASH] = ACTIONS(530),
    [anon_sym_STAR_STAR] = ACTIONS(532),
    [sym_comment] = ACTIONS(34),
  },
  [193] = {
    [sym__end_of_statement] = STATE(289),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [194] = {
    [ts_builtin_sym_end] = ACTIONS(536),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(536),
    [sym_comment] = ACTIONS(14),
  },
  [195] = {
    [sym__end_of_statement] = STATE(289),
    [sym_identifier] = ACTIONS(538),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [196] = {
    [sym__end_of_statement] = STATE(289),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(540),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [197] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(442),
    [sym__newline] = ACTIONS(442),
  },
  [198] = {
    [aux_sym_argument_list_repeat1] = STATE(293),
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(542),
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
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_STAR_STAR] = ACTIONS(476),
    [anon_sym_COLON] = ACTIONS(478),
    [sym_comment] = ACTIONS(34),
  },
  [199] = {
    [aux_sym_argument_list_repeat1] = STATE(293),
    [anon_sym_COMMA] = ACTIONS(480),
    [anon_sym_RPAREN] = ACTIONS(544),
    [sym_comment] = ACTIONS(14),
  },
  [200] = {
    [sym_number_literal] = ACTIONS(546),
    [sym_identifier] = ACTIONS(548),
    [sym_comment] = ACTIONS(14),
  },
  [201] = {
    [anon_sym_COMMA] = ACTIONS(438),
    [anon_sym_PERCENT] = ACTIONS(438),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(438),
    [anon_sym_LT] = ACTIONS(438),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(438),
    [anon_sym_GT] = ACTIONS(438),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(438),
    [anon_sym_LT_EQ] = ACTIONS(438),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(438),
    [anon_sym_GT_EQ] = ACTIONS(438),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(438),
    [anon_sym_EQ_EQ] = ACTIONS(438),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(438),
    [anon_sym_SLASH_EQ] = ACTIONS(438),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(438),
    [anon_sym_SLASH_SLASH] = ACTIONS(438),
    [anon_sym_PLUS] = ACTIONS(438),
    [anon_sym_DASH] = ACTIONS(438),
    [anon_sym_STAR] = ACTIONS(438),
    [anon_sym_SLASH] = ACTIONS(438),
    [anon_sym_STAR_STAR] = ACTIONS(438),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(438),
    [sym__newline] = ACTIONS(438),
  },
  [202] = {
    [anon_sym_PERCENT] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(510),
    [anon_sym_LT] = ACTIONS(510),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(510),
    [anon_sym_GT] = ACTIONS(510),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(510),
    [anon_sym_LT_EQ] = ACTIONS(510),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(510),
    [anon_sym_GT_EQ] = ACTIONS(510),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(510),
    [anon_sym_EQ_EQ] = ACTIONS(510),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(510),
    [anon_sym_SLASH_EQ] = ACTIONS(510),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(510),
    [anon_sym_SLASH_SLASH] = ACTIONS(510),
    [anon_sym_PLUS] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(510),
    [anon_sym_STAR] = ACTIONS(510),
    [anon_sym_SLASH] = ACTIONS(510),
    [anon_sym_STAR_STAR] = ACTIONS(510),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(510),
    [sym__newline] = ACTIONS(510),
  },
  [203] = {
    [anon_sym_PERCENT] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
    [anon_sym_LT] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_GT] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_LT_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_GT_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_EQ_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_SLASH_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_SLASH_SLASH] = ACTIONS(224),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_STAR] = ACTIONS(228),
    [anon_sym_SLASH] = ACTIONS(228),
    [anon_sym_STAR_STAR] = ACTIONS(230),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(516),
    [sym__newline] = ACTIONS(516),
  },
  [204] = {
    [anon_sym_PERCENT] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
    [anon_sym_LT] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_GT] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_LT_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_GT_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_EQ_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_SLASH_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_SLASH_SLASH] = ACTIONS(224),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_STAR] = ACTIONS(228),
    [anon_sym_SLASH] = ACTIONS(228),
    [anon_sym_STAR_STAR] = ACTIONS(230),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(516),
    [sym__newline] = ACTIONS(516),
  },
  [205] = {
    [anon_sym_PERCENT] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
    [anon_sym_LT] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_GT] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_LT_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_GT_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_EQ_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_SLASH_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_SLASH_SLASH] = ACTIONS(224),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_STAR] = ACTIONS(228),
    [anon_sym_SLASH] = ACTIONS(228),
    [anon_sym_STAR_STAR] = ACTIONS(230),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(516),
    [sym__newline] = ACTIONS(516),
  },
  [206] = {
    [anon_sym_PERCENT] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(522),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(224),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_STAR] = ACTIONS(228),
    [anon_sym_SLASH] = ACTIONS(228),
    [anon_sym_STAR_STAR] = ACTIONS(230),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(522),
    [sym__newline] = ACTIONS(522),
  },
  [207] = {
    [anon_sym_PERCENT] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(528),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(528),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(528),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(528),
    [anon_sym_GT] = ACTIONS(528),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(528),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(528),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(528),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(528),
    [anon_sym_SLASH_EQ] = ACTIONS(528),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(528),
    [anon_sym_SLASH_SLASH] = ACTIONS(224),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_STAR] = ACTIONS(228),
    [anon_sym_SLASH] = ACTIONS(228),
    [anon_sym_STAR_STAR] = ACTIONS(230),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(528),
    [sym__newline] = ACTIONS(528),
  },
  [208] = {
    [anon_sym_PERCENT] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT_EQ] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT_EQ] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_EQ_EQ] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_EQ] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_SLASH] = ACTIONS(534),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_STAR] = ACTIONS(228),
    [anon_sym_SLASH] = ACTIONS(228),
    [anon_sym_STAR_STAR] = ACTIONS(230),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(534),
    [sym__newline] = ACTIONS(534),
  },
  [209] = {
    [anon_sym_PERCENT] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT_EQ] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT_EQ] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_EQ_EQ] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_EQ] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_SLASH] = ACTIONS(534),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_STAR] = ACTIONS(534),
    [anon_sym_SLASH] = ACTIONS(534),
    [anon_sym_STAR_STAR] = ACTIONS(230),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(534),
    [sym__newline] = ACTIONS(534),
  },
  [210] = {
    [anon_sym_PERCENT] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT_EQ] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT_EQ] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_EQ_EQ] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_EQ] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_SLASH] = ACTIONS(534),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_STAR] = ACTIONS(534),
    [anon_sym_SLASH] = ACTIONS(534),
    [anon_sym_STAR_STAR] = ACTIONS(534),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(534),
    [sym__newline] = ACTIONS(534),
  },
  [211] = {
    [sym__expression] = STATE(295),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [212] = {
    [sym__expression] = STATE(296),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [213] = {
    [anon_sym_COMMA] = ACTIONS(550),
    [anon_sym_PERCENT] = ACTIONS(552),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(558),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(560),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(566),
    [anon_sym_PLUS] = ACTIONS(568),
    [anon_sym_DASH] = ACTIONS(568),
    [anon_sym_STAR] = ACTIONS(570),
    [anon_sym_SLASH] = ACTIONS(570),
    [anon_sym_STAR_STAR] = ACTIONS(572),
    [sym_comment] = ACTIONS(34),
  },
  [214] = {
    [sym__block_label] = STATE(307),
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(574),
    [sym__newline] = ACTIONS(574),
  },
  [215] = {
    [sym_subroutine_call] = STATE(124),
    [sym_keyword_statement] = STATE(124),
    [sym_do_loop_statement] = STATE(124),
    [sym_if_statement] = STATE(124),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(124),
    [sym_pointer_assignment_expression] = STATE(124),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(125),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(221),
    [sym_statement_label] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(576),
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
  [216] = {
    [sym__end_of_statement] = STATE(309),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(106),
    [sym__newline] = ACTIONS(106),
  },
  [217] = {
    [sym__end_of_statement] = STATE(309),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_EQ_GT] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_SLASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(106),
    [sym__newline] = ACTIONS(106),
  },
  [218] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(578),
    [sym__newline] = ACTIONS(578),
  },
  [219] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(574),
    [sym__newline] = ACTIONS(574),
  },
  [220] = {
    [sym_statement_label] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(334),
    [anon_sym_LPAREN] = ACTIONS(334),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(334),
    [anon_sym_DASH] = ACTIONS(334),
    [sym_block_label_start_expression] = ACTIONS(336),
    [sym_number_literal] = ACTIONS(336),
    [sym__double_quoted_string] = ACTIONS(336),
    [sym__single_quoted_string] = ACTIONS(336),
    [sym_boolean_literal] = ACTIONS(336),
    [sym_identifier] = ACTIONS(336),
    [sym_comment] = ACTIONS(34),
  },
  [221] = {
    [sym_subroutine_call] = STATE(124),
    [sym_keyword_statement] = STATE(124),
    [sym_do_loop_statement] = STATE(124),
    [sym_if_statement] = STATE(124),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(124),
    [sym_pointer_assignment_expression] = STATE(124),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(125),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(221),
    [sym_statement_label] = ACTIONS(580),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(357),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(366),
    [anon_sym_LPAREN] = ACTIONS(369),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(372),
    [anon_sym_PLUS] = ACTIONS(375),
    [anon_sym_DASH] = ACTIONS(375),
    [sym_block_label_start_expression] = ACTIONS(378),
    [sym_number_literal] = ACTIONS(381),
    [sym__double_quoted_string] = ACTIONS(384),
    [sym__single_quoted_string] = ACTIONS(384),
    [sym_boolean_literal] = ACTIONS(381),
    [sym_identifier] = ACTIONS(387),
    [sym_comment] = ACTIONS(34),
  },
  [222] = {
    [sym_statement_label] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(434),
    [anon_sym_LPAREN] = ACTIONS(434),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(434),
    [anon_sym_PLUS] = ACTIONS(434),
    [anon_sym_DASH] = ACTIONS(434),
    [sym_block_label_start_expression] = ACTIONS(438),
    [sym_number_literal] = ACTIONS(438),
    [sym__double_quoted_string] = ACTIONS(438),
    [sym__single_quoted_string] = ACTIONS(438),
    [sym_boolean_literal] = ACTIONS(438),
    [sym_identifier] = ACTIONS(438),
    [sym_comment] = ACTIONS(34),
  },
  [223] = {
    [sym__end_of_statement] = STATE(310),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(422),
    [sym__newline] = ACTIONS(422),
  },
  [224] = {
    [sym__end_of_statement] = STATE(310),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_EQ_GT] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_SLASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(422),
    [sym__newline] = ACTIONS(422),
  },
  [225] = {
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
  [226] = {
    [sym__end_of_statement] = STATE(311),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(420),
    [sym__newline] = ACTIONS(420),
  },
  [227] = {
    [sym_subroutine_call] = STATE(316),
    [sym_keyword_statement] = STATE(316),
    [sym_do_loop_statement] = STATE(316),
    [sym_if_statement] = STATE(316),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym_elseif_clause] = STATE(317),
    [sym_else_clause] = STATE(318),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(316),
    [sym_pointer_assignment_expression] = STATE(316),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(319),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(320),
    [aux_sym__block_if_statement_repeat1] = STATE(321),
    [sym_statement_label] = ACTIONS(583),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(585),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(587),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(589),
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
  [228] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(38),
    [sym__newline] = ACTIONS(38),
  },
  [229] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(591),
    [sym__newline] = ACTIONS(591),
  },
  [230] = {
    [anon_sym_RPAREN] = ACTIONS(593),
    [sym_comment] = ACTIONS(14),
  },
  [231] = {
    [anon_sym_COMMA] = ACTIONS(595),
    [anon_sym_RPAREN] = ACTIONS(595),
    [anon_sym_EQ] = ACTIONS(595),
    [anon_sym_EQ_GT] = ACTIONS(597),
    [anon_sym_PERCENT] = ACTIONS(595),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(442),
    [anon_sym_LT] = ACTIONS(595),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(595),
    [anon_sym_GT] = ACTIONS(595),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(595),
    [anon_sym_LT_EQ] = ACTIONS(597),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(595),
    [anon_sym_GT_EQ] = ACTIONS(597),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(595),
    [anon_sym_EQ_EQ] = ACTIONS(597),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(595),
    [anon_sym_SLASH_EQ] = ACTIONS(597),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(595),
    [anon_sym_SLASH_SLASH] = ACTIONS(597),
    [anon_sym_PLUS] = ACTIONS(595),
    [anon_sym_DASH] = ACTIONS(595),
    [anon_sym_STAR] = ACTIONS(595),
    [anon_sym_SLASH] = ACTIONS(595),
    [anon_sym_STAR_STAR] = ACTIONS(597),
    [anon_sym_COLON] = ACTIONS(595),
    [sym_comment] = ACTIONS(34),
  },
  [232] = {
    [aux_sym_argument_list_repeat1] = STATE(324),
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(599),
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
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_STAR_STAR] = ACTIONS(476),
    [anon_sym_COLON] = ACTIONS(478),
    [sym_comment] = ACTIONS(34),
  },
  [233] = {
    [aux_sym_argument_list_repeat1] = STATE(324),
    [anon_sym_COMMA] = ACTIONS(480),
    [anon_sym_RPAREN] = ACTIONS(601),
    [sym_comment] = ACTIONS(14),
  },
  [234] = {
    [anon_sym_RPAREN] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(510),
    [anon_sym_LT] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_GT] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_LT_EQ] = ACTIONS(508),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_GT_EQ] = ACTIONS(508),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(508),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_SLASH_EQ] = ACTIONS(508),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_SLASH_SLASH] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(506),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_STAR_STAR] = ACTIONS(508),
    [sym_comment] = ACTIONS(34),
  },
  [235] = {
    [anon_sym_RPAREN] = ACTIONS(512),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
    [anon_sym_LT] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_GT] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_SLASH_SLASH] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(268),
    [sym_comment] = ACTIONS(34),
  },
  [236] = {
    [anon_sym_RPAREN] = ACTIONS(512),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
    [anon_sym_LT] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_GT] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_SLASH_SLASH] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(268),
    [sym_comment] = ACTIONS(34),
  },
  [237] = {
    [anon_sym_RPAREN] = ACTIONS(512),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
    [anon_sym_LT] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_GT] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_SLASH_SLASH] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(268),
    [sym_comment] = ACTIONS(34),
  },
  [238] = {
    [anon_sym_RPAREN] = ACTIONS(518),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_LT] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_GT] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_LT_EQ] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_GT_EQ] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_EQ_EQ] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_SLASH_EQ] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_SLASH_SLASH] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(268),
    [sym_comment] = ACTIONS(34),
  },
  [239] = {
    [anon_sym_RPAREN] = ACTIONS(524),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_GT] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_EQ_EQ] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_SLASH_EQ] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_SLASH_SLASH] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(268),
    [sym_comment] = ACTIONS(34),
  },
  [240] = {
    [anon_sym_RPAREN] = ACTIONS(530),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_EQ_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_SLASH] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(530),
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(268),
    [sym_comment] = ACTIONS(34),
  },
  [241] = {
    [anon_sym_RPAREN] = ACTIONS(530),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_EQ_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_SLASH] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(530),
    [anon_sym_STAR] = ACTIONS(530),
    [anon_sym_SLASH] = ACTIONS(530),
    [anon_sym_STAR_STAR] = ACTIONS(268),
    [sym_comment] = ACTIONS(34),
  },
  [242] = {
    [anon_sym_RPAREN] = ACTIONS(530),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_EQ_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_SLASH] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(530),
    [anon_sym_STAR] = ACTIONS(530),
    [anon_sym_SLASH] = ACTIONS(530),
    [anon_sym_STAR_STAR] = ACTIONS(532),
    [sym_comment] = ACTIONS(34),
  },
  [243] = {
    [sym_subroutine_call] = STATE(124),
    [sym_keyword_statement] = STATE(124),
    [sym_do_loop_statement] = STATE(124),
    [sym_if_statement] = STATE(124),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(124),
    [sym_pointer_assignment_expression] = STATE(124),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(125),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(325),
    [sym_statement_label] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(576),
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
  [244] = {
    [anon_sym_RPAREN] = ACTIONS(603),
    [anon_sym_PERCENT] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(250),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(254),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(256),
    [anon_sym_LT] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_GT] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_LT_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_GT_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_EQ_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_SLASH_EQ] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(258),
    [anon_sym_SLASH_SLASH] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_STAR_STAR] = ACTIONS(268),
    [sym_comment] = ACTIONS(34),
  },
  [245] = {
    [sym__block_label] = STATE(327),
    [sym__end_of_statement] = STATE(311),
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(420),
    [sym__newline] = ACTIONS(420),
  },
  [246] = {
    [anon_sym_COMMA] = ACTIONS(270),
    [anon_sym_RPAREN] = ACTIONS(270),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(274),
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
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_STAR_STAR] = ACTIONS(476),
    [anon_sym_COLON] = ACTIONS(270),
    [sym_comment] = ACTIONS(34),
  },
  [247] = {
    [anon_sym_COMMA] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(456),
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
    [anon_sym_COLON] = ACTIONS(276),
    [sym_comment] = ACTIONS(34),
  },
  [248] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_DASH] = ACTIONS(607),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [249] = {
    [anon_sym_COMMA] = ACTIONS(609),
    [anon_sym_RPAREN] = ACTIONS(609),
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
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_STAR_STAR] = ACTIONS(476),
    [anon_sym_COLON] = ACTIONS(611),
    [sym_comment] = ACTIONS(34),
  },
  [250] = {
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
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_DASH] = ACTIONS(607),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [251] = {
    [sym__expression] = STATE(333),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_keyword_argument] = STATE(334),
    [sym_array_slice] = STATE(334),
    [sym_assumed_size_dimension] = STATE(334),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(290),
    [anon_sym_COLON] = ACTIONS(292),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(294),
    [sym_comment] = ACTIONS(34),
  },
  [252] = {
    [anon_sym_COMMA] = ACTIONS(613),
    [anon_sym_EQ] = ACTIONS(613),
    [anon_sym_EQ_GT] = ACTIONS(613),
    [anon_sym_PERCENT] = ACTIONS(613),
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
    [anon_sym_STAR] = ACTIONS(613),
    [anon_sym_SLASH] = ACTIONS(613),
    [anon_sym_STAR_STAR] = ACTIONS(613),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(613),
    [sym__newline] = ACTIONS(613),
  },
  [253] = {
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
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [254] = {
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
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [255] = {
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
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [256] = {
    [sym__expression] = STATE(338),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [257] = {
    [sym__expression] = STATE(339),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [258] = {
    [sym__expression] = STATE(340),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [259] = {
    [sym__expression] = STATE(341),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [260] = {
    [sym__expression] = STATE(342),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [261] = {
    [sym__expression] = STATE(343),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [262] = {
    [sym__expression] = STATE(344),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_COMMA] = ACTIONS(609),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(609),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_COLON] = ACTIONS(611),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [263] = {
    [aux_sym_argument_list_repeat1] = STATE(346),
    [anon_sym_COMMA] = ACTIONS(480),
    [anon_sym_RPAREN] = ACTIONS(615),
    [sym_comment] = ACTIONS(14),
  },
  [264] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(617),
    [sym_statement_label] = ACTIONS(617),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(617),
    [anon_sym_LPAREN] = ACTIONS(617),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(617),
    [anon_sym_PLUS] = ACTIONS(617),
    [anon_sym_DASH] = ACTIONS(617),
    [sym_block_label_start_expression] = ACTIONS(619),
    [sym_number_literal] = ACTIONS(619),
    [sym__double_quoted_string] = ACTIONS(619),
    [sym__single_quoted_string] = ACTIONS(619),
    [sym_boolean_literal] = ACTIONS(619),
    [sym_identifier] = ACTIONS(619),
    [sym_comment] = ACTIONS(34),
  },
  [265] = {
    [sym__end_of_statement] = STATE(347),
    [aux_sym_variable_declaration_repeat1] = STATE(276),
    [anon_sym_COMMA] = ACTIONS(306),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [266] = {
    [sym_number_literal] = ACTIONS(621),
    [sym_identifier] = ACTIONS(623),
    [sym_comment] = ACTIONS(14),
  },
  [267] = {
    [anon_sym_EQ] = ACTIONS(434),
    [anon_sym_PERCENT] = ACTIONS(434),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(434),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(438),
    [anon_sym_LT] = ACTIONS(434),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(434),
    [anon_sym_GT] = ACTIONS(434),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(434),
    [anon_sym_LT_EQ] = ACTIONS(436),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(434),
    [anon_sym_GT_EQ] = ACTIONS(436),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(434),
    [anon_sym_EQ_EQ] = ACTIONS(436),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(434),
    [anon_sym_SLASH_EQ] = ACTIONS(436),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(434),
    [anon_sym_SLASH_SLASH] = ACTIONS(436),
    [anon_sym_PLUS] = ACTIONS(434),
    [anon_sym_DASH] = ACTIONS(434),
    [anon_sym_STAR] = ACTIONS(434),
    [anon_sym_SLASH] = ACTIONS(434),
    [anon_sym_STAR_STAR] = ACTIONS(436),
    [sym_comment] = ACTIONS(34),
  },
  [268] = {
    [sym__expression] = STATE(350),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_keyword_argument] = STATE(351),
    [sym_array_slice] = STATE(351),
    [sym_assumed_size_dimension] = STATE(351),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(625),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(286),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_STAR] = ACTIONS(290),
    [anon_sym_COLON] = ACTIONS(292),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(294),
    [sym_comment] = ACTIONS(34),
  },
  [269] = {
    [anon_sym_EQ] = ACTIONS(430),
    [anon_sym_PERCENT] = ACTIONS(430),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(430),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(430),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(430),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(430),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(430),
    [anon_sym_GT] = ACTIONS(430),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(430),
    [anon_sym_LT_EQ] = ACTIONS(432),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(430),
    [anon_sym_GT_EQ] = ACTIONS(432),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(430),
    [anon_sym_EQ_EQ] = ACTIONS(432),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(430),
    [anon_sym_SLASH_EQ] = ACTIONS(432),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(430),
    [anon_sym_SLASH_SLASH] = ACTIONS(432),
    [anon_sym_PLUS] = ACTIONS(430),
    [anon_sym_DASH] = ACTIONS(430),
    [anon_sym_STAR] = ACTIONS(430),
    [anon_sym_SLASH] = ACTIONS(430),
    [anon_sym_STAR_STAR] = ACTIONS(432),
    [sym_comment] = ACTIONS(34),
  },
  [270] = {
    [sym_argument_list] = STATE(169),
    [anon_sym_COMMA] = ACTIONS(627),
    [anon_sym_LPAREN] = ACTIONS(308),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_SLASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(627),
    [sym__newline] = ACTIONS(627),
  },
  [271] = {
    [anon_sym_COMMA] = ACTIONS(627),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(627),
    [sym__newline] = ACTIONS(627),
  },
  [272] = {
    [anon_sym_COMMA] = ACTIONS(627),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_SLASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(627),
    [sym__newline] = ACTIONS(627),
  },
  [273] = {
    [anon_sym_COMMA] = ACTIONS(442),
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
    [anon_sym_STAR] = ACTIONS(442),
    [anon_sym_SLASH] = ACTIONS(442),
    [anon_sym_STAR_STAR] = ACTIONS(442),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(442),
    [sym__newline] = ACTIONS(442),
  },
  [274] = {
    [aux_sym_argument_list_repeat1] = STATE(353),
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(629),
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
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_STAR_STAR] = ACTIONS(476),
    [anon_sym_COLON] = ACTIONS(478),
    [sym_comment] = ACTIONS(34),
  },
  [275] = {
    [aux_sym_argument_list_repeat1] = STATE(353),
    [anon_sym_COMMA] = ACTIONS(480),
    [anon_sym_RPAREN] = ACTIONS(631),
    [sym_comment] = ACTIONS(14),
  },
  [276] = {
    [aux_sym_variable_declaration_repeat1] = STATE(276),
    [anon_sym_COMMA] = ACTIONS(633),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(627),
    [sym__newline] = ACTIONS(627),
  },
  [277] = {
    [sym__expression] = STATE(354),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [278] = {
    [sym__expression] = STATE(355),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [279] = {
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_PERCENT] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_LT] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_GT] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_LT_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_GT_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_EQ_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_SLASH_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_SLASH_SLASH] = ACTIONS(646),
    [anon_sym_PLUS] = ACTIONS(648),
    [anon_sym_DASH] = ACTIONS(648),
    [anon_sym_STAR] = ACTIONS(650),
    [anon_sym_SLASH] = ACTIONS(650),
    [anon_sym_STAR_STAR] = ACTIONS(652),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(502),
    [sym__newline] = ACTIONS(502),
  },
  [280] = {
    [anon_sym_EQ] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(510),
    [anon_sym_LT] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_GT] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_LT_EQ] = ACTIONS(508),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_GT_EQ] = ACTIONS(508),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(508),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_SLASH_EQ] = ACTIONS(508),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_SLASH_SLASH] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(506),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_STAR_STAR] = ACTIONS(508),
    [sym_comment] = ACTIONS(34),
  },
  [281] = {
    [anon_sym_EQ] = ACTIONS(512),
    [anon_sym_PERCENT] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
    [anon_sym_LT] = ACTIONS(322),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_GT] = ACTIONS(322),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_LT_EQ] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_GT_EQ] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_EQ_EQ] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_SLASH_EQ] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_SLASH_SLASH] = ACTIONS(326),
    [anon_sym_PLUS] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(328),
    [anon_sym_STAR] = ACTIONS(330),
    [anon_sym_SLASH] = ACTIONS(330),
    [anon_sym_STAR_STAR] = ACTIONS(332),
    [sym_comment] = ACTIONS(34),
  },
  [282] = {
    [anon_sym_EQ] = ACTIONS(512),
    [anon_sym_PERCENT] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
    [anon_sym_LT] = ACTIONS(322),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_GT] = ACTIONS(322),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_LT_EQ] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_GT_EQ] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_EQ_EQ] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_SLASH_EQ] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_SLASH_SLASH] = ACTIONS(326),
    [anon_sym_PLUS] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(328),
    [anon_sym_STAR] = ACTIONS(330),
    [anon_sym_SLASH] = ACTIONS(330),
    [anon_sym_STAR_STAR] = ACTIONS(332),
    [sym_comment] = ACTIONS(34),
  },
  [283] = {
    [anon_sym_EQ] = ACTIONS(512),
    [anon_sym_PERCENT] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(316),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
    [anon_sym_LT] = ACTIONS(322),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_GT] = ACTIONS(322),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_LT_EQ] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_GT_EQ] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_EQ_EQ] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_SLASH_EQ] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_SLASH_SLASH] = ACTIONS(326),
    [anon_sym_PLUS] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(328),
    [anon_sym_STAR] = ACTIONS(330),
    [anon_sym_SLASH] = ACTIONS(330),
    [anon_sym_STAR_STAR] = ACTIONS(332),
    [sym_comment] = ACTIONS(34),
  },
  [284] = {
    [anon_sym_EQ] = ACTIONS(518),
    [anon_sym_PERCENT] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_LT] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_GT] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_LT_EQ] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_GT_EQ] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_EQ_EQ] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_SLASH_EQ] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_SLASH_SLASH] = ACTIONS(326),
    [anon_sym_PLUS] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(328),
    [anon_sym_STAR] = ACTIONS(330),
    [anon_sym_SLASH] = ACTIONS(330),
    [anon_sym_STAR_STAR] = ACTIONS(332),
    [sym_comment] = ACTIONS(34),
  },
  [285] = {
    [anon_sym_EQ] = ACTIONS(524),
    [anon_sym_PERCENT] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_GT] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_EQ_EQ] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_SLASH_EQ] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_SLASH_SLASH] = ACTIONS(326),
    [anon_sym_PLUS] = ACTIONS(328),
    [anon_sym_DASH] = ACTIONS(328),
    [anon_sym_STAR] = ACTIONS(330),
    [anon_sym_SLASH] = ACTIONS(330),
    [anon_sym_STAR_STAR] = ACTIONS(332),
    [sym_comment] = ACTIONS(34),
  },
  [286] = {
    [anon_sym_EQ] = ACTIONS(530),
    [anon_sym_PERCENT] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_EQ_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_SLASH] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(530),
    [anon_sym_STAR] = ACTIONS(330),
    [anon_sym_SLASH] = ACTIONS(330),
    [anon_sym_STAR_STAR] = ACTIONS(332),
    [sym_comment] = ACTIONS(34),
  },
  [287] = {
    [anon_sym_EQ] = ACTIONS(530),
    [anon_sym_PERCENT] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_EQ_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_SLASH] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(530),
    [anon_sym_STAR] = ACTIONS(530),
    [anon_sym_SLASH] = ACTIONS(530),
    [anon_sym_STAR_STAR] = ACTIONS(332),
    [sym_comment] = ACTIONS(34),
  },
  [288] = {
    [anon_sym_EQ] = ACTIONS(530),
    [anon_sym_PERCENT] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_EQ_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_SLASH] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(530),
    [anon_sym_STAR] = ACTIONS(530),
    [anon_sym_SLASH] = ACTIONS(530),
    [anon_sym_STAR_STAR] = ACTIONS(532),
    [sym_comment] = ACTIONS(34),
  },
  [289] = {
    [ts_builtin_sym_end] = ACTIONS(654),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(654),
    [sym_comment] = ACTIONS(14),
  },
  [290] = {
    [sym__end_of_statement] = STATE(365),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [291] = {
    [sym__end_of_statement] = STATE(365),
    [sym_identifier] = ACTIONS(656),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [292] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(613),
    [sym__newline] = ACTIONS(613),
  },
  [293] = {
    [aux_sym_argument_list_repeat1] = STATE(346),
    [anon_sym_COMMA] = ACTIONS(480),
    [anon_sym_RPAREN] = ACTIONS(658),
    [sym_comment] = ACTIONS(14),
  },
  [294] = {
    [anon_sym_RPAREN] = ACTIONS(660),
    [sym_comment] = ACTIONS(14),
  },
  [295] = {
    [anon_sym_COMMA] = ACTIONS(270),
    [anon_sym_PERCENT] = ACTIONS(552),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(274),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(566),
    [anon_sym_PLUS] = ACTIONS(568),
    [anon_sym_DASH] = ACTIONS(568),
    [anon_sym_STAR] = ACTIONS(570),
    [anon_sym_SLASH] = ACTIONS(570),
    [anon_sym_STAR_STAR] = ACTIONS(572),
    [sym_comment] = ACTIONS(34),
  },
  [296] = {
    [anon_sym_COMMA] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(552),
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
    [sym_comment] = ACTIONS(34),
  },
  [297] = {
    [sym__expression] = STATE(369),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [298] = {
    [sym__expression] = STATE(370),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [299] = {
    [sym__expression] = STATE(371),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [300] = {
    [sym__expression] = STATE(372),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [301] = {
    [sym__expression] = STATE(373),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [302] = {
    [sym__expression] = STATE(374),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [303] = {
    [sym__expression] = STATE(375),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [304] = {
    [sym__expression] = STATE(376),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [305] = {
    [sym__expression] = STATE(377),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [306] = {
    [sym__expression] = STATE(378),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [307] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(662),
    [sym__newline] = ACTIONS(662),
  },
  [308] = {
    [sym__block_label] = STATE(379),
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(662),
    [sym__newline] = ACTIONS(662),
  },
  [309] = {
    [sym_statement_label] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(398),
    [anon_sym_LPAREN] = ACTIONS(398),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_PLUS] = ACTIONS(398),
    [anon_sym_DASH] = ACTIONS(398),
    [sym_block_label_start_expression] = ACTIONS(400),
    [sym_number_literal] = ACTIONS(400),
    [sym__double_quoted_string] = ACTIONS(400),
    [sym__single_quoted_string] = ACTIONS(400),
    [sym_boolean_literal] = ACTIONS(400),
    [sym_identifier] = ACTIONS(400),
    [sym_comment] = ACTIONS(34),
  },
  [310] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(664),
    [sym__newline] = ACTIONS(664),
  },
  [311] = {
    [sym_subroutine_call] = STATE(316),
    [sym_keyword_statement] = STATE(316),
    [sym_do_loop_statement] = STATE(316),
    [sym_if_statement] = STATE(316),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym_elseif_clause] = STATE(317),
    [sym_else_clause] = STATE(381),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(316),
    [sym_pointer_assignment_expression] = STATE(316),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(319),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(382),
    [aux_sym__block_if_statement_repeat1] = STATE(383),
    [sym_statement_label] = ACTIONS(583),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(666),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(587),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(589),
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
  [312] = {
    [sym_subroutine_call] = STATE(384),
    [sym_keyword_statement] = STATE(384),
    [sym_do_loop_statement] = STATE(384),
    [sym_if_statement] = STATE(384),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(384),
    [sym_pointer_assignment_expression] = STATE(384),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(385),
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
  [313] = {
    [sym__block_label] = STATE(386),
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(668),
    [sym__newline] = ACTIONS(668),
  },
  [314] = {
    [sym_parenthesized_expression] = STATE(387),
    [anon_sym_LPAREN] = ACTIONS(282),
    [sym_comment] = ACTIONS(14),
  },
  [315] = {
    [sym__block_label] = STATE(389),
    [sym__end_of_statement] = STATE(390),
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(670),
    [sym__newline] = ACTIONS(670),
  },
  [316] = {
    [sym__end_of_statement] = STATE(391),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(420),
    [sym__newline] = ACTIONS(420),
  },
  [317] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(672),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(672),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(674),
    [sym_comment] = ACTIONS(14),
  },
  [318] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(676),
    [sym_comment] = ACTIONS(14),
  },
  [319] = {
    [sym__end_of_statement] = STATE(391),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_EQ_GT] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_SLASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(420),
    [sym__newline] = ACTIONS(420),
  },
  [320] = {
    [sym_subroutine_call] = STATE(316),
    [sym_keyword_statement] = STATE(316),
    [sym_do_loop_statement] = STATE(316),
    [sym_if_statement] = STATE(316),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym_elseif_clause] = STATE(317),
    [sym_else_clause] = STATE(381),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(316),
    [sym_pointer_assignment_expression] = STATE(316),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(319),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(392),
    [aux_sym__block_if_statement_repeat1] = STATE(383),
    [sym_statement_label] = ACTIONS(583),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(666),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(587),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(589),
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
  [321] = {
    [sym_elseif_clause] = STATE(317),
    [sym_else_clause] = STATE(381),
    [aux_sym__block_if_statement_repeat1] = STATE(393),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(676),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(678),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(589),
    [sym_comment] = ACTIONS(14),
  },
  [322] = {
    [anon_sym_COMMA] = ACTIONS(680),
    [anon_sym_RPAREN] = ACTIONS(680),
    [anon_sym_EQ] = ACTIONS(680),
    [anon_sym_EQ_GT] = ACTIONS(682),
    [anon_sym_PERCENT] = ACTIONS(680),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(684),
    [anon_sym_LT] = ACTIONS(680),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(680),
    [anon_sym_GT] = ACTIONS(680),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(680),
    [anon_sym_LT_EQ] = ACTIONS(682),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(680),
    [anon_sym_GT_EQ] = ACTIONS(682),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(680),
    [anon_sym_EQ_EQ] = ACTIONS(682),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(680),
    [anon_sym_SLASH_EQ] = ACTIONS(682),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(680),
    [anon_sym_SLASH_SLASH] = ACTIONS(682),
    [anon_sym_PLUS] = ACTIONS(680),
    [anon_sym_DASH] = ACTIONS(680),
    [anon_sym_STAR] = ACTIONS(680),
    [anon_sym_SLASH] = ACTIONS(680),
    [anon_sym_STAR_STAR] = ACTIONS(682),
    [anon_sym_COLON] = ACTIONS(680),
    [sym_comment] = ACTIONS(34),
  },
  [323] = {
    [anon_sym_COMMA] = ACTIONS(686),
    [anon_sym_RPAREN] = ACTIONS(686),
    [anon_sym_EQ] = ACTIONS(686),
    [anon_sym_EQ_GT] = ACTIONS(688),
    [anon_sym_PERCENT] = ACTIONS(686),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(686),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(686),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(686),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_LT] = ACTIONS(686),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(686),
    [anon_sym_GT] = ACTIONS(686),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(686),
    [anon_sym_LT_EQ] = ACTIONS(688),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(686),
    [anon_sym_GT_EQ] = ACTIONS(688),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(686),
    [anon_sym_EQ_EQ] = ACTIONS(688),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(686),
    [anon_sym_SLASH_EQ] = ACTIONS(688),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(686),
    [anon_sym_SLASH_SLASH] = ACTIONS(688),
    [anon_sym_PLUS] = ACTIONS(686),
    [anon_sym_DASH] = ACTIONS(686),
    [anon_sym_STAR] = ACTIONS(686),
    [anon_sym_SLASH] = ACTIONS(686),
    [anon_sym_STAR_STAR] = ACTIONS(688),
    [anon_sym_COLON] = ACTIONS(686),
    [sym_comment] = ACTIONS(34),
  },
  [324] = {
    [aux_sym_argument_list_repeat1] = STATE(346),
    [anon_sym_COMMA] = ACTIONS(480),
    [anon_sym_RPAREN] = ACTIONS(690),
    [sym_comment] = ACTIONS(14),
  },
  [325] = {
    [sym_subroutine_call] = STATE(124),
    [sym_keyword_statement] = STATE(124),
    [sym_do_loop_statement] = STATE(124),
    [sym_if_statement] = STATE(124),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(124),
    [sym_pointer_assignment_expression] = STATE(124),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(125),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(221),
    [sym_statement_label] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(692),
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
  [326] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(436),
    [sym_comment] = ACTIONS(14),
  },
  [327] = {
    [sym__end_of_statement] = STATE(396),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(420),
    [sym__newline] = ACTIONS(420),
  },
  [328] = {
    [sym__expression] = STATE(397),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_DASH] = ACTIONS(607),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [329] = {
    [sym__expression] = STATE(398),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_DASH] = ACTIONS(607),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [330] = {
    [anon_sym_COMMA] = ACTIONS(694),
    [anon_sym_RPAREN] = ACTIONS(694),
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
    [anon_sym_STAR] = ACTIONS(714),
    [anon_sym_SLASH] = ACTIONS(714),
    [anon_sym_STAR_STAR] = ACTIONS(716),
    [sym_comment] = ACTIONS(34),
  },
  [331] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_DASH] = ACTIONS(607),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [332] = {
    [anon_sym_COMMA] = ACTIONS(718),
    [anon_sym_RPAREN] = ACTIONS(718),
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
    [anon_sym_STAR] = ACTIONS(714),
    [anon_sym_SLASH] = ACTIONS(714),
    [anon_sym_STAR_STAR] = ACTIONS(716),
    [sym_comment] = ACTIONS(34),
  },
  [333] = {
    [anon_sym_COMMA] = ACTIONS(720),
    [anon_sym_RPAREN] = ACTIONS(720),
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
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_STAR_STAR] = ACTIONS(476),
    [anon_sym_COLON] = ACTIONS(478),
    [sym_comment] = ACTIONS(34),
  },
  [334] = {
    [anon_sym_COMMA] = ACTIONS(722),
    [anon_sym_RPAREN] = ACTIONS(722),
    [sym_comment] = ACTIONS(14),
  },
  [335] = {
    [anon_sym_COMMA] = ACTIONS(506),
    [anon_sym_RPAREN] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(510),
    [anon_sym_LT] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_GT] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_LT_EQ] = ACTIONS(508),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_GT_EQ] = ACTIONS(508),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(508),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_SLASH_EQ] = ACTIONS(508),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_SLASH_SLASH] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(506),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_STAR_STAR] = ACTIONS(508),
    [anon_sym_COLON] = ACTIONS(506),
    [sym_comment] = ACTIONS(34),
  },
  [336] = {
    [anon_sym_COMMA] = ACTIONS(512),
    [anon_sym_RPAREN] = ACTIONS(512),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
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
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_STAR_STAR] = ACTIONS(476),
    [anon_sym_COLON] = ACTIONS(512),
    [sym_comment] = ACTIONS(34),
  },
  [337] = {
    [anon_sym_COMMA] = ACTIONS(512),
    [anon_sym_RPAREN] = ACTIONS(512),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
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
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_STAR_STAR] = ACTIONS(476),
    [anon_sym_COLON] = ACTIONS(512),
    [sym_comment] = ACTIONS(34),
  },
  [338] = {
    [anon_sym_COMMA] = ACTIONS(512),
    [anon_sym_RPAREN] = ACTIONS(512),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
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
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_STAR_STAR] = ACTIONS(476),
    [anon_sym_COLON] = ACTIONS(512),
    [sym_comment] = ACTIONS(34),
  },
  [339] = {
    [anon_sym_COMMA] = ACTIONS(518),
    [anon_sym_RPAREN] = ACTIONS(518),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_LT] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_GT] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_LT_EQ] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_GT_EQ] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_EQ_EQ] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_SLASH_EQ] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_SLASH_SLASH] = ACTIONS(470),
    [anon_sym_PLUS] = ACTIONS(472),
    [anon_sym_DASH] = ACTIONS(472),
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_STAR_STAR] = ACTIONS(476),
    [anon_sym_COLON] = ACTIONS(518),
    [sym_comment] = ACTIONS(34),
  },
  [340] = {
    [anon_sym_COMMA] = ACTIONS(524),
    [anon_sym_RPAREN] = ACTIONS(524),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_GT] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_EQ_EQ] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_SLASH_EQ] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_SLASH_SLASH] = ACTIONS(470),
    [anon_sym_PLUS] = ACTIONS(472),
    [anon_sym_DASH] = ACTIONS(472),
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_STAR_STAR] = ACTIONS(476),
    [anon_sym_COLON] = ACTIONS(524),
    [sym_comment] = ACTIONS(34),
  },
  [341] = {
    [anon_sym_COMMA] = ACTIONS(530),
    [anon_sym_RPAREN] = ACTIONS(530),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_EQ_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_SLASH] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(530),
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_STAR_STAR] = ACTIONS(476),
    [anon_sym_COLON] = ACTIONS(530),
    [sym_comment] = ACTIONS(34),
  },
  [342] = {
    [anon_sym_COMMA] = ACTIONS(530),
    [anon_sym_RPAREN] = ACTIONS(530),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_EQ_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_SLASH] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(530),
    [anon_sym_STAR] = ACTIONS(530),
    [anon_sym_SLASH] = ACTIONS(530),
    [anon_sym_STAR_STAR] = ACTIONS(476),
    [anon_sym_COLON] = ACTIONS(530),
    [sym_comment] = ACTIONS(34),
  },
  [343] = {
    [anon_sym_COMMA] = ACTIONS(530),
    [anon_sym_RPAREN] = ACTIONS(530),
    [anon_sym_PERCENT] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_EQ_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_SLASH] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(530),
    [anon_sym_STAR] = ACTIONS(530),
    [anon_sym_SLASH] = ACTIONS(530),
    [anon_sym_STAR_STAR] = ACTIONS(532),
    [anon_sym_COLON] = ACTIONS(530),
    [sym_comment] = ACTIONS(34),
  },
  [344] = {
    [anon_sym_COMMA] = ACTIONS(694),
    [anon_sym_RPAREN] = ACTIONS(694),
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
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_STAR_STAR] = ACTIONS(476),
    [anon_sym_COLON] = ACTIONS(724),
    [sym_comment] = ACTIONS(34),
  },
  [345] = {
    [anon_sym_COMMA] = ACTIONS(726),
    [anon_sym_EQ] = ACTIONS(726),
    [anon_sym_EQ_GT] = ACTIONS(726),
    [anon_sym_PERCENT] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(726),
    [anon_sym_LT] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(726),
    [anon_sym_GT] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(726),
    [anon_sym_LT_EQ] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(726),
    [anon_sym_GT_EQ] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(726),
    [anon_sym_EQ_EQ] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(726),
    [anon_sym_SLASH_EQ] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(726),
    [anon_sym_SLASH_SLASH] = ACTIONS(726),
    [anon_sym_PLUS] = ACTIONS(726),
    [anon_sym_DASH] = ACTIONS(726),
    [anon_sym_STAR] = ACTIONS(726),
    [anon_sym_SLASH] = ACTIONS(726),
    [anon_sym_STAR_STAR] = ACTIONS(726),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(726),
    [sym__newline] = ACTIONS(726),
  },
  [346] = {
    [aux_sym_argument_list_repeat1] = STATE(346),
    [anon_sym_COMMA] = ACTIONS(728),
    [anon_sym_RPAREN] = ACTIONS(722),
    [sym_comment] = ACTIONS(14),
  },
  [347] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(731),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(731),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(731),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(731),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(731),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(731),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(731),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(731),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(731),
    [sym_statement_label] = ACTIONS(731),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(731),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(731),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(731),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(731),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(731),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(731),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(731),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(731),
    [anon_sym_LPAREN] = ACTIONS(731),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(731),
    [anon_sym_PLUS] = ACTIONS(731),
    [anon_sym_DASH] = ACTIONS(731),
    [sym_block_label_start_expression] = ACTIONS(733),
    [sym_number_literal] = ACTIONS(733),
    [sym__double_quoted_string] = ACTIONS(733),
    [sym__single_quoted_string] = ACTIONS(733),
    [sym_boolean_literal] = ACTIONS(733),
    [sym_identifier] = ACTIONS(733),
    [sym_comment] = ACTIONS(34),
  },
  [348] = {
    [anon_sym_RPAREN] = ACTIONS(735),
    [sym_comment] = ACTIONS(14),
  },
  [349] = {
    [anon_sym_EQ] = ACTIONS(595),
    [anon_sym_PERCENT] = ACTIONS(595),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(442),
    [anon_sym_LT] = ACTIONS(595),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(595),
    [anon_sym_GT] = ACTIONS(595),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(595),
    [anon_sym_LT_EQ] = ACTIONS(597),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(595),
    [anon_sym_GT_EQ] = ACTIONS(597),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(595),
    [anon_sym_EQ_EQ] = ACTIONS(597),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(595),
    [anon_sym_SLASH_EQ] = ACTIONS(597),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(595),
    [anon_sym_SLASH_SLASH] = ACTIONS(597),
    [anon_sym_PLUS] = ACTIONS(595),
    [anon_sym_DASH] = ACTIONS(595),
    [anon_sym_STAR] = ACTIONS(595),
    [anon_sym_SLASH] = ACTIONS(595),
    [anon_sym_STAR_STAR] = ACTIONS(597),
    [sym_comment] = ACTIONS(34),
  },
  [350] = {
    [aux_sym_argument_list_repeat1] = STATE(412),
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(737),
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
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_STAR_STAR] = ACTIONS(476),
    [anon_sym_COLON] = ACTIONS(478),
    [sym_comment] = ACTIONS(34),
  },
  [351] = {
    [aux_sym_argument_list_repeat1] = STATE(412),
    [anon_sym_COMMA] = ACTIONS(480),
    [anon_sym_RPAREN] = ACTIONS(739),
    [sym_comment] = ACTIONS(14),
  },
  [352] = {
    [anon_sym_COMMA] = ACTIONS(613),
    [anon_sym_EQ] = ACTIONS(613),
    [anon_sym_PERCENT] = ACTIONS(613),
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
    [anon_sym_STAR] = ACTIONS(613),
    [anon_sym_SLASH] = ACTIONS(613),
    [anon_sym_STAR_STAR] = ACTIONS(613),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(613),
    [sym__newline] = ACTIONS(613),
  },
  [353] = {
    [aux_sym_argument_list_repeat1] = STATE(346),
    [anon_sym_COMMA] = ACTIONS(480),
    [anon_sym_RPAREN] = ACTIONS(741),
    [sym_comment] = ACTIONS(14),
  },
  [354] = {
    [anon_sym_COMMA] = ACTIONS(274),
    [anon_sym_PERCENT] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(274),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(274),
    [anon_sym_LT] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_GT] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_LT_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_GT_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_EQ_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_SLASH_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_SLASH_SLASH] = ACTIONS(646),
    [anon_sym_PLUS] = ACTIONS(648),
    [anon_sym_DASH] = ACTIONS(648),
    [anon_sym_STAR] = ACTIONS(650),
    [anon_sym_SLASH] = ACTIONS(650),
    [anon_sym_STAR_STAR] = ACTIONS(652),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(274),
    [sym__newline] = ACTIONS(274),
  },
  [355] = {
    [anon_sym_COMMA] = ACTIONS(280),
    [anon_sym_PERCENT] = ACTIONS(636),
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
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(280),
    [sym__newline] = ACTIONS(280),
  },
  [356] = {
    [sym__expression] = STATE(414),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [357] = {
    [sym__expression] = STATE(415),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [358] = {
    [sym__expression] = STATE(416),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [359] = {
    [sym__expression] = STATE(417),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [360] = {
    [sym__expression] = STATE(418),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [361] = {
    [sym__expression] = STATE(419),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [362] = {
    [sym__expression] = STATE(420),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [363] = {
    [sym__expression] = STATE(421),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [364] = {
    [sym__expression] = STATE(422),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_DASH] = ACTIONS(500),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [365] = {
    [ts_builtin_sym_end] = ACTIONS(743),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(743),
    [sym_comment] = ACTIONS(14),
  },
  [366] = {
    [sym__end_of_statement] = STATE(423),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [367] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(726),
    [sym__newline] = ACTIONS(726),
  },
  [368] = {
    [anon_sym_COMMA] = ACTIONS(684),
    [anon_sym_PERCENT] = ACTIONS(684),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(684),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(684),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(684),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(684),
    [anon_sym_LT] = ACTIONS(684),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(684),
    [anon_sym_GT] = ACTIONS(684),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(684),
    [anon_sym_LT_EQ] = ACTIONS(684),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(684),
    [anon_sym_GT_EQ] = ACTIONS(684),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(684),
    [anon_sym_EQ_EQ] = ACTIONS(684),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(684),
    [anon_sym_SLASH_EQ] = ACTIONS(684),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(684),
    [anon_sym_SLASH_SLASH] = ACTIONS(684),
    [anon_sym_PLUS] = ACTIONS(684),
    [anon_sym_DASH] = ACTIONS(684),
    [anon_sym_STAR] = ACTIONS(684),
    [anon_sym_SLASH] = ACTIONS(684),
    [anon_sym_STAR_STAR] = ACTIONS(684),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(684),
    [sym__newline] = ACTIONS(684),
  },
  [369] = {
    [anon_sym_COMMA] = ACTIONS(745),
    [anon_sym_PERCENT] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_LT] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_GT] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_LT_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_GT_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_EQ_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_SLASH_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_SLASH_SLASH] = ACTIONS(646),
    [anon_sym_PLUS] = ACTIONS(648),
    [anon_sym_DASH] = ACTIONS(648),
    [anon_sym_STAR] = ACTIONS(650),
    [anon_sym_SLASH] = ACTIONS(650),
    [anon_sym_STAR_STAR] = ACTIONS(652),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(747),
    [sym__newline] = ACTIONS(747),
  },
  [370] = {
    [anon_sym_COMMA] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(552),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(510),
    [anon_sym_LT] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_GT] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_LT_EQ] = ACTIONS(508),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_GT_EQ] = ACTIONS(508),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(508),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_SLASH_EQ] = ACTIONS(508),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_SLASH_SLASH] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(506),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_STAR_STAR] = ACTIONS(508),
    [sym_comment] = ACTIONS(34),
  },
  [371] = {
    [anon_sym_COMMA] = ACTIONS(512),
    [anon_sym_PERCENT] = ACTIONS(552),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(566),
    [anon_sym_PLUS] = ACTIONS(568),
    [anon_sym_DASH] = ACTIONS(568),
    [anon_sym_STAR] = ACTIONS(570),
    [anon_sym_SLASH] = ACTIONS(570),
    [anon_sym_STAR_STAR] = ACTIONS(572),
    [sym_comment] = ACTIONS(34),
  },
  [372] = {
    [anon_sym_COMMA] = ACTIONS(512),
    [anon_sym_PERCENT] = ACTIONS(552),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(566),
    [anon_sym_PLUS] = ACTIONS(568),
    [anon_sym_DASH] = ACTIONS(568),
    [anon_sym_STAR] = ACTIONS(570),
    [anon_sym_SLASH] = ACTIONS(570),
    [anon_sym_STAR_STAR] = ACTIONS(572),
    [sym_comment] = ACTIONS(34),
  },
  [373] = {
    [anon_sym_COMMA] = ACTIONS(512),
    [anon_sym_PERCENT] = ACTIONS(552),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(554),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(556),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(566),
    [anon_sym_PLUS] = ACTIONS(568),
    [anon_sym_DASH] = ACTIONS(568),
    [anon_sym_STAR] = ACTIONS(570),
    [anon_sym_SLASH] = ACTIONS(570),
    [anon_sym_STAR_STAR] = ACTIONS(572),
    [sym_comment] = ACTIONS(34),
  },
  [374] = {
    [anon_sym_COMMA] = ACTIONS(518),
    [anon_sym_PERCENT] = ACTIONS(552),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_LT] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_GT] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_LT_EQ] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_GT_EQ] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_EQ_EQ] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_SLASH_EQ] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_SLASH_SLASH] = ACTIONS(566),
    [anon_sym_PLUS] = ACTIONS(568),
    [anon_sym_DASH] = ACTIONS(568),
    [anon_sym_STAR] = ACTIONS(570),
    [anon_sym_SLASH] = ACTIONS(570),
    [anon_sym_STAR_STAR] = ACTIONS(572),
    [sym_comment] = ACTIONS(34),
  },
  [375] = {
    [anon_sym_COMMA] = ACTIONS(524),
    [anon_sym_PERCENT] = ACTIONS(552),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_GT] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_EQ_EQ] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_SLASH_EQ] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_SLASH_SLASH] = ACTIONS(566),
    [anon_sym_PLUS] = ACTIONS(568),
    [anon_sym_DASH] = ACTIONS(568),
    [anon_sym_STAR] = ACTIONS(570),
    [anon_sym_SLASH] = ACTIONS(570),
    [anon_sym_STAR_STAR] = ACTIONS(572),
    [sym_comment] = ACTIONS(34),
  },
  [376] = {
    [anon_sym_COMMA] = ACTIONS(530),
    [anon_sym_PERCENT] = ACTIONS(552),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_EQ_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_SLASH] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(530),
    [anon_sym_STAR] = ACTIONS(570),
    [anon_sym_SLASH] = ACTIONS(570),
    [anon_sym_STAR_STAR] = ACTIONS(572),
    [sym_comment] = ACTIONS(34),
  },
  [377] = {
    [anon_sym_COMMA] = ACTIONS(530),
    [anon_sym_PERCENT] = ACTIONS(552),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_EQ_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_SLASH] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(530),
    [anon_sym_STAR] = ACTIONS(530),
    [anon_sym_SLASH] = ACTIONS(530),
    [anon_sym_STAR_STAR] = ACTIONS(572),
    [sym_comment] = ACTIONS(34),
  },
  [378] = {
    [anon_sym_COMMA] = ACTIONS(530),
    [anon_sym_PERCENT] = ACTIONS(552),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_EQ_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_SLASH] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(530),
    [anon_sym_STAR] = ACTIONS(530),
    [anon_sym_SLASH] = ACTIONS(530),
    [anon_sym_STAR_STAR] = ACTIONS(532),
    [sym_comment] = ACTIONS(34),
  },
  [379] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(749),
    [sym__newline] = ACTIONS(749),
  },
  [380] = {
    [sym__block_label] = STATE(425),
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(751),
    [sym__newline] = ACTIONS(751),
  },
  [381] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(753),
    [sym_comment] = ACTIONS(14),
  },
  [382] = {
    [sym_subroutine_call] = STATE(316),
    [sym_keyword_statement] = STATE(316),
    [sym_do_loop_statement] = STATE(316),
    [sym_if_statement] = STATE(316),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym_elseif_clause] = STATE(317),
    [sym_else_clause] = STATE(427),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(316),
    [sym_pointer_assignment_expression] = STATE(316),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(319),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(392),
    [aux_sym__block_if_statement_repeat1] = STATE(428),
    [sym_statement_label] = ACTIONS(583),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(755),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(587),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(589),
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
  [383] = {
    [sym_elseif_clause] = STATE(317),
    [sym_else_clause] = STATE(427),
    [aux_sym__block_if_statement_repeat1] = STATE(393),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(753),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(678),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(589),
    [sym_comment] = ACTIONS(14),
  },
  [384] = {
    [sym__end_of_statement] = STATE(429),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(420),
    [sym__newline] = ACTIONS(420),
  },
  [385] = {
    [sym__end_of_statement] = STATE(429),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_EQ_GT] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_SLASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(420),
    [sym__newline] = ACTIONS(420),
  },
  [386] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(751),
    [sym__newline] = ACTIONS(751),
  },
  [387] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(757),
    [sym_comment] = ACTIONS(14),
  },
  [388] = {
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
  [389] = {
    [sym__end_of_statement] = STATE(431),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(670),
    [sym__newline] = ACTIONS(670),
  },
  [390] = {
    [sym_subroutine_call] = STATE(433),
    [sym_keyword_statement] = STATE(433),
    [sym_do_loop_statement] = STATE(433),
    [sym_if_statement] = STATE(433),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(433),
    [sym_pointer_assignment_expression] = STATE(433),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(434),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(435),
    [sym_statement_label] = ACTIONS(759),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(761),
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
  [391] = {
    [sym_statement_label] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(334),
    [anon_sym_LPAREN] = ACTIONS(334),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(334),
    [anon_sym_DASH] = ACTIONS(334),
    [sym_block_label_start_expression] = ACTIONS(336),
    [sym_number_literal] = ACTIONS(336),
    [sym__double_quoted_string] = ACTIONS(336),
    [sym__single_quoted_string] = ACTIONS(336),
    [sym_boolean_literal] = ACTIONS(336),
    [sym_identifier] = ACTIONS(336),
    [sym_comment] = ACTIONS(34),
  },
  [392] = {
    [sym_subroutine_call] = STATE(316),
    [sym_keyword_statement] = STATE(316),
    [sym_do_loop_statement] = STATE(316),
    [sym_if_statement] = STATE(316),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(316),
    [sym_pointer_assignment_expression] = STATE(316),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(319),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(392),
    [sym_statement_label] = ACTIONS(763),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(357),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(334),
    [anon_sym_LPAREN] = ACTIONS(369),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(372),
    [anon_sym_PLUS] = ACTIONS(375),
    [anon_sym_DASH] = ACTIONS(375),
    [sym_block_label_start_expression] = ACTIONS(378),
    [sym_number_literal] = ACTIONS(381),
    [sym__double_quoted_string] = ACTIONS(384),
    [sym__single_quoted_string] = ACTIONS(384),
    [sym_boolean_literal] = ACTIONS(381),
    [sym_identifier] = ACTIONS(387),
    [sym_comment] = ACTIONS(34),
  },
  [393] = {
    [sym_elseif_clause] = STATE(317),
    [aux_sym__block_if_statement_repeat1] = STATE(393),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(766),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(768),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(771),
    [sym_comment] = ACTIONS(14),
  },
  [394] = {
    [anon_sym_COMMA] = ACTIONS(773),
    [anon_sym_RPAREN] = ACTIONS(773),
    [anon_sym_EQ] = ACTIONS(773),
    [anon_sym_EQ_GT] = ACTIONS(775),
    [anon_sym_PERCENT] = ACTIONS(773),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(773),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(773),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(773),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(726),
    [anon_sym_LT] = ACTIONS(773),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(773),
    [anon_sym_GT] = ACTIONS(773),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(773),
    [anon_sym_LT_EQ] = ACTIONS(775),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(773),
    [anon_sym_GT_EQ] = ACTIONS(775),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(773),
    [anon_sym_EQ_EQ] = ACTIONS(775),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(773),
    [anon_sym_SLASH_EQ] = ACTIONS(775),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(773),
    [anon_sym_SLASH_SLASH] = ACTIONS(775),
    [anon_sym_PLUS] = ACTIONS(773),
    [anon_sym_DASH] = ACTIONS(773),
    [anon_sym_STAR] = ACTIONS(773),
    [anon_sym_SLASH] = ACTIONS(773),
    [anon_sym_STAR_STAR] = ACTIONS(775),
    [anon_sym_COLON] = ACTIONS(773),
    [sym_comment] = ACTIONS(34),
  },
  [395] = {
    [sym__block_label] = STATE(436),
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(749),
    [sym__newline] = ACTIONS(749),
  },
  [396] = {
    [sym_subroutine_call] = STATE(316),
    [sym_keyword_statement] = STATE(316),
    [sym_do_loop_statement] = STATE(316),
    [sym_if_statement] = STATE(316),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym_elseif_clause] = STATE(317),
    [sym_else_clause] = STATE(427),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(316),
    [sym_pointer_assignment_expression] = STATE(316),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(319),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(437),
    [aux_sym__block_if_statement_repeat1] = STATE(428),
    [sym_statement_label] = ACTIONS(583),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(755),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(587),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(589),
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
  [397] = {
    [anon_sym_COMMA] = ACTIONS(270),
    [anon_sym_RPAREN] = ACTIONS(270),
    [anon_sym_PERCENT] = ACTIONS(696),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(270),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(274),
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
    [anon_sym_STAR] = ACTIONS(714),
    [anon_sym_SLASH] = ACTIONS(714),
    [anon_sym_STAR_STAR] = ACTIONS(716),
    [sym_comment] = ACTIONS(34),
  },
  [398] = {
    [anon_sym_COMMA] = ACTIONS(276),
    [anon_sym_RPAREN] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(696),
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
    [sym_comment] = ACTIONS(34),
  },
  [399] = {
    [sym__expression] = STATE(438),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_DASH] = ACTIONS(607),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [400] = {
    [sym__expression] = STATE(439),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_DASH] = ACTIONS(607),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [401] = {
    [sym__expression] = STATE(440),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_DASH] = ACTIONS(607),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [402] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_DASH] = ACTIONS(607),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [403] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_DASH] = ACTIONS(607),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [404] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_DASH] = ACTIONS(607),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [405] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_DASH] = ACTIONS(607),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [406] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_DASH] = ACTIONS(607),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [407] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_DASH] = ACTIONS(607),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [408] = {
    [anon_sym_COMMA] = ACTIONS(777),
    [anon_sym_RPAREN] = ACTIONS(777),
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
    [anon_sym_STAR] = ACTIONS(714),
    [anon_sym_SLASH] = ACTIONS(714),
    [anon_sym_STAR_STAR] = ACTIONS(716),
    [sym_comment] = ACTIONS(34),
  },
  [409] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(605),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_DASH] = ACTIONS(607),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
  },
  [410] = {
    [anon_sym_EQ] = ACTIONS(680),
    [anon_sym_PERCENT] = ACTIONS(680),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(680),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(684),
    [anon_sym_LT] = ACTIONS(680),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(680),
    [anon_sym_GT] = ACTIONS(680),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(680),
    [anon_sym_LT_EQ] = ACTIONS(682),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(680),
    [anon_sym_GT_EQ] = ACTIONS(682),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(680),
    [anon_sym_EQ_EQ] = ACTIONS(682),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(680),
    [anon_sym_SLASH_EQ] = ACTIONS(682),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(680),
    [anon_sym_SLASH_SLASH] = ACTIONS(682),
    [anon_sym_PLUS] = ACTIONS(680),
    [anon_sym_DASH] = ACTIONS(680),
    [anon_sym_STAR] = ACTIONS(680),
    [anon_sym_SLASH] = ACTIONS(680),
    [anon_sym_STAR_STAR] = ACTIONS(682),
    [sym_comment] = ACTIONS(34),
  },
  [411] = {
    [anon_sym_EQ] = ACTIONS(686),
    [anon_sym_PERCENT] = ACTIONS(686),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(686),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(686),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(686),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(613),
    [anon_sym_LT] = ACTIONS(686),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(686),
    [anon_sym_GT] = ACTIONS(686),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(686),
    [anon_sym_LT_EQ] = ACTIONS(688),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(686),
    [anon_sym_GT_EQ] = ACTIONS(688),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(686),
    [anon_sym_EQ_EQ] = ACTIONS(688),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(686),
    [anon_sym_SLASH_EQ] = ACTIONS(688),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(686),
    [anon_sym_SLASH_SLASH] = ACTIONS(688),
    [anon_sym_PLUS] = ACTIONS(686),
    [anon_sym_DASH] = ACTIONS(686),
    [anon_sym_STAR] = ACTIONS(686),
    [anon_sym_SLASH] = ACTIONS(686),
    [anon_sym_STAR_STAR] = ACTIONS(688),
    [sym_comment] = ACTIONS(34),
  },
  [412] = {
    [aux_sym_argument_list_repeat1] = STATE(346),
    [anon_sym_COMMA] = ACTIONS(480),
    [anon_sym_RPAREN] = ACTIONS(779),
    [sym_comment] = ACTIONS(14),
  },
  [413] = {
    [anon_sym_COMMA] = ACTIONS(726),
    [anon_sym_EQ] = ACTIONS(726),
    [anon_sym_PERCENT] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(726),
    [anon_sym_LT] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(726),
    [anon_sym_GT] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(726),
    [anon_sym_LT_EQ] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(726),
    [anon_sym_GT_EQ] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(726),
    [anon_sym_EQ_EQ] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(726),
    [anon_sym_SLASH_EQ] = ACTIONS(726),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(726),
    [anon_sym_SLASH_SLASH] = ACTIONS(726),
    [anon_sym_PLUS] = ACTIONS(726),
    [anon_sym_DASH] = ACTIONS(726),
    [anon_sym_STAR] = ACTIONS(726),
    [anon_sym_SLASH] = ACTIONS(726),
    [anon_sym_STAR_STAR] = ACTIONS(726),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(726),
    [sym__newline] = ACTIONS(726),
  },
  [414] = {
    [anon_sym_COMMA] = ACTIONS(510),
    [anon_sym_PERCENT] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(510),
    [anon_sym_LT] = ACTIONS(510),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(510),
    [anon_sym_GT] = ACTIONS(510),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(510),
    [anon_sym_LT_EQ] = ACTIONS(510),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(510),
    [anon_sym_GT_EQ] = ACTIONS(510),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(510),
    [anon_sym_EQ_EQ] = ACTIONS(510),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(510),
    [anon_sym_SLASH_EQ] = ACTIONS(510),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(510),
    [anon_sym_SLASH_SLASH] = ACTIONS(510),
    [anon_sym_PLUS] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(510),
    [anon_sym_STAR] = ACTIONS(510),
    [anon_sym_SLASH] = ACTIONS(510),
    [anon_sym_STAR_STAR] = ACTIONS(510),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(510),
    [sym__newline] = ACTIONS(510),
  },
  [415] = {
    [anon_sym_COMMA] = ACTIONS(516),
    [anon_sym_PERCENT] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
    [anon_sym_LT] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_GT] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_LT_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_GT_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_EQ_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_SLASH_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_SLASH_SLASH] = ACTIONS(646),
    [anon_sym_PLUS] = ACTIONS(648),
    [anon_sym_DASH] = ACTIONS(648),
    [anon_sym_STAR] = ACTIONS(650),
    [anon_sym_SLASH] = ACTIONS(650),
    [anon_sym_STAR_STAR] = ACTIONS(652),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(516),
    [sym__newline] = ACTIONS(516),
  },
  [416] = {
    [anon_sym_COMMA] = ACTIONS(516),
    [anon_sym_PERCENT] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
    [anon_sym_LT] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_GT] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_LT_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_GT_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_EQ_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_SLASH_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_SLASH_SLASH] = ACTIONS(646),
    [anon_sym_PLUS] = ACTIONS(648),
    [anon_sym_DASH] = ACTIONS(648),
    [anon_sym_STAR] = ACTIONS(650),
    [anon_sym_SLASH] = ACTIONS(650),
    [anon_sym_STAR_STAR] = ACTIONS(652),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(516),
    [sym__newline] = ACTIONS(516),
  },
  [417] = {
    [anon_sym_COMMA] = ACTIONS(516),
    [anon_sym_PERCENT] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(638),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(640),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
    [anon_sym_LT] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_GT] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_LT_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_GT_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_EQ_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_SLASH_EQ] = ACTIONS(644),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(644),
    [anon_sym_SLASH_SLASH] = ACTIONS(646),
    [anon_sym_PLUS] = ACTIONS(648),
    [anon_sym_DASH] = ACTIONS(648),
    [anon_sym_STAR] = ACTIONS(650),
    [anon_sym_SLASH] = ACTIONS(650),
    [anon_sym_STAR_STAR] = ACTIONS(652),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(516),
    [sym__newline] = ACTIONS(516),
  },
  [418] = {
    [anon_sym_COMMA] = ACTIONS(522),
    [anon_sym_PERCENT] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(522),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(522),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(646),
    [anon_sym_PLUS] = ACTIONS(648),
    [anon_sym_DASH] = ACTIONS(648),
    [anon_sym_STAR] = ACTIONS(650),
    [anon_sym_SLASH] = ACTIONS(650),
    [anon_sym_STAR_STAR] = ACTIONS(652),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(522),
    [sym__newline] = ACTIONS(522),
  },
  [419] = {
    [anon_sym_COMMA] = ACTIONS(528),
    [anon_sym_PERCENT] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(528),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(528),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(528),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(528),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(528),
    [anon_sym_GT] = ACTIONS(528),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(528),
    [anon_sym_LT_EQ] = ACTIONS(528),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(528),
    [anon_sym_GT_EQ] = ACTIONS(528),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(528),
    [anon_sym_EQ_EQ] = ACTIONS(528),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(528),
    [anon_sym_SLASH_EQ] = ACTIONS(528),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(528),
    [anon_sym_SLASH_SLASH] = ACTIONS(646),
    [anon_sym_PLUS] = ACTIONS(648),
    [anon_sym_DASH] = ACTIONS(648),
    [anon_sym_STAR] = ACTIONS(650),
    [anon_sym_SLASH] = ACTIONS(650),
    [anon_sym_STAR_STAR] = ACTIONS(652),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(528),
    [sym__newline] = ACTIONS(528),
  },
  [420] = {
    [anon_sym_COMMA] = ACTIONS(534),
    [anon_sym_PERCENT] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT_EQ] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT_EQ] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_EQ_EQ] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_EQ] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_SLASH] = ACTIONS(534),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_STAR] = ACTIONS(650),
    [anon_sym_SLASH] = ACTIONS(650),
    [anon_sym_STAR_STAR] = ACTIONS(652),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(534),
    [sym__newline] = ACTIONS(534),
  },
  [421] = {
    [anon_sym_COMMA] = ACTIONS(534),
    [anon_sym_PERCENT] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT_EQ] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT_EQ] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_EQ_EQ] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_EQ] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_SLASH] = ACTIONS(534),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_STAR] = ACTIONS(534),
    [anon_sym_SLASH] = ACTIONS(534),
    [anon_sym_STAR_STAR] = ACTIONS(652),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(534),
    [sym__newline] = ACTIONS(534),
  },
  [422] = {
    [anon_sym_COMMA] = ACTIONS(534),
    [anon_sym_PERCENT] = ACTIONS(636),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT_EQ] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_GT_EQ] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_EQ_EQ] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_EQ] = ACTIONS(534),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_SLASH_SLASH] = ACTIONS(534),
    [anon_sym_PLUS] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_STAR] = ACTIONS(534),
    [anon_sym_SLASH] = ACTIONS(534),
    [anon_sym_STAR_STAR] = ACTIONS(534),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(534),
    [sym__newline] = ACTIONS(534),
  },
  [423] = {
    [ts_builtin_sym_end] = ACTIONS(781),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(781),
    [sym_comment] = ACTIONS(14),
  },
  [424] = {
    [sym__expression] = STATE(449),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(210),
    [sym_number_literal] = ACTIONS(98),
    [sym__double_quoted_string] = ACTIONS(100),
    [sym__single_quoted_string] = ACTIONS(100),
    [sym_boolean_literal] = ACTIONS(98),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
  },
  [425] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(783),
    [sym__newline] = ACTIONS(783),
  },
  [426] = {
    [sym__block_label] = STATE(450),
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(783),
    [sym__newline] = ACTIONS(783),
  },
  [427] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(785),
    [sym_comment] = ACTIONS(14),
  },
  [428] = {
    [sym_elseif_clause] = STATE(317),
    [sym_else_clause] = STATE(452),
    [aux_sym__block_if_statement_repeat1] = STATE(393),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(785),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(678),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(589),
    [sym_comment] = ACTIONS(14),
  },
  [429] = {
    [sym_statement_label] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(398),
    [anon_sym_LPAREN] = ACTIONS(398),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_PLUS] = ACTIONS(398),
    [anon_sym_DASH] = ACTIONS(398),
    [sym_block_label_start_expression] = ACTIONS(400),
    [sym_number_literal] = ACTIONS(400),
    [sym__double_quoted_string] = ACTIONS(400),
    [sym__single_quoted_string] = ACTIONS(400),
    [sym_boolean_literal] = ACTIONS(400),
    [sym_identifier] = ACTIONS(400),
    [sym_comment] = ACTIONS(34),
  },
  [430] = {
    [sym__block_label] = STATE(453),
    [sym__end_of_statement] = STATE(454),
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(420),
    [sym__newline] = ACTIONS(420),
  },
  [431] = {
    [sym_subroutine_call] = STATE(433),
    [sym_keyword_statement] = STATE(433),
    [sym_do_loop_statement] = STATE(433),
    [sym_if_statement] = STATE(433),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(433),
    [sym_pointer_assignment_expression] = STATE(433),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(434),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(455),
    [sym_statement_label] = ACTIONS(759),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(787),
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
  [432] = {
    [sym_subroutine_call] = STATE(456),
    [sym_keyword_statement] = STATE(456),
    [sym_do_loop_statement] = STATE(456),
    [sym_if_statement] = STATE(456),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(456),
    [sym_pointer_assignment_expression] = STATE(456),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(457),
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
  [433] = {
    [sym__end_of_statement] = STATE(458),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(670),
    [sym__newline] = ACTIONS(670),
  },
  [434] = {
    [sym__end_of_statement] = STATE(458),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_EQ_GT] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_SLASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(670),
    [sym__newline] = ACTIONS(670),
  },
  [435] = {
    [sym_subroutine_call] = STATE(433),
    [sym_keyword_statement] = STATE(433),
    [sym_do_loop_statement] = STATE(433),
    [sym_if_statement] = STATE(433),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(433),
    [sym_pointer_assignment_expression] = STATE(433),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(434),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(459),
    [sym_statement_label] = ACTIONS(759),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(787),
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
  [436] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(789),
    [sym__newline] = ACTIONS(789),
  },
  [437] = {
    [sym_subroutine_call] = STATE(316),
    [sym_keyword_statement] = STATE(316),
    [sym_do_loop_statement] = STATE(316),
    [sym_if_statement] = STATE(316),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym_elseif_clause] = STATE(317),
    [sym_else_clause] = STATE(452),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(316),
    [sym_pointer_assignment_expression] = STATE(316),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(319),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(392),
    [aux_sym__block_if_statement_repeat1] = STATE(460),
    [sym_statement_label] = ACTIONS(583),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(791),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(587),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(589),
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
  [438] = {
    [anon_sym_COMMA] = ACTIONS(506),
    [anon_sym_RPAREN] = ACTIONS(506),
    [anon_sym_PERCENT] = ACTIONS(696),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(510),
    [anon_sym_LT] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_GT] = ACTIONS(506),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_LT_EQ] = ACTIONS(508),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_GT_EQ] = ACTIONS(508),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(508),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_SLASH_EQ] = ACTIONS(508),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(506),
    [anon_sym_SLASH_SLASH] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(506),
    [anon_sym_SLASH] = ACTIONS(506),
    [anon_sym_STAR_STAR] = ACTIONS(508),
    [sym_comment] = ACTIONS(34),
  },
  [439] = {
    [anon_sym_COMMA] = ACTIONS(512),
    [anon_sym_RPAREN] = ACTIONS(512),
    [anon_sym_PERCENT] = ACTIONS(696),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
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
    [anon_sym_STAR] = ACTIONS(714),
    [anon_sym_SLASH] = ACTIONS(714),
    [anon_sym_STAR_STAR] = ACTIONS(716),
    [sym_comment] = ACTIONS(34),
  },
  [440] = {
    [anon_sym_COMMA] = ACTIONS(512),
    [anon_sym_RPAREN] = ACTIONS(512),
    [anon_sym_PERCENT] = ACTIONS(696),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
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
    [anon_sym_STAR] = ACTIONS(714),
    [anon_sym_SLASH] = ACTIONS(714),
    [anon_sym_STAR_STAR] = ACTIONS(716),
    [sym_comment] = ACTIONS(34),
  },
  [441] = {
    [anon_sym_COMMA] = ACTIONS(512),
    [anon_sym_RPAREN] = ACTIONS(512),
    [anon_sym_PERCENT] = ACTIONS(696),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(698),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(700),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(512),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(516),
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
    [anon_sym_STAR] = ACTIONS(714),
    [anon_sym_SLASH] = ACTIONS(714),
    [anon_sym_STAR_STAR] = ACTIONS(716),
    [sym_comment] = ACTIONS(34),
  },
  [442] = {
    [anon_sym_COMMA] = ACTIONS(518),
    [anon_sym_RPAREN] = ACTIONS(518),
    [anon_sym_PERCENT] = ACTIONS(696),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(522),
    [anon_sym_LT] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_GT] = ACTIONS(518),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_LT_EQ] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_GT_EQ] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_EQ_EQ] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_SLASH_EQ] = ACTIONS(520),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(518),
    [anon_sym_SLASH_SLASH] = ACTIONS(710),
    [anon_sym_PLUS] = ACTIONS(712),
    [anon_sym_DASH] = ACTIONS(712),
    [anon_sym_STAR] = ACTIONS(714),
    [anon_sym_SLASH] = ACTIONS(714),
    [anon_sym_STAR_STAR] = ACTIONS(716),
    [sym_comment] = ACTIONS(34),
  },
  [443] = {
    [anon_sym_COMMA] = ACTIONS(524),
    [anon_sym_RPAREN] = ACTIONS(524),
    [anon_sym_PERCENT] = ACTIONS(696),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(528),
    [anon_sym_LT] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_GT] = ACTIONS(524),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_LT_EQ] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_GT_EQ] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_EQ_EQ] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_SLASH_EQ] = ACTIONS(526),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(524),
    [anon_sym_SLASH_SLASH] = ACTIONS(710),
    [anon_sym_PLUS] = ACTIONS(712),
    [anon_sym_DASH] = ACTIONS(712),
    [anon_sym_STAR] = ACTIONS(714),
    [anon_sym_SLASH] = ACTIONS(714),
    [anon_sym_STAR_STAR] = ACTIONS(716),
    [sym_comment] = ACTIONS(34),
  },
  [444] = {
    [anon_sym_COMMA] = ACTIONS(530),
    [anon_sym_RPAREN] = ACTIONS(530),
    [anon_sym_PERCENT] = ACTIONS(696),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_EQ_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_SLASH] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(530),
    [anon_sym_STAR] = ACTIONS(714),
    [anon_sym_SLASH] = ACTIONS(714),
    [anon_sym_STAR_STAR] = ACTIONS(716),
    [sym_comment] = ACTIONS(34),
  },
  [445] = {
    [anon_sym_COMMA] = ACTIONS(530),
    [anon_sym_RPAREN] = ACTIONS(530),
    [anon_sym_PERCENT] = ACTIONS(696),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_EQ_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_SLASH] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(530),
    [anon_sym_STAR] = ACTIONS(530),
    [anon_sym_SLASH] = ACTIONS(530),
    [anon_sym_STAR_STAR] = ACTIONS(716),
    [sym_comment] = ACTIONS(34),
  },
  [446] = {
    [anon_sym_COMMA] = ACTIONS(530),
    [anon_sym_RPAREN] = ACTIONS(530),
    [anon_sym_PERCENT] = ACTIONS(696),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(534),
    [anon_sym_LT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT] = ACTIONS(530),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_LT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_GT_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_EQ_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_EQ] = ACTIONS(532),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(530),
    [anon_sym_SLASH_SLASH] = ACTIONS(532),
    [anon_sym_PLUS] = ACTIONS(530),
    [anon_sym_DASH] = ACTIONS(530),
    [anon_sym_STAR] = ACTIONS(530),
    [anon_sym_SLASH] = ACTIONS(530),
    [anon_sym_STAR_STAR] = ACTIONS(532),
    [sym_comment] = ACTIONS(34),
  },
  [447] = {
    [anon_sym_COMMA] = ACTIONS(793),
    [anon_sym_RPAREN] = ACTIONS(793),
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
    [anon_sym_STAR] = ACTIONS(714),
    [anon_sym_SLASH] = ACTIONS(714),
    [anon_sym_STAR_STAR] = ACTIONS(716),
    [sym_comment] = ACTIONS(34),
  },
  [448] = {
    [anon_sym_EQ] = ACTIONS(773),
    [anon_sym_PERCENT] = ACTIONS(773),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(773),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(773),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(773),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(726),
    [anon_sym_LT] = ACTIONS(773),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(773),
    [anon_sym_GT] = ACTIONS(773),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(773),
    [anon_sym_LT_EQ] = ACTIONS(775),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(773),
    [anon_sym_GT_EQ] = ACTIONS(775),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(773),
    [anon_sym_EQ_EQ] = ACTIONS(775),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(773),
    [anon_sym_SLASH_EQ] = ACTIONS(775),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(773),
    [anon_sym_SLASH_SLASH] = ACTIONS(775),
    [anon_sym_PLUS] = ACTIONS(773),
    [anon_sym_DASH] = ACTIONS(773),
    [anon_sym_STAR] = ACTIONS(773),
    [anon_sym_SLASH] = ACTIONS(773),
    [anon_sym_STAR_STAR] = ACTIONS(775),
    [sym_comment] = ACTIONS(34),
  },
  [449] = {
    [anon_sym_PERCENT] = ACTIONS(214),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(216),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(218),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(220),
    [anon_sym_LT] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_GT] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_LT_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_GT_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_EQ_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_SLASH_EQ] = ACTIONS(222),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(222),
    [anon_sym_SLASH_SLASH] = ACTIONS(224),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_DASH] = ACTIONS(226),
    [anon_sym_STAR] = ACTIONS(228),
    [anon_sym_SLASH] = ACTIONS(228),
    [anon_sym_STAR_STAR] = ACTIONS(230),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(795),
    [sym__newline] = ACTIONS(795),
  },
  [450] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(797),
    [sym__newline] = ACTIONS(797),
  },
  [451] = {
    [sym__block_label] = STATE(461),
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(797),
    [sym__newline] = ACTIONS(797),
  },
  [452] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(799),
    [sym_comment] = ACTIONS(14),
  },
  [453] = {
    [sym__end_of_statement] = STATE(463),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(420),
    [sym__newline] = ACTIONS(420),
  },
  [454] = {
    [sym_subroutine_call] = STATE(316),
    [sym_keyword_statement] = STATE(316),
    [sym_do_loop_statement] = STATE(316),
    [sym_if_statement] = STATE(316),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(316),
    [sym_pointer_assignment_expression] = STATE(316),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(319),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(464),
    [sym_statement_label] = ACTIONS(583),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(801),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(801),
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
  [455] = {
    [sym_subroutine_call] = STATE(433),
    [sym_keyword_statement] = STATE(433),
    [sym_do_loop_statement] = STATE(433),
    [sym_if_statement] = STATE(433),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(433),
    [sym_pointer_assignment_expression] = STATE(433),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(434),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(459),
    [sym_statement_label] = ACTIONS(759),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(803),
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
  [456] = {
    [sym__end_of_statement] = STATE(465),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(670),
    [sym__newline] = ACTIONS(670),
  },
  [457] = {
    [sym__end_of_statement] = STATE(465),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_EQ_GT] = ACTIONS(128),
    [anon_sym_PERCENT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_EQ] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_SLASH] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(670),
    [sym__newline] = ACTIONS(670),
  },
  [458] = {
    [sym_statement_label] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(334),
    [anon_sym_LPAREN] = ACTIONS(334),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(334),
    [anon_sym_DASH] = ACTIONS(334),
    [sym_block_label_start_expression] = ACTIONS(336),
    [sym_number_literal] = ACTIONS(336),
    [sym__double_quoted_string] = ACTIONS(336),
    [sym__single_quoted_string] = ACTIONS(336),
    [sym_boolean_literal] = ACTIONS(336),
    [sym_identifier] = ACTIONS(336),
    [sym_comment] = ACTIONS(34),
  },
  [459] = {
    [sym_subroutine_call] = STATE(433),
    [sym_keyword_statement] = STATE(433),
    [sym_do_loop_statement] = STATE(433),
    [sym_if_statement] = STATE(433),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(433),
    [sym_pointer_assignment_expression] = STATE(433),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(434),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(459),
    [sym_statement_label] = ACTIONS(805),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(348),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(354),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(357),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(360),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(366),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(334),
    [anon_sym_LPAREN] = ACTIONS(369),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(372),
    [anon_sym_PLUS] = ACTIONS(375),
    [anon_sym_DASH] = ACTIONS(375),
    [sym_block_label_start_expression] = ACTIONS(378),
    [sym_number_literal] = ACTIONS(381),
    [sym__double_quoted_string] = ACTIONS(384),
    [sym__single_quoted_string] = ACTIONS(384),
    [sym_boolean_literal] = ACTIONS(381),
    [sym_identifier] = ACTIONS(387),
    [sym_comment] = ACTIONS(34),
  },
  [460] = {
    [sym_elseif_clause] = STATE(317),
    [sym_else_clause] = STATE(466),
    [aux_sym__block_if_statement_repeat1] = STATE(393),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(799),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(678),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(589),
    [sym_comment] = ACTIONS(14),
  },
  [461] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(808),
    [sym__newline] = ACTIONS(808),
  },
  [462] = {
    [sym__block_label] = STATE(467),
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(808),
    [sym__newline] = ACTIONS(808),
  },
  [463] = {
    [sym_subroutine_call] = STATE(316),
    [sym_keyword_statement] = STATE(316),
    [sym_do_loop_statement] = STATE(316),
    [sym_if_statement] = STATE(316),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(316),
    [sym_pointer_assignment_expression] = STATE(316),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(319),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(468),
    [sym_statement_label] = ACTIONS(583),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(810),
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
  [464] = {
    [sym_subroutine_call] = STATE(316),
    [sym_keyword_statement] = STATE(316),
    [sym_do_loop_statement] = STATE(316),
    [sym_if_statement] = STATE(316),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(316),
    [sym_pointer_assignment_expression] = STATE(316),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(319),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(392),
    [sym_statement_label] = ACTIONS(583),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(810),
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
    [sym_statement_label] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(398),
    [anon_sym_LPAREN] = ACTIONS(398),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(398),
    [anon_sym_PLUS] = ACTIONS(398),
    [anon_sym_DASH] = ACTIONS(398),
    [sym_block_label_start_expression] = ACTIONS(400),
    [sym_number_literal] = ACTIONS(400),
    [sym__double_quoted_string] = ACTIONS(400),
    [sym__single_quoted_string] = ACTIONS(400),
    [sym_boolean_literal] = ACTIONS(400),
    [sym_identifier] = ACTIONS(400),
    [sym_comment] = ACTIONS(34),
  },
  [466] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(812),
    [sym_comment] = ACTIONS(14),
  },
  [467] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(814),
    [sym__newline] = ACTIONS(814),
  },
  [468] = {
    [sym_subroutine_call] = STATE(316),
    [sym_keyword_statement] = STATE(316),
    [sym_do_loop_statement] = STATE(316),
    [sym_if_statement] = STATE(316),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(316),
    [sym_pointer_assignment_expression] = STATE(316),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(319),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(392),
    [sym_statement_label] = ACTIONS(583),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(816),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(816),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(816),
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
  [469] = {
    [sym__block_label] = STATE(470),
    [sym_identifier] = ACTIONS(414),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(814),
    [sym__newline] = ACTIONS(814),
  },
  [470] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(818),
    [sym__newline] = ACTIONS(818),
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
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(37),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 1),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_intrinsic_type, 1),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_intrinsic_type, 1),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_keyword_statement, 1),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(61),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 1),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [134] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 1),
  [140] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 1),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(76),
  [150] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [152] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [154] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(83),
  [158] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 1),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [172] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(95),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(98),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(102),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__end_of_statement, 1),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [198] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subroutine_call, 2),
  [200] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_keyword_statement, 2),
  [202] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(106),
  [204] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(107),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(111),
  [216] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(112),
  [218] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(113),
  [220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(114),
  [222] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(115),
  [224] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(116),
  [226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(117),
  [228] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(118),
  [230] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(119),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(135),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(138),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(140),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
  [256] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(141),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(145),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_logical_expression, 2),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 2),
  [274] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 2),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 2),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(152),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [294] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(155),
  [296] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [298] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(158),
  [300] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(161),
  [302] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(162),
  [304] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(164),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
  [308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(168),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
  [320] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(176),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(177),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(179),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(180),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2),
  [336] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2),
  [340] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(13),
  [343] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [345] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(14),
  [348] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(15),
  [351] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(16),
  [354] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(17),
  [357] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(18),
  [360] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(19),
  [363] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(20),
  [366] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(21),
  [369] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(22),
  [372] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(23),
  [375] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(24),
  [378] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(25),
  [381] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(26),
  [384] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(27),
  [387] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(28),
  [390] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(193),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [394] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(195),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 3),
  [400] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 3),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(201),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(211),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
  [414] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(218),
  [416] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 3),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [420] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(225),
  [422] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(228),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
  [426] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(230),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 3),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [438] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(245),
  [442] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assumed_size_dimension, 1),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 1),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(248),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(250),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(251),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(252),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(253),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(254),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(255),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
  [464] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(256),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(262),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(266),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(267),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(268),
  [490] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(270),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(273),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_declaration, 3),
  [496] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(278),
  [502] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [504] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [510] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_logical_expression, 3),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 3),
  [516] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 3),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [522] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [528] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 3),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [534] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [538] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(290),
  [540] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(291),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(292),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
  [548] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(294),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(297),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(298),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(299),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(300),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(301),
  [560] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(301),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(302),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
  [568] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
  [574] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 4),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(308),
  [578] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_label, 1, .alias_sequence_id = 1),
  [580] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(122),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(312),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(313),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(314),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(315),
  [591] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__inline_if_statement, 4),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(322),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(323),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(323),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(326),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(328),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(329),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 2),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(331),
  [613] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_declaration, 4),
  [619] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 4),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(348),
  [623] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(348),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(349),
  [627] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(352),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(352),
  [633] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), SHIFT_REPEAT(167),
  [636] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(356),
  [638] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(357),
  [640] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(358),
  [642] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(359),
  [644] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(360),
  [646] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(361),
  [648] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(362),
  [650] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(363),
  [652] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(364),
  [654] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 8),
  [656] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(366),
  [658] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
  [660] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(368),
  [662] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 5),
  [664] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__inline_if_statement, 5),
  [666] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(380),
  [668] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 5),
  [670] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(388),
  [672] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__block_if_statement_repeat1, 1),
  [674] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__block_if_statement_repeat1, 1),
  [676] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(380),
  [678] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
  [680] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_complex_literal, 5),
  [682] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [684] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [686] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [688] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [690] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(394),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(395),
  [694] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 3),
  [696] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(399),
  [698] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(400),
  [700] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(401),
  [702] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(402),
  [704] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(402),
  [706] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(403),
  [708] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(403),
  [710] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(404),
  [712] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(405),
  [714] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(406),
  [716] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(407),
  [718] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_keyword_argument, 3),
  [720] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [722] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [724] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(409),
  [726] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [728] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(251),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_declaration, 5),
  [733] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 5),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(410),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(411),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(411),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(413),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 9),
  [745] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(424),
  [747] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_loop_control_expression, 5),
  [749] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 6),
  [751] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 6),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(426),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(426),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(430),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(432),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2),
  [763] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(312),
  [766] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__block_if_statement_repeat1, 2),
  [768] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__block_if_statement_repeat1, 2), SHIFT_REPEAT(314),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__block_if_statement_repeat1, 2),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 4),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(448),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 10),
  [783] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 7),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(451),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
  [789] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 7),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(451),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 5),
  [795] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_loop_control_expression, 7),
  [797] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 8),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(462),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 4),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 4),
  [805] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(432),
  [808] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 9),
  [810] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 5),
  [812] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(469),
  [814] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 10),
  [816] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 6),
  [818] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 11),
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
