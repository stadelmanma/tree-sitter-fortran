#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 217
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH = 1,
  aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH = 2,
  sym_statement_label = 3,
  aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_EQ = 7,
  anon_sym_EQ_GT = 8,
  anon_sym_PERCENT = 9,
  aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH = 10,
  aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH = 11,
  aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH = 12,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH = 13,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 14,
  anon_sym_LT = 15,
  aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 16,
  anon_sym_GT = 17,
  aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH = 18,
  anon_sym_LT_EQ = 19,
  aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 20,
  anon_sym_GT_EQ = 21,
  aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 22,
  anon_sym_EQ_EQ = 23,
  aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH = 24,
  anon_sym_SLASH_EQ = 25,
  aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH = 26,
  anon_sym_SLASH_SLASH = 27,
  anon_sym_PLUS = 28,
  anon_sym_DASH = 29,
  anon_sym_STAR = 30,
  anon_sym_SLASH = 31,
  anon_sym_STAR_STAR = 32,
  anon_sym_COMMA = 33,
  anon_sym_COLON = 34,
  sym_number_literal = 35,
  sym__double_quoted_string = 36,
  sym__single_quoted_string = 37,
  sym_boolean_literal = 38,
  sym_identifier = 39,
  sym_comment = 40,
  sym__semicolon = 41,
  sym__newline = 42,
  sym_translation_unit = 43,
  sym_program_block = 44,
  sym_subroutine_call = 45,
  sym__expression = 46,
  sym_parenthesized_expression = 47,
  sym_assignment_expression = 48,
  sym_pointer_assignment_expression = 49,
  sym_derived_type_member_expression = 50,
  sym_logical_expression = 51,
  sym_relational_expression = 52,
  sym_concatenation_expression = 53,
  sym_math_expression = 54,
  sym_call_expression = 55,
  sym_argument_list = 56,
  sym_keyword_argument = 57,
  sym_array_slice = 58,
  sym_complex_literal = 59,
  sym_string_literal = 60,
  sym__end_of_statement = 61,
  aux_sym_translation_unit_repeat1 = 62,
  aux_sym_program_block_repeat1 = 63,
  aux_sym_argument_list_repeat1 = 64,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = "/[pP][rR][oO][gG][rR][aA][mM]/",
  [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = "/[eE][nN][dD]/",
  [sym_statement_label] = "statement_label",
  [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = "/[cC][aA][lL][lL]/",
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
  [sym_complex_literal] = "complex_literal",
  [sym_string_literal] = "string_literal",
  [sym__end_of_statement] = "_end_of_statement",
  [aux_sym_translation_unit_repeat1] = "translation_unit_repeat1",
  [aux_sym_program_block_repeat1] = "program_block_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
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
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == '*')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(14);
      if (lookahead == ',')
        ADVANCE(20);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(22);
      if (lookahead == '9')
        ADVANCE(25);
      if (lookahead == ':')
        ADVANCE(30);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(34);
      if (lookahead == '>')
        ADVANCE(37);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(41);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(46);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(52);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(55);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(57);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(0);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(43);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(40);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(45);
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
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__single_quoted_string);
      if (lookahead == '\'')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == '=')
        ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_statement_label);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(26);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number_literal);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(17);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__semicolon);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(35);
      if (lookahead == '>')
        ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_statement_label);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(25);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(29);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(26);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(26);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(29);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_statement_label);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(25);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(26);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(26);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(42);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(44);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(42);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(43);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(44);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(47);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f'))
        ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(48);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(45);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(17);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(45);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(45);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(17);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(53);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(45);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(56);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(56);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
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
        ADVANCE(45);
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
        ADVANCE(45);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 65:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(65);
      END_STATE();
    case 66:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(67);
      END_STATE();
    case 67:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(68);
      END_STATE();
    case 68:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 73:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '(')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 74:
      if (lookahead == '\n')
        ADVANCE(75);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(74);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(66);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(76);
      if (lookahead == '!')
        ADVANCE(77);
      if (lookahead == '\"')
        ADVANCE(90);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(118);
      if (lookahead == '+')
        ADVANCE(131);
      if (lookahead == '-')
        ADVANCE(132);
      if (lookahead == '.')
        ADVANCE(133);
      if (lookahead == '9')
        ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(137);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(138);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(152);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(153);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(154);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(155);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(161);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(139);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(164);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(165);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(78);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(84);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 90:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(91);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(97);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 91:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 92:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 93:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 94:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 95:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 97:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 98:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 99:
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\"')
        ADVANCE(5);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 102:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 103:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 104:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(105);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(111);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 105:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 106:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 107:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 108:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 109:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 111:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 112:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 113:
      if (lookahead == '\'')
        ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\'')
        ADVANCE(9);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 116:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 117:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(119);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(129);
      END_STATE();
    case 119:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(122);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(119);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(129);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(119);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(129);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(119);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(129);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_statement_label);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(129);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(26);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(25);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(136);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f'))
        ADVANCE(29);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(121);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(29);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(76);
      if (lookahead == '!')
        ADVANCE(77);
      if (lookahead == '\"')
        ADVANCE(90);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(118);
      if (lookahead == '+')
        ADVANCE(131);
      if (lookahead == '-')
        ADVANCE(132);
      if (lookahead == '.')
        ADVANCE(133);
      if (lookahead == '9')
        ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(137);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(138);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(139);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(152);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(153);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(154);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(155);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(157);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(158);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(161);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(162);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(163);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(164);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(165);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_statement_label);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(25);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(29);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(125);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(26);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(129);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(29);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(27);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(40);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(140);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(146);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e'))
        ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(45);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(141);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f'))
        ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(45);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(142);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(45);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
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
        ADVANCE(45);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(124);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_boolean_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(128);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
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
        ADVANCE(45);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(42);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(140);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(146);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(44);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e'))
        ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(45);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(47);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(140);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(146);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'E') ||
          ('b' <= lookahead && lookahead <= 'e'))
        ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(45);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(17);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(140);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(146);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e'))
        ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(45);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(17);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(140);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(156);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e'))
        ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(45);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(54);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(141);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(140);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(146);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'E') ||
          ('b' <= lookahead && lookahead <= 'e'))
        ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(45);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(159);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(146);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(147);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(159);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(146);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(56);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(159);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(146);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(151);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(140);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(146);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e'))
        ADVANCE(43);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_statement_label);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(25);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(125);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(26);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(129);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(26);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(40);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(159);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(146);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 166:
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(119);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(129);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(167);
      if (lookahead == '!')
        ADVANCE(77);
      if (lookahead == '\"')
        ADVANCE(90);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(118);
      if (lookahead == '+')
        ADVANCE(131);
      if (lookahead == '-')
        ADVANCE(132);
      if (lookahead == '.')
        ADVANCE(133);
      if (lookahead == '9')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(170);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(171);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(152);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(153);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(161);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(163);
      if (lookahead == 'A' ||
          lookahead == 'F' ||
          lookahead == 'a' ||
          lookahead == 'f')
        ADVANCE(139);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(154);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(174);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(165);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(129);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(26);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(26);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(167);
      if (lookahead == '!')
        ADVANCE(77);
      if (lookahead == '\"')
        ADVANCE(90);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(118);
      if (lookahead == '+')
        ADVANCE(131);
      if (lookahead == '-')
        ADVANCE(132);
      if (lookahead == '.')
        ADVANCE(133);
      if (lookahead == '9')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(170);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(171);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(139);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(152);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(153);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(157);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(158);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(161);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(162);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(163);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(154);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(174);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(165);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(169);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(172);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(29);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(125);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(26);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(129);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(29);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(27);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(169);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(172);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(29);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(26);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(26);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(29);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(169);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(26);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(26);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(169);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(135);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(125);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(26);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(129);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(26);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(173);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(175);
      if (lookahead == '!')
        ADVANCE(77);
      if (lookahead == '\"')
        ADVANCE(90);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(118);
      if (lookahead == ')')
        ADVANCE(176);
      if (lookahead == '+')
        ADVANCE(131);
      if (lookahead == ',')
        ADVANCE(177);
      if (lookahead == '-')
        ADVANCE(132);
      if (lookahead == '.')
        ADVANCE(133);
      if (lookahead == '9')
        ADVANCE(168);
      if (lookahead == ':')
        ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(179);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(171);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(152);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(161);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(163);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(139);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(174);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(165);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(119);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(129);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(119);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(129);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(119);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(125);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(129);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(175);
      if (lookahead == '!')
        ADVANCE(77);
      if (lookahead == '\"')
        ADVANCE(90);
      if (lookahead == '\'')
        ADVANCE(104);
      if (lookahead == '(')
        ADVANCE(118);
      if (lookahead == ')')
        ADVANCE(176);
      if (lookahead == '+')
        ADVANCE(131);
      if (lookahead == ',')
        ADVANCE(177);
      if (lookahead == '-')
        ADVANCE(132);
      if (lookahead == '.')
        ADVANCE(133);
      if (lookahead == '9')
        ADVANCE(168);
      if (lookahead == ':')
        ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(179);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(171);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(152);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(157);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(158);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(161);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(162);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(139);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(154);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(174);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(165);
      if (lookahead != 0)
        ADVANCE(166);
      END_STATE();
    case 180:
      if (lookahead == '\n')
        SKIP(180);
      if (lookahead == '!')
        ADVANCE(181);
      if (lookahead == '%')
        ADVANCE(210);
      if (lookahead == '(')
        ADVANCE(239);
      if (lookahead == ')')
        ADVANCE(240);
      if (lookahead == '*')
        ADVANCE(241);
      if (lookahead == '+')
        ADVANCE(242);
      if (lookahead == ',')
        ADVANCE(243);
      if (lookahead == '-')
        ADVANCE(244);
      if (lookahead == '/')
        ADVANCE(245);
      if (lookahead == ':')
        ADVANCE(246);
      if (lookahead == '<')
        ADVANCE(247);
      if (lookahead == '=')
        ADVANCE(248);
      if (lookahead == '>')
        ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(250);
      if (lookahead != 0)
        ADVANCE(264);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(182);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(186);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(191);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(196);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(201);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(190);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(189);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(192);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(197);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(206);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(225);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(236);
      END_STATE();
    case 211:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(212);
      END_STATE();
    case 212:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(213);
      END_STATE();
    case 213:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH);
      END_STATE();
    case 215:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(216);
      END_STATE();
    case 216:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(219);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      END_STATE();
    case 220:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(221);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(223);
      END_STATE();
    case 221:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 223:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(226);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(228);
      END_STATE();
    case 226:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 228:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(231);
      END_STATE();
    case 231:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(235);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(233);
      END_STATE();
    case 233:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 236:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(225);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(236);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(225);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(236);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(225);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(236);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(225);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(236);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(225);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(236);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(225);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(236);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == '=')
        ADVANCE(24);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(225);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(236);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(225);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(236);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(225);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(236);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(35);
      if (lookahead == '>')
        ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(225);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(236);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(38);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(225);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(236);
      END_STATE();
    case 250:
      if (lookahead == '\n')
        SKIP(180);
      if (lookahead == '!')
        ADVANCE(181);
      if (lookahead == '%')
        ADVANCE(210);
      if (lookahead == '(')
        ADVANCE(239);
      if (lookahead == ')')
        ADVANCE(240);
      if (lookahead == '*')
        ADVANCE(241);
      if (lookahead == '+')
        ADVANCE(242);
      if (lookahead == ',')
        ADVANCE(243);
      if (lookahead == '-')
        ADVANCE(244);
      if (lookahead == '/')
        ADVANCE(245);
      if (lookahead == ':')
        ADVANCE(246);
      if (lookahead == '<')
        ADVANCE(247);
      if (lookahead == '=')
        ADVANCE(248);
      if (lookahead == '>')
        ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(250);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(251);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(254);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(257);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(260);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(263);
      if (lookahead != 0)
        ADVANCE(264);
      END_STATE();
    case 251:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(225);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(252);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(236);
      END_STATE();
    case 252:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(213);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(231);
      END_STATE();
    case 253:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(225);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(236);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(216);
      END_STATE();
    case 254:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(255);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(225);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(236);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(223);
      END_STATE();
    case 255:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(222);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(219);
      END_STATE();
    case 257:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(258);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(225);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(236);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(228);
      END_STATE();
    case 258:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(227);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(219);
      END_STATE();
    case 260:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(261);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(225);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(236);
      END_STATE();
    case 261:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(235);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(219);
      END_STATE();
    case 263:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(225);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(236);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(237);
      END_STATE();
    case 264:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(225);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(236);
      END_STATE();
    case 265:
      if (lookahead == '\n')
        ADVANCE(75);
      if (lookahead == '!')
        ADVANCE(181);
      if (lookahead == '%')
        ADVANCE(210);
      if (lookahead == '(')
        ADVANCE(239);
      if (lookahead == '*')
        ADVANCE(241);
      if (lookahead == '+')
        ADVANCE(242);
      if (lookahead == '-')
        ADVANCE(244);
      if (lookahead == '/')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(266);
      if (lookahead == '<')
        ADVANCE(247);
      if (lookahead == '=')
        ADVANCE(248);
      if (lookahead == '>')
        ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(267);
      if (lookahead != 0)
        ADVANCE(264);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__semicolon);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(225);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(236);
      END_STATE();
    case 267:
      if (lookahead == '\n')
        ADVANCE(75);
      if (lookahead == '!')
        ADVANCE(181);
      if (lookahead == '%')
        ADVANCE(210);
      if (lookahead == '(')
        ADVANCE(239);
      if (lookahead == '*')
        ADVANCE(241);
      if (lookahead == '+')
        ADVANCE(242);
      if (lookahead == '-')
        ADVANCE(244);
      if (lookahead == '/')
        ADVANCE(245);
      if (lookahead == ';')
        ADVANCE(266);
      if (lookahead == '<')
        ADVANCE(247);
      if (lookahead == '=')
        ADVANCE(248);
      if (lookahead == '>')
        ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(267);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(251);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(254);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(257);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(260);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(263);
      if (lookahead != 0)
        ADVANCE(264);
      END_STATE();
    case 268:
      if (lookahead == '\n')
        ADVANCE(75);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(45);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(169);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(19);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(172);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(270);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(272);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(269);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(29);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(173);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(271);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(26);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(29);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(271);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(29);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(26);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(29);
      END_STATE();
    case 272:
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(273);
      END_STATE();
    case 274:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(29);
      END_STATE();
    case 275:
      if (lookahead == '\n')
        SKIP(275);
      if (lookahead == '!')
        ADVANCE(181);
      if (lookahead == '%')
        ADVANCE(210);
      if (lookahead == '(')
        ADVANCE(239);
      if (lookahead == ')')
        ADVANCE(240);
      if (lookahead == '*')
        ADVANCE(241);
      if (lookahead == '+')
        ADVANCE(242);
      if (lookahead == ',')
        ADVANCE(243);
      if (lookahead == '-')
        ADVANCE(244);
      if (lookahead == '/')
        ADVANCE(245);
      if (lookahead == ':')
        ADVANCE(246);
      if (lookahead == '<')
        ADVANCE(247);
      if (lookahead == '=')
        ADVANCE(276);
      if (lookahead == '>')
        ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(277);
      if (lookahead != 0)
        ADVANCE(264);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(35);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(211);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(215);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(225);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(230);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(236);
      END_STATE();
    case 277:
      if (lookahead == '\n')
        SKIP(275);
      if (lookahead == '!')
        ADVANCE(181);
      if (lookahead == '%')
        ADVANCE(210);
      if (lookahead == '(')
        ADVANCE(239);
      if (lookahead == ')')
        ADVANCE(240);
      if (lookahead == '*')
        ADVANCE(241);
      if (lookahead == '+')
        ADVANCE(242);
      if (lookahead == ',')
        ADVANCE(243);
      if (lookahead == '-')
        ADVANCE(244);
      if (lookahead == '/')
        ADVANCE(245);
      if (lookahead == ':')
        ADVANCE(246);
      if (lookahead == '<')
        ADVANCE(247);
      if (lookahead == '=')
        ADVANCE(276);
      if (lookahead == '>')
        ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(277);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(251);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(253);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(254);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(257);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(260);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(263);
      if (lookahead != 0)
        ADVANCE(264);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 65},
  [2] = {.lex_state = 73},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 65},
  [5] = {.lex_state = 65},
  [6] = {.lex_state = 74},
  [7] = {.lex_state = 65},
  [8] = {.lex_state = 74},
  [9] = {.lex_state = 76},
  [10] = {.lex_state = 76},
  [11] = {.lex_state = 76},
  [12] = {.lex_state = 74},
  [13] = {.lex_state = 167},
  [14] = {.lex_state = 73},
  [15] = {.lex_state = 175},
  [16] = {.lex_state = 175},
  [17] = {.lex_state = 175},
  [18] = {.lex_state = 180},
  [19] = {.lex_state = 180},
  [20] = {.lex_state = 180},
  [21] = {.lex_state = 74},
  [22] = {.lex_state = 180},
  [23] = {.lex_state = 265},
  [24] = {.lex_state = 76},
  [25] = {.lex_state = 74},
  [26] = {.lex_state = 76},
  [27] = {.lex_state = 268},
  [28] = {.lex_state = 65},
  [29] = {.lex_state = 65},
  [30] = {.lex_state = 74},
  [31] = {.lex_state = 265},
  [32] = {.lex_state = 73},
  [33] = {.lex_state = 74},
  [34] = {.lex_state = 175},
  [35] = {.lex_state = 175},
  [36] = {.lex_state = 180},
  [37] = {.lex_state = 180},
  [38] = {.lex_state = 180},
  [39] = {.lex_state = 180},
  [40] = {.lex_state = 180},
  [41] = {.lex_state = 175},
  [42] = {.lex_state = 265},
  [43] = {.lex_state = 76},
  [44] = {.lex_state = 175},
  [45] = {.lex_state = 175},
  [46] = {.lex_state = 175},
  [47] = {.lex_state = 175},
  [48] = {.lex_state = 175},
  [49] = {.lex_state = 175},
  [50] = {.lex_state = 175},
  [51] = {.lex_state = 175},
  [52] = {.lex_state = 175},
  [53] = {.lex_state = 175},
  [54] = {.lex_state = 175},
  [55] = {.lex_state = 76},
  [56] = {.lex_state = 268},
  [57] = {.lex_state = 65},
  [58] = {.lex_state = 74},
  [59] = {.lex_state = 74},
  [60] = {.lex_state = 76},
  [61] = {.lex_state = 175},
  [62] = {.lex_state = 74},
  [63] = {.lex_state = 180},
  [64] = {.lex_state = 180},
  [65] = {.lex_state = 269},
  [66] = {.lex_state = 175},
  [67] = {.lex_state = 180},
  [68] = {.lex_state = 180},
  [69] = {.lex_state = 175},
  [70] = {.lex_state = 175},
  [71] = {.lex_state = 175},
  [72] = {.lex_state = 175},
  [73] = {.lex_state = 175},
  [74] = {.lex_state = 175},
  [75] = {.lex_state = 175},
  [76] = {.lex_state = 175},
  [77] = {.lex_state = 175},
  [78] = {.lex_state = 265},
  [79] = {.lex_state = 175},
  [80] = {.lex_state = 175},
  [81] = {.lex_state = 175},
  [82] = {.lex_state = 275},
  [83] = {.lex_state = 180},
  [84] = {.lex_state = 73},
  [85] = {.lex_state = 175},
  [86] = {.lex_state = 175},
  [87] = {.lex_state = 175},
  [88] = {.lex_state = 265},
  [89] = {.lex_state = 265},
  [90] = {.lex_state = 265},
  [91] = {.lex_state = 265},
  [92] = {.lex_state = 265},
  [93] = {.lex_state = 180},
  [94] = {.lex_state = 180},
  [95] = {.lex_state = 180},
  [96] = {.lex_state = 180},
  [97] = {.lex_state = 180},
  [98] = {.lex_state = 180},
  [99] = {.lex_state = 180},
  [100] = {.lex_state = 180},
  [101] = {.lex_state = 180},
  [102] = {.lex_state = 74},
  [103] = {.lex_state = 65},
  [104] = {.lex_state = 268},
  [105] = {.lex_state = 74},
  [106] = {.lex_state = 180},
  [107] = {.lex_state = 73},
  [108] = {.lex_state = 73},
  [109] = {.lex_state = 180},
  [110] = {.lex_state = 180},
  [111] = {.lex_state = 73},
  [112] = {.lex_state = 180},
  [113] = {.lex_state = 180},
  [114] = {.lex_state = 180},
  [115] = {.lex_state = 180},
  [116] = {.lex_state = 180},
  [117] = {.lex_state = 180},
  [118] = {.lex_state = 180},
  [119] = {.lex_state = 180},
  [120] = {.lex_state = 180},
  [121] = {.lex_state = 180},
  [122] = {.lex_state = 180},
  [123] = {.lex_state = 175},
  [124] = {.lex_state = 180},
  [125] = {.lex_state = 175},
  [126] = {.lex_state = 265},
  [127] = {.lex_state = 175},
  [128] = {.lex_state = 175},
  [129] = {.lex_state = 175},
  [130] = {.lex_state = 175},
  [131] = {.lex_state = 175},
  [132] = {.lex_state = 175},
  [133] = {.lex_state = 175},
  [134] = {.lex_state = 175},
  [135] = {.lex_state = 175},
  [136] = {.lex_state = 175},
  [137] = {.lex_state = 175},
  [138] = {.lex_state = 73},
  [139] = {.lex_state = 180},
  [140] = {.lex_state = 180},
  [141] = {.lex_state = 265},
  [142] = {.lex_state = 265},
  [143] = {.lex_state = 175},
  [144] = {.lex_state = 175},
  [145] = {.lex_state = 175},
  [146] = {.lex_state = 175},
  [147] = {.lex_state = 175},
  [148] = {.lex_state = 175},
  [149] = {.lex_state = 175},
  [150] = {.lex_state = 175},
  [151] = {.lex_state = 175},
  [152] = {.lex_state = 65},
  [153] = {.lex_state = 74},
  [154] = {.lex_state = 74},
  [155] = {.lex_state = 73},
  [156] = {.lex_state = 180},
  [157] = {.lex_state = 180},
  [158] = {.lex_state = 73},
  [159] = {.lex_state = 175},
  [160] = {.lex_state = 175},
  [161] = {.lex_state = 180},
  [162] = {.lex_state = 175},
  [163] = {.lex_state = 180},
  [164] = {.lex_state = 180},
  [165] = {.lex_state = 180},
  [166] = {.lex_state = 180},
  [167] = {.lex_state = 180},
  [168] = {.lex_state = 180},
  [169] = {.lex_state = 180},
  [170] = {.lex_state = 180},
  [171] = {.lex_state = 180},
  [172] = {.lex_state = 180},
  [173] = {.lex_state = 180},
  [174] = {.lex_state = 73},
  [175] = {.lex_state = 180},
  [176] = {.lex_state = 265},
  [177] = {.lex_state = 73},
  [178] = {.lex_state = 269},
  [179] = {.lex_state = 265},
  [180] = {.lex_state = 265},
  [181] = {.lex_state = 265},
  [182] = {.lex_state = 265},
  [183] = {.lex_state = 265},
  [184] = {.lex_state = 265},
  [185] = {.lex_state = 265},
  [186] = {.lex_state = 265},
  [187] = {.lex_state = 265},
  [188] = {.lex_state = 265},
  [189] = {.lex_state = 65},
  [190] = {.lex_state = 74},
  [191] = {.lex_state = 180},
  [192] = {.lex_state = 180},
  [193] = {.lex_state = 180},
  [194] = {.lex_state = 175},
  [195] = {.lex_state = 175},
  [196] = {.lex_state = 175},
  [197] = {.lex_state = 175},
  [198] = {.lex_state = 175},
  [199] = {.lex_state = 175},
  [200] = {.lex_state = 175},
  [201] = {.lex_state = 175},
  [202] = {.lex_state = 175},
  [203] = {.lex_state = 180},
  [204] = {.lex_state = 175},
  [205] = {.lex_state = 73},
  [206] = {.lex_state = 180},
  [207] = {.lex_state = 180},
  [208] = {.lex_state = 180},
  [209] = {.lex_state = 180},
  [210] = {.lex_state = 180},
  [211] = {.lex_state = 180},
  [212] = {.lex_state = 180},
  [213] = {.lex_state = 180},
  [214] = {.lex_state = 180},
  [215] = {.lex_state = 180},
  [216] = {.lex_state = 265},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(3),
    [sym_statement_label] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(3),
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
    [sym__single_quoted_string] = ACTIONS(3),
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
    [anon_sym_LPAREN] = ACTIONS(36),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(36),
    [anon_sym_PLUS] = ACTIONS(36),
    [anon_sym_DASH] = ACTIONS(36),
    [sym_number_literal] = ACTIONS(38),
    [sym__double_quoted_string] = ACTIONS(38),
    [sym__single_quoted_string] = ACTIONS(38),
    [sym_boolean_literal] = ACTIONS(38),
    [sym_identifier] = ACTIONS(38),
    [sym_comment] = ACTIONS(34),
  },
  [10] = {
    [sym_subroutine_call] = STATE(21),
    [sym__expression] = STATE(22),
    [sym_parenthesized_expression] = STATE(18),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(23),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [aux_sym_program_block_repeat1] = STATE(24),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(40),
    [sym_statement_label] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(34),
  },
  [11] = {
    [sym_subroutine_call] = STATE(21),
    [sym__expression] = STATE(22),
    [sym_parenthesized_expression] = STATE(18),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(23),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [aux_sym_program_block_repeat1] = STATE(26),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(58),
    [sym_statement_label] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(34),
  },
  [12] = {
    [sym__end_of_statement] = STATE(29),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(62),
    [sym__newline] = ACTIONS(62),
  },
  [13] = {
    [sym_subroutine_call] = STATE(30),
    [sym__expression] = STATE(22),
    [sym_parenthesized_expression] = STATE(18),
    [sym_assignment_expression] = STATE(30),
    [sym_pointer_assignment_expression] = STATE(30),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(31),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(34),
  },
  [14] = {
    [sym_call_expression] = STATE(33),
    [sym_identifier] = ACTIONS(64),
    [sym_comment] = ACTIONS(14),
  },
  [15] = {
    [sym__expression] = STATE(38),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(66),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_number_literal] = ACTIONS(70),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [16] = {
    [sym__expression] = STATE(39),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [17] = {
    [sym__expression] = STATE(40),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [18] = {
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_EQ] = ACTIONS(74),
    [anon_sym_EQ_GT] = ACTIONS(76),
    [anon_sym_PERCENT] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_GT] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_LT_EQ] = ACTIONS(76),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_GT_EQ] = ACTIONS(76),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_EQ_EQ] = ACTIONS(76),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_SLASH_EQ] = ACTIONS(76),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_SLASH_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_STAR_STAR] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(74),
    [anon_sym_COLON] = ACTIONS(74),
    [sym_comment] = ACTIONS(34),
  },
  [19] = {
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(80),
    [anon_sym_EQ_GT] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(84),
    [anon_sym_LT] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(80),
    [anon_sym_GT] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(80),
    [anon_sym_LT_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(80),
    [anon_sym_GT_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(80),
    [anon_sym_EQ_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(80),
    [anon_sym_SLASH_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(80),
    [anon_sym_SLASH_SLASH] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [anon_sym_STAR] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(80),
    [anon_sym_STAR_STAR] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(80),
    [anon_sym_COLON] = ACTIONS(80),
    [sym_comment] = ACTIONS(34),
  },
  [20] = {
    [sym_argument_list] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(86),
    [anon_sym_EQ] = ACTIONS(74),
    [anon_sym_EQ_GT] = ACTIONS(76),
    [anon_sym_PERCENT] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_GT] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_LT_EQ] = ACTIONS(76),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_GT_EQ] = ACTIONS(76),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_EQ_EQ] = ACTIONS(76),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_SLASH_EQ] = ACTIONS(76),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_SLASH_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_STAR_STAR] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [21] = {
    [sym__end_of_statement] = STATE(43),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [22] = {
    [anon_sym_EQ] = ACTIONS(88),
    [anon_sym_EQ_GT] = ACTIONS(90),
    [anon_sym_PERCENT] = ACTIONS(92),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(100),
    [anon_sym_LT] = ACTIONS(102),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_GT] = ACTIONS(102),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_LT_EQ] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_GT_EQ] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_EQ_EQ] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_SLASH_EQ] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_SLASH_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(108),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_STAR_STAR] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [23] = {
    [sym__end_of_statement] = STATE(43),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_EQ_GT] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_EQ_EQ] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_EQ] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_SLASH] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [24] = {
    [sym_subroutine_call] = STATE(21),
    [sym__expression] = STATE(22),
    [sym_parenthesized_expression] = STATE(18),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(23),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [aux_sym_program_block_repeat1] = STATE(55),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(58),
    [sym_statement_label] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(34),
  },
  [25] = {
    [sym__end_of_statement] = STATE(57),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(114),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(62),
    [sym__newline] = ACTIONS(62),
  },
  [26] = {
    [sym_subroutine_call] = STATE(21),
    [sym__expression] = STATE(22),
    [sym_parenthesized_expression] = STATE(18),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(23),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [aux_sym_program_block_repeat1] = STATE(55),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(116),
    [sym_statement_label] = ACTIONS(42),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(44),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(56),
    [sym_comment] = ACTIONS(34),
  },
  [27] = {
    [sym__end_of_statement] = STATE(57),
    [sym_identifier] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(62),
    [sym__newline] = ACTIONS(62),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(120),
    [sym_comment] = ACTIONS(14),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(122),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(122),
    [sym_comment] = ACTIONS(14),
  },
  [30] = {
    [sym__end_of_statement] = STATE(60),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [31] = {
    [sym__end_of_statement] = STATE(60),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_EQ_GT] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_EQ_EQ] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_EQ] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_SLASH] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [32] = {
    [sym_argument_list] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(124),
    [sym_comment] = ACTIONS(14),
  },
  [33] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(126),
    [sym__newline] = ACTIONS(126),
  },
  [34] = {
    [sym__expression] = STATE(63),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(66),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [35] = {
    [sym__expression] = STATE(64),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(66),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [36] = {
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_PERCENT] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_GT] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_LT_EQ] = ACTIONS(76),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_GT_EQ] = ACTIONS(76),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_EQ_EQ] = ACTIONS(76),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_SLASH_EQ] = ACTIONS(76),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_SLASH_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_STAR_STAR] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(128),
    [sym_comment] = ACTIONS(34),
  },
  [37] = {
    [sym_argument_list] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_EQ] = ACTIONS(74),
    [anon_sym_EQ_GT] = ACTIONS(76),
    [anon_sym_PERCENT] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_GT] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_LT_EQ] = ACTIONS(76),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_GT_EQ] = ACTIONS(76),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_EQ_EQ] = ACTIONS(76),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_SLASH_EQ] = ACTIONS(76),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_SLASH_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_STAR_STAR] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(74),
    [anon_sym_COLON] = ACTIONS(74),
    [sym_comment] = ACTIONS(34),
  },
  [38] = {
    [anon_sym_RPAREN] = ACTIONS(132),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(142),
    [anon_sym_LT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_LT_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_EQ_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_SLASH_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_SLASH_SLASH] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [anon_sym_STAR] = ACTIONS(152),
    [anon_sym_SLASH] = ACTIONS(152),
    [anon_sym_STAR_STAR] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [39] = {
    [anon_sym_EQ] = ACTIONS(156),
    [anon_sym_EQ_GT] = ACTIONS(158),
    [anon_sym_PERCENT] = ACTIONS(92),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_LT] = ACTIONS(102),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_GT] = ACTIONS(102),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_LT_EQ] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_GT_EQ] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_EQ_EQ] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_SLASH_EQ] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_SLASH_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(108),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_STAR_STAR] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [40] = {
    [anon_sym_EQ] = ACTIONS(162),
    [anon_sym_EQ_GT] = ACTIONS(164),
    [anon_sym_PERCENT] = ACTIONS(92),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(166),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_STAR] = ACTIONS(162),
    [anon_sym_SLASH] = ACTIONS(162),
    [anon_sym_STAR_STAR] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [41] = {
    [sym__expression] = STATE(83),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_keyword_argument] = STATE(84),
    [sym_array_slice] = STATE(84),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [anon_sym_COLON] = ACTIONS(174),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(176),
    [sym_comment] = ACTIONS(34),
  },
  [42] = {
    [anon_sym_EQ] = ACTIONS(178),
    [anon_sym_EQ_GT] = ACTIONS(178),
    [anon_sym_PERCENT] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_GT] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_LT_EQ] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_GT_EQ] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_EQ_EQ] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_SLASH_EQ] = ACTIONS(178),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_SLASH_SLASH] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_STAR] = ACTIONS(178),
    [anon_sym_SLASH] = ACTIONS(178),
    [anon_sym_STAR_STAR] = ACTIONS(178),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(178),
    [sym__newline] = ACTIONS(178),
  },
  [43] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(180),
    [sym_statement_label] = ACTIONS(180),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(180),
    [anon_sym_LPAREN] = ACTIONS(180),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(180),
    [anon_sym_DASH] = ACTIONS(180),
    [sym_number_literal] = ACTIONS(182),
    [sym__double_quoted_string] = ACTIONS(182),
    [sym__single_quoted_string] = ACTIONS(182),
    [sym_boolean_literal] = ACTIONS(182),
    [sym_identifier] = ACTIONS(182),
    [sym_comment] = ACTIONS(34),
  },
  [44] = {
    [sym__expression] = STATE(91),
    [sym_parenthesized_expression] = STATE(88),
    [sym_derived_type_member_expression] = STATE(88),
    [sym_logical_expression] = STATE(88),
    [sym_relational_expression] = STATE(88),
    [sym_concatenation_expression] = STATE(88),
    [sym_math_expression] = STATE(88),
    [sym_call_expression] = STATE(88),
    [sym_complex_literal] = STATE(88),
    [sym_string_literal] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(190),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [45] = {
    [sym__expression] = STATE(92),
    [sym_parenthesized_expression] = STATE(88),
    [sym_derived_type_member_expression] = STATE(88),
    [sym_logical_expression] = STATE(88),
    [sym_relational_expression] = STATE(88),
    [sym_concatenation_expression] = STATE(88),
    [sym_math_expression] = STATE(88),
    [sym_call_expression] = STATE(88),
    [sym_complex_literal] = STATE(88),
    [sym_string_literal] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(190),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [46] = {
    [sym__expression] = STATE(93),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [47] = {
    [sym__expression] = STATE(94),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [48] = {
    [sym__expression] = STATE(95),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [49] = {
    [sym__expression] = STATE(96),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [50] = {
    [sym__expression] = STATE(97),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [51] = {
    [sym__expression] = STATE(98),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [52] = {
    [sym__expression] = STATE(99),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [53] = {
    [sym__expression] = STATE(100),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [54] = {
    [sym__expression] = STATE(101),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(50),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [55] = {
    [sym_subroutine_call] = STATE(21),
    [sym__expression] = STATE(22),
    [sym_parenthesized_expression] = STATE(18),
    [sym_assignment_expression] = STATE(21),
    [sym_pointer_assignment_expression] = STATE(21),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(23),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [aux_sym_program_block_repeat1] = STATE(55),
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(180),
    [sym_statement_label] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(199),
    [anon_sym_LPAREN] = ACTIONS(202),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(208),
    [anon_sym_DASH] = ACTIONS(208),
    [sym_number_literal] = ACTIONS(211),
    [sym__double_quoted_string] = ACTIONS(214),
    [sym__single_quoted_string] = ACTIONS(214),
    [sym_boolean_literal] = ACTIONS(211),
    [sym_identifier] = ACTIONS(217),
    [sym_comment] = ACTIONS(34),
  },
  [56] = {
    [sym__end_of_statement] = STATE(103),
    [sym_identifier] = ACTIONS(220),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(62),
    [sym__newline] = ACTIONS(62),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(222),
    [sym_comment] = ACTIONS(14),
  },
  [58] = {
    [sym__end_of_statement] = STATE(103),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(224),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(62),
    [sym__newline] = ACTIONS(62),
  },
  [59] = {
    [sym__end_of_statement] = STATE(103),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(62),
    [sym__newline] = ACTIONS(62),
  },
  [60] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(226),
    [sym_statement_label] = ACTIONS(226),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(226),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(226),
    [anon_sym_PLUS] = ACTIONS(226),
    [anon_sym_DASH] = ACTIONS(226),
    [sym_number_literal] = ACTIONS(228),
    [sym__double_quoted_string] = ACTIONS(228),
    [sym__single_quoted_string] = ACTIONS(228),
    [sym_boolean_literal] = ACTIONS(228),
    [sym_identifier] = ACTIONS(228),
    [sym_comment] = ACTIONS(34),
  },
  [61] = {
    [sym__expression] = STATE(106),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_keyword_argument] = STATE(107),
    [sym_array_slice] = STATE(107),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(230),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [anon_sym_COLON] = ACTIONS(174),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(176),
    [sym_comment] = ACTIONS(34),
  },
  [62] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(178),
    [sym__newline] = ACTIONS(178),
  },
  [63] = {
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_LT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_LT_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_EQ_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_SLASH_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_SLASH_SLASH] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [anon_sym_STAR] = ACTIONS(152),
    [anon_sym_SLASH] = ACTIONS(152),
    [anon_sym_STAR_STAR] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [64] = {
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(166),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_STAR] = ACTIONS(162),
    [anon_sym_SLASH] = ACTIONS(162),
    [anon_sym_STAR_STAR] = ACTIONS(164),
    [sym_comment] = ACTIONS(34),
  },
  [65] = {
    [sym_number_literal] = ACTIONS(232),
    [sym_comment] = ACTIONS(14),
  },
  [66] = {
    [sym__expression] = STATE(110),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_keyword_argument] = STATE(111),
    [sym_array_slice] = STATE(111),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(234),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [anon_sym_COLON] = ACTIONS(174),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(176),
    [sym_comment] = ACTIONS(34),
  },
  [67] = {
    [anon_sym_RPAREN] = ACTIONS(236),
    [anon_sym_EQ] = ACTIONS(236),
    [anon_sym_EQ_GT] = ACTIONS(238),
    [anon_sym_PERCENT] = ACTIONS(236),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(236),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(178),
    [anon_sym_LT] = ACTIONS(236),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(236),
    [anon_sym_GT] = ACTIONS(236),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(236),
    [anon_sym_LT_EQ] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(236),
    [anon_sym_GT_EQ] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(236),
    [anon_sym_EQ_EQ] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(236),
    [anon_sym_SLASH_EQ] = ACTIONS(238),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(236),
    [anon_sym_SLASH_SLASH] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(236),
    [anon_sym_DASH] = ACTIONS(236),
    [anon_sym_STAR] = ACTIONS(236),
    [anon_sym_SLASH] = ACTIONS(236),
    [anon_sym_STAR_STAR] = ACTIONS(238),
    [anon_sym_COMMA] = ACTIONS(236),
    [anon_sym_COLON] = ACTIONS(236),
    [sym_comment] = ACTIONS(34),
  },
  [68] = {
    [anon_sym_RPAREN] = ACTIONS(240),
    [anon_sym_EQ] = ACTIONS(240),
    [anon_sym_EQ_GT] = ACTIONS(242),
    [anon_sym_PERCENT] = ACTIONS(240),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(240),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(244),
    [anon_sym_LT] = ACTIONS(240),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_GT] = ACTIONS(240),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_LT_EQ] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_GT_EQ] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_EQ_EQ] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_SLASH_EQ] = ACTIONS(242),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(240),
    [anon_sym_SLASH_SLASH] = ACTIONS(242),
    [anon_sym_PLUS] = ACTIONS(240),
    [anon_sym_DASH] = ACTIONS(240),
    [anon_sym_STAR] = ACTIONS(240),
    [anon_sym_SLASH] = ACTIONS(240),
    [anon_sym_STAR_STAR] = ACTIONS(242),
    [anon_sym_COMMA] = ACTIONS(240),
    [anon_sym_COLON] = ACTIONS(240),
    [sym_comment] = ACTIONS(34),
  },
  [69] = {
    [sym__expression] = STATE(112),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(66),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [70] = {
    [sym__expression] = STATE(113),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(66),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [71] = {
    [sym__expression] = STATE(114),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(66),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [72] = {
    [sym__expression] = STATE(115),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(66),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [73] = {
    [sym__expression] = STATE(116),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(66),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [74] = {
    [sym__expression] = STATE(117),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(66),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [75] = {
    [sym__expression] = STATE(118),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(66),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [76] = {
    [sym__expression] = STATE(119),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(66),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [77] = {
    [sym__expression] = STATE(120),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(66),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [78] = {
    [anon_sym_EQ] = ACTIONS(246),
    [anon_sym_EQ_GT] = ACTIONS(246),
    [anon_sym_PERCENT] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_LT] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_LT_EQ] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_GT_EQ] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_EQ_EQ] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_SLASH_EQ] = ACTIONS(246),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_SLASH_SLASH] = ACTIONS(246),
    [anon_sym_PLUS] = ACTIONS(246),
    [anon_sym_DASH] = ACTIONS(246),
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_SLASH] = ACTIONS(246),
    [anon_sym_STAR_STAR] = ACTIONS(246),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(246),
    [sym__newline] = ACTIONS(246),
  },
  [79] = {
    [sym__expression] = STATE(121),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [80] = {
    [sym__expression] = STATE(122),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [81] = {
    [sym__expression] = STATE(124),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(248),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [anon_sym_COMMA] = ACTIONS(248),
    [anon_sym_COLON] = ACTIONS(250),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [82] = {
    [sym_argument_list] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_EQ] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_GT] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_LT_EQ] = ACTIONS(76),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_GT_EQ] = ACTIONS(76),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_EQ_EQ] = ACTIONS(76),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_SLASH_EQ] = ACTIONS(76),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_SLASH_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_STAR_STAR] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(74),
    [anon_sym_COLON] = ACTIONS(74),
    [sym_comment] = ACTIONS(34),
  },
  [83] = {
    [aux_sym_argument_list_repeat1] = STATE(138),
    [anon_sym_RPAREN] = ACTIONS(254),
    [anon_sym_PERCENT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(262),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_LT] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_LT_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_GT_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_EQ_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_SLASH_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_SLASH_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(278),
    [anon_sym_COLON] = ACTIONS(280),
    [sym_comment] = ACTIONS(34),
  },
  [84] = {
    [aux_sym_argument_list_repeat1] = STATE(138),
    [anon_sym_RPAREN] = ACTIONS(282),
    [anon_sym_COMMA] = ACTIONS(284),
    [sym_comment] = ACTIONS(14),
  },
  [85] = {
    [sym__expression] = STATE(140),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(66),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [sym_number_literal] = ACTIONS(286),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [86] = {
    [sym__expression] = STATE(141),
    [sym_parenthesized_expression] = STATE(88),
    [sym_derived_type_member_expression] = STATE(88),
    [sym_logical_expression] = STATE(88),
    [sym_relational_expression] = STATE(88),
    [sym_concatenation_expression] = STATE(88),
    [sym_math_expression] = STATE(88),
    [sym_call_expression] = STATE(88),
    [sym_complex_literal] = STATE(88),
    [sym_string_literal] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(190),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [87] = {
    [sym__expression] = STATE(142),
    [sym_parenthesized_expression] = STATE(88),
    [sym_derived_type_member_expression] = STATE(88),
    [sym_logical_expression] = STATE(88),
    [sym_relational_expression] = STATE(88),
    [sym_concatenation_expression] = STATE(88),
    [sym_math_expression] = STATE(88),
    [sym_call_expression] = STATE(88),
    [sym_complex_literal] = STATE(88),
    [sym_string_literal] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(190),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [88] = {
    [anon_sym_PERCENT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_EQ_EQ] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_EQ] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_SLASH] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [89] = {
    [anon_sym_PERCENT] = ACTIONS(84),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(84),
    [anon_sym_LT] = ACTIONS(84),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(84),
    [anon_sym_GT] = ACTIONS(84),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(84),
    [anon_sym_LT_EQ] = ACTIONS(84),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(84),
    [anon_sym_GT_EQ] = ACTIONS(84),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(84),
    [anon_sym_EQ_EQ] = ACTIONS(84),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(84),
    [anon_sym_SLASH_EQ] = ACTIONS(84),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(84),
    [anon_sym_SLASH_SLASH] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_STAR] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(84),
    [anon_sym_STAR_STAR] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(84),
    [sym__newline] = ACTIONS(84),
  },
  [90] = {
    [sym_argument_list] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(288),
    [anon_sym_PERCENT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_EQ_EQ] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_EQ] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_SLASH] = ACTIONS(78),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
  },
  [91] = {
    [anon_sym_PERCENT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_LT_EQ] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_GT_EQ] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_EQ_EQ] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_SLASH_EQ] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_SLASH_SLASH] = ACTIONS(300),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_STAR_STAR] = ACTIONS(306),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(308),
    [sym__newline] = ACTIONS(308),
  },
  [92] = {
    [anon_sym_PERCENT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_LT_EQ] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_GT_EQ] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_EQ_EQ] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_SLASH_EQ] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_SLASH_SLASH] = ACTIONS(300),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_STAR_STAR] = ACTIONS(306),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(310),
    [sym__newline] = ACTIONS(310),
  },
  [93] = {
    [anon_sym_EQ] = ACTIONS(312),
    [anon_sym_EQ_GT] = ACTIONS(314),
    [anon_sym_PERCENT] = ACTIONS(92),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(316),
    [anon_sym_LT] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_GT] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_LT_EQ] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_GT_EQ] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_EQ_EQ] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_SLASH_EQ] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_SLASH_SLASH] = ACTIONS(314),
    [anon_sym_PLUS] = ACTIONS(312),
    [anon_sym_DASH] = ACTIONS(312),
    [anon_sym_STAR] = ACTIONS(312),
    [anon_sym_SLASH] = ACTIONS(312),
    [anon_sym_STAR_STAR] = ACTIONS(314),
    [sym_comment] = ACTIONS(34),
  },
  [94] = {
    [anon_sym_EQ] = ACTIONS(318),
    [anon_sym_EQ_GT] = ACTIONS(320),
    [anon_sym_PERCENT] = ACTIONS(92),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(102),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_GT] = ACTIONS(102),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_LT_EQ] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_GT_EQ] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_EQ_EQ] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_SLASH_EQ] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_SLASH_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(108),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_STAR_STAR] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [95] = {
    [anon_sym_EQ] = ACTIONS(318),
    [anon_sym_EQ_GT] = ACTIONS(320),
    [anon_sym_PERCENT] = ACTIONS(92),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(102),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_GT] = ACTIONS(102),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_LT_EQ] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_GT_EQ] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_EQ_EQ] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_SLASH_EQ] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_SLASH_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(108),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_STAR_STAR] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [96] = {
    [anon_sym_EQ] = ACTIONS(318),
    [anon_sym_EQ_GT] = ACTIONS(320),
    [anon_sym_PERCENT] = ACTIONS(92),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(102),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_GT] = ACTIONS(102),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_LT_EQ] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_GT_EQ] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_EQ_EQ] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_SLASH_EQ] = ACTIONS(104),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(102),
    [anon_sym_SLASH_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(108),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_STAR_STAR] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [97] = {
    [anon_sym_EQ] = ACTIONS(324),
    [anon_sym_EQ_GT] = ACTIONS(326),
    [anon_sym_PERCENT] = ACTIONS(92),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_LT] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(324),
    [anon_sym_GT] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(324),
    [anon_sym_LT_EQ] = ACTIONS(326),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(324),
    [anon_sym_GT_EQ] = ACTIONS(326),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(324),
    [anon_sym_EQ_EQ] = ACTIONS(326),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(324),
    [anon_sym_SLASH_EQ] = ACTIONS(326),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(324),
    [anon_sym_SLASH_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(108),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_STAR_STAR] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [98] = {
    [anon_sym_EQ] = ACTIONS(330),
    [anon_sym_EQ_GT] = ACTIONS(332),
    [anon_sym_PERCENT] = ACTIONS(92),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(334),
    [anon_sym_LT] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(330),
    [anon_sym_GT] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(330),
    [anon_sym_LT_EQ] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(330),
    [anon_sym_GT_EQ] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(330),
    [anon_sym_EQ_EQ] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(330),
    [anon_sym_SLASH_EQ] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(330),
    [anon_sym_SLASH_SLASH] = ACTIONS(106),
    [anon_sym_PLUS] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(108),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_STAR_STAR] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [99] = {
    [anon_sym_EQ] = ACTIONS(336),
    [anon_sym_EQ_GT] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(92),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_STAR_STAR] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [100] = {
    [anon_sym_EQ] = ACTIONS(336),
    [anon_sym_EQ_GT] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(92),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_STAR_STAR] = ACTIONS(112),
    [sym_comment] = ACTIONS(34),
  },
  [101] = {
    [anon_sym_EQ] = ACTIONS(336),
    [anon_sym_EQ_GT] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(92),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_STAR_STAR] = ACTIONS(338),
    [sym_comment] = ACTIONS(34),
  },
  [102] = {
    [sym__end_of_statement] = STATE(152),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(62),
    [sym__newline] = ACTIONS(62),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(342),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(342),
    [sym_comment] = ACTIONS(14),
  },
  [104] = {
    [sym__end_of_statement] = STATE(152),
    [sym_identifier] = ACTIONS(344),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(62),
    [sym__newline] = ACTIONS(62),
  },
  [105] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(246),
    [sym__newline] = ACTIONS(246),
  },
  [106] = {
    [aux_sym_argument_list_repeat1] = STATE(155),
    [anon_sym_RPAREN] = ACTIONS(346),
    [anon_sym_PERCENT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(262),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_LT] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_LT_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_GT_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_EQ_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_SLASH_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_SLASH_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(278),
    [anon_sym_COLON] = ACTIONS(280),
    [sym_comment] = ACTIONS(34),
  },
  [107] = {
    [aux_sym_argument_list_repeat1] = STATE(155),
    [anon_sym_RPAREN] = ACTIONS(348),
    [anon_sym_COMMA] = ACTIONS(284),
    [sym_comment] = ACTIONS(14),
  },
  [108] = {
    [anon_sym_RPAREN] = ACTIONS(350),
    [sym_comment] = ACTIONS(14),
  },
  [109] = {
    [anon_sym_RPAREN] = ACTIONS(352),
    [anon_sym_EQ] = ACTIONS(352),
    [anon_sym_EQ_GT] = ACTIONS(354),
    [anon_sym_PERCENT] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(246),
    [anon_sym_LT] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(352),
    [anon_sym_GT] = ACTIONS(352),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(352),
    [anon_sym_LT_EQ] = ACTIONS(354),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(352),
    [anon_sym_GT_EQ] = ACTIONS(354),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(352),
    [anon_sym_EQ_EQ] = ACTIONS(354),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(352),
    [anon_sym_SLASH_EQ] = ACTIONS(354),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(352),
    [anon_sym_SLASH_SLASH] = ACTIONS(354),
    [anon_sym_PLUS] = ACTIONS(352),
    [anon_sym_DASH] = ACTIONS(352),
    [anon_sym_STAR] = ACTIONS(352),
    [anon_sym_SLASH] = ACTIONS(352),
    [anon_sym_STAR_STAR] = ACTIONS(354),
    [anon_sym_COMMA] = ACTIONS(352),
    [anon_sym_COLON] = ACTIONS(352),
    [sym_comment] = ACTIONS(34),
  },
  [110] = {
    [aux_sym_argument_list_repeat1] = STATE(158),
    [anon_sym_RPAREN] = ACTIONS(356),
    [anon_sym_PERCENT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(262),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_LT] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_LT_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_GT_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_EQ_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_SLASH_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_SLASH_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(278),
    [anon_sym_COLON] = ACTIONS(280),
    [sym_comment] = ACTIONS(34),
  },
  [111] = {
    [aux_sym_argument_list_repeat1] = STATE(158),
    [anon_sym_RPAREN] = ACTIONS(358),
    [anon_sym_COMMA] = ACTIONS(284),
    [sym_comment] = ACTIONS(14),
  },
  [112] = {
    [anon_sym_RPAREN] = ACTIONS(312),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(316),
    [anon_sym_LT] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_GT] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_LT_EQ] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_GT_EQ] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_EQ_EQ] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_SLASH_EQ] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_SLASH_SLASH] = ACTIONS(314),
    [anon_sym_PLUS] = ACTIONS(312),
    [anon_sym_DASH] = ACTIONS(312),
    [anon_sym_STAR] = ACTIONS(312),
    [anon_sym_SLASH] = ACTIONS(312),
    [anon_sym_STAR_STAR] = ACTIONS(314),
    [sym_comment] = ACTIONS(34),
  },
  [113] = {
    [anon_sym_RPAREN] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_LT_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_EQ_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_SLASH_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_SLASH_SLASH] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [anon_sym_STAR] = ACTIONS(152),
    [anon_sym_SLASH] = ACTIONS(152),
    [anon_sym_STAR_STAR] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [114] = {
    [anon_sym_RPAREN] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_LT_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_EQ_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_SLASH_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_SLASH_SLASH] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [anon_sym_STAR] = ACTIONS(152),
    [anon_sym_SLASH] = ACTIONS(152),
    [anon_sym_STAR_STAR] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [115] = {
    [anon_sym_RPAREN] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_LT_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_EQ_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_SLASH_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_SLASH_SLASH] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [anon_sym_STAR] = ACTIONS(152),
    [anon_sym_SLASH] = ACTIONS(152),
    [anon_sym_STAR_STAR] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [116] = {
    [anon_sym_RPAREN] = ACTIONS(324),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_LT] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(324),
    [anon_sym_GT] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(324),
    [anon_sym_LT_EQ] = ACTIONS(326),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(324),
    [anon_sym_GT_EQ] = ACTIONS(326),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(324),
    [anon_sym_EQ_EQ] = ACTIONS(326),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(324),
    [anon_sym_SLASH_EQ] = ACTIONS(326),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(324),
    [anon_sym_SLASH_SLASH] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [anon_sym_STAR] = ACTIONS(152),
    [anon_sym_SLASH] = ACTIONS(152),
    [anon_sym_STAR_STAR] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [117] = {
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(334),
    [anon_sym_LT] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(330),
    [anon_sym_GT] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(330),
    [anon_sym_LT_EQ] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(330),
    [anon_sym_GT_EQ] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(330),
    [anon_sym_EQ_EQ] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(330),
    [anon_sym_SLASH_EQ] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(330),
    [anon_sym_SLASH_SLASH] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [anon_sym_STAR] = ACTIONS(152),
    [anon_sym_SLASH] = ACTIONS(152),
    [anon_sym_STAR_STAR] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [118] = {
    [anon_sym_RPAREN] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(152),
    [anon_sym_SLASH] = ACTIONS(152),
    [anon_sym_STAR_STAR] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [119] = {
    [anon_sym_RPAREN] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_STAR_STAR] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [120] = {
    [anon_sym_RPAREN] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_STAR_STAR] = ACTIONS(338),
    [sym_comment] = ACTIONS(34),
  },
  [121] = {
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_PERCENT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_LT] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_LT_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_GT_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_EQ_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_SLASH_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_SLASH_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_COLON] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [122] = {
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_PERCENT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(166),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_STAR] = ACTIONS(162),
    [anon_sym_SLASH] = ACTIONS(162),
    [anon_sym_STAR_STAR] = ACTIONS(164),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_COLON] = ACTIONS(162),
    [sym_comment] = ACTIONS(34),
  },
  [123] = {
    [sym__expression] = STATE(161),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [124] = {
    [anon_sym_RPAREN] = ACTIONS(364),
    [anon_sym_PERCENT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(262),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_LT] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_LT_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_GT_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_EQ_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_SLASH_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_SLASH_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_COLON] = ACTIONS(366),
    [sym_comment] = ACTIONS(34),
  },
  [125] = {
    [sym__expression] = STATE(163),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [126] = {
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
    [anon_sym_STAR] = ACTIONS(368),
    [anon_sym_SLASH] = ACTIONS(368),
    [anon_sym_STAR_STAR] = ACTIONS(368),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(368),
    [sym__newline] = ACTIONS(368),
  },
  [127] = {
    [sym__expression] = STATE(164),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [128] = {
    [sym__expression] = STATE(165),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [129] = {
    [sym__expression] = STATE(166),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [130] = {
    [sym__expression] = STATE(167),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [131] = {
    [sym__expression] = STATE(168),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [132] = {
    [sym__expression] = STATE(169),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [133] = {
    [sym__expression] = STATE(170),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [134] = {
    [sym__expression] = STATE(171),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [135] = {
    [sym__expression] = STATE(172),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [136] = {
    [sym__expression] = STATE(173),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_keyword_argument] = STATE(174),
    [sym_array_slice] = STATE(174),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [anon_sym_COLON] = ACTIONS(174),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(176),
    [sym_comment] = ACTIONS(34),
  },
  [137] = {
    [sym__expression] = STATE(175),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(364),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [anon_sym_COMMA] = ACTIONS(364),
    [anon_sym_COLON] = ACTIONS(366),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [138] = {
    [aux_sym_argument_list_repeat1] = STATE(177),
    [anon_sym_RPAREN] = ACTIONS(370),
    [anon_sym_COMMA] = ACTIONS(284),
    [sym_comment] = ACTIONS(14),
  },
  [139] = {
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_PERCENT] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_GT] = ACTIONS(74),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_LT_EQ] = ACTIONS(76),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_GT_EQ] = ACTIONS(76),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_EQ_EQ] = ACTIONS(76),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_SLASH_EQ] = ACTIONS(76),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(74),
    [anon_sym_SLASH_SLASH] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(74),
    [anon_sym_DASH] = ACTIONS(74),
    [anon_sym_STAR] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_STAR_STAR] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(372),
    [sym_comment] = ACTIONS(34),
  },
  [140] = {
    [anon_sym_RPAREN] = ACTIONS(374),
    [anon_sym_PERCENT] = ACTIONS(134),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(142),
    [anon_sym_LT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(144),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_LT_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_GT_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_EQ_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_SLASH_EQ] = ACTIONS(146),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(144),
    [anon_sym_SLASH_SLASH] = ACTIONS(148),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [anon_sym_STAR] = ACTIONS(152),
    [anon_sym_SLASH] = ACTIONS(152),
    [anon_sym_STAR_STAR] = ACTIONS(154),
    [sym_comment] = ACTIONS(34),
  },
  [141] = {
    [anon_sym_PERCENT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(160),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_LT] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_LT_EQ] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_GT_EQ] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_EQ_EQ] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_SLASH_EQ] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_SLASH_SLASH] = ACTIONS(300),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_STAR_STAR] = ACTIONS(306),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(160),
    [sym__newline] = ACTIONS(160),
  },
  [142] = {
    [anon_sym_PERCENT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_LT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_GT] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_LT_EQ] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_GT_EQ] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_EQ_EQ] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_SLASH_EQ] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(166),
    [anon_sym_SLASH_SLASH] = ACTIONS(166),
    [anon_sym_PLUS] = ACTIONS(166),
    [anon_sym_DASH] = ACTIONS(166),
    [anon_sym_STAR] = ACTIONS(166),
    [anon_sym_SLASH] = ACTIONS(166),
    [anon_sym_STAR_STAR] = ACTIONS(166),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(166),
    [sym__newline] = ACTIONS(166),
  },
  [143] = {
    [sym__expression] = STATE(180),
    [sym_parenthesized_expression] = STATE(88),
    [sym_derived_type_member_expression] = STATE(88),
    [sym_logical_expression] = STATE(88),
    [sym_relational_expression] = STATE(88),
    [sym_concatenation_expression] = STATE(88),
    [sym_math_expression] = STATE(88),
    [sym_call_expression] = STATE(88),
    [sym_complex_literal] = STATE(88),
    [sym_string_literal] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(190),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [144] = {
    [sym__expression] = STATE(181),
    [sym_parenthesized_expression] = STATE(88),
    [sym_derived_type_member_expression] = STATE(88),
    [sym_logical_expression] = STATE(88),
    [sym_relational_expression] = STATE(88),
    [sym_concatenation_expression] = STATE(88),
    [sym_math_expression] = STATE(88),
    [sym_call_expression] = STATE(88),
    [sym_complex_literal] = STATE(88),
    [sym_string_literal] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(190),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [145] = {
    [sym__expression] = STATE(182),
    [sym_parenthesized_expression] = STATE(88),
    [sym_derived_type_member_expression] = STATE(88),
    [sym_logical_expression] = STATE(88),
    [sym_relational_expression] = STATE(88),
    [sym_concatenation_expression] = STATE(88),
    [sym_math_expression] = STATE(88),
    [sym_call_expression] = STATE(88),
    [sym_complex_literal] = STATE(88),
    [sym_string_literal] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(190),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [146] = {
    [sym__expression] = STATE(183),
    [sym_parenthesized_expression] = STATE(88),
    [sym_derived_type_member_expression] = STATE(88),
    [sym_logical_expression] = STATE(88),
    [sym_relational_expression] = STATE(88),
    [sym_concatenation_expression] = STATE(88),
    [sym_math_expression] = STATE(88),
    [sym_call_expression] = STATE(88),
    [sym_complex_literal] = STATE(88),
    [sym_string_literal] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(190),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [147] = {
    [sym__expression] = STATE(184),
    [sym_parenthesized_expression] = STATE(88),
    [sym_derived_type_member_expression] = STATE(88),
    [sym_logical_expression] = STATE(88),
    [sym_relational_expression] = STATE(88),
    [sym_concatenation_expression] = STATE(88),
    [sym_math_expression] = STATE(88),
    [sym_call_expression] = STATE(88),
    [sym_complex_literal] = STATE(88),
    [sym_string_literal] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(190),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [148] = {
    [sym__expression] = STATE(185),
    [sym_parenthesized_expression] = STATE(88),
    [sym_derived_type_member_expression] = STATE(88),
    [sym_logical_expression] = STATE(88),
    [sym_relational_expression] = STATE(88),
    [sym_concatenation_expression] = STATE(88),
    [sym_math_expression] = STATE(88),
    [sym_call_expression] = STATE(88),
    [sym_complex_literal] = STATE(88),
    [sym_string_literal] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(190),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [149] = {
    [sym__expression] = STATE(186),
    [sym_parenthesized_expression] = STATE(88),
    [sym_derived_type_member_expression] = STATE(88),
    [sym_logical_expression] = STATE(88),
    [sym_relational_expression] = STATE(88),
    [sym_concatenation_expression] = STATE(88),
    [sym_math_expression] = STATE(88),
    [sym_call_expression] = STATE(88),
    [sym_complex_literal] = STATE(88),
    [sym_string_literal] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(190),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [150] = {
    [sym__expression] = STATE(187),
    [sym_parenthesized_expression] = STATE(88),
    [sym_derived_type_member_expression] = STATE(88),
    [sym_logical_expression] = STATE(88),
    [sym_relational_expression] = STATE(88),
    [sym_concatenation_expression] = STATE(88),
    [sym_math_expression] = STATE(88),
    [sym_call_expression] = STATE(88),
    [sym_complex_literal] = STATE(88),
    [sym_string_literal] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(190),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [151] = {
    [sym__expression] = STATE(188),
    [sym_parenthesized_expression] = STATE(88),
    [sym_derived_type_member_expression] = STATE(88),
    [sym_logical_expression] = STATE(88),
    [sym_relational_expression] = STATE(88),
    [sym_concatenation_expression] = STATE(88),
    [sym_math_expression] = STATE(88),
    [sym_call_expression] = STATE(88),
    [sym_complex_literal] = STATE(88),
    [sym_string_literal] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(184),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(186),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_DASH] = ACTIONS(188),
    [sym_number_literal] = ACTIONS(190),
    [sym__double_quoted_string] = ACTIONS(192),
    [sym__single_quoted_string] = ACTIONS(192),
    [sym_boolean_literal] = ACTIONS(190),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(34),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(376),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(376),
    [sym_comment] = ACTIONS(14),
  },
  [153] = {
    [sym__end_of_statement] = STATE(189),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(62),
    [sym__newline] = ACTIONS(62),
  },
  [154] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(368),
    [sym__newline] = ACTIONS(368),
  },
  [155] = {
    [aux_sym_argument_list_repeat1] = STATE(177),
    [anon_sym_RPAREN] = ACTIONS(378),
    [anon_sym_COMMA] = ACTIONS(284),
    [sym_comment] = ACTIONS(14),
  },
  [156] = {
    [anon_sym_RPAREN] = ACTIONS(380),
    [anon_sym_EQ] = ACTIONS(380),
    [anon_sym_EQ_GT] = ACTIONS(382),
    [anon_sym_PERCENT] = ACTIONS(380),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(380),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(380),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(380),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(384),
    [anon_sym_LT] = ACTIONS(380),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(380),
    [anon_sym_GT] = ACTIONS(380),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(380),
    [anon_sym_LT_EQ] = ACTIONS(382),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(380),
    [anon_sym_GT_EQ] = ACTIONS(382),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(380),
    [anon_sym_EQ_EQ] = ACTIONS(382),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(380),
    [anon_sym_SLASH_EQ] = ACTIONS(382),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(380),
    [anon_sym_SLASH_SLASH] = ACTIONS(382),
    [anon_sym_PLUS] = ACTIONS(380),
    [anon_sym_DASH] = ACTIONS(380),
    [anon_sym_STAR] = ACTIONS(380),
    [anon_sym_SLASH] = ACTIONS(380),
    [anon_sym_STAR_STAR] = ACTIONS(382),
    [anon_sym_COMMA] = ACTIONS(380),
    [anon_sym_COLON] = ACTIONS(380),
    [sym_comment] = ACTIONS(34),
  },
  [157] = {
    [anon_sym_RPAREN] = ACTIONS(386),
    [anon_sym_EQ] = ACTIONS(386),
    [anon_sym_EQ_GT] = ACTIONS(388),
    [anon_sym_PERCENT] = ACTIONS(386),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(368),
    [anon_sym_LT] = ACTIONS(386),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(386),
    [anon_sym_GT] = ACTIONS(386),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(386),
    [anon_sym_LT_EQ] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(386),
    [anon_sym_GT_EQ] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(386),
    [anon_sym_EQ_EQ] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(386),
    [anon_sym_SLASH_EQ] = ACTIONS(388),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(386),
    [anon_sym_SLASH_SLASH] = ACTIONS(388),
    [anon_sym_PLUS] = ACTIONS(386),
    [anon_sym_DASH] = ACTIONS(386),
    [anon_sym_STAR] = ACTIONS(386),
    [anon_sym_SLASH] = ACTIONS(386),
    [anon_sym_STAR_STAR] = ACTIONS(388),
    [anon_sym_COMMA] = ACTIONS(386),
    [anon_sym_COLON] = ACTIONS(386),
    [sym_comment] = ACTIONS(34),
  },
  [158] = {
    [aux_sym_argument_list_repeat1] = STATE(177),
    [anon_sym_RPAREN] = ACTIONS(390),
    [anon_sym_COMMA] = ACTIONS(284),
    [sym_comment] = ACTIONS(14),
  },
  [159] = {
    [sym__expression] = STATE(192),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [160] = {
    [sym__expression] = STATE(193),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [161] = {
    [anon_sym_RPAREN] = ACTIONS(392),
    [anon_sym_PERCENT] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(400),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(402),
    [anon_sym_LT] = ACTIONS(404),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_GT] = ACTIONS(404),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_LT_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_GT_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_EQ_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_SLASH_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_SLASH_SLASH] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(392),
    [sym_comment] = ACTIONS(34),
  },
  [162] = {
    [sym__expression] = STATE(203),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [163] = {
    [anon_sym_RPAREN] = ACTIONS(416),
    [anon_sym_PERCENT] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(400),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(402),
    [anon_sym_LT] = ACTIONS(404),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_GT] = ACTIONS(404),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_LT_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_GT_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_EQ_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_SLASH_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_SLASH_SLASH] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(416),
    [sym_comment] = ACTIONS(34),
  },
  [164] = {
    [anon_sym_RPAREN] = ACTIONS(312),
    [anon_sym_PERCENT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(316),
    [anon_sym_LT] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_GT] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_LT_EQ] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_GT_EQ] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_EQ_EQ] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_SLASH_EQ] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_SLASH_SLASH] = ACTIONS(314),
    [anon_sym_PLUS] = ACTIONS(312),
    [anon_sym_DASH] = ACTIONS(312),
    [anon_sym_STAR] = ACTIONS(312),
    [anon_sym_SLASH] = ACTIONS(312),
    [anon_sym_STAR_STAR] = ACTIONS(314),
    [anon_sym_COMMA] = ACTIONS(312),
    [anon_sym_COLON] = ACTIONS(312),
    [sym_comment] = ACTIONS(34),
  },
  [165] = {
    [anon_sym_RPAREN] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_LT_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_GT_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_EQ_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_SLASH_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_SLASH_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(318),
    [anon_sym_COLON] = ACTIONS(318),
    [sym_comment] = ACTIONS(34),
  },
  [166] = {
    [anon_sym_RPAREN] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_LT_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_GT_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_EQ_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_SLASH_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_SLASH_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(318),
    [anon_sym_COLON] = ACTIONS(318),
    [sym_comment] = ACTIONS(34),
  },
  [167] = {
    [anon_sym_RPAREN] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_LT_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_GT_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_EQ_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_SLASH_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_SLASH_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(318),
    [anon_sym_COLON] = ACTIONS(318),
    [sym_comment] = ACTIONS(34),
  },
  [168] = {
    [anon_sym_RPAREN] = ACTIONS(324),
    [anon_sym_PERCENT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_LT] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(324),
    [anon_sym_GT] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(324),
    [anon_sym_LT_EQ] = ACTIONS(326),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(324),
    [anon_sym_GT_EQ] = ACTIONS(326),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(324),
    [anon_sym_EQ_EQ] = ACTIONS(326),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(324),
    [anon_sym_SLASH_EQ] = ACTIONS(326),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(324),
    [anon_sym_SLASH_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(324),
    [anon_sym_COLON] = ACTIONS(324),
    [sym_comment] = ACTIONS(34),
  },
  [169] = {
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_PERCENT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(334),
    [anon_sym_LT] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(330),
    [anon_sym_GT] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(330),
    [anon_sym_LT_EQ] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(330),
    [anon_sym_GT_EQ] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(330),
    [anon_sym_EQ_EQ] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(330),
    [anon_sym_SLASH_EQ] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(330),
    [anon_sym_SLASH_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(330),
    [anon_sym_COLON] = ACTIONS(330),
    [sym_comment] = ACTIONS(34),
  },
  [170] = {
    [anon_sym_RPAREN] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(336),
    [anon_sym_COLON] = ACTIONS(336),
    [sym_comment] = ACTIONS(34),
  },
  [171] = {
    [anon_sym_RPAREN] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_STAR_STAR] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(336),
    [anon_sym_COLON] = ACTIONS(336),
    [sym_comment] = ACTIONS(34),
  },
  [172] = {
    [anon_sym_RPAREN] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_STAR_STAR] = ACTIONS(338),
    [anon_sym_COMMA] = ACTIONS(336),
    [anon_sym_COLON] = ACTIONS(336),
    [sym_comment] = ACTIONS(34),
  },
  [173] = {
    [anon_sym_RPAREN] = ACTIONS(418),
    [anon_sym_PERCENT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(262),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_LT] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_LT_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_GT_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_EQ_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_SLASH_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_SLASH_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_COLON] = ACTIONS(280),
    [sym_comment] = ACTIONS(34),
  },
  [174] = {
    [anon_sym_RPAREN] = ACTIONS(420),
    [anon_sym_COMMA] = ACTIONS(420),
    [sym_comment] = ACTIONS(14),
  },
  [175] = {
    [anon_sym_RPAREN] = ACTIONS(392),
    [anon_sym_PERCENT] = ACTIONS(256),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(258),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(262),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(264),
    [anon_sym_LT] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_GT] = ACTIONS(266),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_LT_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_GT_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_EQ_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_SLASH_EQ] = ACTIONS(268),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(266),
    [anon_sym_SLASH_SLASH] = ACTIONS(270),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [anon_sym_STAR] = ACTIONS(274),
    [anon_sym_SLASH] = ACTIONS(274),
    [anon_sym_STAR_STAR] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(392),
    [anon_sym_COLON] = ACTIONS(422),
    [sym_comment] = ACTIONS(34),
  },
  [176] = {
    [anon_sym_EQ] = ACTIONS(424),
    [anon_sym_EQ_GT] = ACTIONS(424),
    [anon_sym_PERCENT] = ACTIONS(424),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(424),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(424),
    [anon_sym_LT] = ACTIONS(424),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(424),
    [anon_sym_GT] = ACTIONS(424),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(424),
    [anon_sym_LT_EQ] = ACTIONS(424),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(424),
    [anon_sym_GT_EQ] = ACTIONS(424),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(424),
    [anon_sym_EQ_EQ] = ACTIONS(424),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(424),
    [anon_sym_SLASH_EQ] = ACTIONS(424),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(424),
    [anon_sym_SLASH_SLASH] = ACTIONS(424),
    [anon_sym_PLUS] = ACTIONS(424),
    [anon_sym_DASH] = ACTIONS(424),
    [anon_sym_STAR] = ACTIONS(424),
    [anon_sym_SLASH] = ACTIONS(424),
    [anon_sym_STAR_STAR] = ACTIONS(424),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(424),
    [sym__newline] = ACTIONS(424),
  },
  [177] = {
    [aux_sym_argument_list_repeat1] = STATE(177),
    [anon_sym_RPAREN] = ACTIONS(420),
    [anon_sym_COMMA] = ACTIONS(426),
    [sym_comment] = ACTIONS(14),
  },
  [178] = {
    [sym_number_literal] = ACTIONS(429),
    [sym_comment] = ACTIONS(14),
  },
  [179] = {
    [anon_sym_PERCENT] = ACTIONS(244),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(244),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(244),
    [anon_sym_LT] = ACTIONS(244),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(244),
    [anon_sym_GT] = ACTIONS(244),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(244),
    [anon_sym_LT_EQ] = ACTIONS(244),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(244),
    [anon_sym_GT_EQ] = ACTIONS(244),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(244),
    [anon_sym_EQ_EQ] = ACTIONS(244),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(244),
    [anon_sym_SLASH_EQ] = ACTIONS(244),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(244),
    [anon_sym_SLASH_SLASH] = ACTIONS(244),
    [anon_sym_PLUS] = ACTIONS(244),
    [anon_sym_DASH] = ACTIONS(244),
    [anon_sym_STAR] = ACTIONS(244),
    [anon_sym_SLASH] = ACTIONS(244),
    [anon_sym_STAR_STAR] = ACTIONS(244),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(244),
    [sym__newline] = ACTIONS(244),
  },
  [180] = {
    [anon_sym_PERCENT] = ACTIONS(290),
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
    [anon_sym_STAR] = ACTIONS(316),
    [anon_sym_SLASH] = ACTIONS(316),
    [anon_sym_STAR_STAR] = ACTIONS(316),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(316),
    [sym__newline] = ACTIONS(316),
  },
  [181] = {
    [anon_sym_PERCENT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_LT_EQ] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_GT_EQ] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_EQ_EQ] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_SLASH_EQ] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_SLASH_SLASH] = ACTIONS(300),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_STAR_STAR] = ACTIONS(306),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(322),
    [sym__newline] = ACTIONS(322),
  },
  [182] = {
    [anon_sym_PERCENT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_LT_EQ] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_GT_EQ] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_EQ_EQ] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_SLASH_EQ] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_SLASH_SLASH] = ACTIONS(300),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_STAR_STAR] = ACTIONS(306),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(322),
    [sym__newline] = ACTIONS(322),
  },
  [183] = {
    [anon_sym_PERCENT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(292),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(294),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_LT_EQ] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_GT_EQ] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_EQ_EQ] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_SLASH_EQ] = ACTIONS(298),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(298),
    [anon_sym_SLASH_SLASH] = ACTIONS(300),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_STAR_STAR] = ACTIONS(306),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(322),
    [sym__newline] = ACTIONS(322),
  },
  [184] = {
    [anon_sym_PERCENT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(328),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(328),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(300),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_STAR_STAR] = ACTIONS(306),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(328),
    [sym__newline] = ACTIONS(328),
  },
  [185] = {
    [anon_sym_PERCENT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(334),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(334),
    [anon_sym_LT] = ACTIONS(334),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(334),
    [anon_sym_GT] = ACTIONS(334),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(334),
    [anon_sym_LT_EQ] = ACTIONS(334),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(334),
    [anon_sym_GT_EQ] = ACTIONS(334),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(334),
    [anon_sym_EQ_EQ] = ACTIONS(334),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(334),
    [anon_sym_SLASH_EQ] = ACTIONS(334),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(334),
    [anon_sym_SLASH_SLASH] = ACTIONS(300),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_STAR_STAR] = ACTIONS(306),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(334),
    [sym__newline] = ACTIONS(334),
  },
  [186] = {
    [anon_sym_PERCENT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_GT] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_LT_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_EQ_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_SLASH_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_SLASH_SLASH] = ACTIONS(340),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [anon_sym_STAR_STAR] = ACTIONS(306),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(340),
    [sym__newline] = ACTIONS(340),
  },
  [187] = {
    [anon_sym_PERCENT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_GT] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_LT_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_EQ_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_SLASH_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_SLASH_SLASH] = ACTIONS(340),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(340),
    [anon_sym_SLASH] = ACTIONS(340),
    [anon_sym_STAR_STAR] = ACTIONS(306),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(340),
    [sym__newline] = ACTIONS(340),
  },
  [188] = {
    [anon_sym_PERCENT] = ACTIONS(290),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_GT] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_LT_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_EQ_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_SLASH_EQ] = ACTIONS(340),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_SLASH_SLASH] = ACTIONS(340),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(340),
    [anon_sym_SLASH] = ACTIONS(340),
    [anon_sym_STAR_STAR] = ACTIONS(340),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(340),
    [sym__newline] = ACTIONS(340),
  },
  [189] = {
    [ts_builtin_sym_end] = ACTIONS(431),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(431),
    [sym_comment] = ACTIONS(14),
  },
  [190] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(424),
    [sym__newline] = ACTIONS(424),
  },
  [191] = {
    [anon_sym_RPAREN] = ACTIONS(433),
    [anon_sym_EQ] = ACTIONS(433),
    [anon_sym_EQ_GT] = ACTIONS(435),
    [anon_sym_PERCENT] = ACTIONS(433),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(433),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(424),
    [anon_sym_LT] = ACTIONS(433),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_GT] = ACTIONS(433),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_LT_EQ] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_GT_EQ] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_EQ_EQ] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_SLASH_EQ] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(433),
    [anon_sym_SLASH_SLASH] = ACTIONS(435),
    [anon_sym_PLUS] = ACTIONS(433),
    [anon_sym_DASH] = ACTIONS(433),
    [anon_sym_STAR] = ACTIONS(433),
    [anon_sym_SLASH] = ACTIONS(433),
    [anon_sym_STAR_STAR] = ACTIONS(435),
    [anon_sym_COMMA] = ACTIONS(433),
    [anon_sym_COLON] = ACTIONS(433),
    [sym_comment] = ACTIONS(34),
  },
  [192] = {
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_PERCENT] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(156),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(160),
    [anon_sym_LT] = ACTIONS(404),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_GT] = ACTIONS(404),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_LT_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_GT_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_EQ_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_SLASH_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_SLASH_SLASH] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [193] = {
    [anon_sym_RPAREN] = ACTIONS(162),
    [anon_sym_PERCENT] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(166),
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
    [anon_sym_SLASH_SLASH] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_STAR] = ACTIONS(162),
    [anon_sym_SLASH] = ACTIONS(162),
    [anon_sym_STAR_STAR] = ACTIONS(164),
    [anon_sym_COMMA] = ACTIONS(162),
    [sym_comment] = ACTIONS(34),
  },
  [194] = {
    [sym__expression] = STATE(206),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [195] = {
    [sym__expression] = STATE(207),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [196] = {
    [sym__expression] = STATE(208),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [197] = {
    [sym__expression] = STATE(209),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [198] = {
    [sym__expression] = STATE(210),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [199] = {
    [sym__expression] = STATE(211),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [200] = {
    [sym__expression] = STATE(212),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [201] = {
    [sym__expression] = STATE(213),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [202] = {
    [sym__expression] = STATE(214),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [203] = {
    [anon_sym_RPAREN] = ACTIONS(437),
    [anon_sym_PERCENT] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(400),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(402),
    [anon_sym_LT] = ACTIONS(404),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_GT] = ACTIONS(404),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_LT_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_GT_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_EQ_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_SLASH_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_SLASH_SLASH] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(437),
    [sym_comment] = ACTIONS(34),
  },
  [204] = {
    [sym__expression] = STATE(215),
    [sym_parenthesized_expression] = STATE(18),
    [sym_derived_type_member_expression] = STATE(18),
    [sym_logical_expression] = STATE(18),
    [sym_relational_expression] = STATE(18),
    [sym_concatenation_expression] = STATE(18),
    [sym_math_expression] = STATE(18),
    [sym_call_expression] = STATE(18),
    [sym_complex_literal] = STATE(18),
    [sym_string_literal] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(46),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(360),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [sym_number_literal] = ACTIONS(52),
    [sym__double_quoted_string] = ACTIONS(54),
    [sym__single_quoted_string] = ACTIONS(54),
    [sym_boolean_literal] = ACTIONS(52),
    [sym_identifier] = ACTIONS(72),
    [sym_comment] = ACTIONS(34),
  },
  [205] = {
    [anon_sym_RPAREN] = ACTIONS(439),
    [sym_comment] = ACTIONS(14),
  },
  [206] = {
    [anon_sym_RPAREN] = ACTIONS(312),
    [anon_sym_PERCENT] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(316),
    [anon_sym_LT] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_GT] = ACTIONS(312),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_LT_EQ] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_GT_EQ] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_EQ_EQ] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_SLASH_EQ] = ACTIONS(314),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(312),
    [anon_sym_SLASH_SLASH] = ACTIONS(314),
    [anon_sym_PLUS] = ACTIONS(312),
    [anon_sym_DASH] = ACTIONS(312),
    [anon_sym_STAR] = ACTIONS(312),
    [anon_sym_SLASH] = ACTIONS(312),
    [anon_sym_STAR_STAR] = ACTIONS(314),
    [anon_sym_COMMA] = ACTIONS(312),
    [sym_comment] = ACTIONS(34),
  },
  [207] = {
    [anon_sym_RPAREN] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(404),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_GT] = ACTIONS(404),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_LT_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_GT_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_EQ_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_SLASH_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_SLASH_SLASH] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(318),
    [sym_comment] = ACTIONS(34),
  },
  [208] = {
    [anon_sym_RPAREN] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(404),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_GT] = ACTIONS(404),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_LT_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_GT_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_EQ_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_SLASH_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_SLASH_SLASH] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(318),
    [sym_comment] = ACTIONS(34),
  },
  [209] = {
    [anon_sym_RPAREN] = ACTIONS(318),
    [anon_sym_PERCENT] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(318),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(322),
    [anon_sym_LT] = ACTIONS(404),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_GT] = ACTIONS(404),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_LT_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_GT_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_EQ_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_SLASH_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_SLASH_SLASH] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(318),
    [sym_comment] = ACTIONS(34),
  },
  [210] = {
    [anon_sym_RPAREN] = ACTIONS(324),
    [anon_sym_PERCENT] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(328),
    [anon_sym_LT] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(324),
    [anon_sym_GT] = ACTIONS(324),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(324),
    [anon_sym_LT_EQ] = ACTIONS(326),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(324),
    [anon_sym_GT_EQ] = ACTIONS(326),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(324),
    [anon_sym_EQ_EQ] = ACTIONS(326),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(324),
    [anon_sym_SLASH_EQ] = ACTIONS(326),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(324),
    [anon_sym_SLASH_SLASH] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(324),
    [sym_comment] = ACTIONS(34),
  },
  [211] = {
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_PERCENT] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(334),
    [anon_sym_LT] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(330),
    [anon_sym_GT] = ACTIONS(330),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(330),
    [anon_sym_LT_EQ] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(330),
    [anon_sym_GT_EQ] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(330),
    [anon_sym_EQ_EQ] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(330),
    [anon_sym_SLASH_EQ] = ACTIONS(332),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(330),
    [anon_sym_SLASH_SLASH] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(330),
    [sym_comment] = ACTIONS(34),
  },
  [212] = {
    [anon_sym_RPAREN] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(336),
    [sym_comment] = ACTIONS(34),
  },
  [213] = {
    [anon_sym_RPAREN] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(336),
    [sym_comment] = ACTIONS(34),
  },
  [214] = {
    [anon_sym_RPAREN] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_EQ] = ACTIONS(338),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(336),
    [anon_sym_SLASH_SLASH] = ACTIONS(338),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_STAR_STAR] = ACTIONS(338),
    [anon_sym_COMMA] = ACTIONS(336),
    [sym_comment] = ACTIONS(34),
  },
  [215] = {
    [anon_sym_RPAREN] = ACTIONS(441),
    [anon_sym_PERCENT] = ACTIONS(394),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(396),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(400),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(402),
    [anon_sym_LT] = ACTIONS(404),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_GT] = ACTIONS(404),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_LT_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_GT_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_EQ_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_SLASH_EQ] = ACTIONS(406),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(404),
    [anon_sym_SLASH_SLASH] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_DASH] = ACTIONS(410),
    [anon_sym_STAR] = ACTIONS(412),
    [anon_sym_SLASH] = ACTIONS(412),
    [anon_sym_STAR_STAR] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(441),
    [sym_comment] = ACTIONS(34),
  },
  [216] = {
    [anon_sym_PERCENT] = ACTIONS(384),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(384),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(384),
    [anon_sym_LT] = ACTIONS(384),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(384),
    [anon_sym_GT] = ACTIONS(384),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(384),
    [anon_sym_LT_EQ] = ACTIONS(384),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(384),
    [anon_sym_GT_EQ] = ACTIONS(384),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(384),
    [anon_sym_EQ_EQ] = ACTIONS(384),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(384),
    [anon_sym_SLASH_EQ] = ACTIONS(384),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(384),
    [anon_sym_SLASH_SLASH] = ACTIONS(384),
    [anon_sym_PLUS] = ACTIONS(384),
    [anon_sym_DASH] = ACTIONS(384),
    [anon_sym_STAR] = ACTIONS(384),
    [anon_sym_SLASH] = ACTIONS(384),
    [anon_sym_STAR_STAR] = ACTIONS(384),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(384),
    [sym__newline] = ACTIONS(384),
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
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(18),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(20),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(25),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [62] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 1),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(52),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(53),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__end_of_statement, 1),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subroutine_call, 2),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(76),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_logical_expression, 2),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 2),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 2),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 2),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [176] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
  [178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2),
  [182] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
  [194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [196] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(13),
  [199] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(14),
  [202] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(15),
  [205] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(16),
  [208] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(17),
  [211] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(18),
  [214] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(19),
  [217] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(20),
  [220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(102),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [224] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(104),
  [226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 3),
  [228] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 3),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 3),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [244] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [246] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 1),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [264] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(130),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [286] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(139),
  [288] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [290] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(143),
  [292] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(144),
  [294] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(145),
  [296] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(146),
  [298] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(147),
  [300] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(148),
  [302] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(149),
  [304] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(150),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(151),
  [308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [310] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [316] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_logical_expression, 3),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 3),
  [322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 3),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 3),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [340] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [344] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(153),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 2),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
  [368] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(179),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 8),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_complex_literal, 5),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [384] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 3),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
  [402] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(197),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(201),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_keyword_argument, 3),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
  [424] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [426] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(136),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 9),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 4),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 5),
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
