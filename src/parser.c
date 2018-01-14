#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 181
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH = 1,
  anon_sym_LF = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH = 6,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH = 7,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH = 8,
  anon_sym_COLON_COLON = 9,
  sym_intrinsic_type = 10,
  aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH = 11,
  aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH = 12,
  aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH = 13,
  anon_sym_STAR = 14,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH = 15,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH = 16,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH = 17,
  aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH = 18,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH = 19,
  aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH = 20,
  aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH = 21,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH = 22,
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH = 23,
  aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH = 24,
  aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH = 25,
  aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH = 26,
  aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH = 27,
  anon_sym_SEMI = 28,
  anon_sym_COLON = 29,
  sym_number_literal = 30,
  sym_string_literal = 31,
  sym_true = 32,
  sym_false = 33,
  sym_end_statement = 34,
  sym_identifier = 35,
  sym_comment = 36,
  sym_translation_unit = 37,
  sym__top_level_item = 38,
  sym_program_block = 39,
  sym_type_block = 40,
  sym_variable_declaration = 41,
  sym_custom_type = 42,
  sym_type_qualifier = 43,
  sym__expression = 44,
  sym_parenthesized_expression = 45,
  sym_array_slice = 46,
  aux_sym_translation_unit_repeat1 = 47,
  aux_sym_program_block_repeat1 = 48,
  aux_sym_type_block_repeat1 = 49,
  aux_sym_variable_declaration_repeat1 = 50,
  aux_sym_variable_declaration_repeat2 = 51,
  aux_sym_type_qualifier_repeat1 = 52,
  aux_sym_parenthesized_expression_repeat1 = 53,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = "/[pP][rR][oO][gG][rR][aA][mM]/",
  [anon_sym_LF] = "\n",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[tT][yY][pP][eE]/",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = "/[pP][uU][bB][lL][iI][cC]/",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[pP][rR][iI][vV][aA][tT][eE]/",
  [anon_sym_COLON_COLON] = "::",
  [sym_intrinsic_type] = "intrinsic_type",
  [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[aA][lL][lL][oO][cC][aA][tT][aA][bB][lL][eE]/",
  [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = "/[aA][uU][tT][oO][mM][aA][tT][iI][cC]/",
  [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = "/[dD][iI][mM][eE][nN][sS][iI][oO][nN]/",
  [anon_sym_STAR] = "*",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = "/[eE][xX][tT][eE][rR][nN][aA][lL]/",
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = "/[iI][nN][tT][eE][nN][tT]/",
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = "/[iI][nN]/",
  [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH] = "/[oO][uU][tT]/",
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH] = "/[iI][nN][oO][uU][tT]/",
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = "/[iI][nN][tT][rR][iI][nN][sS][iI][cC]/",
  [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = "/[oO][pP][tT][iI][oO][nN][aA][lL]/",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = "/[pP][aA][rR][aA][mM][eE][tT][eE][rR]/",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = "/[pP][oO][iI][nN][tT][eE][rR]/",
  [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[sS][aA][vV][eE]/",
  [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = "/[sS][tT][aA][tT][iI][cC]/",
  [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = "/[tT][aA][rR][gG][eE][tT]/",
  [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = "/[vV][oO][lL][aA][tT][iI][lL][eE]/",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [sym_number_literal] = "number_literal",
  [sym_string_literal] = "string_literal",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_end_statement] = "end_statement",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_translation_unit] = "translation_unit",
  [sym__top_level_item] = "_top_level_item",
  [sym_program_block] = "program_block",
  [sym_type_block] = "type_block",
  [sym_variable_declaration] = "variable_declaration",
  [sym_custom_type] = "custom_type",
  [sym_type_qualifier] = "type_qualifier",
  [sym__expression] = "_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_array_slice] = "array_slice",
  [aux_sym_translation_unit_repeat1] = "translation_unit_repeat1",
  [aux_sym_program_block_repeat1] = "program_block_repeat1",
  [aux_sym_type_block_repeat1] = "type_block_repeat1",
  [aux_sym_variable_declaration_repeat1] = "variable_declaration_repeat1",
  [aux_sym_variable_declaration_repeat2] = "variable_declaration_repeat2",
  [aux_sym_type_qualifier_repeat1] = "type_qualifier_repeat1",
  [aux_sym_parenthesized_expression_repeat1] = "parenthesized_expression_repeat1",
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_intrinsic_type] = {
    .visible = true,
    .named = true,
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
  [anon_sym_STAR] = {
    .visible = true,
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
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH] = {
    .visible = false,
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
  [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = {
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
  [anon_sym_SEMI] = {
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
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_end_statement] = {
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
  [sym_translation_unit] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_item] = {
    .visible = false,
    .named = true,
  },
  [sym_program_block] = {
    .visible = true,
    .named = true,
  },
  [sym_type_block] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_qualifier] = {
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
  [sym_array_slice] = {
    .visible = true,
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
  [aux_sym_type_block_repeat1] = {
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
  [aux_sym_type_qualifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parenthesized_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(11);
      if (lookahead == ':')
        ADVANCE(23);
      if (lookahead == ';')
        ADVANCE(25);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(26);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(55);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(65);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(77);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(85);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(106);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(115);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
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
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '\\')
        ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 11:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(12);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '.')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 18:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '.')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(27);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(56);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_end_statement);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
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
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(68);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(86);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(94);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
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
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(107);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(116);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 132:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(132);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 140:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == ':')
        ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 141:
      if (lookahead == ':')
        ADVANCE(24);
      END_STATE();
    case 142:
      if (lookahead == '\n')
        ADVANCE(143);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 144:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(145);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(154);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(167);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(183);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(192);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(201);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(205);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(209);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(215);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(144);
      END_STATE();
    case 145:
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_intrinsic_type);
      if (lookahead == '(')
        ADVANCE(149);
      if (lookahead == '*')
        ADVANCE(152);
      END_STATE();
    case 149:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == ')')
        ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_intrinsic_type);
      if (lookahead == ')')
        ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(150);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_intrinsic_type);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(153);
      END_STATE();
    case 154:
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(155);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(162);
      END_STATE();
    case 155:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(148);
      END_STATE();
    case 162:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(148);
      END_STATE();
    case 167:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == ' ')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(174);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(175);
      END_STATE();
    case 174:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(162);
      END_STATE();
    case 175:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(148);
      END_STATE();
    case 183:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(184);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(186);
      END_STATE();
    case 184:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_end_statement);
      END_STATE();
    case 186:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(148);
      END_STATE();
    case 192:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(194);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(195);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(196);
      END_STATE();
    case 195:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(160);
      END_STATE();
    case 196:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(148);
      END_STATE();
    case 201:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(203);
      END_STATE();
    case 203:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(204);
      END_STATE();
    case 204:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(190);
      END_STATE();
    case 205:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(207);
      END_STATE();
    case 207:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(208);
      END_STATE();
    case 208:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(189);
      END_STATE();
    case 209:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(210);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(213);
      END_STATE();
    case 210:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(211);
      END_STATE();
    case 211:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(212);
      END_STATE();
    case 212:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(146);
      END_STATE();
    case 213:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(214);
      END_STATE();
    case 214:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(199);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(190);
      END_STATE();
    case 216:
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(218);
      END_STATE();
    case 218:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 220:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(221);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(240);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(249);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(257);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(269);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(277);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(303);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(312);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(220);
      END_STATE();
    case 221:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(222);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(232);
      END_STATE();
    case 222:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(224);
      END_STATE();
    case 224:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(225);
      END_STATE();
    case 225:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(227);
      END_STATE();
    case 227:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(228);
      END_STATE();
    case 228:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 232:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(233);
      END_STATE();
    case 233:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(234);
      END_STATE();
    case 234:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(235);
      END_STATE();
    case 235:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(238);
      END_STATE();
    case 238:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      END_STATE();
    case 240:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(241);
      END_STATE();
    case 241:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(242);
      END_STATE();
    case 242:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(243);
      END_STATE();
    case 243:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(247);
      END_STATE();
    case 247:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH);
      END_STATE();
    case 249:
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(251);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 257:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(260);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(263);
      END_STATE();
    case 260:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(261);
      END_STATE();
    case 261:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 263:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(267);
      END_STATE();
    case 267:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      END_STATE();
    case 269:
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(272);
      END_STATE();
    case 272:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(273);
      END_STATE();
    case 273:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(274);
      END_STATE();
    case 274:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(275);
      END_STATE();
    case 275:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH);
      END_STATE();
    case 277:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(278);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(286);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(292);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(298);
      END_STATE();
    case 278:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(280);
      END_STATE();
    case 280:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(281);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(282);
      END_STATE();
    case 282:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(283);
      END_STATE();
    case 283:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(284);
      END_STATE();
    case 284:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(285);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      END_STATE();
    case 286:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(287);
      END_STATE();
    case 287:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(288);
      END_STATE();
    case 288:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(289);
      END_STATE();
    case 289:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(290);
      END_STATE();
    case 290:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH);
      END_STATE();
    case 292:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(294);
      END_STATE();
    case 294:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(295);
      END_STATE();
    case 295:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 298:
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(299);
      END_STATE();
    case 299:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(300);
      END_STATE();
    case 300:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(301);
      END_STATE();
    case 301:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      END_STATE();
    case 303:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(304);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(307);
      END_STATE();
    case 304:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(305);
      END_STATE();
    case 305:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 307:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(308);
      END_STATE();
    case 308:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(309);
      END_STATE();
    case 309:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(310);
      END_STATE();
    case 310:
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      END_STATE();
    case 312:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(314);
      END_STATE();
    case 314:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(315);
      END_STATE();
    case 315:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(316);
      END_STATE();
    case 316:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(317);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 318:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(321);
      END_STATE();
    case 321:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(322);
      END_STATE();
    case 322:
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(323);
      END_STATE();
    case 323:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(324);
      END_STATE();
    case 324:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(325);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH);
      END_STATE();
    case 326:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ':')
        ADVANCE(141);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(26);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(46);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(327);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(65);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(77);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(328);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(106);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(340);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(326);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(86);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(94);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(329);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 341:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '(')
        ADVANCE(344);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == '.')
        ADVANCE(357);
      if (lookahead == '9')
        ADVANCE(362);
      if (lookahead == ':')
        ADVANCE(366);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(367);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(368);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(370);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(372);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(374);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(343);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(363);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(365);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(369);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ',')
        ADVANCE(345);
      if (lookahead == '.')
        ADVANCE(352);
      if (('+' <= lookahead && lookahead <= '-'))
        ADVANCE(356);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(356);
      END_STATE();
    case 345:
      if (lookahead == ')')
        ADVANCE(346);
      if (lookahead == '.')
        ADVANCE(347);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(351);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(351);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_number_literal);
      END_STATE();
    case 347:
      if (lookahead == ')')
        ADVANCE(346);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(347);
      END_STATE();
    case 348:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(350);
      END_STATE();
    case 349:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(350);
      END_STATE();
    case 350:
      if (lookahead == ')')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(350);
      END_STATE();
    case 351:
      if (lookahead == ')')
        ADVANCE(346);
      if (lookahead == '.')
        ADVANCE(347);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(351);
      END_STATE();
    case 352:
      if (lookahead == ',')
        ADVANCE(345);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(352);
      END_STATE();
    case 353:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(355);
      END_STATE();
    case 354:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(355);
      END_STATE();
    case 355:
      if (lookahead == ',')
        ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(355);
      END_STATE();
    case 356:
      if (lookahead == ',')
        ADVANCE(345);
      if (lookahead == '.')
        ADVANCE(352);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(12);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(18);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(361);
      END_STATE();
    case 358:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(360);
      END_STATE();
    case 359:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(360);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(346);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(363);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(359);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(365);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(365);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == '9')
        ADVANCE(362);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(368);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(365);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(346);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(346);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(363);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(365);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(369);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(361);
      if (lookahead == '9')
        ADVANCE(362);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(346);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(346);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(363);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(371);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(346);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(365);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(371);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(365);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(346);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(365);
      END_STATE();
    case 372:
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(373);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(373);
      END_STATE();
    case 374:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(365);
      END_STATE();
    case 375:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(376);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(375);
      END_STATE();
    case 376:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(377);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(378);
      END_STATE();
    case 378:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(379);
      END_STATE();
    case 379:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(380);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 381:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(382);
      END_STATE();
    case 382:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(383);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH);
      END_STATE();
    case 384:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(385);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(389);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(402);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(408);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(415);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(424);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(428);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(432);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(438);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
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
        ADVANCE(37);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_intrinsic_type);
      if (lookahead == '(')
        ADVANCE(149);
      if (lookahead == '*')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h')
        ADVANCE(390);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ')
        ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(56);
      if (lookahead == 'X' ||
          lookahead == 'x')
        ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(418);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(433);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 440:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == ':')
        ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(440);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(37);
      END_STATE();
    case 441:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == ',')
        ADVANCE(10);
      if (lookahead == ':')
        ADVANCE(366);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(145);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(154);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(167);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(183);
      if (lookahead == 'I' ||
          lookahead == 'i')
        ADVANCE(192);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(201);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(205);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(209);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(215);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(441);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 132},
  [2] = {.lex_state = 140},
  [3] = {.lex_state = 132},
  [4] = {.lex_state = 132},
  [5] = {.lex_state = 132},
  [6] = {.lex_state = 132},
  [7] = {.lex_state = 142},
  [8] = {.lex_state = 132},
  [9] = {.lex_state = 144},
  [10] = {.lex_state = 140},
  [11] = {.lex_state = 140},
  [12] = {.lex_state = 132},
  [13] = {.lex_state = 144},
  [14] = {.lex_state = 142},
  [15] = {.lex_state = 144},
  [16] = {.lex_state = 140},
  [17] = {.lex_state = 220},
  [18] = {.lex_state = 140},
  [19] = {.lex_state = 142},
  [20] = {.lex_state = 326},
  [21] = {.lex_state = 140},
  [22] = {.lex_state = 142},
  [23] = {.lex_state = 341},
  [24] = {.lex_state = 144},
  [25] = {.lex_state = 132},
  [26] = {.lex_state = 142},
  [27] = {.lex_state = 343},
  [28] = {.lex_state = 140},
  [29] = {.lex_state = 142},
  [30] = {.lex_state = 144},
  [31] = {.lex_state = 140},
  [32] = {.lex_state = 140},
  [33] = {.lex_state = 140},
  [34] = {.lex_state = 140},
  [35] = {.lex_state = 142},
  [36] = {.lex_state = 140},
  [37] = {.lex_state = 343},
  [38] = {.lex_state = 140},
  [39] = {.lex_state = 142},
  [40] = {.lex_state = 142},
  [41] = {.lex_state = 132},
  [42] = {.lex_state = 341},
  [43] = {.lex_state = 144},
  [44] = {.lex_state = 140},
  [45] = {.lex_state = 140},
  [46] = {.lex_state = 142},
  [47] = {.lex_state = 144},
  [48] = {.lex_state = 140},
  [49] = {.lex_state = 140},
  [50] = {.lex_state = 144},
  [51] = {.lex_state = 144},
  [52] = {.lex_state = 144},
  [53] = {.lex_state = 142},
  [54] = {.lex_state = 343},
  [55] = {.lex_state = 140},
  [56] = {.lex_state = 375},
  [57] = {.lex_state = 142},
  [58] = {.lex_state = 142},
  [59] = {.lex_state = 220},
  [60] = {.lex_state = 140},
  [61] = {.lex_state = 140},
  [62] = {.lex_state = 343},
  [63] = {.lex_state = 142},
  [64] = {.lex_state = 343},
  [65] = {.lex_state = 343},
  [66] = {.lex_state = 343},
  [67] = {.lex_state = 343},
  [68] = {.lex_state = 142},
  [69] = {.lex_state = 140},
  [70] = {.lex_state = 132},
  [71] = {.lex_state = 142},
  [72] = {.lex_state = 144},
  [73] = {.lex_state = 144},
  [74] = {.lex_state = 144},
  [75] = {.lex_state = 326},
  [76] = {.lex_state = 140},
  [77] = {.lex_state = 144},
  [78] = {.lex_state = 384},
  [79] = {.lex_state = 144},
  [80] = {.lex_state = 142},
  [81] = {.lex_state = 142},
  [82] = {.lex_state = 440},
  [83] = {.lex_state = 343},
  [84] = {.lex_state = 343},
  [85] = {.lex_state = 343},
  [86] = {.lex_state = 343},
  [87] = {.lex_state = 140},
  [88] = {.lex_state = 142},
  [89] = {.lex_state = 220},
  [90] = {.lex_state = 140},
  [91] = {.lex_state = 441},
  [92] = {.lex_state = 343},
  [93] = {.lex_state = 343},
  [94] = {.lex_state = 343},
  [95] = {.lex_state = 343},
  [96] = {.lex_state = 343},
  [97] = {.lex_state = 142},
  [98] = {.lex_state = 343},
  [99] = {.lex_state = 343},
  [100] = {.lex_state = 142},
  [101] = {.lex_state = 142},
  [102] = {.lex_state = 144},
  [103] = {.lex_state = 144},
  [104] = {.lex_state = 144},
  [105] = {.lex_state = 384},
  [106] = {.lex_state = 140},
  [107] = {.lex_state = 144},
  [108] = {.lex_state = 140},
  [109] = {.lex_state = 140},
  [110] = {.lex_state = 144},
  [111] = {.lex_state = 144},
  [112] = {.lex_state = 144},
  [113] = {.lex_state = 142},
  [114] = {.lex_state = 343},
  [115] = {.lex_state = 140},
  [116] = {.lex_state = 343},
  [117] = {.lex_state = 343},
  [118] = {.lex_state = 140},
  [119] = {.lex_state = 343},
  [120] = {.lex_state = 440},
  [121] = {.lex_state = 142},
  [122] = {.lex_state = 140},
  [123] = {.lex_state = 142},
  [124] = {.lex_state = 441},
  [125] = {.lex_state = 343},
  [126] = {.lex_state = 343},
  [127] = {.lex_state = 343},
  [128] = {.lex_state = 343},
  [129] = {.lex_state = 343},
  [130] = {.lex_state = 343},
  [131] = {.lex_state = 343},
  [132] = {.lex_state = 343},
  [133] = {.lex_state = 142},
  [134] = {.lex_state = 142},
  [135] = {.lex_state = 144},
  [136] = {.lex_state = 144},
  [137] = {.lex_state = 384},
  [138] = {.lex_state = 144},
  [139] = {.lex_state = 144},
  [140] = {.lex_state = 144},
  [141] = {.lex_state = 144},
  [142] = {.lex_state = 140},
  [143] = {.lex_state = 140},
  [144] = {.lex_state = 144},
  [145] = {.lex_state = 140},
  [146] = {.lex_state = 343},
  [147] = {.lex_state = 343},
  [148] = {.lex_state = 140},
  [149] = {.lex_state = 343},
  [150] = {.lex_state = 440},
  [151] = {.lex_state = 142},
  [152] = {.lex_state = 142},
  [153] = {.lex_state = 441},
  [154] = {.lex_state = 343},
  [155] = {.lex_state = 343},
  [156] = {.lex_state = 343},
  [157] = {.lex_state = 343},
  [158] = {.lex_state = 343},
  [159] = {.lex_state = 384},
  [160] = {.lex_state = 144},
  [161] = {.lex_state = 144},
  [162] = {.lex_state = 144},
  [163] = {.lex_state = 144},
  [164] = {.lex_state = 144},
  [165] = {.lex_state = 140},
  [166] = {.lex_state = 144},
  [167] = {.lex_state = 144},
  [168] = {.lex_state = 343},
  [169] = {.lex_state = 142},
  [170] = {.lex_state = 343},
  [171] = {.lex_state = 144},
  [172] = {.lex_state = 384},
  [173] = {.lex_state = 144},
  [174] = {.lex_state = 144},
  [175] = {.lex_state = 144},
  [176] = {.lex_state = 144},
  [177] = {.lex_state = 144},
  [178] = {.lex_state = 144},
  [179] = {.lex_state = 144},
  [180] = {.lex_state = 144},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(3),
    [sym_string_literal] = ACTIONS(3),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_end_statement] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_translation_unit] = STATE(3),
    [sym__top_level_item] = STATE(4),
    [sym_program_block] = STATE(5),
    [aux_sym_translation_unit_repeat1] = STATE(6),
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
    [ts_builtin_sym_end] = ACTIONS(22),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(22),
    [sym_comment] = ACTIONS(14),
  },
  [6] = {
    [sym__top_level_item] = STATE(8),
    [sym_program_block] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(24),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(12),
    [sym_comment] = ACTIONS(14),
  },
  [7] = {
    [anon_sym_LF] = ACTIONS(26),
    [sym_comment] = ACTIONS(28),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(30),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(30),
    [sym_comment] = ACTIONS(14),
  },
  [9] = {
    [sym_type_block] = STATE(13),
    [sym_variable_declaration] = STATE(14),
    [sym_custom_type] = STATE(11),
    [aux_sym_program_block_repeat1] = STATE(15),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(32),
    [sym_intrinsic_type] = ACTIONS(34),
    [sym_end_statement] = ACTIONS(36),
    [sym_comment] = ACTIONS(14),
  },
  [10] = {
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_COMMA] = ACTIONS(40),
    [anon_sym_COLON_COLON] = ACTIONS(42),
    [sym_identifier] = ACTIONS(44),
    [sym_comment] = ACTIONS(14),
  },
  [11] = {
    [anon_sym_COMMA] = ACTIONS(46),
    [anon_sym_COLON_COLON] = ACTIONS(48),
    [sym_identifier] = ACTIONS(50),
    [sym_comment] = ACTIONS(14),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(54),
    [sym_comment] = ACTIONS(14),
  },
  [13] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(56),
    [sym_intrinsic_type] = ACTIONS(58),
    [sym_end_statement] = ACTIONS(56),
    [sym_comment] = ACTIONS(14),
  },
  [14] = {
    [anon_sym_LF] = ACTIONS(60),
    [sym_comment] = ACTIONS(28),
  },
  [15] = {
    [sym_type_block] = STATE(24),
    [sym_variable_declaration] = STATE(26),
    [sym_custom_type] = STATE(11),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(32),
    [sym_intrinsic_type] = ACTIONS(34),
    [sym_end_statement] = ACTIONS(62),
    [sym_comment] = ACTIONS(14),
  },
  [16] = {
    [sym_identifier] = ACTIONS(64),
    [sym_comment] = ACTIONS(14),
  },
  [17] = {
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(66),
    [sym_comment] = ACTIONS(14),
  },
  [18] = {
    [sym_identifier] = ACTIONS(68),
    [sym_comment] = ACTIONS(14),
  },
  [19] = {
    [anon_sym_LF] = ACTIONS(70),
    [sym_comment] = ACTIONS(28),
  },
  [20] = {
    [sym_type_qualifier] = STATE(36),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(72),
    [anon_sym_COLON_COLON] = ACTIONS(74),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(72),
    [sym_identifier] = ACTIONS(80),
    [sym_comment] = ACTIONS(14),
  },
  [21] = {
    [sym_identifier] = ACTIONS(82),
    [sym_comment] = ACTIONS(14),
  },
  [22] = {
    [sym_parenthesized_expression] = STATE(39),
    [aux_sym_variable_declaration_repeat2] = STATE(40),
    [anon_sym_LF] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(88),
    [sym_comment] = ACTIONS(28),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(92),
    [sym_identifier] = ACTIONS(94),
    [sym_comment] = ACTIONS(14),
  },
  [24] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(96),
    [sym_intrinsic_type] = ACTIONS(98),
    [sym_end_statement] = ACTIONS(96),
    [sym_comment] = ACTIONS(14),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(100),
    [sym_comment] = ACTIONS(14),
  },
  [26] = {
    [anon_sym_LF] = ACTIONS(102),
    [sym_comment] = ACTIONS(28),
  },
  [27] = {
    [anon_sym_RPAREN] = ACTIONS(104),
    [sym_comment] = ACTIONS(14),
  },
  [28] = {
    [anon_sym_COLON_COLON] = ACTIONS(106),
    [sym_identifier] = ACTIONS(108),
    [sym_comment] = ACTIONS(14),
  },
  [29] = {
    [anon_sym_LF] = ACTIONS(110),
    [sym_comment] = ACTIONS(28),
  },
  [30] = {
    [sym_variable_declaration] = STATE(51),
    [sym_custom_type] = STATE(49),
    [aux_sym_type_block_repeat1] = STATE(52),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(112),
    [sym_intrinsic_type] = ACTIONS(114),
    [sym_end_statement] = ACTIONS(116),
    [sym_comment] = ACTIONS(14),
  },
  [31] = {
    [anon_sym_COMMA] = ACTIONS(118),
    [anon_sym_COLON_COLON] = ACTIONS(118),
    [sym_identifier] = ACTIONS(120),
    [sym_comment] = ACTIONS(14),
  },
  [32] = {
    [sym_identifier] = ACTIONS(122),
    [sym_comment] = ACTIONS(14),
  },
  [33] = {
    [sym_parenthesized_expression] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(124),
    [sym_comment] = ACTIONS(14),
  },
  [34] = {
    [anon_sym_LPAREN] = ACTIONS(126),
    [sym_comment] = ACTIONS(14),
  },
  [35] = {
    [sym_parenthesized_expression] = STATE(57),
    [aux_sym_variable_declaration_repeat2] = STATE(58),
    [anon_sym_LF] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(88),
    [sym_comment] = ACTIONS(28),
  },
  [36] = {
    [aux_sym_variable_declaration_repeat1] = STATE(61),
    [anon_sym_COMMA] = ACTIONS(130),
    [anon_sym_COLON_COLON] = ACTIONS(132),
    [sym_identifier] = ACTIONS(122),
    [sym_comment] = ACTIONS(14),
  },
  [37] = {
    [sym__expression] = STATE(66),
    [sym_parenthesized_expression] = STATE(65),
    [sym_array_slice] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(138),
    [sym_number_literal] = ACTIONS(140),
    [sym_string_literal] = ACTIONS(140),
    [sym_true] = ACTIONS(142),
    [sym_false] = ACTIONS(142),
    [sym_comment] = ACTIONS(14),
  },
  [38] = {
    [sym_identifier] = ACTIONS(144),
    [sym_comment] = ACTIONS(14),
  },
  [39] = {
    [aux_sym_variable_declaration_repeat2] = STATE(58),
    [anon_sym_LF] = ACTIONS(128),
    [anon_sym_COMMA] = ACTIONS(88),
    [sym_comment] = ACTIONS(28),
  },
  [40] = {
    [anon_sym_LF] = ACTIONS(128),
    [anon_sym_COMMA] = ACTIONS(146),
    [sym_comment] = ACTIONS(28),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(148),
    [sym_comment] = ACTIONS(14),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(150),
    [sym_identifier] = ACTIONS(152),
    [sym_comment] = ACTIONS(14),
  },
  [43] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(154),
    [sym_intrinsic_type] = ACTIONS(156),
    [sym_end_statement] = ACTIONS(154),
    [sym_comment] = ACTIONS(14),
  },
  [44] = {
    [anon_sym_COMMA] = ACTIONS(158),
    [anon_sym_COLON_COLON] = ACTIONS(158),
    [sym_identifier] = ACTIONS(160),
    [sym_comment] = ACTIONS(14),
  },
  [45] = {
    [sym_identifier] = ACTIONS(162),
    [sym_comment] = ACTIONS(14),
  },
  [46] = {
    [anon_sym_LF] = ACTIONS(164),
    [sym_comment] = ACTIONS(28),
  },
  [47] = {
    [sym_variable_declaration] = STATE(51),
    [sym_custom_type] = STATE(49),
    [aux_sym_type_block_repeat1] = STATE(74),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(112),
    [sym_intrinsic_type] = ACTIONS(114),
    [sym_end_statement] = ACTIONS(166),
    [sym_comment] = ACTIONS(14),
  },
  [48] = {
    [anon_sym_LPAREN] = ACTIONS(38),
    [sym_comment] = ACTIONS(14),
  },
  [49] = {
    [anon_sym_COMMA] = ACTIONS(168),
    [anon_sym_COLON_COLON] = ACTIONS(170),
    [sym_identifier] = ACTIONS(172),
    [sym_comment] = ACTIONS(14),
  },
  [50] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(174),
    [sym_intrinsic_type] = ACTIONS(176),
    [sym_end_statement] = ACTIONS(178),
    [sym_comment] = ACTIONS(14),
  },
  [51] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(180),
    [sym_intrinsic_type] = ACTIONS(182),
    [sym_end_statement] = ACTIONS(180),
    [sym_comment] = ACTIONS(14),
  },
  [52] = {
    [sym_variable_declaration] = STATE(79),
    [sym_custom_type] = STATE(49),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(112),
    [sym_intrinsic_type] = ACTIONS(114),
    [sym_end_statement] = ACTIONS(166),
    [sym_comment] = ACTIONS(14),
  },
  [53] = {
    [sym_parenthesized_expression] = STATE(80),
    [aux_sym_variable_declaration_repeat2] = STATE(81),
    [anon_sym_LF] = ACTIONS(184),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(88),
    [sym_comment] = ACTIONS(28),
  },
  [54] = {
    [sym__expression] = STATE(84),
    [sym_parenthesized_expression] = STATE(65),
    [sym_array_slice] = STATE(85),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(186),
    [anon_sym_STAR] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(138),
    [sym_number_literal] = ACTIONS(140),
    [sym_string_literal] = ACTIONS(140),
    [sym_true] = ACTIONS(142),
    [sym_false] = ACTIONS(142),
    [sym_comment] = ACTIONS(14),
  },
  [55] = {
    [anon_sym_COMMA] = ACTIONS(190),
    [anon_sym_COLON_COLON] = ACTIONS(190),
    [sym_identifier] = ACTIONS(192),
    [sym_comment] = ACTIONS(14),
  },
  [56] = {
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(196),
    [sym_comment] = ACTIONS(14),
  },
  [57] = {
    [aux_sym_variable_declaration_repeat2] = STATE(81),
    [anon_sym_LF] = ACTIONS(184),
    [anon_sym_COMMA] = ACTIONS(88),
    [sym_comment] = ACTIONS(28),
  },
  [58] = {
    [anon_sym_LF] = ACTIONS(184),
    [anon_sym_COMMA] = ACTIONS(146),
    [sym_comment] = ACTIONS(28),
  },
  [59] = {
    [sym_type_qualifier] = STATE(87),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(198),
    [sym_comment] = ACTIONS(14),
  },
  [60] = {
    [sym_identifier] = ACTIONS(204),
    [sym_comment] = ACTIONS(14),
  },
  [61] = {
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_COLON_COLON] = ACTIONS(208),
    [sym_identifier] = ACTIONS(204),
    [sym_comment] = ACTIONS(14),
  },
  [62] = {
    [sym__expression] = STATE(92),
    [sym_parenthesized_expression] = STATE(65),
    [sym_array_slice] = STATE(93),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(210),
    [anon_sym_COLON] = ACTIONS(138),
    [sym_number_literal] = ACTIONS(140),
    [sym_string_literal] = ACTIONS(140),
    [sym_true] = ACTIONS(142),
    [sym_false] = ACTIONS(142),
    [sym_comment] = ACTIONS(14),
  },
  [63] = {
    [anon_sym_LF] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(212),
    [sym_comment] = ACTIONS(28),
  },
  [64] = {
    [sym__expression] = STATE(95),
    [sym_parenthesized_expression] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_COMMA] = ACTIONS(214),
    [anon_sym_RPAREN] = ACTIONS(214),
    [anon_sym_COLON] = ACTIONS(216),
    [sym_number_literal] = ACTIONS(140),
    [sym_string_literal] = ACTIONS(140),
    [sym_true] = ACTIONS(142),
    [sym_false] = ACTIONS(142),
    [sym_comment] = ACTIONS(14),
  },
  [65] = {
    [anon_sym_COMMA] = ACTIONS(218),
    [anon_sym_RPAREN] = ACTIONS(218),
    [anon_sym_COLON] = ACTIONS(218),
    [sym_comment] = ACTIONS(14),
  },
  [66] = {
    [aux_sym_parenthesized_expression_repeat1] = STATE(99),
    [anon_sym_COMMA] = ACTIONS(220),
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_COLON] = ACTIONS(224),
    [sym_comment] = ACTIONS(14),
  },
  [67] = {
    [aux_sym_parenthesized_expression_repeat1] = STATE(99),
    [anon_sym_COMMA] = ACTIONS(220),
    [anon_sym_RPAREN] = ACTIONS(222),
    [sym_comment] = ACTIONS(14),
  },
  [68] = {
    [sym_parenthesized_expression] = STATE(100),
    [anon_sym_LF] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(226),
    [sym_comment] = ACTIONS(28),
  },
  [69] = {
    [sym_identifier] = ACTIONS(228),
    [sym_comment] = ACTIONS(14),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(230),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(230),
    [sym_comment] = ACTIONS(14),
  },
  [71] = {
    [anon_sym_LF] = ACTIONS(232),
    [sym_comment] = ACTIONS(28),
  },
  [72] = {
    [sym_variable_declaration] = STATE(51),
    [sym_custom_type] = STATE(49),
    [aux_sym_type_block_repeat1] = STATE(104),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(112),
    [sym_intrinsic_type] = ACTIONS(114),
    [sym_end_statement] = ACTIONS(234),
    [sym_comment] = ACTIONS(14),
  },
  [73] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(236),
    [sym_intrinsic_type] = ACTIONS(238),
    [sym_end_statement] = ACTIONS(240),
    [sym_comment] = ACTIONS(14),
  },
  [74] = {
    [sym_variable_declaration] = STATE(79),
    [sym_custom_type] = STATE(49),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(112),
    [sym_intrinsic_type] = ACTIONS(114),
    [sym_end_statement] = ACTIONS(234),
    [sym_comment] = ACTIONS(14),
  },
  [75] = {
    [sym_type_qualifier] = STATE(108),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(72),
    [anon_sym_COLON_COLON] = ACTIONS(242),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(72),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(72),
    [sym_identifier] = ACTIONS(244),
    [sym_comment] = ACTIONS(14),
  },
  [76] = {
    [sym_identifier] = ACTIONS(246),
    [sym_comment] = ACTIONS(14),
  },
  [77] = {
    [sym_parenthesized_expression] = STATE(110),
    [aux_sym_variable_declaration_repeat2] = STATE(111),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(252),
    [sym_intrinsic_type] = ACTIONS(254),
    [sym_end_statement] = ACTIONS(252),
    [sym_comment] = ACTIONS(14),
  },
  [78] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(238),
    [sym_intrinsic_type] = ACTIONS(238),
    [sym_end_statement] = ACTIONS(238),
    [sym_identifier] = ACTIONS(256),
    [sym_comment] = ACTIONS(14),
  },
  [79] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(258),
    [sym_intrinsic_type] = ACTIONS(260),
    [sym_end_statement] = ACTIONS(258),
    [sym_comment] = ACTIONS(14),
  },
  [80] = {
    [aux_sym_variable_declaration_repeat2] = STATE(113),
    [anon_sym_LF] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(88),
    [sym_comment] = ACTIONS(28),
  },
  [81] = {
    [anon_sym_LF] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(146),
    [sym_comment] = ACTIONS(28),
  },
  [82] = {
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(264),
    [anon_sym_COLON_COLON] = ACTIONS(264),
    [sym_identifier] = ACTIONS(266),
    [sym_comment] = ACTIONS(14),
  },
  [83] = {
    [aux_sym_type_qualifier_repeat1] = STATE(116),
    [anon_sym_COMMA] = ACTIONS(268),
    [anon_sym_RPAREN] = ACTIONS(270),
    [sym_comment] = ACTIONS(14),
  },
  [84] = {
    [aux_sym_type_qualifier_repeat1] = STATE(116),
    [aux_sym_parenthesized_expression_repeat1] = STATE(119),
    [anon_sym_COMMA] = ACTIONS(272),
    [anon_sym_RPAREN] = ACTIONS(274),
    [anon_sym_COLON] = ACTIONS(224),
    [sym_comment] = ACTIONS(14),
  },
  [85] = {
    [aux_sym_parenthesized_expression_repeat1] = STATE(119),
    [anon_sym_COMMA] = ACTIONS(220),
    [anon_sym_RPAREN] = ACTIONS(276),
    [sym_comment] = ACTIONS(14),
  },
  [86] = {
    [anon_sym_RPAREN] = ACTIONS(270),
    [sym_comment] = ACTIONS(14),
  },
  [87] = {
    [anon_sym_COMMA] = ACTIONS(278),
    [anon_sym_COLON_COLON] = ACTIONS(278),
    [sym_identifier] = ACTIONS(280),
    [sym_comment] = ACTIONS(14),
  },
  [88] = {
    [sym_parenthesized_expression] = STATE(121),
    [aux_sym_variable_declaration_repeat2] = STATE(113),
    [anon_sym_LF] = ACTIONS(262),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(88),
    [sym_comment] = ACTIONS(28),
  },
  [89] = {
    [sym_type_qualifier] = STATE(122),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKuU_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKvV_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_LBRACKoO_RBRACK_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKbB_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKaA_RBRACK_LBRACKuU_RBRACK_LBRACKtT_RBRACK_LBRACKoO_RBRACK_LBRACKmM_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKdD_RBRACK_LBRACKiI_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_SLASH] = ACTIONS(200),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKxX_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKrR_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKsS_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKoO_RBRACK_LBRACKpP_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKoO_RBRACK_LBRACKnN_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKoO_RBRACK_LBRACKiI_RBRACK_LBRACKnN_RBRACK_LBRACKtT_RBRACK_LBRACKeE_RBRACK_LBRACKrR_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKaA_RBRACK_LBRACKvV_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKsS_RBRACK_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKcC_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKaA_RBRACK_LBRACKrR_RBRACK_LBRACKgG_RBRACK_LBRACKeE_RBRACK_LBRACKtT_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKvV_RBRACK_LBRACKoO_RBRACK_LBRACKlL_RBRACK_LBRACKaA_RBRACK_LBRACKtT_RBRACK_LBRACKiI_RBRACK_LBRACKlL_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(198),
    [sym_comment] = ACTIONS(14),
  },
  [90] = {
    [sym_identifier] = ACTIONS(282),
    [sym_comment] = ACTIONS(14),
  },
  [91] = {
    [anon_sym_COMMA] = ACTIONS(264),
    [anon_sym_RPAREN] = ACTIONS(264),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(264),
    [sym_intrinsic_type] = ACTIONS(266),
    [anon_sym_COLON] = ACTIONS(264),
    [sym_end_statement] = ACTIONS(264),
    [sym_comment] = ACTIONS(14),
  },
  [92] = {
    [aux_sym_parenthesized_expression_repeat1] = STATE(125),
    [anon_sym_COMMA] = ACTIONS(220),
    [anon_sym_RPAREN] = ACTIONS(284),
    [anon_sym_COLON] = ACTIONS(224),
    [sym_comment] = ACTIONS(14),
  },
  [93] = {
    [aux_sym_parenthesized_expression_repeat1] = STATE(125),
    [anon_sym_COMMA] = ACTIONS(220),
    [anon_sym_RPAREN] = ACTIONS(284),
    [sym_comment] = ACTIONS(14),
  },
  [94] = {
    [sym__expression] = STATE(127),
    [sym_parenthesized_expression] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(286),
    [sym_number_literal] = ACTIONS(140),
    [sym_string_literal] = ACTIONS(140),
    [sym_true] = ACTIONS(142),
    [sym_false] = ACTIONS(142),
    [sym_comment] = ACTIONS(14),
  },
  [95] = {
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_COLON] = ACTIONS(290),
    [sym_comment] = ACTIONS(14),
  },
  [96] = {
    [sym__expression] = STATE(129),
    [sym_parenthesized_expression] = STATE(65),
    [sym_array_slice] = STATE(130),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_COLON] = ACTIONS(138),
    [sym_number_literal] = ACTIONS(140),
    [sym_string_literal] = ACTIONS(140),
    [sym_true] = ACTIONS(142),
    [sym_false] = ACTIONS(142),
    [sym_comment] = ACTIONS(14),
  },
  [97] = {
    [anon_sym_LF] = ACTIONS(292),
    [anon_sym_COMMA] = ACTIONS(292),
    [sym_comment] = ACTIONS(28),
  },
  [98] = {
    [sym__expression] = STATE(131),
    [sym_parenthesized_expression] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_COMMA] = ACTIONS(288),
    [anon_sym_RPAREN] = ACTIONS(288),
    [anon_sym_COLON] = ACTIONS(290),
    [sym_number_literal] = ACTIONS(140),
    [sym_string_literal] = ACTIONS(140),
    [sym_true] = ACTIONS(142),
    [sym_false] = ACTIONS(142),
    [sym_comment] = ACTIONS(14),
  },
  [99] = {
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_RPAREN] = ACTIONS(296),
    [sym_comment] = ACTIONS(14),
  },
  [100] = {
    [anon_sym_LF] = ACTIONS(298),
    [anon_sym_COMMA] = ACTIONS(298),
    [sym_comment] = ACTIONS(28),
  },
  [101] = {
    [sym_parenthesized_expression] = STATE(134),
    [anon_sym_LF] = ACTIONS(298),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(298),
    [sym_comment] = ACTIONS(28),
  },
  [102] = {
    [sym_variable_declaration] = STATE(51),
    [sym_custom_type] = STATE(49),
    [aux_sym_type_block_repeat1] = STATE(136),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(112),
    [sym_intrinsic_type] = ACTIONS(114),
    [sym_end_statement] = ACTIONS(300),
    [sym_comment] = ACTIONS(14),
  },
  [103] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(302),
    [sym_intrinsic_type] = ACTIONS(304),
    [sym_end_statement] = ACTIONS(306),
    [sym_comment] = ACTIONS(14),
  },
  [104] = {
    [sym_variable_declaration] = STATE(79),
    [sym_custom_type] = STATE(49),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(112),
    [sym_intrinsic_type] = ACTIONS(114),
    [sym_end_statement] = ACTIONS(300),
    [sym_comment] = ACTIONS(14),
  },
  [105] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(304),
    [sym_intrinsic_type] = ACTIONS(304),
    [sym_end_statement] = ACTIONS(304),
    [sym_identifier] = ACTIONS(308),
    [sym_comment] = ACTIONS(14),
  },
  [106] = {
    [sym_identifier] = ACTIONS(310),
    [sym_comment] = ACTIONS(14),
  },
  [107] = {
    [sym_parenthesized_expression] = STATE(140),
    [aux_sym_variable_declaration_repeat2] = STATE(141),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(312),
    [sym_intrinsic_type] = ACTIONS(314),
    [sym_end_statement] = ACTIONS(312),
    [sym_comment] = ACTIONS(14),
  },
  [108] = {
    [aux_sym_variable_declaration_repeat1] = STATE(143),
    [anon_sym_COMMA] = ACTIONS(130),
    [anon_sym_COLON_COLON] = ACTIONS(316),
    [sym_identifier] = ACTIONS(310),
    [sym_comment] = ACTIONS(14),
  },
  [109] = {
    [sym_identifier] = ACTIONS(318),
    [sym_comment] = ACTIONS(14),
  },
  [110] = {
    [aux_sym_variable_declaration_repeat2] = STATE(141),
    [anon_sym_COMMA] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(312),
    [sym_intrinsic_type] = ACTIONS(314),
    [sym_end_statement] = ACTIONS(312),
    [sym_comment] = ACTIONS(14),
  },
  [111] = {
    [anon_sym_COMMA] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(312),
    [sym_intrinsic_type] = ACTIONS(314),
    [sym_end_statement] = ACTIONS(312),
    [sym_comment] = ACTIONS(14),
  },
  [112] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(306),
    [sym_intrinsic_type] = ACTIONS(304),
    [sym_end_statement] = ACTIONS(306),
    [sym_comment] = ACTIONS(14),
  },
  [113] = {
    [anon_sym_LF] = ACTIONS(322),
    [anon_sym_COMMA] = ACTIONS(146),
    [sym_comment] = ACTIONS(28),
  },
  [114] = {
    [sym__expression] = STATE(146),
    [sym_parenthesized_expression] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(286),
    [anon_sym_STAR] = ACTIONS(324),
    [sym_number_literal] = ACTIONS(140),
    [sym_string_literal] = ACTIONS(140),
    [sym_true] = ACTIONS(142),
    [sym_false] = ACTIONS(142),
    [sym_comment] = ACTIONS(14),
  },
  [115] = {
    [anon_sym_COMMA] = ACTIONS(326),
    [anon_sym_COLON_COLON] = ACTIONS(326),
    [sym_identifier] = ACTIONS(328),
    [sym_comment] = ACTIONS(14),
  },
  [116] = {
    [anon_sym_COMMA] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(332),
    [sym_comment] = ACTIONS(14),
  },
  [117] = {
    [sym__expression] = STATE(149),
    [sym_parenthesized_expression] = STATE(65),
    [sym_array_slice] = STATE(130),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(324),
    [anon_sym_COLON] = ACTIONS(138),
    [sym_number_literal] = ACTIONS(140),
    [sym_string_literal] = ACTIONS(140),
    [sym_true] = ACTIONS(142),
    [sym_false] = ACTIONS(142),
    [sym_comment] = ACTIONS(14),
  },
  [118] = {
    [anon_sym_COMMA] = ACTIONS(334),
    [anon_sym_COLON_COLON] = ACTIONS(334),
    [sym_identifier] = ACTIONS(337),
    [sym_comment] = ACTIONS(14),
  },
  [119] = {
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_RPAREN] = ACTIONS(340),
    [sym_comment] = ACTIONS(14),
  },
  [120] = {
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(342),
    [anon_sym_COLON_COLON] = ACTIONS(342),
    [sym_identifier] = ACTIONS(344),
    [sym_comment] = ACTIONS(14),
  },
  [121] = {
    [aux_sym_variable_declaration_repeat2] = STATE(151),
    [anon_sym_LF] = ACTIONS(322),
    [anon_sym_COMMA] = ACTIONS(88),
    [sym_comment] = ACTIONS(28),
  },
  [122] = {
    [anon_sym_COMMA] = ACTIONS(346),
    [anon_sym_COLON_COLON] = ACTIONS(346),
    [sym_identifier] = ACTIONS(348),
    [sym_comment] = ACTIONS(14),
  },
  [123] = {
    [sym_parenthesized_expression] = STATE(152),
    [aux_sym_variable_declaration_repeat2] = STATE(151),
    [anon_sym_LF] = ACTIONS(322),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(88),
    [sym_comment] = ACTIONS(28),
  },
  [124] = {
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(342),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(342),
    [sym_intrinsic_type] = ACTIONS(344),
    [anon_sym_COLON] = ACTIONS(342),
    [sym_end_statement] = ACTIONS(342),
    [sym_comment] = ACTIONS(14),
  },
  [125] = {
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_RPAREN] = ACTIONS(350),
    [sym_comment] = ACTIONS(14),
  },
  [126] = {
    [sym__expression] = STATE(154),
    [sym_parenthesized_expression] = STATE(65),
    [sym_array_slice] = STATE(85),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(186),
    [anon_sym_COLON] = ACTIONS(138),
    [sym_number_literal] = ACTIONS(140),
    [sym_string_literal] = ACTIONS(140),
    [sym_true] = ACTIONS(142),
    [sym_false] = ACTIONS(142),
    [sym_comment] = ACTIONS(14),
  },
  [127] = {
    [anon_sym_COMMA] = ACTIONS(352),
    [anon_sym_RPAREN] = ACTIONS(352),
    [sym_comment] = ACTIONS(14),
  },
  [128] = {
    [sym__expression] = STATE(155),
    [sym_parenthesized_expression] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(286),
    [sym_number_literal] = ACTIONS(140),
    [sym_string_literal] = ACTIONS(140),
    [sym_true] = ACTIONS(142),
    [sym_false] = ACTIONS(142),
    [sym_comment] = ACTIONS(14),
  },
  [129] = {
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_RPAREN] = ACTIONS(354),
    [anon_sym_COLON] = ACTIONS(224),
    [sym_comment] = ACTIONS(14),
  },
  [130] = {
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_RPAREN] = ACTIONS(354),
    [sym_comment] = ACTIONS(14),
  },
  [131] = {
    [anon_sym_COMMA] = ACTIONS(352),
    [anon_sym_RPAREN] = ACTIONS(352),
    [anon_sym_COLON] = ACTIONS(356),
    [sym_comment] = ACTIONS(14),
  },
  [132] = {
    [sym__expression] = STATE(157),
    [sym_parenthesized_expression] = STATE(65),
    [sym_array_slice] = STATE(158),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_COLON] = ACTIONS(138),
    [sym_number_literal] = ACTIONS(140),
    [sym_string_literal] = ACTIONS(140),
    [sym_true] = ACTIONS(142),
    [sym_false] = ACTIONS(142),
    [sym_comment] = ACTIONS(14),
  },
  [133] = {
    [anon_sym_LF] = ACTIONS(358),
    [anon_sym_COMMA] = ACTIONS(358),
    [sym_comment] = ACTIONS(28),
  },
  [134] = {
    [anon_sym_LF] = ACTIONS(360),
    [anon_sym_COMMA] = ACTIONS(360),
    [sym_comment] = ACTIONS(28),
  },
  [135] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(362),
    [sym_intrinsic_type] = ACTIONS(364),
    [sym_end_statement] = ACTIONS(366),
    [sym_comment] = ACTIONS(14),
  },
  [136] = {
    [sym_variable_declaration] = STATE(79),
    [sym_custom_type] = STATE(49),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(112),
    [sym_intrinsic_type] = ACTIONS(114),
    [sym_end_statement] = ACTIONS(368),
    [sym_comment] = ACTIONS(14),
  },
  [137] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(364),
    [sym_intrinsic_type] = ACTIONS(364),
    [sym_end_statement] = ACTIONS(364),
    [sym_identifier] = ACTIONS(370),
    [sym_comment] = ACTIONS(14),
  },
  [138] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(366),
    [sym_intrinsic_type] = ACTIONS(364),
    [sym_end_statement] = ACTIONS(366),
    [sym_comment] = ACTIONS(14),
  },
  [139] = {
    [sym_parenthesized_expression] = STATE(162),
    [aux_sym_variable_declaration_repeat2] = STATE(163),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(372),
    [sym_intrinsic_type] = ACTIONS(374),
    [sym_end_statement] = ACTIONS(372),
    [sym_comment] = ACTIONS(14),
  },
  [140] = {
    [aux_sym_variable_declaration_repeat2] = STATE(163),
    [anon_sym_COMMA] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(372),
    [sym_intrinsic_type] = ACTIONS(374),
    [sym_end_statement] = ACTIONS(372),
    [sym_comment] = ACTIONS(14),
  },
  [141] = {
    [anon_sym_COMMA] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(372),
    [sym_intrinsic_type] = ACTIONS(374),
    [sym_end_statement] = ACTIONS(372),
    [sym_comment] = ACTIONS(14),
  },
  [142] = {
    [sym_identifier] = ACTIONS(376),
    [sym_comment] = ACTIONS(14),
  },
  [143] = {
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_COLON_COLON] = ACTIONS(378),
    [sym_identifier] = ACTIONS(376),
    [sym_comment] = ACTIONS(14),
  },
  [144] = {
    [sym_parenthesized_expression] = STATE(166),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(380),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(380),
    [sym_intrinsic_type] = ACTIONS(382),
    [sym_end_statement] = ACTIONS(380),
    [sym_comment] = ACTIONS(14),
  },
  [145] = {
    [sym_identifier] = ACTIONS(384),
    [sym_comment] = ACTIONS(14),
  },
  [146] = {
    [anon_sym_COMMA] = ACTIONS(386),
    [anon_sym_RPAREN] = ACTIONS(386),
    [sym_comment] = ACTIONS(14),
  },
  [147] = {
    [sym__expression] = STATE(168),
    [sym_parenthesized_expression] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(286),
    [anon_sym_STAR] = ACTIONS(388),
    [sym_number_literal] = ACTIONS(140),
    [sym_string_literal] = ACTIONS(140),
    [sym_true] = ACTIONS(142),
    [sym_false] = ACTIONS(142),
    [sym_comment] = ACTIONS(14),
  },
  [148] = {
    [anon_sym_COMMA] = ACTIONS(390),
    [anon_sym_COLON_COLON] = ACTIONS(390),
    [sym_identifier] = ACTIONS(392),
    [sym_comment] = ACTIONS(14),
  },
  [149] = {
    [anon_sym_COMMA] = ACTIONS(394),
    [anon_sym_RPAREN] = ACTIONS(394),
    [anon_sym_COLON] = ACTIONS(224),
    [sym_comment] = ACTIONS(14),
  },
  [150] = {
    [anon_sym_COMMA] = ACTIONS(397),
    [anon_sym_RPAREN] = ACTIONS(397),
    [anon_sym_COLON_COLON] = ACTIONS(397),
    [sym_identifier] = ACTIONS(399),
    [sym_comment] = ACTIONS(14),
  },
  [151] = {
    [anon_sym_LF] = ACTIONS(401),
    [anon_sym_COMMA] = ACTIONS(146),
    [sym_comment] = ACTIONS(28),
  },
  [152] = {
    [aux_sym_variable_declaration_repeat2] = STATE(169),
    [anon_sym_LF] = ACTIONS(401),
    [anon_sym_COMMA] = ACTIONS(88),
    [sym_comment] = ACTIONS(28),
  },
  [153] = {
    [anon_sym_COMMA] = ACTIONS(397),
    [anon_sym_RPAREN] = ACTIONS(397),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(397),
    [sym_intrinsic_type] = ACTIONS(399),
    [anon_sym_COLON] = ACTIONS(397),
    [sym_end_statement] = ACTIONS(397),
    [sym_comment] = ACTIONS(14),
  },
  [154] = {
    [aux_sym_parenthesized_expression_repeat1] = STATE(119),
    [anon_sym_COMMA] = ACTIONS(220),
    [anon_sym_RPAREN] = ACTIONS(276),
    [anon_sym_COLON] = ACTIONS(224),
    [sym_comment] = ACTIONS(14),
  },
  [155] = {
    [anon_sym_COMMA] = ACTIONS(403),
    [anon_sym_RPAREN] = ACTIONS(403),
    [sym_comment] = ACTIONS(14),
  },
  [156] = {
    [sym__expression] = STATE(170),
    [sym_parenthesized_expression] = STATE(65),
    [anon_sym_LPAREN] = ACTIONS(286),
    [sym_number_literal] = ACTIONS(140),
    [sym_string_literal] = ACTIONS(140),
    [sym_true] = ACTIONS(142),
    [sym_false] = ACTIONS(142),
    [sym_comment] = ACTIONS(14),
  },
  [157] = {
    [anon_sym_COMMA] = ACTIONS(405),
    [anon_sym_RPAREN] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(224),
    [sym_comment] = ACTIONS(14),
  },
  [158] = {
    [anon_sym_COMMA] = ACTIONS(405),
    [anon_sym_RPAREN] = ACTIONS(405),
    [sym_comment] = ACTIONS(14),
  },
  [159] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(407),
    [sym_intrinsic_type] = ACTIONS(407),
    [sym_end_statement] = ACTIONS(407),
    [sym_identifier] = ACTIONS(409),
    [sym_comment] = ACTIONS(14),
  },
  [160] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(411),
    [sym_intrinsic_type] = ACTIONS(407),
    [sym_end_statement] = ACTIONS(413),
    [sym_comment] = ACTIONS(14),
  },
  [161] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(413),
    [sym_intrinsic_type] = ACTIONS(407),
    [sym_end_statement] = ACTIONS(413),
    [sym_comment] = ACTIONS(14),
  },
  [162] = {
    [aux_sym_variable_declaration_repeat2] = STATE(173),
    [anon_sym_COMMA] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(415),
    [sym_intrinsic_type] = ACTIONS(417),
    [sym_end_statement] = ACTIONS(415),
    [sym_comment] = ACTIONS(14),
  },
  [163] = {
    [anon_sym_COMMA] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(415),
    [sym_intrinsic_type] = ACTIONS(417),
    [sym_end_statement] = ACTIONS(415),
    [sym_comment] = ACTIONS(14),
  },
  [164] = {
    [sym_parenthesized_expression] = STATE(174),
    [aux_sym_variable_declaration_repeat2] = STATE(173),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(415),
    [sym_intrinsic_type] = ACTIONS(417),
    [sym_end_statement] = ACTIONS(415),
    [sym_comment] = ACTIONS(14),
  },
  [165] = {
    [sym_identifier] = ACTIONS(419),
    [sym_comment] = ACTIONS(14),
  },
  [166] = {
    [anon_sym_COMMA] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(421),
    [sym_intrinsic_type] = ACTIONS(423),
    [sym_end_statement] = ACTIONS(421),
    [sym_comment] = ACTIONS(14),
  },
  [167] = {
    [sym_parenthesized_expression] = STATE(176),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(421),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(421),
    [sym_intrinsic_type] = ACTIONS(423),
    [sym_end_statement] = ACTIONS(421),
    [sym_comment] = ACTIONS(14),
  },
  [168] = {
    [anon_sym_COMMA] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(425),
    [sym_comment] = ACTIONS(14),
  },
  [169] = {
    [anon_sym_LF] = ACTIONS(427),
    [anon_sym_COMMA] = ACTIONS(146),
    [sym_comment] = ACTIONS(28),
  },
  [170] = {
    [anon_sym_COMMA] = ACTIONS(429),
    [anon_sym_RPAREN] = ACTIONS(429),
    [sym_comment] = ACTIONS(14),
  },
  [171] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(431),
    [sym_intrinsic_type] = ACTIONS(433),
    [sym_end_statement] = ACTIONS(431),
    [sym_comment] = ACTIONS(14),
  },
  [172] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(433),
    [sym_intrinsic_type] = ACTIONS(433),
    [sym_end_statement] = ACTIONS(433),
    [sym_identifier] = ACTIONS(435),
    [sym_comment] = ACTIONS(14),
  },
  [173] = {
    [anon_sym_COMMA] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(437),
    [sym_intrinsic_type] = ACTIONS(439),
    [sym_end_statement] = ACTIONS(437),
    [sym_comment] = ACTIONS(14),
  },
  [174] = {
    [aux_sym_variable_declaration_repeat2] = STATE(178),
    [anon_sym_COMMA] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(437),
    [sym_intrinsic_type] = ACTIONS(439),
    [sym_end_statement] = ACTIONS(437),
    [sym_comment] = ACTIONS(14),
  },
  [175] = {
    [sym_parenthesized_expression] = STATE(179),
    [aux_sym_variable_declaration_repeat2] = STATE(178),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(437),
    [sym_intrinsic_type] = ACTIONS(439),
    [sym_end_statement] = ACTIONS(437),
    [sym_comment] = ACTIONS(14),
  },
  [176] = {
    [anon_sym_COMMA] = ACTIONS(441),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(441),
    [sym_intrinsic_type] = ACTIONS(443),
    [sym_end_statement] = ACTIONS(441),
    [sym_comment] = ACTIONS(14),
  },
  [177] = {
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(445),
    [sym_intrinsic_type] = ACTIONS(447),
    [sym_end_statement] = ACTIONS(445),
    [sym_comment] = ACTIONS(14),
  },
  [178] = {
    [anon_sym_COMMA] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(449),
    [sym_intrinsic_type] = ACTIONS(451),
    [sym_end_statement] = ACTIONS(449),
    [sym_comment] = ACTIONS(14),
  },
  [179] = {
    [aux_sym_variable_declaration_repeat2] = STATE(180),
    [anon_sym_COMMA] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(449),
    [sym_intrinsic_type] = ACTIONS(451),
    [sym_end_statement] = ACTIONS(449),
    [sym_comment] = ACTIONS(14),
  },
  [180] = {
    [anon_sym_COMMA] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKtT_RBRACK_LBRACKyY_RBRACK_LBRACKpP_RBRACK_LBRACKeE_RBRACK_SLASH] = ACTIONS(453),
    [sym_intrinsic_type] = ACTIONS(455),
    [sym_end_statement] = ACTIONS(453),
    [sym_comment] = ACTIONS(14),
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
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_translation_unit_repeat1, 1),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__top_level_item, 1),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_translation_unit, 1),
  [26] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(9),
  [28] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_translation_unit_repeat1, 2),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 4, .fragile = true),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(23),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 1),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 1),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(24),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(25),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(28),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(29),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(30),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(33),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5, .fragile = true),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_program_block, 5, .fragile = true),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(44),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
  [110] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 1),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_qualifier, 1),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(53),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(60),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(63),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(64),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(65),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
  [146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_program_block, 6),
  [152] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 3),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 3),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_custom_type, 4),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_custom_type, 4),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(75),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(76),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_block, 4, .fragile = true),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_block, 4, .fragile = true),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_block_repeat1, 1),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_block_repeat1, 1),
  [184] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 4),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 2),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_qualifier, 2),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 2),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 1),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat2, 2),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(101),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [232] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(102),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_block, 5, .fragile = true),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_block, 5, .fragile = true),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [244] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(107),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(62),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(109),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 2),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_declaration, 2),
  [256] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(112),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_block_repeat1, 2),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_block_repeat1, 2),
  [262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 5),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 2),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 2),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(114),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(115),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(117),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(120),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_declaration_repeat1, 2),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(124),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 2),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(128),
  [292] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3, .fragile = true),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(133),
  [298] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat2, 3),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(137),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_block, 6, .fragile = true),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_block, 6, .fragile = true),
  [308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(138),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 3),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_declaration, 3),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
  [322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 6),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 4, .fragile = true),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_qualifier, 4, .fragile = true),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(147),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(148),
  [334] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3, .fragile = true), REDUCE(sym_type_qualifier, 4, .fragile = true),
  [337] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 3, .fragile = true), REDUCE(sym_type_qualifier, 4, .fragile = true),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3, .fragile = true),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 3, .fragile = true),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_declaration_repeat1, 3),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 3),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parenthesized_expression_repeat1, 2, .fragile = true),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
  [358] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 4),
  [360] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat2, 4),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_block, 7, .fragile = true),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_block, 7, .fragile = true),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(160),
  [370] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(161),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 4),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_declaration, 4),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat2, 2),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_declaration_repeat2, 2),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_qualifier_repeat1, 2, .fragile = true),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_qualifier, 5),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_qualifier, 5),
  [394] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_qualifier_repeat1, 2, .fragile = true), REDUCE(aux_sym_parenthesized_expression_repeat1, 2, .fragile = true),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 4),
  [399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 4),
  [401] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 7),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 4),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_parenthesized_expression_repeat1, 3),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_block, 8, .fragile = true),
  [409] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(171),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_block, 8, .fragile = true),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 5),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_declaration, 5),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
  [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat2, 3),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_declaration_repeat2, 3),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_qualifier_repeat1, 3),
  [427] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 8),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_array_slice, 5),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_block, 9),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_block, 9),
  [435] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(177),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 6),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_declaration, 6),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_declaration_repeat2, 4),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_declaration_repeat2, 4),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_block, 10),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_block, 10),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 7),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_declaration, 7),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_declaration, 8),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_declaration, 8),
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
