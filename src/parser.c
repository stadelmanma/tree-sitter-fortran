#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 412
#define SYMBOL_COUNT 101
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
  sym__block_label = 90,
  sym_loop_control_expression = 91,
  sym_complex_literal = 92,
  sym_string_literal = 93,
  sym__end_of_statement = 94,
  aux_sym_translation_unit_repeat1 = 95,
  aux_sym_program_block_repeat1 = 96,
  aux_sym_program_block_repeat2 = 97,
  aux_sym_variable_declaration_repeat1 = 98,
  aux_sym__block_if_statement_repeat1 = 99,
  aux_sym_argument_list_repeat1 = 100,
  alias_sym_block_label = 101,
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
      if (lookahead == ')')
        ADVANCE(19);
      if (lookahead == ',')
        ADVANCE(45);
      if (lookahead == ':')
        ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 201:
      if (lookahead == ':')
        ADVANCE(51);
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
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(375);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(376);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(377);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(381);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(383);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(365);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 375:
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
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(375);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(376);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(377);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(381);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(335);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(355);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(383);
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
        ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 376:
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
    case 377:
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
        ADVANCE(378);
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
    case 378:
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
    case 379:
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
        ADVANCE(380);
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
    case 380:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 381:
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
    case 382:
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
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(384);
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
    case 384:
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
    case 385:
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
    case 386:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(387);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(389);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(391);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(386);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(395);
      END_STATE();
    case 387:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(388);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 389:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(390);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 391:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(392);
      END_STATE();
    case 392:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(393);
      END_STATE();
    case 393:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(394);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_statement_label);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(395);
      END_STATE();
    case 396:
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
        ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(398);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(399);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(414);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(416);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(418);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 397:
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
    case 398:
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
        ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(398);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(399);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(412);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(413);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(414);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(415);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(416);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(418);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(400);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(406);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(252);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(256);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(401);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(400);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(406);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(400);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(406);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(407);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(400);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(406);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(400);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(406);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(411);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(43);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(400);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(406);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(32);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(400);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(406);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(400);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(406);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 419:
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
        SKIP(419);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(420);
      if (lookahead == '!')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == ')')
        ADVANCE(421);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == ',')
        ADVANCE(422);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == ':')
        ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(424);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(399);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(414);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(416);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(418);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 421:
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
    case 422:
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
    case 423:
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
    case 424:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(420);
      if (lookahead == '!')
        ADVANCE(205);
      if (lookahead == '\"')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(232);
      if (lookahead == '(')
        ADVANCE(246);
      if (lookahead == ')')
        ADVANCE(421);
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == ',')
        ADVANCE(422);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == ':')
        ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(424);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(399);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(412);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(413);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(414);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(415);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(416);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(418);
      if (lookahead != 0)
        ADVANCE(373);
      END_STATE();
    case 425:
      if (lookahead == '\n')
        SKIP(425);
      if (lookahead == '!')
        ADVANCE(426);
      if (lookahead == '%')
        ADVANCE(455);
      if (lookahead == '(')
        ADVANCE(484);
      if (lookahead == ')')
        ADVANCE(485);
      if (lookahead == '*')
        ADVANCE(486);
      if (lookahead == '+')
        ADVANCE(487);
      if (lookahead == ',')
        ADVANCE(488);
      if (lookahead == '-')
        ADVANCE(489);
      if (lookahead == '/')
        ADVANCE(490);
      if (lookahead == ':')
        ADVANCE(491);
      if (lookahead == '<')
        ADVANCE(492);
      if (lookahead == '=')
        ADVANCE(493);
      if (lookahead == '>')
        ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(495);
      if (lookahead != 0)
        ADVANCE(509);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(427);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(431);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(436);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(441);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(446);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(430);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(435);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(434);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(437);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(439);
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
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
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
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(442);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(444);
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
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(445);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(451);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(450);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(454);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(460);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(481);
      END_STATE();
    case 456:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(457);
      END_STATE();
    case 457:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(458);
      END_STATE();
    case 458:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(459);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH);
      END_STATE();
    case 460:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(461);
      END_STATE();
    case 461:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(464);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(463);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      END_STATE();
    case 465:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(466);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(468);
      END_STATE();
    case 466:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(467);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 468:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(469);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 470:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(471);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(473);
      END_STATE();
    case 471:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(472);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 473:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(474);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 475:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(476);
      END_STATE();
    case 476:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(480);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(478);
      END_STATE();
    case 478:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(479);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 481:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(482);
      END_STATE();
    case 482:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(483);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(460);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(481);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(460);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(481);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(21);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(460);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(481);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(460);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(481);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(460);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(481);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(460);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(481);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(48);
      if (lookahead == '=')
        ADVANCE(49);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(460);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(481);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(460);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(481);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(54);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(460);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(481);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(56);
      if (lookahead == '>')
        ADVANCE(57);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(460);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(481);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(59);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(460);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(481);
      END_STATE();
    case 495:
      if (lookahead == '\n')
        SKIP(425);
      if (lookahead == '!')
        ADVANCE(426);
      if (lookahead == '%')
        ADVANCE(455);
      if (lookahead == '(')
        ADVANCE(484);
      if (lookahead == ')')
        ADVANCE(485);
      if (lookahead == '*')
        ADVANCE(486);
      if (lookahead == '+')
        ADVANCE(487);
      if (lookahead == ',')
        ADVANCE(488);
      if (lookahead == '-')
        ADVANCE(489);
      if (lookahead == '/')
        ADVANCE(490);
      if (lookahead == ':')
        ADVANCE(491);
      if (lookahead == '<')
        ADVANCE(492);
      if (lookahead == '=')
        ADVANCE(493);
      if (lookahead == '>')
        ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(495);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(496);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(498);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(499);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(502);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(505);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(508);
      if (lookahead != 0)
        ADVANCE(509);
      END_STATE();
    case 496:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(460);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(497);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(481);
      END_STATE();
    case 497:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(458);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(476);
      END_STATE();
    case 498:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(460);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(481);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(461);
      END_STATE();
    case 499:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(500);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(481);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(468);
      END_STATE();
    case 500:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(467);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(464);
      END_STATE();
    case 502:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(503);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(481);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(473);
      END_STATE();
    case 503:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(472);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(464);
      END_STATE();
    case 505:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(506);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(481);
      END_STATE();
    case 506:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(480);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(464);
      END_STATE();
    case 508:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(460);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(481);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(482);
      END_STATE();
    case 509:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(460);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(481);
      END_STATE();
    case 510:
      if (lookahead == '\n')
        ADVANCE(203);
      if (lookahead == '!')
        ADVANCE(426);
      if (lookahead == '%')
        ADVANCE(455);
      if (lookahead == '(')
        ADVANCE(484);
      if (lookahead == '*')
        ADVANCE(486);
      if (lookahead == '+')
        ADVANCE(487);
      if (lookahead == ',')
        ADVANCE(488);
      if (lookahead == '-')
        ADVANCE(489);
      if (lookahead == '/')
        ADVANCE(490);
      if (lookahead == ';')
        ADVANCE(511);
      if (lookahead == '<')
        ADVANCE(492);
      if (lookahead == '=')
        ADVANCE(493);
      if (lookahead == '>')
        ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(512);
      if (lookahead != 0)
        ADVANCE(509);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__semicolon);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(460);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(481);
      END_STATE();
    case 512:
      if (lookahead == '\n')
        ADVANCE(203);
      if (lookahead == '!')
        ADVANCE(426);
      if (lookahead == '%')
        ADVANCE(455);
      if (lookahead == '(')
        ADVANCE(484);
      if (lookahead == '*')
        ADVANCE(486);
      if (lookahead == '+')
        ADVANCE(487);
      if (lookahead == ',')
        ADVANCE(488);
      if (lookahead == '-')
        ADVANCE(489);
      if (lookahead == '/')
        ADVANCE(490);
      if (lookahead == ';')
        ADVANCE(511);
      if (lookahead == '<')
        ADVANCE(492);
      if (lookahead == '=')
        ADVANCE(493);
      if (lookahead == '>')
        ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(512);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(496);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(498);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(499);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(502);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(505);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(508);
      if (lookahead != 0)
        ADVANCE(509);
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
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(514);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(376);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(377);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(332);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(383);
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
    case 514:
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
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(260);
      if (lookahead == '.')
        ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(514);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(376);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(377);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(379);
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
        ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(355);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(383);
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
    case 515:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '=')
        ADVANCE(516);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(515);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(517);
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
        ADVANCE(518);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(376);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(377);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(519);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(383);
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
    case 518:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(517);
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
        ADVANCE(518);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(376);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(377);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(519);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(335);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(355);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(383);
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
    case 519:
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
        ADVANCE(520);
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
    case 520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(521);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(522);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 522:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(522);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(523);
      END_STATE();
    case 523:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(524);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(527);
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
        ADVANCE(528);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(376);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(377);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(381);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(383);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(365);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(533);
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
    case 528:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(527);
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
        ADVANCE(528);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(376);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(377);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(381);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(335);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(355);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(383);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(365);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(529);
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
    case 529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(530);
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
    case 530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
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
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(265);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(530);
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
    case 534:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(23);
      if (lookahead == '.')
        ADVANCE(30);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(535);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(536);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(166);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(534);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y'))
        ADVANCE(64);
      END_STATE();
    case 535:
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
    case 536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(64);
      END_STATE();
    case 537:
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
    case 538:
      if (lookahead == '\n')
        SKIP(538);
      if (lookahead == '!')
        ADVANCE(426);
      if (lookahead == '%')
        ADVANCE(455);
      if (lookahead == '(')
        ADVANCE(484);
      if (lookahead == ')')
        ADVANCE(485);
      if (lookahead == '*')
        ADVANCE(486);
      if (lookahead == '+')
        ADVANCE(487);
      if (lookahead == ',')
        ADVANCE(488);
      if (lookahead == '-')
        ADVANCE(489);
      if (lookahead == '/')
        ADVANCE(490);
      if (lookahead == ':')
        ADVANCE(491);
      if (lookahead == '<')
        ADVANCE(492);
      if (lookahead == '=')
        ADVANCE(539);
      if (lookahead == '>')
        ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(540);
      if (lookahead != 0)
        ADVANCE(509);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(56);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(460);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(465);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(470);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(475);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(481);
      END_STATE();
    case 540:
      if (lookahead == '\n')
        SKIP(538);
      if (lookahead == '!')
        ADVANCE(426);
      if (lookahead == '%')
        ADVANCE(455);
      if (lookahead == '(')
        ADVANCE(484);
      if (lookahead == ')')
        ADVANCE(485);
      if (lookahead == '*')
        ADVANCE(486);
      if (lookahead == '+')
        ADVANCE(487);
      if (lookahead == ',')
        ADVANCE(488);
      if (lookahead == '-')
        ADVANCE(489);
      if (lookahead == '/')
        ADVANCE(490);
      if (lookahead == ':')
        ADVANCE(491);
      if (lookahead == '<')
        ADVANCE(492);
      if (lookahead == '=')
        ADVANCE(539);
      if (lookahead == '>')
        ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(540);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(496);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(498);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(499);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(502);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(505);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(508);
      if (lookahead != 0)
        ADVANCE(509);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(541);
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
        ADVANCE(542);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(376);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(377);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(543);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(383);
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
    case 542:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(541);
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
        ADVANCE(542);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(376);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(377);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(543);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(335);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(355);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(383);
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
    case 543:
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
        ADVANCE(544);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(549);
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
    case 544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(137);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(550);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
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
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(551);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 551:
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(551);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(552);
      END_STATE();
    case 552:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(553);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':')
        ADVANCE(264);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH);
      if (lookahead == ':')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(271);
      END_STATE();
    case 556:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(557);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(556);
      END_STATE();
    case 557:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(558);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(561);
      END_STATE();
    case 558:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(559);
      END_STATE();
    case 559:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(560);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(137);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(138);
      END_STATE();
    case 561:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(551);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(562);
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
        ADVANCE(563);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(376);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(377);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(564);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(383);
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
    case 563:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(562);
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
        ADVANCE(563);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(376);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(377);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(564);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(335);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(336);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(355);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(356);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(383);
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
    case 564:
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
        ADVANCE(549);
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
  [13] = {.lex_state = 200},
  [14] = {.lex_state = 374},
  [15] = {.lex_state = 200},
  [16] = {.lex_state = 202},
  [17] = {.lex_state = 200},
  [18] = {.lex_state = 386},
  [19] = {.lex_state = 396},
  [20] = {.lex_state = 419},
  [21] = {.lex_state = 200},
  [22] = {.lex_state = 420},
  [23] = {.lex_state = 420},
  [24] = {.lex_state = 420},
  [25] = {.lex_state = 386},
  [26] = {.lex_state = 425},
  [27] = {.lex_state = 425},
  [28] = {.lex_state = 425},
  [29] = {.lex_state = 204},
  [30] = {.lex_state = 200},
  [31] = {.lex_state = 202},
  [32] = {.lex_state = 202},
  [33] = {.lex_state = 425},
  [34] = {.lex_state = 510},
  [35] = {.lex_state = 204},
  [36] = {.lex_state = 513},
  [37] = {.lex_state = 202},
  [38] = {.lex_state = 204},
  [39] = {.lex_state = 513},
  [40] = {.lex_state = 419},
  [41] = {.lex_state = 192},
  [42] = {.lex_state = 192},
  [43] = {.lex_state = 202},
  [44] = {.lex_state = 510},
  [45] = {.lex_state = 200},
  [46] = {.lex_state = 202},
  [47] = {.lex_state = 202},
  [48] = {.lex_state = 420},
  [49] = {.lex_state = 420},
  [50] = {.lex_state = 420},
  [51] = {.lex_state = 510},
  [52] = {.lex_state = 510},
  [53] = {.lex_state = 510},
  [54] = {.lex_state = 510},
  [55] = {.lex_state = 515},
  [56] = {.lex_state = 517},
  [57] = {.lex_state = 202},
  [58] = {.lex_state = 517},
  [59] = {.lex_state = 420},
  [60] = {.lex_state = 527},
  [61] = {.lex_state = 420},
  [62] = {.lex_state = 420},
  [63] = {.lex_state = 425},
  [64] = {.lex_state = 425},
  [65] = {.lex_state = 425},
  [66] = {.lex_state = 425},
  [67] = {.lex_state = 425},
  [68] = {.lex_state = 425},
  [69] = {.lex_state = 419},
  [70] = {.lex_state = 200},
  [71] = {.lex_state = 420},
  [72] = {.lex_state = 510},
  [73] = {.lex_state = 200},
  [74] = {.lex_state = 419},
  [75] = {.lex_state = 513},
  [76] = {.lex_state = 513},
  [77] = {.lex_state = 420},
  [78] = {.lex_state = 420},
  [79] = {.lex_state = 420},
  [80] = {.lex_state = 420},
  [81] = {.lex_state = 420},
  [82] = {.lex_state = 420},
  [83] = {.lex_state = 420},
  [84] = {.lex_state = 420},
  [85] = {.lex_state = 420},
  [86] = {.lex_state = 420},
  [87] = {.lex_state = 420},
  [88] = {.lex_state = 204},
  [89] = {.lex_state = 513},
  [90] = {.lex_state = 419},
  [91] = {.lex_state = 192},
  [92] = {.lex_state = 202},
  [93] = {.lex_state = 513},
  [94] = {.lex_state = 202},
  [95] = {.lex_state = 513},
  [96] = {.lex_state = 420},
  [97] = {.lex_state = 202},
  [98] = {.lex_state = 425},
  [99] = {.lex_state = 425},
  [100] = {.lex_state = 425},
  [101] = {.lex_state = 510},
  [102] = {.lex_state = 510},
  [103] = {.lex_state = 420},
  [104] = {.lex_state = 420},
  [105] = {.lex_state = 420},
  [106] = {.lex_state = 420},
  [107] = {.lex_state = 420},
  [108] = {.lex_state = 420},
  [109] = {.lex_state = 420},
  [110] = {.lex_state = 420},
  [111] = {.lex_state = 420},
  [112] = {.lex_state = 420},
  [113] = {.lex_state = 517},
  [114] = {.lex_state = 374},
  [115] = {.lex_state = 419},
  [116] = {.lex_state = 202},
  [117] = {.lex_state = 510},
  [118] = {.lex_state = 517},
  [119] = {.lex_state = 425},
  [120] = {.lex_state = 374},
  [121] = {.lex_state = 419},
  [122] = {.lex_state = 202},
  [123] = {.lex_state = 510},
  [124] = {.lex_state = 425},
  [125] = {.lex_state = 425},
  [126] = {.lex_state = 534},
  [127] = {.lex_state = 420},
  [128] = {.lex_state = 425},
  [129] = {.lex_state = 425},
  [130] = {.lex_state = 420},
  [131] = {.lex_state = 420},
  [132] = {.lex_state = 420},
  [133] = {.lex_state = 420},
  [134] = {.lex_state = 420},
  [135] = {.lex_state = 420},
  [136] = {.lex_state = 420},
  [137] = {.lex_state = 420},
  [138] = {.lex_state = 420},
  [139] = {.lex_state = 202},
  [140] = {.lex_state = 420},
  [141] = {.lex_state = 386},
  [142] = {.lex_state = 510},
  [143] = {.lex_state = 420},
  [144] = {.lex_state = 420},
  [145] = {.lex_state = 420},
  [146] = {.lex_state = 538},
  [147] = {.lex_state = 425},
  [148] = {.lex_state = 200},
  [149] = {.lex_state = 419},
  [150] = {.lex_state = 200},
  [151] = {.lex_state = 204},
  [152] = {.lex_state = 419},
  [153] = {.lex_state = 510},
  [154] = {.lex_state = 510},
  [155] = {.lex_state = 425},
  [156] = {.lex_state = 425},
  [157] = {.lex_state = 425},
  [158] = {.lex_state = 425},
  [159] = {.lex_state = 425},
  [160] = {.lex_state = 425},
  [161] = {.lex_state = 425},
  [162] = {.lex_state = 425},
  [163] = {.lex_state = 425},
  [164] = {.lex_state = 202},
  [165] = {.lex_state = 192},
  [166] = {.lex_state = 419},
  [167] = {.lex_state = 202},
  [168] = {.lex_state = 202},
  [169] = {.lex_state = 425},
  [170] = {.lex_state = 200},
  [171] = {.lex_state = 534},
  [172] = {.lex_state = 510},
  [173] = {.lex_state = 510},
  [174] = {.lex_state = 510},
  [175] = {.lex_state = 510},
  [176] = {.lex_state = 510},
  [177] = {.lex_state = 510},
  [178] = {.lex_state = 510},
  [179] = {.lex_state = 510},
  [180] = {.lex_state = 510},
  [181] = {.lex_state = 510},
  [182] = {.lex_state = 420},
  [183] = {.lex_state = 420},
  [184] = {.lex_state = 425},
  [185] = {.lex_state = 419},
  [186] = {.lex_state = 517},
  [187] = {.lex_state = 202},
  [188] = {.lex_state = 510},
  [189] = {.lex_state = 202},
  [190] = {.lex_state = 202},
  [191] = {.lex_state = 517},
  [192] = {.lex_state = 517},
  [193] = {.lex_state = 527},
  [194] = {.lex_state = 202},
  [195] = {.lex_state = 510},
  [196] = {.lex_state = 541},
  [197] = {.lex_state = 202},
  [198] = {.lex_state = 541},
  [199] = {.lex_state = 202},
  [200] = {.lex_state = 202},
  [201] = {.lex_state = 200},
  [202] = {.lex_state = 425},
  [203] = {.lex_state = 425},
  [204] = {.lex_state = 200},
  [205] = {.lex_state = 425},
  [206] = {.lex_state = 425},
  [207] = {.lex_state = 425},
  [208] = {.lex_state = 425},
  [209] = {.lex_state = 425},
  [210] = {.lex_state = 425},
  [211] = {.lex_state = 425},
  [212] = {.lex_state = 425},
  [213] = {.lex_state = 425},
  [214] = {.lex_state = 517},
  [215] = {.lex_state = 425},
  [216] = {.lex_state = 419},
  [217] = {.lex_state = 425},
  [218] = {.lex_state = 425},
  [219] = {.lex_state = 420},
  [220] = {.lex_state = 425},
  [221] = {.lex_state = 420},
  [222] = {.lex_state = 420},
  [223] = {.lex_state = 510},
  [224] = {.lex_state = 420},
  [225] = {.lex_state = 420},
  [226] = {.lex_state = 420},
  [227] = {.lex_state = 420},
  [228] = {.lex_state = 420},
  [229] = {.lex_state = 420},
  [230] = {.lex_state = 420},
  [231] = {.lex_state = 420},
  [232] = {.lex_state = 420},
  [233] = {.lex_state = 420},
  [234] = {.lex_state = 200},
  [235] = {.lex_state = 204},
  [236] = {.lex_state = 419},
  [237] = {.lex_state = 419},
  [238] = {.lex_state = 419},
  [239] = {.lex_state = 192},
  [240] = {.lex_state = 202},
  [241] = {.lex_state = 419},
  [242] = {.lex_state = 202},
  [243] = {.lex_state = 200},
  [244] = {.lex_state = 200},
  [245] = {.lex_state = 425},
  [246] = {.lex_state = 425},
  [247] = {.lex_state = 420},
  [248] = {.lex_state = 420},
  [249] = {.lex_state = 420},
  [250] = {.lex_state = 420},
  [251] = {.lex_state = 420},
  [252] = {.lex_state = 420},
  [253] = {.lex_state = 420},
  [254] = {.lex_state = 420},
  [255] = {.lex_state = 420},
  [256] = {.lex_state = 420},
  [257] = {.lex_state = 202},
  [258] = {.lex_state = 419},
  [259] = {.lex_state = 517},
  [260] = {.lex_state = 202},
  [261] = {.lex_state = 541},
  [262] = {.lex_state = 374},
  [263] = {.lex_state = 419},
  [264] = {.lex_state = 200},
  [265] = {.lex_state = 419},
  [266] = {.lex_state = 202},
  [267] = {.lex_state = 556},
  [268] = {.lex_state = 556},
  [269] = {.lex_state = 510},
  [270] = {.lex_state = 541},
  [271] = {.lex_state = 556},
  [272] = {.lex_state = 425},
  [273] = {.lex_state = 425},
  [274] = {.lex_state = 200},
  [275] = {.lex_state = 517},
  [276] = {.lex_state = 386},
  [277] = {.lex_state = 202},
  [278] = {.lex_state = 420},
  [279] = {.lex_state = 420},
  [280] = {.lex_state = 425},
  [281] = {.lex_state = 420},
  [282] = {.lex_state = 425},
  [283] = {.lex_state = 425},
  [284] = {.lex_state = 200},
  [285] = {.lex_state = 425},
  [286] = {.lex_state = 425},
  [287] = {.lex_state = 425},
  [288] = {.lex_state = 425},
  [289] = {.lex_state = 425},
  [290] = {.lex_state = 425},
  [291] = {.lex_state = 425},
  [292] = {.lex_state = 425},
  [293] = {.lex_state = 425},
  [294] = {.lex_state = 425},
  [295] = {.lex_state = 510},
  [296] = {.lex_state = 200},
  [297] = {.lex_state = 204},
  [298] = {.lex_state = 192},
  [299] = {.lex_state = 202},
  [300] = {.lex_state = 202},
  [301] = {.lex_state = 510},
  [302] = {.lex_state = 420},
  [303] = {.lex_state = 420},
  [304] = {.lex_state = 510},
  [305] = {.lex_state = 425},
  [306] = {.lex_state = 425},
  [307] = {.lex_state = 425},
  [308] = {.lex_state = 425},
  [309] = {.lex_state = 425},
  [310] = {.lex_state = 425},
  [311] = {.lex_state = 425},
  [312] = {.lex_state = 425},
  [313] = {.lex_state = 425},
  [314] = {.lex_state = 202},
  [315] = {.lex_state = 419},
  [316] = {.lex_state = 556},
  [317] = {.lex_state = 541},
  [318] = {.lex_state = 556},
  [319] = {.lex_state = 202},
  [320] = {.lex_state = 510},
  [321] = {.lex_state = 202},
  [322] = {.lex_state = 386},
  [323] = {.lex_state = 562},
  [324] = {.lex_state = 202},
  [325] = {.lex_state = 562},
  [326] = {.lex_state = 541},
  [327] = {.lex_state = 541},
  [328] = {.lex_state = 556},
  [329] = {.lex_state = 425},
  [330] = {.lex_state = 419},
  [331] = {.lex_state = 541},
  [332] = {.lex_state = 425},
  [333] = {.lex_state = 425},
  [334] = {.lex_state = 420},
  [335] = {.lex_state = 420},
  [336] = {.lex_state = 420},
  [337] = {.lex_state = 420},
  [338] = {.lex_state = 420},
  [339] = {.lex_state = 420},
  [340] = {.lex_state = 420},
  [341] = {.lex_state = 420},
  [342] = {.lex_state = 420},
  [343] = {.lex_state = 425},
  [344] = {.lex_state = 420},
  [345] = {.lex_state = 192},
  [346] = {.lex_state = 510},
  [347] = {.lex_state = 510},
  [348] = {.lex_state = 420},
  [349] = {.lex_state = 420},
  [350] = {.lex_state = 420},
  [351] = {.lex_state = 420},
  [352] = {.lex_state = 420},
  [353] = {.lex_state = 420},
  [354] = {.lex_state = 420},
  [355] = {.lex_state = 420},
  [356] = {.lex_state = 420},
  [357] = {.lex_state = 420},
  [358] = {.lex_state = 202},
  [359] = {.lex_state = 419},
  [360] = {.lex_state = 556},
  [361] = {.lex_state = 556},
  [362] = {.lex_state = 541},
  [363] = {.lex_state = 419},
  [364] = {.lex_state = 562},
  [365] = {.lex_state = 374},
  [366] = {.lex_state = 202},
  [367] = {.lex_state = 510},
  [368] = {.lex_state = 562},
  [369] = {.lex_state = 202},
  [370] = {.lex_state = 541},
  [371] = {.lex_state = 425},
  [372] = {.lex_state = 425},
  [373] = {.lex_state = 425},
  [374] = {.lex_state = 425},
  [375] = {.lex_state = 425},
  [376] = {.lex_state = 425},
  [377] = {.lex_state = 425},
  [378] = {.lex_state = 425},
  [379] = {.lex_state = 425},
  [380] = {.lex_state = 425},
  [381] = {.lex_state = 510},
  [382] = {.lex_state = 510},
  [383] = {.lex_state = 510},
  [384] = {.lex_state = 510},
  [385] = {.lex_state = 510},
  [386] = {.lex_state = 510},
  [387] = {.lex_state = 510},
  [388] = {.lex_state = 510},
  [389] = {.lex_state = 510},
  [390] = {.lex_state = 510},
  [391] = {.lex_state = 202},
  [392] = {.lex_state = 419},
  [393] = {.lex_state = 556},
  [394] = {.lex_state = 202},
  [395] = {.lex_state = 541},
  [396] = {.lex_state = 562},
  [397] = {.lex_state = 202},
  [398] = {.lex_state = 510},
  [399] = {.lex_state = 562},
  [400] = {.lex_state = 562},
  [401] = {.lex_state = 556},
  [402] = {.lex_state = 202},
  [403] = {.lex_state = 419},
  [404] = {.lex_state = 541},
  [405] = {.lex_state = 541},
  [406] = {.lex_state = 562},
  [407] = {.lex_state = 556},
  [408] = {.lex_state = 202},
  [409] = {.lex_state = 541},
  [410] = {.lex_state = 419},
  [411] = {.lex_state = 202},
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
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(14),
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
    [sym_identifier] = ACTIONS(84),
    [sym_comment] = ACTIONS(14),
  },
  [16] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(86),
    [sym__newline] = ACTIONS(86),
  },
  [17] = {
    [sym_identifier] = ACTIONS(88),
    [sym_comment] = ACTIONS(14),
  },
  [18] = {
    [sym_statement_label] = ACTIONS(88),
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
    [anon_sym_LPAREN] = ACTIONS(90),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(92),
    [anon_sym_PLUS] = ACTIONS(94),
    [anon_sym_DASH] = ACTIONS(94),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(86),
    [sym__newline] = ACTIONS(86),
  },
  [20] = {
    [sym_loop_control_expression] = STATE(57),
    [sym__end_of_statement] = STATE(58),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(104),
    [sym__newline] = ACTIONS(104),
  },
  [21] = {
    [sym_parenthesized_expression] = STATE(60),
    [anon_sym_LPAREN] = ACTIONS(106),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_number_literal] = ACTIONS(112),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(114),
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
    [sym_identifier] = ACTIONS(116),
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
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [25] = {
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(120),
    [sym_comment] = ACTIONS(14),
  },
  [26] = {
    [anon_sym_COMMA] = ACTIONS(122),
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
    [anon_sym_COLON] = ACTIONS(122),
    [sym_comment] = ACTIONS(34),
  },
  [27] = {
    [anon_sym_COMMA] = ACTIONS(128),
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_EQ_GT] = ACTIONS(130),
    [anon_sym_PERCENT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(132),
    [anon_sym_LT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT] = ACTIONS(128),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_LT_EQ] = ACTIONS(130),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_GT_EQ] = ACTIONS(130),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_EQ_EQ] = ACTIONS(130),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_EQ] = ACTIONS(130),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(128),
    [anon_sym_SLASH_SLASH] = ACTIONS(130),
    [anon_sym_PLUS] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [anon_sym_STAR] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_STAR_STAR] = ACTIONS(130),
    [anon_sym_COLON] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [28] = {
    [sym_argument_list] = STATE(72),
    [anon_sym_LPAREN] = ACTIONS(134),
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
    [sym_comment] = ACTIONS(34),
  },
  [29] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(136),
    [sym_statement_label] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(136),
    [anon_sym_LPAREN] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(136),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(136),
    [sym_block_label_start_expression] = ACTIONS(138),
    [sym_number_literal] = ACTIONS(138),
    [sym__double_quoted_string] = ACTIONS(138),
    [sym__single_quoted_string] = ACTIONS(138),
    [sym_boolean_literal] = ACTIONS(138),
    [sym_identifier] = ACTIONS(138),
    [sym_comment] = ACTIONS(34),
  },
  [30] = {
    [anon_sym_COLON_COLON] = ACTIONS(140),
    [sym_identifier] = ACTIONS(142),
    [sym_comment] = ACTIONS(14),
  },
  [31] = {
    [sym__end_of_statement] = STATE(76),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(144),
    [sym__newline] = ACTIONS(144),
  },
  [32] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(146),
    [sym__newline] = ACTIONS(146),
  },
  [33] = {
    [anon_sym_EQ] = ACTIONS(148),
    [anon_sym_EQ_GT] = ACTIONS(150),
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
  [34] = {
    [sym__end_of_statement] = STATE(76),
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_EQ_GT] = ACTIONS(126),
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
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(144),
    [sym__newline] = ACTIONS(144),
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
    [aux_sym_program_block_repeat1] = STATE(88),
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
    [aux_sym_program_block_repeat2] = STATE(89),
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
    [sym__end_of_statement] = STATE(91),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(174),
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
    [aux_sym_program_block_repeat1] = STATE(88),
    [aux_sym_program_block_repeat2] = STATE(93),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(176),
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
    [aux_sym_program_block_repeat2] = STATE(89),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(176),
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
    [sym__end_of_statement] = STATE(91),
    [sym_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(180),
    [sym_comment] = ACTIONS(14),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(182),
    [sym_comment] = ACTIONS(14),
  },
  [43] = {
    [sym__end_of_statement] = STATE(95),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(144),
    [sym__newline] = ACTIONS(144),
  },
  [44] = {
    [sym__end_of_statement] = STATE(95),
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_EQ_GT] = ACTIONS(126),
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
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(144),
    [sym__newline] = ACTIONS(144),
  },
  [45] = {
    [sym_argument_list] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(184),
    [sym_comment] = ACTIONS(14),
  },
  [46] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(186),
    [sym__newline] = ACTIONS(186),
  },
  [47] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(188),
    [sym__newline] = ACTIONS(188),
  },
  [48] = {
    [sym__expression] = STATE(100),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(192),
    [sym_comment] = ACTIONS(34),
  },
  [49] = {
    [sym__expression] = STATE(101),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [50] = {
    [sym__expression] = STATE(102),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [51] = {
    [anon_sym_COMMA] = ACTIONS(126),
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
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(126),
    [sym__newline] = ACTIONS(126),
  },
  [52] = {
    [anon_sym_COMMA] = ACTIONS(132),
    [anon_sym_PERCENT] = ACTIONS(132),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(132),
    [anon_sym_LT] = ACTIONS(132),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(132),
    [anon_sym_GT] = ACTIONS(132),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(132),
    [anon_sym_LT_EQ] = ACTIONS(132),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(132),
    [anon_sym_GT_EQ] = ACTIONS(132),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(132),
    [anon_sym_EQ_EQ] = ACTIONS(132),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(132),
    [anon_sym_SLASH_EQ] = ACTIONS(132),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(132),
    [anon_sym_SLASH_SLASH] = ACTIONS(132),
    [anon_sym_PLUS] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(132),
    [anon_sym_STAR] = ACTIONS(132),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_STAR_STAR] = ACTIONS(132),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(132),
    [sym__newline] = ACTIONS(132),
  },
  [53] = {
    [sym_argument_list] = STATE(72),
    [anon_sym_COMMA] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(200),
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
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(126),
    [sym__newline] = ACTIONS(126),
  },
  [54] = {
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(208),
    [anon_sym_LT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_LT_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_EQ_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_SLASH] = ACTIONS(212),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_STAR] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_STAR_STAR] = ACTIONS(218),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(188),
    [sym__newline] = ACTIONS(188),
  },
  [55] = {
    [anon_sym_EQ] = ACTIONS(220),
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
    [sym__end_of_statement] = STATE(113),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(104),
    [sym__newline] = ACTIONS(104),
  },
  [58] = {
    [sym_subroutine_call] = STATE(116),
    [sym_keyword_statement] = STATE(116),
    [sym_do_loop_statement] = STATE(116),
    [sym_if_statement] = STATE(116),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(116),
    [sym_pointer_assignment_expression] = STATE(116),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(117),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(118),
    [sym_statement_label] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(224),
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
    [sym__expression] = STATE(119),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [60] = {
    [sym_subroutine_call] = STATE(122),
    [sym_keyword_statement] = STATE(122),
    [sym_do_loop_statement] = STATE(122),
    [sym_if_statement] = STATE(122),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(122),
    [sym_pointer_assignment_expression] = STATE(122),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(123),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [sym_statement_label] = ACTIONS(226),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(228),
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
    [sym__expression] = STATE(124),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [62] = {
    [sym__expression] = STATE(125),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [63] = {
    [anon_sym_COMMA] = ACTIONS(230),
    [anon_sym_RPAREN] = ACTIONS(122),
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
    [sym_comment] = ACTIONS(34),
  },
  [64] = {
    [sym_argument_list] = STATE(128),
    [anon_sym_COMMA] = ACTIONS(230),
    [anon_sym_LPAREN] = ACTIONS(232),
    [anon_sym_RPAREN] = ACTIONS(122),
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
    [sym_comment] = ACTIONS(34),
  },
  [65] = {
    [anon_sym_RPAREN] = ACTIONS(234),
    [anon_sym_PERCENT] = ACTIONS(236),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(244),
    [anon_sym_LT] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_LT_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_GT_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_EQ_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_SLASH_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_SLASH_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [66] = {
    [sym_argument_list] = STATE(128),
    [anon_sym_COMMA] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(232),
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
    [anon_sym_COLON] = ACTIONS(122),
    [sym_comment] = ACTIONS(34),
  },
  [67] = {
    [anon_sym_EQ] = ACTIONS(258),
    [anon_sym_EQ_GT] = ACTIONS(260),
    [anon_sym_PERCENT] = ACTIONS(152),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(262),
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
  [68] = {
    [anon_sym_EQ] = ACTIONS(264),
    [anon_sym_EQ_GT] = ACTIONS(266),
    [anon_sym_PERCENT] = ACTIONS(152),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(268),
    [anon_sym_LT] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_GT] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_LT_EQ] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_GT_EQ] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_EQ_EQ] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_SLASH_EQ] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_SLASH_SLASH] = ACTIONS(266),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(264),
    [anon_sym_SLASH] = ACTIONS(264),
    [anon_sym_STAR_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(34),
  },
  [69] = {
    [sym_loop_control_expression] = STATE(139),
    [sym__end_of_statement] = STATE(113),
    [sym_identifier] = ACTIONS(102),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(104),
    [sym__newline] = ACTIONS(104),
  },
  [70] = {
    [sym_parenthesized_expression] = STATE(141),
    [anon_sym_LPAREN] = ACTIONS(270),
    [sym_comment] = ACTIONS(14),
  },
  [71] = {
    [sym__expression] = STATE(147),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_keyword_argument] = STATE(148),
    [sym_array_slice] = STATE(148),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(272),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(276),
    [anon_sym_COLON] = ACTIONS(278),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(34),
  },
  [72] = {
    [anon_sym_COMMA] = ACTIONS(282),
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
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(282),
    [sym__newline] = ACTIONS(282),
  },
  [73] = {
    [sym_identifier] = ACTIONS(284),
    [sym_comment] = ACTIONS(14),
  },
  [74] = {
    [sym__end_of_statement] = STATE(151),
    [aux_sym_variable_declaration_repeat1] = STATE(152),
    [anon_sym_COMMA] = ACTIONS(286),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [75] = {
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
  [76] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(288),
    [sym_statement_label] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(288),
    [anon_sym_LPAREN] = ACTIONS(288),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [sym_block_label_start_expression] = ACTIONS(290),
    [sym_number_literal] = ACTIONS(290),
    [sym__double_quoted_string] = ACTIONS(290),
    [sym__single_quoted_string] = ACTIONS(290),
    [sym_boolean_literal] = ACTIONS(290),
    [sym_identifier] = ACTIONS(290),
    [sym_comment] = ACTIONS(34),
  },
  [77] = {
    [sym__expression] = STATE(153),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [78] = {
    [sym__expression] = STATE(154),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [79] = {
    [sym__expression] = STATE(155),
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
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [80] = {
    [sym__expression] = STATE(156),
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
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [81] = {
    [sym__expression] = STATE(157),
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
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [82] = {
    [sym__expression] = STATE(158),
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
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [83] = {
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
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [84] = {
    [sym__expression] = STATE(160),
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
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [85] = {
    [sym__expression] = STATE(161),
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
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [86] = {
    [sym__expression] = STATE(162),
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
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [87] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(62),
    [anon_sym_PLUS] = ACTIONS(64),
    [anon_sym_DASH] = ACTIONS(64),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [88] = {
    [sym_variable_declaration] = STATE(29),
    [sym_intrinsic_type] = STATE(30),
    [aux_sym_program_block_repeat1] = STATE(88),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(292),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(294),
    [sym_statement_label] = ACTIONS(292),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(292),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(292),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(292),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(292),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(292),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(292),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(292),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(292),
    [anon_sym_LPAREN] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(292),
    [anon_sym_PLUS] = ACTIONS(292),
    [anon_sym_DASH] = ACTIONS(292),
    [sym_block_label_start_expression] = ACTIONS(297),
    [sym_number_literal] = ACTIONS(297),
    [sym__double_quoted_string] = ACTIONS(297),
    [sym__single_quoted_string] = ACTIONS(297),
    [sym_boolean_literal] = ACTIONS(297),
    [sym_identifier] = ACTIONS(297),
    [sym_comment] = ACTIONS(34),
  },
  [89] = {
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
    [aux_sym_program_block_repeat2] = STATE(89),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(288),
    [sym_statement_label] = ACTIONS(299),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(317),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(320),
    [anon_sym_LPAREN] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(326),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [sym_block_label_start_expression] = ACTIONS(332),
    [sym_number_literal] = ACTIONS(335),
    [sym__double_quoted_string] = ACTIONS(338),
    [sym__single_quoted_string] = ACTIONS(338),
    [sym_boolean_literal] = ACTIONS(335),
    [sym_identifier] = ACTIONS(341),
    [sym_comment] = ACTIONS(34),
  },
  [90] = {
    [sym__end_of_statement] = STATE(165),
    [sym_identifier] = ACTIONS(344),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(346),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(346),
    [sym_comment] = ACTIONS(14),
  },
  [92] = {
    [sym__end_of_statement] = STATE(165),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(348),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [93] = {
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
    [aux_sym_program_block_repeat2] = STATE(89),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(350),
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
  [94] = {
    [sym__end_of_statement] = STATE(165),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [95] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(352),
    [sym_statement_label] = ACTIONS(352),
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
  [96] = {
    [sym__expression] = STATE(169),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_keyword_argument] = STATE(170),
    [sym_array_slice] = STATE(170),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(356),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(276),
    [anon_sym_COLON] = ACTIONS(278),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(34),
  },
  [97] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(282),
    [sym__newline] = ACTIONS(282),
  },
  [98] = {
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(122),
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
    [sym_comment] = ACTIONS(34),
  },
  [99] = {
    [sym_argument_list] = STATE(128),
    [anon_sym_COMMA] = ACTIONS(358),
    [anon_sym_LPAREN] = ACTIONS(232),
    [anon_sym_RPAREN] = ACTIONS(122),
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
    [sym_comment] = ACTIONS(34),
  },
  [100] = {
    [anon_sym_RPAREN] = ACTIONS(360),
    [anon_sym_PERCENT] = ACTIONS(236),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(244),
    [anon_sym_LT] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_LT_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_GT_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_EQ_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_SLASH_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_SLASH_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [101] = {
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(262),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(262),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(262),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(262),
    [anon_sym_LT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_LT_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_EQ_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_SLASH] = ACTIONS(212),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_STAR] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_STAR_STAR] = ACTIONS(218),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(262),
    [sym__newline] = ACTIONS(262),
  },
  [102] = {
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(268),
    [anon_sym_LT] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(268),
    [anon_sym_GT] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(268),
    [anon_sym_LT_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(268),
    [anon_sym_GT_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(268),
    [anon_sym_EQ_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(268),
    [anon_sym_SLASH_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(268),
    [anon_sym_SLASH_SLASH] = ACTIONS(268),
    [anon_sym_PLUS] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(268),
    [anon_sym_STAR] = ACTIONS(268),
    [anon_sym_SLASH] = ACTIONS(268),
    [anon_sym_STAR_STAR] = ACTIONS(268),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(268),
    [sym__newline] = ACTIONS(268),
  },
  [103] = {
    [sym__expression] = STATE(173),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [104] = {
    [sym__expression] = STATE(174),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [105] = {
    [sym__expression] = STATE(175),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [106] = {
    [sym__expression] = STATE(176),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [107] = {
    [sym__expression] = STATE(177),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [108] = {
    [sym__expression] = STATE(178),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [109] = {
    [sym__expression] = STATE(179),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [110] = {
    [sym__expression] = STATE(180),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [111] = {
    [sym__expression] = STATE(181),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [112] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(364),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [113] = {
    [sym_subroutine_call] = STATE(116),
    [sym_keyword_statement] = STATE(116),
    [sym_do_loop_statement] = STATE(116),
    [sym_if_statement] = STATE(116),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(116),
    [sym_pointer_assignment_expression] = STATE(116),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(117),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(186),
    [sym_statement_label] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(366),
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
  [114] = {
    [sym_subroutine_call] = STATE(187),
    [sym_keyword_statement] = STATE(187),
    [sym_do_loop_statement] = STATE(187),
    [sym_if_statement] = STATE(187),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(187),
    [sym_pointer_assignment_expression] = STATE(187),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(188),
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
  [115] = {
    [sym__block_label] = STATE(190),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(370),
    [sym__newline] = ACTIONS(370),
  },
  [116] = {
    [sym__end_of_statement] = STATE(191),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(104),
    [sym__newline] = ACTIONS(104),
  },
  [117] = {
    [sym__end_of_statement] = STATE(191),
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_EQ_GT] = ACTIONS(126),
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
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(104),
    [sym__newline] = ACTIONS(104),
  },
  [118] = {
    [sym_subroutine_call] = STATE(116),
    [sym_keyword_statement] = STATE(116),
    [sym_do_loop_statement] = STATE(116),
    [sym_if_statement] = STATE(116),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(116),
    [sym_pointer_assignment_expression] = STATE(116),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(117),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(192),
    [sym_statement_label] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(366),
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
  [119] = {
    [anon_sym_RPAREN] = ACTIONS(372),
    [anon_sym_PERCENT] = ACTIONS(236),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(244),
    [anon_sym_LT] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_LT_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_GT_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_EQ_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_SLASH_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_SLASH_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [120] = {
    [sym_subroutine_call] = STATE(194),
    [sym_keyword_statement] = STATE(194),
    [sym_do_loop_statement] = STATE(194),
    [sym_if_statement] = STATE(194),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(194),
    [sym_pointer_assignment_expression] = STATE(194),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(195),
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
  [121] = {
    [sym__block_label] = STATE(197),
    [sym__end_of_statement] = STATE(198),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(374),
    [sym__newline] = ACTIONS(374),
  },
  [122] = {
    [sym__end_of_statement] = STATE(200),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(376),
    [sym__newline] = ACTIONS(376),
  },
  [123] = {
    [sym__end_of_statement] = STATE(200),
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_EQ_GT] = ACTIONS(126),
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
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(376),
    [sym__newline] = ACTIONS(376),
  },
  [124] = {
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(236),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(262),
    [anon_sym_LT] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_LT_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_GT_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_EQ_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_SLASH_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_SLASH_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [125] = {
    [anon_sym_RPAREN] = ACTIONS(264),
    [anon_sym_PERCENT] = ACTIONS(236),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(268),
    [anon_sym_LT] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_GT] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_LT_EQ] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_GT_EQ] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_EQ_EQ] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_SLASH_EQ] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_SLASH_SLASH] = ACTIONS(266),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(264),
    [anon_sym_SLASH] = ACTIONS(264),
    [anon_sym_STAR_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(34),
  },
  [126] = {
    [sym_number_literal] = ACTIONS(378),
    [sym_identifier] = ACTIONS(380),
    [sym_comment] = ACTIONS(14),
  },
  [127] = {
    [sym__expression] = STATE(203),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_keyword_argument] = STATE(204),
    [sym_array_slice] = STATE(204),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(382),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(276),
    [anon_sym_COLON] = ACTIONS(278),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(34),
  },
  [128] = {
    [anon_sym_COMMA] = ACTIONS(384),
    [anon_sym_RPAREN] = ACTIONS(384),
    [anon_sym_EQ] = ACTIONS(384),
    [anon_sym_EQ_GT] = ACTIONS(386),
    [anon_sym_PERCENT] = ACTIONS(384),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(282),
    [anon_sym_LT] = ACTIONS(384),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(384),
    [anon_sym_GT] = ACTIONS(384),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(384),
    [anon_sym_LT_EQ] = ACTIONS(386),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(384),
    [anon_sym_GT_EQ] = ACTIONS(386),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(384),
    [anon_sym_EQ_EQ] = ACTIONS(386),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(384),
    [anon_sym_SLASH_EQ] = ACTIONS(386),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(384),
    [anon_sym_SLASH_SLASH] = ACTIONS(386),
    [anon_sym_PLUS] = ACTIONS(384),
    [anon_sym_DASH] = ACTIONS(384),
    [anon_sym_STAR] = ACTIONS(384),
    [anon_sym_SLASH] = ACTIONS(384),
    [anon_sym_STAR_STAR] = ACTIONS(386),
    [anon_sym_COLON] = ACTIONS(384),
    [sym_comment] = ACTIONS(34),
  },
  [129] = {
    [anon_sym_COMMA] = ACTIONS(388),
    [anon_sym_RPAREN] = ACTIONS(388),
    [anon_sym_EQ] = ACTIONS(388),
    [anon_sym_EQ_GT] = ACTIONS(390),
    [anon_sym_PERCENT] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_LT] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(388),
    [anon_sym_GT] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(388),
    [anon_sym_LT_EQ] = ACTIONS(390),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(388),
    [anon_sym_GT_EQ] = ACTIONS(390),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(388),
    [anon_sym_EQ_EQ] = ACTIONS(390),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(388),
    [anon_sym_SLASH_EQ] = ACTIONS(390),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(388),
    [anon_sym_SLASH_SLASH] = ACTIONS(390),
    [anon_sym_PLUS] = ACTIONS(388),
    [anon_sym_DASH] = ACTIONS(388),
    [anon_sym_STAR] = ACTIONS(388),
    [anon_sym_SLASH] = ACTIONS(388),
    [anon_sym_STAR_STAR] = ACTIONS(390),
    [anon_sym_COLON] = ACTIONS(388),
    [sym_comment] = ACTIONS(34),
  },
  [130] = {
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
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [131] = {
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
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [132] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [133] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [134] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [135] = {
    [sym__expression] = STATE(210),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [136] = {
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
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [137] = {
    [sym__expression] = STATE(212),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [138] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [139] = {
    [sym__end_of_statement] = STATE(214),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(104),
    [sym__newline] = ACTIONS(104),
  },
  [140] = {
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
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [141] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(394),
    [sym_comment] = ACTIONS(14),
  },
  [142] = {
    [anon_sym_COMMA] = ACTIONS(396),
    [anon_sym_EQ] = ACTIONS(396),
    [anon_sym_EQ_GT] = ACTIONS(396),
    [anon_sym_PERCENT] = ACTIONS(396),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(396),
    [anon_sym_LT] = ACTIONS(396),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(396),
    [anon_sym_GT] = ACTIONS(396),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(396),
    [anon_sym_LT_EQ] = ACTIONS(396),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(396),
    [anon_sym_GT_EQ] = ACTIONS(396),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(396),
    [anon_sym_EQ_EQ] = ACTIONS(396),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(396),
    [anon_sym_SLASH_EQ] = ACTIONS(396),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(396),
    [anon_sym_SLASH_SLASH] = ACTIONS(396),
    [anon_sym_PLUS] = ACTIONS(396),
    [anon_sym_DASH] = ACTIONS(396),
    [anon_sym_STAR] = ACTIONS(396),
    [anon_sym_SLASH] = ACTIONS(396),
    [anon_sym_STAR_STAR] = ACTIONS(396),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(396),
    [sym__newline] = ACTIONS(396),
  },
  [143] = {
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
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(276),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [144] = {
    [sym__expression] = STATE(218),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(276),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [145] = {
    [sym__expression] = STATE(220),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_COMMA] = ACTIONS(398),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(398),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(276),
    [anon_sym_COLON] = ACTIONS(400),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [146] = {
    [sym_argument_list] = STATE(128),
    [anon_sym_COMMA] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(232),
    [anon_sym_RPAREN] = ACTIONS(122),
    [anon_sym_EQ] = ACTIONS(402),
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
    [anon_sym_COLON] = ACTIONS(122),
    [sym_comment] = ACTIONS(34),
  },
  [147] = {
    [aux_sym_argument_list_repeat1] = STATE(234),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(406),
    [anon_sym_PERCENT] = ACTIONS(408),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(410),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(412),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(416),
    [anon_sym_LT] = ACTIONS(418),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_GT] = ACTIONS(418),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_LT_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_GT_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_EQ_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_SLASH_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_SLASH_SLASH] = ACTIONS(422),
    [anon_sym_PLUS] = ACTIONS(424),
    [anon_sym_DASH] = ACTIONS(424),
    [anon_sym_STAR] = ACTIONS(426),
    [anon_sym_SLASH] = ACTIONS(426),
    [anon_sym_STAR_STAR] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(430),
    [sym_comment] = ACTIONS(34),
  },
  [148] = {
    [aux_sym_argument_list_repeat1] = STATE(234),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(434),
    [sym_comment] = ACTIONS(14),
  },
  [149] = {
    [sym__end_of_statement] = STATE(235),
    [aux_sym_variable_declaration_repeat1] = STATE(236),
    [anon_sym_COMMA] = ACTIONS(286),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [150] = {
    [sym_identifier] = ACTIONS(436),
    [sym_comment] = ACTIONS(14),
  },
  [151] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(438),
    [sym_statement_label] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(438),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(438),
    [anon_sym_LPAREN] = ACTIONS(438),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(438),
    [anon_sym_PLUS] = ACTIONS(438),
    [anon_sym_DASH] = ACTIONS(438),
    [sym_block_label_start_expression] = ACTIONS(440),
    [sym_number_literal] = ACTIONS(440),
    [sym__double_quoted_string] = ACTIONS(440),
    [sym__single_quoted_string] = ACTIONS(440),
    [sym_boolean_literal] = ACTIONS(440),
    [sym_identifier] = ACTIONS(440),
    [sym_comment] = ACTIONS(34),
  },
  [152] = {
    [sym__end_of_statement] = STATE(235),
    [aux_sym_variable_declaration_repeat1] = STATE(238),
    [anon_sym_COMMA] = ACTIONS(286),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [153] = {
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(208),
    [anon_sym_LT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_LT_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_EQ_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_SLASH] = ACTIONS(212),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_STAR] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_STAR_STAR] = ACTIONS(218),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(442),
    [sym__newline] = ACTIONS(442),
  },
  [154] = {
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(208),
    [anon_sym_LT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_LT_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_EQ_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_SLASH] = ACTIONS(212),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_STAR] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_STAR_STAR] = ACTIONS(218),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(444),
    [sym__newline] = ACTIONS(444),
  },
  [155] = {
    [anon_sym_EQ] = ACTIONS(446),
    [anon_sym_EQ_GT] = ACTIONS(448),
    [anon_sym_PERCENT] = ACTIONS(152),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_GT] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_LT_EQ] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_GT_EQ] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_EQ_EQ] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_SLASH_EQ] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_SLASH_SLASH] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(446),
    [anon_sym_DASH] = ACTIONS(446),
    [anon_sym_STAR] = ACTIONS(446),
    [anon_sym_SLASH] = ACTIONS(446),
    [anon_sym_STAR_STAR] = ACTIONS(448),
    [sym_comment] = ACTIONS(34),
  },
  [156] = {
    [anon_sym_EQ] = ACTIONS(452),
    [anon_sym_EQ_GT] = ACTIONS(454),
    [anon_sym_PERCENT] = ACTIONS(152),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
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
  [157] = {
    [anon_sym_EQ] = ACTIONS(452),
    [anon_sym_EQ_GT] = ACTIONS(454),
    [anon_sym_PERCENT] = ACTIONS(152),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
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
  [158] = {
    [anon_sym_EQ] = ACTIONS(452),
    [anon_sym_EQ_GT] = ACTIONS(454),
    [anon_sym_PERCENT] = ACTIONS(152),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
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
  [159] = {
    [anon_sym_EQ] = ACTIONS(458),
    [anon_sym_EQ_GT] = ACTIONS(460),
    [anon_sym_PERCENT] = ACTIONS(152),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(462),
    [anon_sym_LT] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_GT] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_LT_EQ] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_GT_EQ] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_EQ_EQ] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_SLASH_EQ] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_SLASH_SLASH] = ACTIONS(166),
    [anon_sym_PLUS] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(168),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [160] = {
    [anon_sym_EQ] = ACTIONS(464),
    [anon_sym_EQ_GT] = ACTIONS(466),
    [anon_sym_PERCENT] = ACTIONS(152),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(468),
    [anon_sym_LT] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_GT] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_LT_EQ] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_GT_EQ] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_EQ_EQ] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_SLASH_EQ] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_SLASH_SLASH] = ACTIONS(166),
    [anon_sym_PLUS] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(168),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [161] = {
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_EQ_GT] = ACTIONS(472),
    [anon_sym_PERCENT] = ACTIONS(152),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_LT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_EQ_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_SLASH] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_STAR] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [162] = {
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_EQ_GT] = ACTIONS(472),
    [anon_sym_PERCENT] = ACTIONS(152),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_LT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_EQ_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_SLASH] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_STAR] = ACTIONS(470),
    [anon_sym_SLASH] = ACTIONS(470),
    [anon_sym_STAR_STAR] = ACTIONS(172),
    [sym_comment] = ACTIONS(34),
  },
  [163] = {
    [anon_sym_EQ] = ACTIONS(470),
    [anon_sym_EQ_GT] = ACTIONS(472),
    [anon_sym_PERCENT] = ACTIONS(152),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_LT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_EQ_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_SLASH] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_STAR] = ACTIONS(470),
    [anon_sym_SLASH] = ACTIONS(470),
    [anon_sym_STAR_STAR] = ACTIONS(472),
    [sym_comment] = ACTIONS(34),
  },
  [164] = {
    [sym__end_of_statement] = STATE(239),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(476),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(476),
    [sym_comment] = ACTIONS(14),
  },
  [166] = {
    [sym__end_of_statement] = STATE(239),
    [sym_identifier] = ACTIONS(478),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [167] = {
    [sym__end_of_statement] = STATE(239),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(480),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [168] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(396),
    [sym__newline] = ACTIONS(396),
  },
  [169] = {
    [aux_sym_argument_list_repeat1] = STATE(243),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(482),
    [anon_sym_PERCENT] = ACTIONS(408),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(410),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(412),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(416),
    [anon_sym_LT] = ACTIONS(418),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_GT] = ACTIONS(418),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_LT_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_GT_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_EQ_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_SLASH_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_SLASH_SLASH] = ACTIONS(422),
    [anon_sym_PLUS] = ACTIONS(424),
    [anon_sym_DASH] = ACTIONS(424),
    [anon_sym_STAR] = ACTIONS(426),
    [anon_sym_SLASH] = ACTIONS(426),
    [anon_sym_STAR_STAR] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(430),
    [sym_comment] = ACTIONS(34),
  },
  [170] = {
    [aux_sym_argument_list_repeat1] = STATE(243),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(484),
    [sym_comment] = ACTIONS(14),
  },
  [171] = {
    [sym_number_literal] = ACTIONS(486),
    [sym_identifier] = ACTIONS(488),
    [sym_comment] = ACTIONS(14),
  },
  [172] = {
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_PERCENT] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_LT] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_GT] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_LT_EQ] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_GT_EQ] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_EQ_EQ] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_SLASH_EQ] = ACTIONS(392),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(392),
    [anon_sym_SLASH_SLASH] = ACTIONS(392),
    [anon_sym_PLUS] = ACTIONS(392),
    [anon_sym_DASH] = ACTIONS(392),
    [anon_sym_STAR] = ACTIONS(392),
    [anon_sym_SLASH] = ACTIONS(392),
    [anon_sym_STAR_STAR] = ACTIONS(392),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(392),
    [sym__newline] = ACTIONS(392),
  },
  [173] = {
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(450),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_GT] = ACTIONS(450),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_LT_EQ] = ACTIONS(450),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_GT_EQ] = ACTIONS(450),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_EQ_EQ] = ACTIONS(450),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_SLASH_EQ] = ACTIONS(450),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_SLASH_SLASH] = ACTIONS(450),
    [anon_sym_PLUS] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(450),
    [anon_sym_STAR] = ACTIONS(450),
    [anon_sym_SLASH] = ACTIONS(450),
    [anon_sym_STAR_STAR] = ACTIONS(450),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(450),
    [sym__newline] = ACTIONS(450),
  },
  [174] = {
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
    [anon_sym_LT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_LT_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_EQ_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_SLASH] = ACTIONS(212),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_STAR] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_STAR_STAR] = ACTIONS(218),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(456),
    [sym__newline] = ACTIONS(456),
  },
  [175] = {
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
    [anon_sym_LT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_LT_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_EQ_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_SLASH] = ACTIONS(212),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_STAR] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_STAR_STAR] = ACTIONS(218),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(456),
    [sym__newline] = ACTIONS(456),
  },
  [176] = {
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
    [anon_sym_LT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_LT_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_EQ_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_SLASH] = ACTIONS(212),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_STAR] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_STAR_STAR] = ACTIONS(218),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(456),
    [sym__newline] = ACTIONS(456),
  },
  [177] = {
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(462),
    [anon_sym_LT] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(462),
    [anon_sym_GT] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(462),
    [anon_sym_LT_EQ] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(462),
    [anon_sym_GT_EQ] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(462),
    [anon_sym_EQ_EQ] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(462),
    [anon_sym_SLASH_EQ] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(462),
    [anon_sym_SLASH_SLASH] = ACTIONS(212),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_STAR] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_STAR_STAR] = ACTIONS(218),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(462),
    [sym__newline] = ACTIONS(462),
  },
  [178] = {
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(468),
    [anon_sym_LT] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(468),
    [anon_sym_GT] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(468),
    [anon_sym_EQ_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(468),
    [anon_sym_SLASH_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(468),
    [anon_sym_SLASH_SLASH] = ACTIONS(212),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_STAR] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_STAR_STAR] = ACTIONS(218),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(468),
    [sym__newline] = ACTIONS(468),
  },
  [179] = {
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_GT] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT_EQ] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_GT_EQ] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_EQ_EQ] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_SLASH_EQ] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_SLASH_SLASH] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(474),
    [anon_sym_DASH] = ACTIONS(474),
    [anon_sym_STAR] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_STAR_STAR] = ACTIONS(218),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(474),
    [sym__newline] = ACTIONS(474),
  },
  [180] = {
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_GT] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT_EQ] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_GT_EQ] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_EQ_EQ] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_SLASH_EQ] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_SLASH_SLASH] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(474),
    [anon_sym_DASH] = ACTIONS(474),
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_STAR_STAR] = ACTIONS(218),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(474),
    [sym__newline] = ACTIONS(474),
  },
  [181] = {
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_GT] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT_EQ] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_GT_EQ] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_EQ_EQ] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_SLASH_EQ] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_SLASH_SLASH] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(474),
    [anon_sym_DASH] = ACTIONS(474),
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_STAR_STAR] = ACTIONS(474),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(474),
    [sym__newline] = ACTIONS(474),
  },
  [182] = {
    [sym__expression] = STATE(245),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(364),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [183] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(364),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [184] = {
    [anon_sym_COMMA] = ACTIONS(490),
    [anon_sym_PERCENT] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(498),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(500),
    [anon_sym_LT] = ACTIONS(502),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_GT] = ACTIONS(502),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_LT_EQ] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_GT_EQ] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_EQ_EQ] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_SLASH_EQ] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_SLASH_SLASH] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(508),
    [anon_sym_DASH] = ACTIONS(508),
    [anon_sym_STAR] = ACTIONS(510),
    [anon_sym_SLASH] = ACTIONS(510),
    [anon_sym_STAR_STAR] = ACTIONS(512),
    [sym_comment] = ACTIONS(34),
  },
  [185] = {
    [sym__block_label] = STATE(257),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(514),
    [sym__newline] = ACTIONS(514),
  },
  [186] = {
    [sym_subroutine_call] = STATE(116),
    [sym_keyword_statement] = STATE(116),
    [sym_do_loop_statement] = STATE(116),
    [sym_if_statement] = STATE(116),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(116),
    [sym_pointer_assignment_expression] = STATE(116),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(117),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(192),
    [sym_statement_label] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(516),
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
  [187] = {
    [sym__end_of_statement] = STATE(259),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(104),
    [sym__newline] = ACTIONS(104),
  },
  [188] = {
    [sym__end_of_statement] = STATE(259),
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_EQ_GT] = ACTIONS(126),
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
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(104),
    [sym__newline] = ACTIONS(104),
  },
  [189] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(518),
    [sym__newline] = ACTIONS(518),
  },
  [190] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(514),
    [sym__newline] = ACTIONS(514),
  },
  [191] = {
    [sym_statement_label] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(288),
    [anon_sym_LPAREN] = ACTIONS(288),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [sym_block_label_start_expression] = ACTIONS(290),
    [sym_number_literal] = ACTIONS(290),
    [sym__double_quoted_string] = ACTIONS(290),
    [sym__single_quoted_string] = ACTIONS(290),
    [sym_boolean_literal] = ACTIONS(290),
    [sym_identifier] = ACTIONS(290),
    [sym_comment] = ACTIONS(34),
  },
  [192] = {
    [sym_subroutine_call] = STATE(116),
    [sym_keyword_statement] = STATE(116),
    [sym_do_loop_statement] = STATE(116),
    [sym_if_statement] = STATE(116),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(116),
    [sym_pointer_assignment_expression] = STATE(116),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(117),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(192),
    [sym_statement_label] = ACTIONS(520),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(317),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(320),
    [anon_sym_LPAREN] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(326),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [sym_block_label_start_expression] = ACTIONS(332),
    [sym_number_literal] = ACTIONS(335),
    [sym__double_quoted_string] = ACTIONS(338),
    [sym__single_quoted_string] = ACTIONS(338),
    [sym_boolean_literal] = ACTIONS(335),
    [sym_identifier] = ACTIONS(341),
    [sym_comment] = ACTIONS(34),
  },
  [193] = {
    [sym_statement_label] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(388),
    [anon_sym_LPAREN] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(388),
    [anon_sym_PLUS] = ACTIONS(388),
    [anon_sym_DASH] = ACTIONS(388),
    [sym_block_label_start_expression] = ACTIONS(392),
    [sym_number_literal] = ACTIONS(392),
    [sym__double_quoted_string] = ACTIONS(392),
    [sym__single_quoted_string] = ACTIONS(392),
    [sym_boolean_literal] = ACTIONS(392),
    [sym_identifier] = ACTIONS(392),
    [sym_comment] = ACTIONS(34),
  },
  [194] = {
    [sym__end_of_statement] = STATE(260),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(376),
    [sym__newline] = ACTIONS(376),
  },
  [195] = {
    [sym__end_of_statement] = STATE(260),
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_EQ_GT] = ACTIONS(126),
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
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(376),
    [sym__newline] = ACTIONS(376),
  },
  [196] = {
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
  [197] = {
    [sym__end_of_statement] = STATE(261),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(374),
    [sym__newline] = ACTIONS(374),
  },
  [198] = {
    [sym_subroutine_call] = STATE(266),
    [sym_keyword_statement] = STATE(266),
    [sym_do_loop_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym_elseif_clause] = STATE(267),
    [sym_else_clause] = STATE(268),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(266),
    [sym_pointer_assignment_expression] = STATE(266),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(269),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(270),
    [aux_sym__block_if_statement_repeat1] = STATE(271),
    [sym_statement_label] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(525),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(529),
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
  [199] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(38),
    [sym__newline] = ACTIONS(38),
  },
  [200] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(531),
    [sym__newline] = ACTIONS(531),
  },
  [201] = {
    [anon_sym_RPAREN] = ACTIONS(533),
    [sym_comment] = ACTIONS(14),
  },
  [202] = {
    [anon_sym_COMMA] = ACTIONS(535),
    [anon_sym_RPAREN] = ACTIONS(535),
    [anon_sym_EQ] = ACTIONS(535),
    [anon_sym_EQ_GT] = ACTIONS(537),
    [anon_sym_PERCENT] = ACTIONS(535),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(535),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(535),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(535),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(396),
    [anon_sym_LT] = ACTIONS(535),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(535),
    [anon_sym_GT] = ACTIONS(535),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(535),
    [anon_sym_LT_EQ] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(535),
    [anon_sym_GT_EQ] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(535),
    [anon_sym_EQ_EQ] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(535),
    [anon_sym_SLASH_EQ] = ACTIONS(537),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(535),
    [anon_sym_SLASH_SLASH] = ACTIONS(537),
    [anon_sym_PLUS] = ACTIONS(535),
    [anon_sym_DASH] = ACTIONS(535),
    [anon_sym_STAR] = ACTIONS(535),
    [anon_sym_SLASH] = ACTIONS(535),
    [anon_sym_STAR_STAR] = ACTIONS(537),
    [anon_sym_COLON] = ACTIONS(535),
    [sym_comment] = ACTIONS(34),
  },
  [203] = {
    [aux_sym_argument_list_repeat1] = STATE(274),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(539),
    [anon_sym_PERCENT] = ACTIONS(408),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(410),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(412),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(416),
    [anon_sym_LT] = ACTIONS(418),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_GT] = ACTIONS(418),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_LT_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_GT_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_EQ_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_SLASH_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_SLASH_SLASH] = ACTIONS(422),
    [anon_sym_PLUS] = ACTIONS(424),
    [anon_sym_DASH] = ACTIONS(424),
    [anon_sym_STAR] = ACTIONS(426),
    [anon_sym_SLASH] = ACTIONS(426),
    [anon_sym_STAR_STAR] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(430),
    [sym_comment] = ACTIONS(34),
  },
  [204] = {
    [aux_sym_argument_list_repeat1] = STATE(274),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(541),
    [sym_comment] = ACTIONS(14),
  },
  [205] = {
    [anon_sym_RPAREN] = ACTIONS(446),
    [anon_sym_PERCENT] = ACTIONS(236),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_GT] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_LT_EQ] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_GT_EQ] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_EQ_EQ] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_SLASH_EQ] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_SLASH_SLASH] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(446),
    [anon_sym_DASH] = ACTIONS(446),
    [anon_sym_STAR] = ACTIONS(446),
    [anon_sym_SLASH] = ACTIONS(446),
    [anon_sym_STAR_STAR] = ACTIONS(448),
    [sym_comment] = ACTIONS(34),
  },
  [206] = {
    [anon_sym_RPAREN] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(236),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
    [anon_sym_LT] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_LT_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_GT_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_EQ_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_SLASH_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_SLASH_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [207] = {
    [anon_sym_RPAREN] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(236),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
    [anon_sym_LT] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_LT_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_GT_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_EQ_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_SLASH_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_SLASH_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [208] = {
    [anon_sym_RPAREN] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(236),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
    [anon_sym_LT] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_LT_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_GT_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_EQ_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_SLASH_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_SLASH_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [209] = {
    [anon_sym_RPAREN] = ACTIONS(458),
    [anon_sym_PERCENT] = ACTIONS(236),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(462),
    [anon_sym_LT] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_GT] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_LT_EQ] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_GT_EQ] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_EQ_EQ] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_SLASH_EQ] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_SLASH_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [210] = {
    [anon_sym_RPAREN] = ACTIONS(464),
    [anon_sym_PERCENT] = ACTIONS(236),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(468),
    [anon_sym_LT] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_GT] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_LT_EQ] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_GT_EQ] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_EQ_EQ] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_SLASH_EQ] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_SLASH_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [211] = {
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_PERCENT] = ACTIONS(236),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_LT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_EQ_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_SLASH] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [212] = {
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_PERCENT] = ACTIONS(236),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_LT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_EQ_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_SLASH] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_STAR] = ACTIONS(470),
    [anon_sym_SLASH] = ACTIONS(470),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [213] = {
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_PERCENT] = ACTIONS(236),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_LT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_EQ_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_SLASH] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_STAR] = ACTIONS(470),
    [anon_sym_SLASH] = ACTIONS(470),
    [anon_sym_STAR_STAR] = ACTIONS(472),
    [sym_comment] = ACTIONS(34),
  },
  [214] = {
    [sym_subroutine_call] = STATE(116),
    [sym_keyword_statement] = STATE(116),
    [sym_do_loop_statement] = STATE(116),
    [sym_if_statement] = STATE(116),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(116),
    [sym_pointer_assignment_expression] = STATE(116),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(117),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(275),
    [sym_statement_label] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(516),
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
  [215] = {
    [anon_sym_RPAREN] = ACTIONS(543),
    [anon_sym_PERCENT] = ACTIONS(236),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(244),
    [anon_sym_LT] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_LT_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_GT_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_EQ_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_SLASH_EQ] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_SLASH_SLASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(252),
    [anon_sym_DASH] = ACTIONS(252),
    [anon_sym_STAR] = ACTIONS(254),
    [anon_sym_SLASH] = ACTIONS(254),
    [anon_sym_STAR_STAR] = ACTIONS(256),
    [sym_comment] = ACTIONS(34),
  },
  [216] = {
    [sym__block_label] = STATE(277),
    [sym__end_of_statement] = STATE(261),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(374),
    [sym__newline] = ACTIONS(374),
  },
  [217] = {
    [anon_sym_COMMA] = ACTIONS(258),
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(408),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(262),
    [anon_sym_LT] = ACTIONS(418),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_GT] = ACTIONS(418),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_LT_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_GT_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_EQ_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_SLASH_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_SLASH_SLASH] = ACTIONS(422),
    [anon_sym_PLUS] = ACTIONS(424),
    [anon_sym_DASH] = ACTIONS(424),
    [anon_sym_STAR] = ACTIONS(426),
    [anon_sym_SLASH] = ACTIONS(426),
    [anon_sym_STAR_STAR] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(258),
    [sym_comment] = ACTIONS(34),
  },
  [218] = {
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(264),
    [anon_sym_PERCENT] = ACTIONS(408),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(268),
    [anon_sym_LT] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_GT] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_LT_EQ] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_GT_EQ] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_EQ_EQ] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_SLASH_EQ] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_SLASH_SLASH] = ACTIONS(266),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(264),
    [anon_sym_SLASH] = ACTIONS(264),
    [anon_sym_STAR_STAR] = ACTIONS(266),
    [anon_sym_COLON] = ACTIONS(264),
    [sym_comment] = ACTIONS(34),
  },
  [219] = {
    [sym__expression] = STATE(280),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(547),
    [anon_sym_DASH] = ACTIONS(547),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [220] = {
    [anon_sym_COMMA] = ACTIONS(549),
    [anon_sym_RPAREN] = ACTIONS(549),
    [anon_sym_PERCENT] = ACTIONS(408),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(410),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(412),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(416),
    [anon_sym_LT] = ACTIONS(418),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_GT] = ACTIONS(418),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_LT_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_GT_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_EQ_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_SLASH_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_SLASH_SLASH] = ACTIONS(422),
    [anon_sym_PLUS] = ACTIONS(424),
    [anon_sym_DASH] = ACTIONS(424),
    [anon_sym_STAR] = ACTIONS(426),
    [anon_sym_SLASH] = ACTIONS(426),
    [anon_sym_STAR_STAR] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(551),
    [sym_comment] = ACTIONS(34),
  },
  [221] = {
    [sym__expression] = STATE(282),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(547),
    [anon_sym_DASH] = ACTIONS(547),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [222] = {
    [sym__expression] = STATE(283),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_keyword_argument] = STATE(284),
    [sym_array_slice] = STATE(284),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(276),
    [anon_sym_COLON] = ACTIONS(278),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(34),
  },
  [223] = {
    [anon_sym_COMMA] = ACTIONS(553),
    [anon_sym_EQ] = ACTIONS(553),
    [anon_sym_EQ_GT] = ACTIONS(553),
    [anon_sym_PERCENT] = ACTIONS(553),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(553),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(553),
    [anon_sym_LT] = ACTIONS(553),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(553),
    [anon_sym_GT] = ACTIONS(553),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(553),
    [anon_sym_LT_EQ] = ACTIONS(553),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(553),
    [anon_sym_GT_EQ] = ACTIONS(553),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(553),
    [anon_sym_EQ_EQ] = ACTIONS(553),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(553),
    [anon_sym_SLASH_EQ] = ACTIONS(553),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(553),
    [anon_sym_SLASH_SLASH] = ACTIONS(553),
    [anon_sym_PLUS] = ACTIONS(553),
    [anon_sym_DASH] = ACTIONS(553),
    [anon_sym_STAR] = ACTIONS(553),
    [anon_sym_SLASH] = ACTIONS(553),
    [anon_sym_STAR_STAR] = ACTIONS(553),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(553),
    [sym__newline] = ACTIONS(553),
  },
  [224] = {
    [sym__expression] = STATE(285),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(276),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [225] = {
    [sym__expression] = STATE(286),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(276),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [226] = {
    [sym__expression] = STATE(287),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(276),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [227] = {
    [sym__expression] = STATE(288),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(276),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [228] = {
    [sym__expression] = STATE(289),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(276),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [229] = {
    [sym__expression] = STATE(290),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(276),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [230] = {
    [sym__expression] = STATE(291),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(276),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [231] = {
    [sym__expression] = STATE(292),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(276),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [232] = {
    [sym__expression] = STATE(293),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(276),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [233] = {
    [sym__expression] = STATE(294),
    [sym_parenthesized_expression] = STATE(26),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(26),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [anon_sym_COMMA] = ACTIONS(549),
    [anon_sym_LPAREN] = ACTIONS(60),
    [anon_sym_RPAREN] = ACTIONS(549),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(274),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(276),
    [anon_sym_COLON] = ACTIONS(551),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [234] = {
    [aux_sym_argument_list_repeat1] = STATE(296),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(555),
    [sym_comment] = ACTIONS(14),
  },
  [235] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(557),
    [sym_statement_label] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(557),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(557),
    [anon_sym_LPAREN] = ACTIONS(557),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(557),
    [anon_sym_PLUS] = ACTIONS(557),
    [anon_sym_DASH] = ACTIONS(557),
    [sym_block_label_start_expression] = ACTIONS(559),
    [sym_number_literal] = ACTIONS(559),
    [sym__double_quoted_string] = ACTIONS(559),
    [sym__single_quoted_string] = ACTIONS(559),
    [sym_boolean_literal] = ACTIONS(559),
    [sym_identifier] = ACTIONS(559),
    [sym_comment] = ACTIONS(34),
  },
  [236] = {
    [sym__end_of_statement] = STATE(297),
    [aux_sym_variable_declaration_repeat1] = STATE(238),
    [anon_sym_COMMA] = ACTIONS(286),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [237] = {
    [anon_sym_COMMA] = ACTIONS(561),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(561),
    [sym__newline] = ACTIONS(561),
  },
  [238] = {
    [aux_sym_variable_declaration_repeat1] = STATE(238),
    [anon_sym_COMMA] = ACTIONS(563),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(561),
    [sym__newline] = ACTIONS(561),
  },
  [239] = {
    [ts_builtin_sym_end] = ACTIONS(566),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(566),
    [sym_comment] = ACTIONS(14),
  },
  [240] = {
    [sym__end_of_statement] = STATE(298),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [241] = {
    [sym__end_of_statement] = STATE(298),
    [sym_identifier] = ACTIONS(568),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [242] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(553),
    [sym__newline] = ACTIONS(553),
  },
  [243] = {
    [aux_sym_argument_list_repeat1] = STATE(296),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(570),
    [sym_comment] = ACTIONS(14),
  },
  [244] = {
    [anon_sym_RPAREN] = ACTIONS(572),
    [sym_comment] = ACTIONS(14),
  },
  [245] = {
    [anon_sym_COMMA] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(262),
    [anon_sym_LT] = ACTIONS(502),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_GT] = ACTIONS(502),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_LT_EQ] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_GT_EQ] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_EQ_EQ] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_SLASH_EQ] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_SLASH_SLASH] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(508),
    [anon_sym_DASH] = ACTIONS(508),
    [anon_sym_STAR] = ACTIONS(510),
    [anon_sym_SLASH] = ACTIONS(510),
    [anon_sym_STAR_STAR] = ACTIONS(512),
    [sym_comment] = ACTIONS(34),
  },
  [246] = {
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_PERCENT] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(268),
    [anon_sym_LT] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_GT] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_LT_EQ] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_GT_EQ] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_EQ_EQ] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_SLASH_EQ] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_SLASH_SLASH] = ACTIONS(266),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(264),
    [anon_sym_SLASH] = ACTIONS(264),
    [anon_sym_STAR_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(34),
  },
  [247] = {
    [sym__expression] = STATE(304),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_PLUS] = ACTIONS(576),
    [anon_sym_DASH] = ACTIONS(576),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [248] = {
    [sym__expression] = STATE(305),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(364),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [249] = {
    [sym__expression] = STATE(306),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(364),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [250] = {
    [sym__expression] = STATE(307),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(364),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [251] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(364),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [252] = {
    [sym__expression] = STATE(309),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(364),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [253] = {
    [sym__expression] = STATE(310),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(364),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [254] = {
    [sym__expression] = STATE(311),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(364),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [255] = {
    [sym__expression] = STATE(312),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(364),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [256] = {
    [sym__expression] = STATE(313),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(364),
    [anon_sym_DASH] = ACTIONS(364),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [257] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(578),
    [sym__newline] = ACTIONS(578),
  },
  [258] = {
    [sym__block_label] = STATE(314),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(578),
    [sym__newline] = ACTIONS(578),
  },
  [259] = {
    [sym_statement_label] = ACTIONS(352),
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
  [260] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(580),
    [sym__newline] = ACTIONS(580),
  },
  [261] = {
    [sym_subroutine_call] = STATE(266),
    [sym_keyword_statement] = STATE(266),
    [sym_do_loop_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym_elseif_clause] = STATE(267),
    [sym_else_clause] = STATE(316),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(266),
    [sym_pointer_assignment_expression] = STATE(266),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(269),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(317),
    [aux_sym__block_if_statement_repeat1] = STATE(318),
    [sym_statement_label] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(582),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(529),
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
  [262] = {
    [sym_subroutine_call] = STATE(319),
    [sym_keyword_statement] = STATE(319),
    [sym_do_loop_statement] = STATE(319),
    [sym_if_statement] = STATE(319),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(319),
    [sym_pointer_assignment_expression] = STATE(319),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(320),
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
  [263] = {
    [sym__block_label] = STATE(321),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(584),
    [sym__newline] = ACTIONS(584),
  },
  [264] = {
    [sym_parenthesized_expression] = STATE(322),
    [anon_sym_LPAREN] = ACTIONS(270),
    [sym_comment] = ACTIONS(14),
  },
  [265] = {
    [sym__block_label] = STATE(324),
    [sym__end_of_statement] = STATE(325),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(586),
    [sym__newline] = ACTIONS(586),
  },
  [266] = {
    [sym__end_of_statement] = STATE(326),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(374),
    [sym__newline] = ACTIONS(374),
  },
  [267] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(588),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(588),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(590),
    [sym_comment] = ACTIONS(14),
  },
  [268] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(592),
    [sym_comment] = ACTIONS(14),
  },
  [269] = {
    [sym__end_of_statement] = STATE(326),
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_EQ_GT] = ACTIONS(126),
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
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(374),
    [sym__newline] = ACTIONS(374),
  },
  [270] = {
    [sym_subroutine_call] = STATE(266),
    [sym_keyword_statement] = STATE(266),
    [sym_do_loop_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym_elseif_clause] = STATE(267),
    [sym_else_clause] = STATE(316),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(266),
    [sym_pointer_assignment_expression] = STATE(266),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(269),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(327),
    [aux_sym__block_if_statement_repeat1] = STATE(318),
    [sym_statement_label] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(582),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(529),
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
  [271] = {
    [sym_elseif_clause] = STATE(267),
    [sym_else_clause] = STATE(316),
    [aux_sym__block_if_statement_repeat1] = STATE(328),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(592),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(594),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(529),
    [sym_comment] = ACTIONS(14),
  },
  [272] = {
    [anon_sym_COMMA] = ACTIONS(596),
    [anon_sym_RPAREN] = ACTIONS(596),
    [anon_sym_EQ] = ACTIONS(596),
    [anon_sym_EQ_GT] = ACTIONS(598),
    [anon_sym_PERCENT] = ACTIONS(596),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(596),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(596),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(596),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(600),
    [anon_sym_LT] = ACTIONS(596),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(596),
    [anon_sym_GT] = ACTIONS(596),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(596),
    [anon_sym_LT_EQ] = ACTIONS(598),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(596),
    [anon_sym_GT_EQ] = ACTIONS(598),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(596),
    [anon_sym_EQ_EQ] = ACTIONS(598),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(596),
    [anon_sym_SLASH_EQ] = ACTIONS(598),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(596),
    [anon_sym_SLASH_SLASH] = ACTIONS(598),
    [anon_sym_PLUS] = ACTIONS(596),
    [anon_sym_DASH] = ACTIONS(596),
    [anon_sym_STAR] = ACTIONS(596),
    [anon_sym_SLASH] = ACTIONS(596),
    [anon_sym_STAR_STAR] = ACTIONS(598),
    [anon_sym_COLON] = ACTIONS(596),
    [sym_comment] = ACTIONS(34),
  },
  [273] = {
    [anon_sym_COMMA] = ACTIONS(602),
    [anon_sym_RPAREN] = ACTIONS(602),
    [anon_sym_EQ] = ACTIONS(602),
    [anon_sym_EQ_GT] = ACTIONS(604),
    [anon_sym_PERCENT] = ACTIONS(602),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(602),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(553),
    [anon_sym_LT] = ACTIONS(602),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(602),
    [anon_sym_GT] = ACTIONS(602),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(602),
    [anon_sym_LT_EQ] = ACTIONS(604),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(602),
    [anon_sym_GT_EQ] = ACTIONS(604),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(602),
    [anon_sym_EQ_EQ] = ACTIONS(604),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(602),
    [anon_sym_SLASH_EQ] = ACTIONS(604),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(602),
    [anon_sym_SLASH_SLASH] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(602),
    [anon_sym_DASH] = ACTIONS(602),
    [anon_sym_STAR] = ACTIONS(602),
    [anon_sym_SLASH] = ACTIONS(602),
    [anon_sym_STAR_STAR] = ACTIONS(604),
    [anon_sym_COLON] = ACTIONS(602),
    [sym_comment] = ACTIONS(34),
  },
  [274] = {
    [aux_sym_argument_list_repeat1] = STATE(296),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(606),
    [sym_comment] = ACTIONS(14),
  },
  [275] = {
    [sym_subroutine_call] = STATE(116),
    [sym_keyword_statement] = STATE(116),
    [sym_do_loop_statement] = STATE(116),
    [sym_if_statement] = STATE(116),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(116),
    [sym_pointer_assignment_expression] = STATE(116),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(117),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(192),
    [sym_statement_label] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(608),
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
  [276] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(390),
    [sym_comment] = ACTIONS(14),
  },
  [277] = {
    [sym__end_of_statement] = STATE(331),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(374),
    [sym__newline] = ACTIONS(374),
  },
  [278] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(547),
    [anon_sym_DASH] = ACTIONS(547),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [279] = {
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
    [anon_sym_LPAREN] = ACTIONS(60),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(547),
    [anon_sym_DASH] = ACTIONS(547),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [280] = {
    [anon_sym_COMMA] = ACTIONS(610),
    [anon_sym_RPAREN] = ACTIONS(610),
    [anon_sym_PERCENT] = ACTIONS(612),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(620),
    [anon_sym_LT] = ACTIONS(622),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_GT] = ACTIONS(622),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_LT_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_GT_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_EQ_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_SLASH_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_SLASH_SLASH] = ACTIONS(626),
    [anon_sym_PLUS] = ACTIONS(628),
    [anon_sym_DASH] = ACTIONS(628),
    [anon_sym_STAR] = ACTIONS(630),
    [anon_sym_SLASH] = ACTIONS(630),
    [anon_sym_STAR_STAR] = ACTIONS(632),
    [sym_comment] = ACTIONS(34),
  },
  [281] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(547),
    [anon_sym_DASH] = ACTIONS(547),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [282] = {
    [anon_sym_COMMA] = ACTIONS(634),
    [anon_sym_RPAREN] = ACTIONS(634),
    [anon_sym_PERCENT] = ACTIONS(612),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(620),
    [anon_sym_LT] = ACTIONS(622),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_GT] = ACTIONS(622),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_LT_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_GT_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_EQ_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_SLASH_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_SLASH_SLASH] = ACTIONS(626),
    [anon_sym_PLUS] = ACTIONS(628),
    [anon_sym_DASH] = ACTIONS(628),
    [anon_sym_STAR] = ACTIONS(630),
    [anon_sym_SLASH] = ACTIONS(630),
    [anon_sym_STAR_STAR] = ACTIONS(632),
    [sym_comment] = ACTIONS(34),
  },
  [283] = {
    [anon_sym_COMMA] = ACTIONS(636),
    [anon_sym_RPAREN] = ACTIONS(636),
    [anon_sym_PERCENT] = ACTIONS(408),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(410),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(412),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(416),
    [anon_sym_LT] = ACTIONS(418),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_GT] = ACTIONS(418),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_LT_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_GT_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_EQ_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_SLASH_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_SLASH_SLASH] = ACTIONS(422),
    [anon_sym_PLUS] = ACTIONS(424),
    [anon_sym_DASH] = ACTIONS(424),
    [anon_sym_STAR] = ACTIONS(426),
    [anon_sym_SLASH] = ACTIONS(426),
    [anon_sym_STAR_STAR] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(430),
    [sym_comment] = ACTIONS(34),
  },
  [284] = {
    [anon_sym_COMMA] = ACTIONS(638),
    [anon_sym_RPAREN] = ACTIONS(638),
    [sym_comment] = ACTIONS(14),
  },
  [285] = {
    [anon_sym_COMMA] = ACTIONS(446),
    [anon_sym_RPAREN] = ACTIONS(446),
    [anon_sym_PERCENT] = ACTIONS(408),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_GT] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_LT_EQ] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_GT_EQ] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_EQ_EQ] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_SLASH_EQ] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_SLASH_SLASH] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(446),
    [anon_sym_DASH] = ACTIONS(446),
    [anon_sym_STAR] = ACTIONS(446),
    [anon_sym_SLASH] = ACTIONS(446),
    [anon_sym_STAR_STAR] = ACTIONS(448),
    [anon_sym_COLON] = ACTIONS(446),
    [sym_comment] = ACTIONS(34),
  },
  [286] = {
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(408),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(412),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
    [anon_sym_LT] = ACTIONS(418),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_GT] = ACTIONS(418),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_LT_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_GT_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_EQ_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_SLASH_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_SLASH_SLASH] = ACTIONS(422),
    [anon_sym_PLUS] = ACTIONS(424),
    [anon_sym_DASH] = ACTIONS(424),
    [anon_sym_STAR] = ACTIONS(426),
    [anon_sym_SLASH] = ACTIONS(426),
    [anon_sym_STAR_STAR] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(452),
    [sym_comment] = ACTIONS(34),
  },
  [287] = {
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(408),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
    [anon_sym_LT] = ACTIONS(418),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_GT] = ACTIONS(418),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_LT_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_GT_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_EQ_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_SLASH_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_SLASH_SLASH] = ACTIONS(422),
    [anon_sym_PLUS] = ACTIONS(424),
    [anon_sym_DASH] = ACTIONS(424),
    [anon_sym_STAR] = ACTIONS(426),
    [anon_sym_SLASH] = ACTIONS(426),
    [anon_sym_STAR_STAR] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(452),
    [sym_comment] = ACTIONS(34),
  },
  [288] = {
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(408),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(410),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(412),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
    [anon_sym_LT] = ACTIONS(418),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_GT] = ACTIONS(418),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_LT_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_GT_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_EQ_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_SLASH_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_SLASH_SLASH] = ACTIONS(422),
    [anon_sym_PLUS] = ACTIONS(424),
    [anon_sym_DASH] = ACTIONS(424),
    [anon_sym_STAR] = ACTIONS(426),
    [anon_sym_SLASH] = ACTIONS(426),
    [anon_sym_STAR_STAR] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(452),
    [sym_comment] = ACTIONS(34),
  },
  [289] = {
    [anon_sym_COMMA] = ACTIONS(458),
    [anon_sym_RPAREN] = ACTIONS(458),
    [anon_sym_PERCENT] = ACTIONS(408),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(462),
    [anon_sym_LT] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_GT] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_LT_EQ] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_GT_EQ] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_EQ_EQ] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_SLASH_EQ] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_SLASH_SLASH] = ACTIONS(422),
    [anon_sym_PLUS] = ACTIONS(424),
    [anon_sym_DASH] = ACTIONS(424),
    [anon_sym_STAR] = ACTIONS(426),
    [anon_sym_SLASH] = ACTIONS(426),
    [anon_sym_STAR_STAR] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(458),
    [sym_comment] = ACTIONS(34),
  },
  [290] = {
    [anon_sym_COMMA] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(464),
    [anon_sym_PERCENT] = ACTIONS(408),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(468),
    [anon_sym_LT] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_GT] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_LT_EQ] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_GT_EQ] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_EQ_EQ] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_SLASH_EQ] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_SLASH_SLASH] = ACTIONS(422),
    [anon_sym_PLUS] = ACTIONS(424),
    [anon_sym_DASH] = ACTIONS(424),
    [anon_sym_STAR] = ACTIONS(426),
    [anon_sym_SLASH] = ACTIONS(426),
    [anon_sym_STAR_STAR] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(464),
    [sym_comment] = ACTIONS(34),
  },
  [291] = {
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_PERCENT] = ACTIONS(408),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_LT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_EQ_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_SLASH] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_STAR] = ACTIONS(426),
    [anon_sym_SLASH] = ACTIONS(426),
    [anon_sym_STAR_STAR] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(470),
    [sym_comment] = ACTIONS(34),
  },
  [292] = {
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_PERCENT] = ACTIONS(408),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_LT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_EQ_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_SLASH] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_STAR] = ACTIONS(470),
    [anon_sym_SLASH] = ACTIONS(470),
    [anon_sym_STAR_STAR] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(470),
    [sym_comment] = ACTIONS(34),
  },
  [293] = {
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_PERCENT] = ACTIONS(408),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_LT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_EQ_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_SLASH] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_STAR] = ACTIONS(470),
    [anon_sym_SLASH] = ACTIONS(470),
    [anon_sym_STAR_STAR] = ACTIONS(472),
    [anon_sym_COLON] = ACTIONS(470),
    [sym_comment] = ACTIONS(34),
  },
  [294] = {
    [anon_sym_COMMA] = ACTIONS(610),
    [anon_sym_RPAREN] = ACTIONS(610),
    [anon_sym_PERCENT] = ACTIONS(408),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(410),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(412),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(414),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(416),
    [anon_sym_LT] = ACTIONS(418),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_GT] = ACTIONS(418),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_LT_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_GT_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_EQ_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_SLASH_EQ] = ACTIONS(420),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(418),
    [anon_sym_SLASH_SLASH] = ACTIONS(422),
    [anon_sym_PLUS] = ACTIONS(424),
    [anon_sym_DASH] = ACTIONS(424),
    [anon_sym_STAR] = ACTIONS(426),
    [anon_sym_SLASH] = ACTIONS(426),
    [anon_sym_STAR_STAR] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(640),
    [sym_comment] = ACTIONS(34),
  },
  [295] = {
    [anon_sym_COMMA] = ACTIONS(642),
    [anon_sym_EQ] = ACTIONS(642),
    [anon_sym_EQ_GT] = ACTIONS(642),
    [anon_sym_PERCENT] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_LT] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_GT] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_LT_EQ] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_GT_EQ] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_EQ_EQ] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_SLASH_EQ] = ACTIONS(642),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_SLASH_SLASH] = ACTIONS(642),
    [anon_sym_PLUS] = ACTIONS(642),
    [anon_sym_DASH] = ACTIONS(642),
    [anon_sym_STAR] = ACTIONS(642),
    [anon_sym_SLASH] = ACTIONS(642),
    [anon_sym_STAR_STAR] = ACTIONS(642),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(642),
    [sym__newline] = ACTIONS(642),
  },
  [296] = {
    [aux_sym_argument_list_repeat1] = STATE(296),
    [anon_sym_COMMA] = ACTIONS(644),
    [anon_sym_RPAREN] = ACTIONS(638),
    [sym_comment] = ACTIONS(14),
  },
  [297] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKbB_RBRACK_LBRACKyY_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKcC_RBRACK_LBRACKiI_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKpP_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_LBRACKxX_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKhH_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKcC_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(647),
    [sym_statement_label] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(647),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(647),
    [anon_sym_LPAREN] = ACTIONS(647),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(647),
    [anon_sym_PLUS] = ACTIONS(647),
    [anon_sym_DASH] = ACTIONS(647),
    [sym_block_label_start_expression] = ACTIONS(649),
    [sym_number_literal] = ACTIONS(649),
    [sym__double_quoted_string] = ACTIONS(649),
    [sym__single_quoted_string] = ACTIONS(649),
    [sym_boolean_literal] = ACTIONS(649),
    [sym_identifier] = ACTIONS(649),
    [sym_comment] = ACTIONS(34),
  },
  [298] = {
    [ts_builtin_sym_end] = ACTIONS(651),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(651),
    [sym_comment] = ACTIONS(14),
  },
  [299] = {
    [sym__end_of_statement] = STATE(345),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [300] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(642),
    [sym__newline] = ACTIONS(642),
  },
  [301] = {
    [anon_sym_COMMA] = ACTIONS(600),
    [anon_sym_PERCENT] = ACTIONS(600),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(600),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(600),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(600),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(600),
    [anon_sym_LT] = ACTIONS(600),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(600),
    [anon_sym_GT] = ACTIONS(600),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(600),
    [anon_sym_LT_EQ] = ACTIONS(600),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(600),
    [anon_sym_GT_EQ] = ACTIONS(600),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(600),
    [anon_sym_EQ_EQ] = ACTIONS(600),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(600),
    [anon_sym_SLASH_EQ] = ACTIONS(600),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(600),
    [anon_sym_SLASH_SLASH] = ACTIONS(600),
    [anon_sym_PLUS] = ACTIONS(600),
    [anon_sym_DASH] = ACTIONS(600),
    [anon_sym_STAR] = ACTIONS(600),
    [anon_sym_SLASH] = ACTIONS(600),
    [anon_sym_STAR_STAR] = ACTIONS(600),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(600),
    [sym__newline] = ACTIONS(600),
  },
  [302] = {
    [sym__expression] = STATE(346),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_PLUS] = ACTIONS(576),
    [anon_sym_DASH] = ACTIONS(576),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [303] = {
    [sym__expression] = STATE(347),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_PLUS] = ACTIONS(576),
    [anon_sym_DASH] = ACTIONS(576),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [304] = {
    [anon_sym_COMMA] = ACTIONS(653),
    [anon_sym_PERCENT] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(661),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(661),
    [anon_sym_LT] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_GT] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_LT_EQ] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_GT_EQ] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_EQ_EQ] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_SLASH_EQ] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_SLASH_SLASH] = ACTIONS(665),
    [anon_sym_PLUS] = ACTIONS(667),
    [anon_sym_DASH] = ACTIONS(667),
    [anon_sym_STAR] = ACTIONS(669),
    [anon_sym_SLASH] = ACTIONS(669),
    [anon_sym_STAR_STAR] = ACTIONS(671),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(673),
    [sym__newline] = ACTIONS(673),
  },
  [305] = {
    [anon_sym_COMMA] = ACTIONS(446),
    [anon_sym_PERCENT] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_GT] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_LT_EQ] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_GT_EQ] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_EQ_EQ] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_SLASH_EQ] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_SLASH_SLASH] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(446),
    [anon_sym_DASH] = ACTIONS(446),
    [anon_sym_STAR] = ACTIONS(446),
    [anon_sym_SLASH] = ACTIONS(446),
    [anon_sym_STAR_STAR] = ACTIONS(448),
    [sym_comment] = ACTIONS(34),
  },
  [306] = {
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
    [anon_sym_LT] = ACTIONS(502),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_GT] = ACTIONS(502),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_LT_EQ] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_GT_EQ] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_EQ_EQ] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_SLASH_EQ] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_SLASH_SLASH] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(508),
    [anon_sym_DASH] = ACTIONS(508),
    [anon_sym_STAR] = ACTIONS(510),
    [anon_sym_SLASH] = ACTIONS(510),
    [anon_sym_STAR_STAR] = ACTIONS(512),
    [sym_comment] = ACTIONS(34),
  },
  [307] = {
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
    [anon_sym_LT] = ACTIONS(502),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_GT] = ACTIONS(502),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_LT_EQ] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_GT_EQ] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_EQ_EQ] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_SLASH_EQ] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_SLASH_SLASH] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(508),
    [anon_sym_DASH] = ACTIONS(508),
    [anon_sym_STAR] = ACTIONS(510),
    [anon_sym_SLASH] = ACTIONS(510),
    [anon_sym_STAR_STAR] = ACTIONS(512),
    [sym_comment] = ACTIONS(34),
  },
  [308] = {
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(494),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(496),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
    [anon_sym_LT] = ACTIONS(502),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_GT] = ACTIONS(502),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_LT_EQ] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_GT_EQ] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_EQ_EQ] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_SLASH_EQ] = ACTIONS(504),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(502),
    [anon_sym_SLASH_SLASH] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(508),
    [anon_sym_DASH] = ACTIONS(508),
    [anon_sym_STAR] = ACTIONS(510),
    [anon_sym_SLASH] = ACTIONS(510),
    [anon_sym_STAR_STAR] = ACTIONS(512),
    [sym_comment] = ACTIONS(34),
  },
  [309] = {
    [anon_sym_COMMA] = ACTIONS(458),
    [anon_sym_PERCENT] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(462),
    [anon_sym_LT] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_GT] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_LT_EQ] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_GT_EQ] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_EQ_EQ] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_SLASH_EQ] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_SLASH_SLASH] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(508),
    [anon_sym_DASH] = ACTIONS(508),
    [anon_sym_STAR] = ACTIONS(510),
    [anon_sym_SLASH] = ACTIONS(510),
    [anon_sym_STAR_STAR] = ACTIONS(512),
    [sym_comment] = ACTIONS(34),
  },
  [310] = {
    [anon_sym_COMMA] = ACTIONS(464),
    [anon_sym_PERCENT] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(468),
    [anon_sym_LT] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_GT] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_LT_EQ] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_GT_EQ] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_EQ_EQ] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_SLASH_EQ] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_SLASH_SLASH] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(508),
    [anon_sym_DASH] = ACTIONS(508),
    [anon_sym_STAR] = ACTIONS(510),
    [anon_sym_SLASH] = ACTIONS(510),
    [anon_sym_STAR_STAR] = ACTIONS(512),
    [sym_comment] = ACTIONS(34),
  },
  [311] = {
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_PERCENT] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_LT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_EQ_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_SLASH] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_STAR] = ACTIONS(510),
    [anon_sym_SLASH] = ACTIONS(510),
    [anon_sym_STAR_STAR] = ACTIONS(512),
    [sym_comment] = ACTIONS(34),
  },
  [312] = {
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_PERCENT] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_LT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_EQ_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_SLASH] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_STAR] = ACTIONS(470),
    [anon_sym_SLASH] = ACTIONS(470),
    [anon_sym_STAR_STAR] = ACTIONS(512),
    [sym_comment] = ACTIONS(34),
  },
  [313] = {
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_PERCENT] = ACTIONS(492),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_LT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_EQ_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_SLASH] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_STAR] = ACTIONS(470),
    [anon_sym_SLASH] = ACTIONS(470),
    [anon_sym_STAR_STAR] = ACTIONS(472),
    [sym_comment] = ACTIONS(34),
  },
  [314] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(675),
    [sym__newline] = ACTIONS(675),
  },
  [315] = {
    [sym__block_label] = STATE(358),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(677),
    [sym__newline] = ACTIONS(677),
  },
  [316] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(679),
    [sym_comment] = ACTIONS(14),
  },
  [317] = {
    [sym_subroutine_call] = STATE(266),
    [sym_keyword_statement] = STATE(266),
    [sym_do_loop_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym_elseif_clause] = STATE(267),
    [sym_else_clause] = STATE(360),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(266),
    [sym_pointer_assignment_expression] = STATE(266),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(269),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(327),
    [aux_sym__block_if_statement_repeat1] = STATE(361),
    [sym_statement_label] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(681),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(529),
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
  [318] = {
    [sym_elseif_clause] = STATE(267),
    [sym_else_clause] = STATE(360),
    [aux_sym__block_if_statement_repeat1] = STATE(328),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(679),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(594),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(529),
    [sym_comment] = ACTIONS(14),
  },
  [319] = {
    [sym__end_of_statement] = STATE(362),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(374),
    [sym__newline] = ACTIONS(374),
  },
  [320] = {
    [sym__end_of_statement] = STATE(362),
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_EQ_GT] = ACTIONS(126),
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
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(374),
    [sym__newline] = ACTIONS(374),
  },
  [321] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(677),
    [sym__newline] = ACTIONS(677),
  },
  [322] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKhH_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(683),
    [sym_comment] = ACTIONS(14),
  },
  [323] = {
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
  [324] = {
    [sym__end_of_statement] = STATE(364),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(586),
    [sym__newline] = ACTIONS(586),
  },
  [325] = {
    [sym_subroutine_call] = STATE(366),
    [sym_keyword_statement] = STATE(366),
    [sym_do_loop_statement] = STATE(366),
    [sym_if_statement] = STATE(366),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(366),
    [sym_pointer_assignment_expression] = STATE(366),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(367),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(368),
    [sym_statement_label] = ACTIONS(685),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(687),
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
    [sym_statement_label] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(288),
    [anon_sym_LPAREN] = ACTIONS(288),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [sym_block_label_start_expression] = ACTIONS(290),
    [sym_number_literal] = ACTIONS(290),
    [sym__double_quoted_string] = ACTIONS(290),
    [sym__single_quoted_string] = ACTIONS(290),
    [sym_boolean_literal] = ACTIONS(290),
    [sym_identifier] = ACTIONS(290),
    [sym_comment] = ACTIONS(34),
  },
  [327] = {
    [sym_subroutine_call] = STATE(266),
    [sym_keyword_statement] = STATE(266),
    [sym_do_loop_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(266),
    [sym_pointer_assignment_expression] = STATE(266),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(269),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(327),
    [sym_statement_label] = ACTIONS(689),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(317),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(288),
    [anon_sym_LPAREN] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(326),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [sym_block_label_start_expression] = ACTIONS(332),
    [sym_number_literal] = ACTIONS(335),
    [sym__double_quoted_string] = ACTIONS(338),
    [sym__single_quoted_string] = ACTIONS(338),
    [sym_boolean_literal] = ACTIONS(335),
    [sym_identifier] = ACTIONS(341),
    [sym_comment] = ACTIONS(34),
  },
  [328] = {
    [sym_elseif_clause] = STATE(267),
    [aux_sym__block_if_statement_repeat1] = STATE(328),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(692),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(694),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(697),
    [sym_comment] = ACTIONS(14),
  },
  [329] = {
    [anon_sym_COMMA] = ACTIONS(699),
    [anon_sym_RPAREN] = ACTIONS(699),
    [anon_sym_EQ] = ACTIONS(699),
    [anon_sym_EQ_GT] = ACTIONS(701),
    [anon_sym_PERCENT] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(642),
    [anon_sym_LT] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(699),
    [anon_sym_GT] = ACTIONS(699),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(699),
    [anon_sym_LT_EQ] = ACTIONS(701),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(699),
    [anon_sym_GT_EQ] = ACTIONS(701),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(699),
    [anon_sym_EQ_EQ] = ACTIONS(701),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(699),
    [anon_sym_SLASH_EQ] = ACTIONS(701),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(699),
    [anon_sym_SLASH_SLASH] = ACTIONS(701),
    [anon_sym_PLUS] = ACTIONS(699),
    [anon_sym_DASH] = ACTIONS(699),
    [anon_sym_STAR] = ACTIONS(699),
    [anon_sym_SLASH] = ACTIONS(699),
    [anon_sym_STAR_STAR] = ACTIONS(701),
    [anon_sym_COLON] = ACTIONS(699),
    [sym_comment] = ACTIONS(34),
  },
  [330] = {
    [sym__block_label] = STATE(369),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(675),
    [sym__newline] = ACTIONS(675),
  },
  [331] = {
    [sym_subroutine_call] = STATE(266),
    [sym_keyword_statement] = STATE(266),
    [sym_do_loop_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym_elseif_clause] = STATE(267),
    [sym_else_clause] = STATE(360),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(266),
    [sym_pointer_assignment_expression] = STATE(266),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(269),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(370),
    [aux_sym__block_if_statement_repeat1] = STATE(361),
    [sym_statement_label] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(681),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(529),
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
  [332] = {
    [anon_sym_COMMA] = ACTIONS(258),
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_PERCENT] = ACTIONS(612),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(262),
    [anon_sym_LT] = ACTIONS(622),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_GT] = ACTIONS(622),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_LT_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_GT_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_EQ_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_SLASH_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_SLASH_SLASH] = ACTIONS(626),
    [anon_sym_PLUS] = ACTIONS(628),
    [anon_sym_DASH] = ACTIONS(628),
    [anon_sym_STAR] = ACTIONS(630),
    [anon_sym_SLASH] = ACTIONS(630),
    [anon_sym_STAR_STAR] = ACTIONS(632),
    [sym_comment] = ACTIONS(34),
  },
  [333] = {
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(264),
    [anon_sym_PERCENT] = ACTIONS(612),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(268),
    [anon_sym_LT] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_GT] = ACTIONS(264),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_LT_EQ] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_GT_EQ] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_EQ_EQ] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_SLASH_EQ] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_SLASH_SLASH] = ACTIONS(266),
    [anon_sym_PLUS] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(264),
    [anon_sym_SLASH] = ACTIONS(264),
    [anon_sym_STAR_STAR] = ACTIONS(266),
    [sym_comment] = ACTIONS(34),
  },
  [334] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(547),
    [anon_sym_DASH] = ACTIONS(547),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [335] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(547),
    [anon_sym_DASH] = ACTIONS(547),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [336] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(547),
    [anon_sym_DASH] = ACTIONS(547),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [337] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(547),
    [anon_sym_DASH] = ACTIONS(547),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [338] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(547),
    [anon_sym_DASH] = ACTIONS(547),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [339] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(547),
    [anon_sym_DASH] = ACTIONS(547),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [340] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(547),
    [anon_sym_DASH] = ACTIONS(547),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [341] = {
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(547),
    [anon_sym_DASH] = ACTIONS(547),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [342] = {
    [sym__expression] = STATE(379),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(547),
    [anon_sym_DASH] = ACTIONS(547),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [343] = {
    [anon_sym_COMMA] = ACTIONS(703),
    [anon_sym_RPAREN] = ACTIONS(703),
    [anon_sym_PERCENT] = ACTIONS(612),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(620),
    [anon_sym_LT] = ACTIONS(622),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_GT] = ACTIONS(622),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_LT_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_GT_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_EQ_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_SLASH_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_SLASH_SLASH] = ACTIONS(626),
    [anon_sym_PLUS] = ACTIONS(628),
    [anon_sym_DASH] = ACTIONS(628),
    [anon_sym_STAR] = ACTIONS(630),
    [anon_sym_SLASH] = ACTIONS(630),
    [anon_sym_STAR_STAR] = ACTIONS(632),
    [sym_comment] = ACTIONS(34),
  },
  [344] = {
    [sym__expression] = STATE(380),
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
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(547),
    [anon_sym_DASH] = ACTIONS(547),
    [sym_number_literal] = ACTIONS(68),
    [sym__double_quoted_string] = ACTIONS(70),
    [sym__single_quoted_string] = ACTIONS(70),
    [sym_boolean_literal] = ACTIONS(68),
    [sym_identifier] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [345] = {
    [ts_builtin_sym_end] = ACTIONS(705),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(705),
    [sym_comment] = ACTIONS(14),
  },
  [346] = {
    [anon_sym_COMMA] = ACTIONS(262),
    [anon_sym_PERCENT] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(262),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(262),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(262),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(262),
    [anon_sym_LT] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_GT] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_LT_EQ] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_GT_EQ] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_EQ_EQ] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_SLASH_EQ] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_SLASH_SLASH] = ACTIONS(665),
    [anon_sym_PLUS] = ACTIONS(667),
    [anon_sym_DASH] = ACTIONS(667),
    [anon_sym_STAR] = ACTIONS(669),
    [anon_sym_SLASH] = ACTIONS(669),
    [anon_sym_STAR_STAR] = ACTIONS(671),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(262),
    [sym__newline] = ACTIONS(262),
  },
  [347] = {
    [anon_sym_COMMA] = ACTIONS(268),
    [anon_sym_PERCENT] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(268),
    [anon_sym_LT] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(268),
    [anon_sym_GT] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(268),
    [anon_sym_LT_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(268),
    [anon_sym_GT_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(268),
    [anon_sym_EQ_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(268),
    [anon_sym_SLASH_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(268),
    [anon_sym_SLASH_SLASH] = ACTIONS(268),
    [anon_sym_PLUS] = ACTIONS(268),
    [anon_sym_DASH] = ACTIONS(268),
    [anon_sym_STAR] = ACTIONS(268),
    [anon_sym_SLASH] = ACTIONS(268),
    [anon_sym_STAR_STAR] = ACTIONS(268),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(268),
    [sym__newline] = ACTIONS(268),
  },
  [348] = {
    [sym__expression] = STATE(381),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [349] = {
    [sym__expression] = STATE(382),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_PLUS] = ACTIONS(576),
    [anon_sym_DASH] = ACTIONS(576),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [350] = {
    [sym__expression] = STATE(383),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_PLUS] = ACTIONS(576),
    [anon_sym_DASH] = ACTIONS(576),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [351] = {
    [sym__expression] = STATE(384),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_PLUS] = ACTIONS(576),
    [anon_sym_DASH] = ACTIONS(576),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [352] = {
    [sym__expression] = STATE(385),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_PLUS] = ACTIONS(576),
    [anon_sym_DASH] = ACTIONS(576),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [353] = {
    [sym__expression] = STATE(386),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_PLUS] = ACTIONS(576),
    [anon_sym_DASH] = ACTIONS(576),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [354] = {
    [sym__expression] = STATE(387),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_PLUS] = ACTIONS(576),
    [anon_sym_DASH] = ACTIONS(576),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [355] = {
    [sym__expression] = STATE(388),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_PLUS] = ACTIONS(576),
    [anon_sym_DASH] = ACTIONS(576),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [356] = {
    [sym__expression] = STATE(389),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_PLUS] = ACTIONS(576),
    [anon_sym_DASH] = ACTIONS(576),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [357] = {
    [sym__expression] = STATE(390),
    [sym_parenthesized_expression] = STATE(51),
    [sym_derived_type_member_expression] = STATE(51),
    [sym_logical_expression] = STATE(51),
    [sym_relational_expression] = STATE(51),
    [sym_concatenation_expression] = STATE(51),
    [sym_math_expression] = STATE(51),
    [sym_call_expression] = STATE(51),
    [sym_complex_literal] = STATE(51),
    [sym_string_literal] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(194),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(574),
    [anon_sym_PLUS] = ACTIONS(576),
    [anon_sym_DASH] = ACTIONS(576),
    [sym_number_literal] = ACTIONS(96),
    [sym__double_quoted_string] = ACTIONS(98),
    [sym__single_quoted_string] = ACTIONS(98),
    [sym_boolean_literal] = ACTIONS(96),
    [sym_identifier] = ACTIONS(100),
    [sym_comment] = ACTIONS(34),
  },
  [358] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(707),
    [sym__newline] = ACTIONS(707),
  },
  [359] = {
    [sym__block_label] = STATE(391),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(707),
    [sym__newline] = ACTIONS(707),
  },
  [360] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(709),
    [sym_comment] = ACTIONS(14),
  },
  [361] = {
    [sym_elseif_clause] = STATE(267),
    [sym_else_clause] = STATE(393),
    [aux_sym__block_if_statement_repeat1] = STATE(328),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(709),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(594),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(529),
    [sym_comment] = ACTIONS(14),
  },
  [362] = {
    [sym_statement_label] = ACTIONS(352),
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
  [363] = {
    [sym__block_label] = STATE(394),
    [sym__end_of_statement] = STATE(395),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(374),
    [sym__newline] = ACTIONS(374),
  },
  [364] = {
    [sym_subroutine_call] = STATE(366),
    [sym_keyword_statement] = STATE(366),
    [sym_do_loop_statement] = STATE(366),
    [sym_if_statement] = STATE(366),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(366),
    [sym_pointer_assignment_expression] = STATE(366),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(367),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(396),
    [sym_statement_label] = ACTIONS(685),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(711),
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
  [365] = {
    [sym_subroutine_call] = STATE(397),
    [sym_keyword_statement] = STATE(397),
    [sym_do_loop_statement] = STATE(397),
    [sym_if_statement] = STATE(397),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(397),
    [sym_pointer_assignment_expression] = STATE(397),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(398),
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
  [366] = {
    [sym__end_of_statement] = STATE(399),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(586),
    [sym__newline] = ACTIONS(586),
  },
  [367] = {
    [sym__end_of_statement] = STATE(399),
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_EQ_GT] = ACTIONS(126),
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
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(586),
    [sym__newline] = ACTIONS(586),
  },
  [368] = {
    [sym_subroutine_call] = STATE(366),
    [sym_keyword_statement] = STATE(366),
    [sym_do_loop_statement] = STATE(366),
    [sym_if_statement] = STATE(366),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(366),
    [sym_pointer_assignment_expression] = STATE(366),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(367),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(400),
    [sym_statement_label] = ACTIONS(685),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(711),
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
  [369] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(713),
    [sym__newline] = ACTIONS(713),
  },
  [370] = {
    [sym_subroutine_call] = STATE(266),
    [sym_keyword_statement] = STATE(266),
    [sym_do_loop_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym_elseif_clause] = STATE(267),
    [sym_else_clause] = STATE(393),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(266),
    [sym_pointer_assignment_expression] = STATE(266),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(269),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(327),
    [aux_sym__block_if_statement_repeat1] = STATE(401),
    [sym_statement_label] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(715),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(527),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(529),
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
  [371] = {
    [anon_sym_COMMA] = ACTIONS(446),
    [anon_sym_RPAREN] = ACTIONS(446),
    [anon_sym_PERCENT] = ACTIONS(612),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_GT] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_LT_EQ] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_GT_EQ] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_EQ_EQ] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_SLASH_EQ] = ACTIONS(448),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(446),
    [anon_sym_SLASH_SLASH] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(446),
    [anon_sym_DASH] = ACTIONS(446),
    [anon_sym_STAR] = ACTIONS(446),
    [anon_sym_SLASH] = ACTIONS(446),
    [anon_sym_STAR_STAR] = ACTIONS(448),
    [sym_comment] = ACTIONS(34),
  },
  [372] = {
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(612),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
    [anon_sym_LT] = ACTIONS(622),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_GT] = ACTIONS(622),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_LT_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_GT_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_EQ_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_SLASH_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_SLASH_SLASH] = ACTIONS(626),
    [anon_sym_PLUS] = ACTIONS(628),
    [anon_sym_DASH] = ACTIONS(628),
    [anon_sym_STAR] = ACTIONS(630),
    [anon_sym_SLASH] = ACTIONS(630),
    [anon_sym_STAR_STAR] = ACTIONS(632),
    [sym_comment] = ACTIONS(34),
  },
  [373] = {
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(612),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
    [anon_sym_LT] = ACTIONS(622),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_GT] = ACTIONS(622),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_LT_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_GT_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_EQ_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_SLASH_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_SLASH_SLASH] = ACTIONS(626),
    [anon_sym_PLUS] = ACTIONS(628),
    [anon_sym_DASH] = ACTIONS(628),
    [anon_sym_STAR] = ACTIONS(630),
    [anon_sym_SLASH] = ACTIONS(630),
    [anon_sym_STAR_STAR] = ACTIONS(632),
    [sym_comment] = ACTIONS(34),
  },
  [374] = {
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(612),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
    [anon_sym_LT] = ACTIONS(622),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_GT] = ACTIONS(622),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_LT_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_GT_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_EQ_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_SLASH_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_SLASH_SLASH] = ACTIONS(626),
    [anon_sym_PLUS] = ACTIONS(628),
    [anon_sym_DASH] = ACTIONS(628),
    [anon_sym_STAR] = ACTIONS(630),
    [anon_sym_SLASH] = ACTIONS(630),
    [anon_sym_STAR_STAR] = ACTIONS(632),
    [sym_comment] = ACTIONS(34),
  },
  [375] = {
    [anon_sym_COMMA] = ACTIONS(458),
    [anon_sym_RPAREN] = ACTIONS(458),
    [anon_sym_PERCENT] = ACTIONS(612),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(462),
    [anon_sym_LT] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_GT] = ACTIONS(458),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_LT_EQ] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_GT_EQ] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_EQ_EQ] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_SLASH_EQ] = ACTIONS(460),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(458),
    [anon_sym_SLASH_SLASH] = ACTIONS(626),
    [anon_sym_PLUS] = ACTIONS(628),
    [anon_sym_DASH] = ACTIONS(628),
    [anon_sym_STAR] = ACTIONS(630),
    [anon_sym_SLASH] = ACTIONS(630),
    [anon_sym_STAR_STAR] = ACTIONS(632),
    [sym_comment] = ACTIONS(34),
  },
  [376] = {
    [anon_sym_COMMA] = ACTIONS(464),
    [anon_sym_RPAREN] = ACTIONS(464),
    [anon_sym_PERCENT] = ACTIONS(612),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(468),
    [anon_sym_LT] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_GT] = ACTIONS(464),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_LT_EQ] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_GT_EQ] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_EQ_EQ] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_SLASH_EQ] = ACTIONS(466),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(464),
    [anon_sym_SLASH_SLASH] = ACTIONS(626),
    [anon_sym_PLUS] = ACTIONS(628),
    [anon_sym_DASH] = ACTIONS(628),
    [anon_sym_STAR] = ACTIONS(630),
    [anon_sym_SLASH] = ACTIONS(630),
    [anon_sym_STAR_STAR] = ACTIONS(632),
    [sym_comment] = ACTIONS(34),
  },
  [377] = {
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_PERCENT] = ACTIONS(612),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_LT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_EQ_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_SLASH] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_STAR] = ACTIONS(630),
    [anon_sym_SLASH] = ACTIONS(630),
    [anon_sym_STAR_STAR] = ACTIONS(632),
    [sym_comment] = ACTIONS(34),
  },
  [378] = {
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_PERCENT] = ACTIONS(612),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_LT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_EQ_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_SLASH] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_STAR] = ACTIONS(470),
    [anon_sym_SLASH] = ACTIONS(470),
    [anon_sym_STAR_STAR] = ACTIONS(632),
    [sym_comment] = ACTIONS(34),
  },
  [379] = {
    [anon_sym_COMMA] = ACTIONS(470),
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_PERCENT] = ACTIONS(612),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT] = ACTIONS(470),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_LT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_GT_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_EQ_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_EQ] = ACTIONS(472),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(470),
    [anon_sym_SLASH_SLASH] = ACTIONS(472),
    [anon_sym_PLUS] = ACTIONS(470),
    [anon_sym_DASH] = ACTIONS(470),
    [anon_sym_STAR] = ACTIONS(470),
    [anon_sym_SLASH] = ACTIONS(470),
    [anon_sym_STAR_STAR] = ACTIONS(472),
    [sym_comment] = ACTIONS(34),
  },
  [380] = {
    [anon_sym_COMMA] = ACTIONS(717),
    [anon_sym_RPAREN] = ACTIONS(717),
    [anon_sym_PERCENT] = ACTIONS(612),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(614),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(616),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(618),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(620),
    [anon_sym_LT] = ACTIONS(622),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_GT] = ACTIONS(622),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_LT_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_GT_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_EQ_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_SLASH_EQ] = ACTIONS(624),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(622),
    [anon_sym_SLASH_SLASH] = ACTIONS(626),
    [anon_sym_PLUS] = ACTIONS(628),
    [anon_sym_DASH] = ACTIONS(628),
    [anon_sym_STAR] = ACTIONS(630),
    [anon_sym_SLASH] = ACTIONS(630),
    [anon_sym_STAR_STAR] = ACTIONS(632),
    [sym_comment] = ACTIONS(34),
  },
  [381] = {
    [anon_sym_PERCENT] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(208),
    [anon_sym_LT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_LT_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_GT_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_EQ_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_EQ] = ACTIONS(210),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(210),
    [anon_sym_SLASH_SLASH] = ACTIONS(212),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_STAR] = ACTIONS(216),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_STAR_STAR] = ACTIONS(218),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(719),
    [sym__newline] = ACTIONS(719),
  },
  [382] = {
    [anon_sym_COMMA] = ACTIONS(450),
    [anon_sym_PERCENT] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(450),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_GT] = ACTIONS(450),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_LT_EQ] = ACTIONS(450),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_GT_EQ] = ACTIONS(450),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_EQ_EQ] = ACTIONS(450),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_SLASH_EQ] = ACTIONS(450),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(450),
    [anon_sym_SLASH_SLASH] = ACTIONS(450),
    [anon_sym_PLUS] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(450),
    [anon_sym_STAR] = ACTIONS(450),
    [anon_sym_SLASH] = ACTIONS(450),
    [anon_sym_STAR_STAR] = ACTIONS(450),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(450),
    [sym__newline] = ACTIONS(450),
  },
  [383] = {
    [anon_sym_COMMA] = ACTIONS(456),
    [anon_sym_PERCENT] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
    [anon_sym_LT] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_GT] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_LT_EQ] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_GT_EQ] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_EQ_EQ] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_SLASH_EQ] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_SLASH_SLASH] = ACTIONS(665),
    [anon_sym_PLUS] = ACTIONS(667),
    [anon_sym_DASH] = ACTIONS(667),
    [anon_sym_STAR] = ACTIONS(669),
    [anon_sym_SLASH] = ACTIONS(669),
    [anon_sym_STAR_STAR] = ACTIONS(671),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(456),
    [sym__newline] = ACTIONS(456),
  },
  [384] = {
    [anon_sym_COMMA] = ACTIONS(456),
    [anon_sym_PERCENT] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
    [anon_sym_LT] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_GT] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_LT_EQ] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_GT_EQ] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_EQ_EQ] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_SLASH_EQ] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_SLASH_SLASH] = ACTIONS(665),
    [anon_sym_PLUS] = ACTIONS(667),
    [anon_sym_DASH] = ACTIONS(667),
    [anon_sym_STAR] = ACTIONS(669),
    [anon_sym_SLASH] = ACTIONS(669),
    [anon_sym_STAR_STAR] = ACTIONS(671),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(456),
    [sym__newline] = ACTIONS(456),
  },
  [385] = {
    [anon_sym_COMMA] = ACTIONS(456),
    [anon_sym_PERCENT] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(657),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(456),
    [anon_sym_LT] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_GT] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_LT_EQ] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_GT_EQ] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_EQ_EQ] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_SLASH_EQ] = ACTIONS(663),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(663),
    [anon_sym_SLASH_SLASH] = ACTIONS(665),
    [anon_sym_PLUS] = ACTIONS(667),
    [anon_sym_DASH] = ACTIONS(667),
    [anon_sym_STAR] = ACTIONS(669),
    [anon_sym_SLASH] = ACTIONS(669),
    [anon_sym_STAR_STAR] = ACTIONS(671),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(456),
    [sym__newline] = ACTIONS(456),
  },
  [386] = {
    [anon_sym_COMMA] = ACTIONS(462),
    [anon_sym_PERCENT] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(462),
    [anon_sym_LT] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(462),
    [anon_sym_GT] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(462),
    [anon_sym_LT_EQ] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(462),
    [anon_sym_GT_EQ] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(462),
    [anon_sym_EQ_EQ] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(462),
    [anon_sym_SLASH_EQ] = ACTIONS(462),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(462),
    [anon_sym_SLASH_SLASH] = ACTIONS(665),
    [anon_sym_PLUS] = ACTIONS(667),
    [anon_sym_DASH] = ACTIONS(667),
    [anon_sym_STAR] = ACTIONS(669),
    [anon_sym_SLASH] = ACTIONS(669),
    [anon_sym_STAR_STAR] = ACTIONS(671),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(462),
    [sym__newline] = ACTIONS(462),
  },
  [387] = {
    [anon_sym_COMMA] = ACTIONS(468),
    [anon_sym_PERCENT] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(468),
    [anon_sym_LT] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(468),
    [anon_sym_GT] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(468),
    [anon_sym_LT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(468),
    [anon_sym_GT_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(468),
    [anon_sym_EQ_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(468),
    [anon_sym_SLASH_EQ] = ACTIONS(468),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(468),
    [anon_sym_SLASH_SLASH] = ACTIONS(665),
    [anon_sym_PLUS] = ACTIONS(667),
    [anon_sym_DASH] = ACTIONS(667),
    [anon_sym_STAR] = ACTIONS(669),
    [anon_sym_SLASH] = ACTIONS(669),
    [anon_sym_STAR_STAR] = ACTIONS(671),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(468),
    [sym__newline] = ACTIONS(468),
  },
  [388] = {
    [anon_sym_COMMA] = ACTIONS(474),
    [anon_sym_PERCENT] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_GT] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT_EQ] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_GT_EQ] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_EQ_EQ] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_SLASH_EQ] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_SLASH_SLASH] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(474),
    [anon_sym_DASH] = ACTIONS(474),
    [anon_sym_STAR] = ACTIONS(669),
    [anon_sym_SLASH] = ACTIONS(669),
    [anon_sym_STAR_STAR] = ACTIONS(671),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(474),
    [sym__newline] = ACTIONS(474),
  },
  [389] = {
    [anon_sym_COMMA] = ACTIONS(474),
    [anon_sym_PERCENT] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_GT] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT_EQ] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_GT_EQ] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_EQ_EQ] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_SLASH_EQ] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_SLASH_SLASH] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(474),
    [anon_sym_DASH] = ACTIONS(474),
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_STAR_STAR] = ACTIONS(671),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(474),
    [sym__newline] = ACTIONS(474),
  },
  [390] = {
    [anon_sym_COMMA] = ACTIONS(474),
    [anon_sym_PERCENT] = ACTIONS(655),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_GT] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_LT_EQ] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_GT_EQ] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_EQ_EQ] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_SLASH_EQ] = ACTIONS(474),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(474),
    [anon_sym_SLASH_SLASH] = ACTIONS(474),
    [anon_sym_PLUS] = ACTIONS(474),
    [anon_sym_DASH] = ACTIONS(474),
    [anon_sym_STAR] = ACTIONS(474),
    [anon_sym_SLASH] = ACTIONS(474),
    [anon_sym_STAR_STAR] = ACTIONS(474),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(474),
    [sym__newline] = ACTIONS(474),
  },
  [391] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(721),
    [sym__newline] = ACTIONS(721),
  },
  [392] = {
    [sym__block_label] = STATE(402),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(721),
    [sym__newline] = ACTIONS(721),
  },
  [393] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(723),
    [sym_comment] = ACTIONS(14),
  },
  [394] = {
    [sym__end_of_statement] = STATE(404),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(374),
    [sym__newline] = ACTIONS(374),
  },
  [395] = {
    [sym_subroutine_call] = STATE(266),
    [sym_keyword_statement] = STATE(266),
    [sym_do_loop_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(266),
    [sym_pointer_assignment_expression] = STATE(266),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(269),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(405),
    [sym_statement_label] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(725),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(725),
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
  [396] = {
    [sym_subroutine_call] = STATE(366),
    [sym_keyword_statement] = STATE(366),
    [sym_do_loop_statement] = STATE(366),
    [sym_if_statement] = STATE(366),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(366),
    [sym_pointer_assignment_expression] = STATE(366),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(367),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(400),
    [sym_statement_label] = ACTIONS(685),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(727),
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
    [sym__end_of_statement] = STATE(406),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(586),
    [sym__newline] = ACTIONS(586),
  },
  [398] = {
    [sym__end_of_statement] = STATE(406),
    [anon_sym_EQ] = ACTIONS(126),
    [anon_sym_EQ_GT] = ACTIONS(126),
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
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(586),
    [sym__newline] = ACTIONS(586),
  },
  [399] = {
    [sym_statement_label] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(288),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(288),
    [anon_sym_LPAREN] = ACTIONS(288),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [sym_block_label_start_expression] = ACTIONS(290),
    [sym_number_literal] = ACTIONS(290),
    [sym__double_quoted_string] = ACTIONS(290),
    [sym__single_quoted_string] = ACTIONS(290),
    [sym_boolean_literal] = ACTIONS(290),
    [sym_identifier] = ACTIONS(290),
    [sym_comment] = ACTIONS(34),
  },
  [400] = {
    [sym_subroutine_call] = STATE(366),
    [sym_keyword_statement] = STATE(366),
    [sym_do_loop_statement] = STATE(366),
    [sym_if_statement] = STATE(366),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(366),
    [sym_pointer_assignment_expression] = STATE(366),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(367),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(400),
    [sym_statement_label] = ACTIONS(729),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(314),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(317),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(288),
    [anon_sym_LPAREN] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(326),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [sym_block_label_start_expression] = ACTIONS(332),
    [sym_number_literal] = ACTIONS(335),
    [sym__double_quoted_string] = ACTIONS(338),
    [sym__single_quoted_string] = ACTIONS(338),
    [sym_boolean_literal] = ACTIONS(335),
    [sym_identifier] = ACTIONS(341),
    [sym_comment] = ACTIONS(34),
  },
  [401] = {
    [sym_elseif_clause] = STATE(267),
    [sym_else_clause] = STATE(407),
    [aux_sym__block_if_statement_repeat1] = STATE(328),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(723),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(594),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(529),
    [sym_comment] = ACTIONS(14),
  },
  [402] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(732),
    [sym__newline] = ACTIONS(732),
  },
  [403] = {
    [sym__block_label] = STATE(408),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(732),
    [sym__newline] = ACTIONS(732),
  },
  [404] = {
    [sym_subroutine_call] = STATE(266),
    [sym_keyword_statement] = STATE(266),
    [sym_do_loop_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(266),
    [sym_pointer_assignment_expression] = STATE(266),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(269),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(409),
    [sym_statement_label] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(734),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(734),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(734),
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
  [405] = {
    [sym_subroutine_call] = STATE(266),
    [sym_keyword_statement] = STATE(266),
    [sym_do_loop_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(266),
    [sym_pointer_assignment_expression] = STATE(266),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(269),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(327),
    [sym_statement_label] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(734),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(734),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(734),
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
  [406] = {
    [sym_statement_label] = ACTIONS(352),
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
  [407] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(736),
    [sym_comment] = ACTIONS(14),
  },
  [408] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(738),
    [sym__newline] = ACTIONS(738),
  },
  [409] = {
    [sym_subroutine_call] = STATE(266),
    [sym_keyword_statement] = STATE(266),
    [sym_do_loop_statement] = STATE(266),
    [sym_if_statement] = STATE(266),
    [sym__inline_if_statement] = STATE(32),
    [sym__block_if_statement] = STATE(32),
    [sym__expression] = STATE(33),
    [sym_parenthesized_expression] = STATE(26),
    [sym_assignment_expression] = STATE(266),
    [sym_pointer_assignment_expression] = STATE(266),
    [sym_derived_type_member_expression] = STATE(26),
    [sym_logical_expression] = STATE(26),
    [sym_relational_expression] = STATE(26),
    [sym_concatenation_expression] = STATE(26),
    [sym_math_expression] = STATE(26),
    [sym_call_expression] = STATE(269),
    [sym_complex_literal] = STATE(26),
    [sym_string_literal] = STATE(26),
    [aux_sym_program_block_repeat2] = STATE(327),
    [sym_statement_label] = ACTIONS(523),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKuU_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKyY_RBRACK_LBRACKcC_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_LBRACKgG_RBRACK_LBRACKoO_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKtT_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKrR_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKuU_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKpP_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKoO_RBRACK_SLASH] = ACTIONS(56),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(740),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_LBRACK_TAB_RBRACK_STAR_LBRACKiI_RBRACK_LBRACKfF_RBRACK_SLASH] = ACTIONS(740),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKlL_RBRACK_LBRACKsS_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(740),
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
  [410] = {
    [sym__block_label] = STATE(411),
    [sym_identifier] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(738),
    [sym__newline] = ACTIONS(738),
  },
  [411] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(742),
    [sym__newline] = ACTIONS(742),
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
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_keyword_statement, 1),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(61),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 1),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 1),
  [138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 1),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(74),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_if_statement, 1),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(82),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [174] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
  [178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(94),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__end_of_statement, 1),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subroutine_call, 2),
  [188] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_keyword_statement, 2),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(98),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(99),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [200] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [202] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(103),
  [204] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(104),
  [206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(105),
  [208] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(106),
  [210] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(107),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(108),
  [214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(109),
  [216] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(110),
  [218] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(111),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(112),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(114),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(120),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(121),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [244] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(133),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(134),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(138),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_logical_expression, 2),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 2),
  [262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 2),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 2),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [268] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(140),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(143),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(145),
  [280] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(146),
  [282] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
  [286] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(150),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2),
  [290] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2),
  [294] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(13),
  [297] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [299] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(14),
  [302] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(15),
  [305] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(16),
  [308] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(17),
  [311] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(18),
  [314] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(19),
  [317] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(20),
  [320] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(21),
  [323] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(22),
  [326] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(23),
  [329] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(24),
  [332] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(25),
  [335] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(26),
  [338] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(27),
  [341] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(28),
  [344] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(164),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [348] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(166),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 3),
  [354] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat2, 3),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(182),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(183),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [368] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(189),
  [370] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 3),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
  [374] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(196),
  [376] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(199),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(201),
  [380] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(201),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(202),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 3),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [392] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
  [396] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 1),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [416] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(227),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(228),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(229),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(232),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(222),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(223),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_declaration, 3),
  [440] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
  [442] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [444] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [450] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_logical_expression, 3),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 3),
  [456] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 3),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [462] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [468] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 3),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [474] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [478] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(240),
  [480] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(241),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(242),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(244),
  [488] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(244),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(247),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(248),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(249),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(250),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(251),
  [500] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(251),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(252),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(254),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(255),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
  [514] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 4),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(258),
  [518] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_label, 1, .alias_sequence_id = 1),
  [520] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(114),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(262),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(263),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(265),
  [531] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__inline_if_statement, 4),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(273),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(276),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(278),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 2),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(281),
  [553] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_declaration, 4),
  [559] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 4),
  [561] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [563] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2), SHIFT_REPEAT(150),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 8),
  [568] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(299),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(300),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(302),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [578] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 5),
  [580] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__inline_if_statement, 5),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(315),
  [584] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 5),
  [586] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(323),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__block_if_statement_repeat1, 1),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__block_if_statement_repeat1, 1),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
  [596] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_complex_literal, 5),
  [598] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [600] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [602] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [604] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [606] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(329),
  [608] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(330),
  [610] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 3),
  [612] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(334),
  [614] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(335),
  [616] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(336),
  [618] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
  [620] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(337),
  [622] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(338),
  [624] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
  [626] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(339),
  [628] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(340),
  [630] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(341),
  [632] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(342),
  [634] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_keyword_argument, 3),
  [636] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [638] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [640] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(344),
  [642] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [644] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(222),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_declaration, 5),
  [649] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 5),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 9),
  [653] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(348),
  [655] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(349),
  [657] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(350),
  [659] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(351),
  [661] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(352),
  [663] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(353),
  [665] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(354),
  [667] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(355),
  [669] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(356),
  [671] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(357),
  [673] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_loop_control_expression, 5),
  [675] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 6),
  [677] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 6),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(359),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(359),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(363),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(365),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 2),
  [689] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(262),
  [692] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__block_if_statement_repeat1, 2),
  [694] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym__block_if_statement_repeat1, 2), SHIFT_REPEAT(264),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__block_if_statement_repeat1, 2),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 4),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 10),
  [707] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 7),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(392),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 3),
  [713] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_loop_statement, 7),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(392),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 5),
  [719] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_loop_control_expression, 7),
  [721] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 8),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(403),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 4),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_else_clause, 4),
  [729] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat2, 2), SHIFT_REPEAT(365),
  [732] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 9),
  [734] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 5),
  [736] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(410),
  [738] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 10),
  [740] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_elseif_clause, 6),
  [742] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__block_if_statement, 11),
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
