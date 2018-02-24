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
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(55);
      if (lookahead == '9')
        ADVANCE(58);
      if (lookahead == ':')
        ADVANCE(63);
      if (lookahead == ';')
        ADVANCE(64);
      if (lookahead == '<')
        ADVANCE(65);
      if (lookahead == '=')
        ADVANCE(67);
      if (lookahead == '>')
        ADVANCE(70);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(72);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(74);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(79);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(83);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(85);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(88);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(90);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(0);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(76);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(73);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(78);
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
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == '[')
        ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'f')
        ADVANCE(25);
      if (lookahead == 't')
        ADVANCE(46);
      END_STATE();
    case 25:
      if (lookahead == 'F')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == ']')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '[')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'a')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'A')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == ']')
        ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == '[')
        ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'l')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'L')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == ']')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == '[')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 's')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'S')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == ']')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == '[')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'e')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'E')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == ']')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == '/')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == '.')
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_boolean_literal);
      END_STATE();
    case 46:
      if (lookahead == 'T')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == ']')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == '[')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'r')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'R')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == ']')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == '[')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'u')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'U')
        ADVANCE(38);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(56);
      if (lookahead == '=')
        ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_statement_label);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(59);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number_literal);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(17);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__semicolon);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(68);
      if (lookahead == '>')
        ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_statement_label);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(58);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(72);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(62);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(59);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(59);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_statement_label);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(58);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(59);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(59);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(75);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(77);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(76);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(78);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(75);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(76);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(77);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(76);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(76);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(80);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f'))
        ADVANCE(76);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(81);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(76);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(78);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(17);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(76);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(78);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(76);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(78);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(17);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(86);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(76);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(78);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(89);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(89);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(76);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 98:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(98);
      END_STATE();
    case 99:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'M' ||
          lookahead == 'm')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH);
      END_STATE();
    case 106:
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
        SKIP(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 107:
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(107);
      if (lookahead == 'P' ||
          lookahead == 'p')
        ADVANCE(99);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(109);
      if (lookahead == '!')
        ADVANCE(110);
      if (lookahead == '\"')
        ADVANCE(115);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == '(')
        ADVANCE(127);
      if (lookahead == '+')
        ADVANCE(132);
      if (lookahead == '-')
        ADVANCE(133);
      if (lookahead == '.')
        ADVANCE(134);
      if (lookahead == '9')
        ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(136);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(137);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(138);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(143);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(145);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(148);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(150);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(151);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(152);
      if (lookahead != 0)
        ADVANCE(153);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 115:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 116:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 117:
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 118:
      if (lookahead == '\"')
        ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\"')
        ADVANCE(5);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 121:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 122:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 123:
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 124:
      if (lookahead == '\'')
        ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\'')
        ADVANCE(9);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead == '\'')
        ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(128);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(128);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(19);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(128);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(15);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_statement_label);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(128);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(59);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(109);
      if (lookahead == '!')
        ADVANCE(110);
      if (lookahead == '\"')
        ADVANCE(115);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == '(')
        ADVANCE(127);
      if (lookahead == '+')
        ADVANCE(132);
      if (lookahead == '-')
        ADVANCE(133);
      if (lookahead == '.')
        ADVANCE(134);
      if (lookahead == '9')
        ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(136);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(137);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(138);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(143);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(145);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(147);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(148);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(150);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(151);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(152);
      if (lookahead != 0)
        ADVANCE(153);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_statement_label);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(58);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(72);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(62);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(128);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(59);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(59);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(73);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(75);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(139);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(77);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(76);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(78);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(131);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(80);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(139);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f'))
        ADVANCE(76);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(78);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(17);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(139);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(76);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(78);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(17);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(146);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(76);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(78);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(87);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(139);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(89);
      if (lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(76);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(139);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(76);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(78);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_statement_label);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(58);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(128);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(59);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(59);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(73);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 153:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(128);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(154);
      if (lookahead == '!')
        ADVANCE(110);
      if (lookahead == '\"')
        ADVANCE(115);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == '(')
        ADVANCE(127);
      if (lookahead == '+')
        ADVANCE(132);
      if (lookahead == '-')
        ADVANCE(133);
      if (lookahead == '.')
        ADVANCE(134);
      if (lookahead == '9')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(157);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(158);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(138);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(143);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(148);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(149);
      if (lookahead == 'A' ||
          lookahead == 'F' ||
          lookahead == 'a' ||
          lookahead == 'f')
        ADVANCE(150);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(144);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(161);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(152);
      if (lookahead != 0)
        ADVANCE(153);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(128);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(59);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(59);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(154);
      if (lookahead == '!')
        ADVANCE(110);
      if (lookahead == '\"')
        ADVANCE(115);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == '(')
        ADVANCE(127);
      if (lookahead == '+')
        ADVANCE(132);
      if (lookahead == '-')
        ADVANCE(133);
      if (lookahead == '.')
        ADVANCE(134);
      if (lookahead == '9')
        ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(157);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(158);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(138);
      if (lookahead == 'C' ||
          lookahead == 'c')
        ADVANCE(143);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(147);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(148);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(149);
      if (lookahead == 'A' ||
          lookahead == 'F' ||
          lookahead == 'a' ||
          lookahead == 'f')
        ADVANCE(150);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(144);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(161);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(152);
      if (lookahead != 0)
        ADVANCE(153);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(156);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(159);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(62);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(128);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(59);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(59);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(156);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(159);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(62);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(59);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(59);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(156);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(59);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(59);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(156);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(128);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(59);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(59);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(160);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(162);
      if (lookahead == '!')
        ADVANCE(110);
      if (lookahead == '\"')
        ADVANCE(115);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == '(')
        ADVANCE(127);
      if (lookahead == ')')
        ADVANCE(163);
      if (lookahead == '+')
        ADVANCE(132);
      if (lookahead == ',')
        ADVANCE(164);
      if (lookahead == '-')
        ADVANCE(133);
      if (lookahead == '.')
        ADVANCE(134);
      if (lookahead == '9')
        ADVANCE(155);
      if (lookahead == ':')
        ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(166);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(158);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(138);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(148);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(149);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(150);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(161);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(152);
      if (lookahead != 0)
        ADVANCE(153);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(128);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(128);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(128);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\n')
        SKIP(162);
      if (lookahead == '!')
        ADVANCE(110);
      if (lookahead == '\"')
        ADVANCE(115);
      if (lookahead == '\'')
        ADVANCE(121);
      if (lookahead == '(')
        ADVANCE(127);
      if (lookahead == ')')
        ADVANCE(163);
      if (lookahead == '+')
        ADVANCE(132);
      if (lookahead == ',')
        ADVANCE(164);
      if (lookahead == '-')
        ADVANCE(133);
      if (lookahead == '.')
        ADVANCE(134);
      if (lookahead == '9')
        ADVANCE(155);
      if (lookahead == ':')
        ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(166);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(158);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(138);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(147);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(148);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(149);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(150);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(161);
      if (('G' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'y'))
        ADVANCE(152);
      if (lookahead != 0)
        ADVANCE(153);
      END_STATE();
    case 167:
      if (lookahead == '\n')
        SKIP(167);
      if (lookahead == '!')
        ADVANCE(168);
      if (lookahead == '%')
        ADVANCE(197);
      if (lookahead == '(')
        ADVANCE(226);
      if (lookahead == ')')
        ADVANCE(227);
      if (lookahead == '*')
        ADVANCE(228);
      if (lookahead == '+')
        ADVANCE(229);
      if (lookahead == ',')
        ADVANCE(230);
      if (lookahead == '-')
        ADVANCE(231);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == ':')
        ADVANCE(233);
      if (lookahead == '<')
        ADVANCE(234);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '>')
        ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(237);
      if (lookahead != 0)
        ADVANCE(251);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(169);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(173);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(178);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(183);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(188);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(177);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(179);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(184);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(186);
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
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(193);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(217);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(223);
      END_STATE();
    case 198:
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH);
      END_STATE();
    case 202:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(203);
      END_STATE();
    case 203:
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(206);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(208);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(210);
      END_STATE();
    case 208:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 210:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 212:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(213);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(215);
      END_STATE();
    case 213:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 215:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH);
      END_STATE();
    case 217:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(218);
      END_STATE();
    case 218:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(222);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      END_STATE();
    case 223:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(224);
      END_STATE();
    case 224:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(217);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(223);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(217);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(223);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(217);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(223);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(217);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(223);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(217);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(223);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(217);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(223);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/')
        ADVANCE(56);
      if (lookahead == '=')
        ADVANCE(57);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(217);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(223);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(217);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(223);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=')
        ADVANCE(66);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(217);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(223);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(68);
      if (lookahead == '>')
        ADVANCE(69);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(217);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(223);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(71);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(217);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(223);
      END_STATE();
    case 237:
      if (lookahead == '\n')
        SKIP(167);
      if (lookahead == '!')
        ADVANCE(168);
      if (lookahead == '%')
        ADVANCE(197);
      if (lookahead == '(')
        ADVANCE(226);
      if (lookahead == ')')
        ADVANCE(227);
      if (lookahead == '*')
        ADVANCE(228);
      if (lookahead == '+')
        ADVANCE(229);
      if (lookahead == ',')
        ADVANCE(230);
      if (lookahead == '-')
        ADVANCE(231);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == ':')
        ADVANCE(233);
      if (lookahead == '<')
        ADVANCE(234);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '>')
        ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(237);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(238);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(240);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(241);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(244);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(247);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(250);
      if (lookahead != 0)
        ADVANCE(251);
      END_STATE();
    case 238:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(239);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(223);
      END_STATE();
    case 239:
      if (lookahead == 'D' ||
          lookahead == 'd')
        ADVANCE(200);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(218);
      END_STATE();
    case 240:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(217);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(223);
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(203);
      END_STATE();
    case 241:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(242);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(217);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(223);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(210);
      END_STATE();
    case 242:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(209);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(206);
      END_STATE();
    case 244:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(245);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(217);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(223);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(215);
      END_STATE();
    case 245:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(214);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(206);
      END_STATE();
    case 247:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(248);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(217);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(223);
      END_STATE();
    case 248:
      if (lookahead == 'Q' ||
          lookahead == 'q')
        ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(222);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH);
      if (lookahead == 'V' ||
          lookahead == 'v')
        ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(206);
      END_STATE();
    case 250:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(217);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(223);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(224);
      END_STATE();
    case 251:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(217);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(223);
      END_STATE();
    case 252:
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '!')
        ADVANCE(168);
      if (lookahead == '%')
        ADVANCE(197);
      if (lookahead == '(')
        ADVANCE(226);
      if (lookahead == '*')
        ADVANCE(228);
      if (lookahead == '+')
        ADVANCE(229);
      if (lookahead == '-')
        ADVANCE(231);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == ';')
        ADVANCE(253);
      if (lookahead == '<')
        ADVANCE(234);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '>')
        ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(254);
      if (lookahead != 0)
        ADVANCE(251);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__semicolon);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(217);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(223);
      END_STATE();
    case 254:
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '!')
        ADVANCE(168);
      if (lookahead == '%')
        ADVANCE(197);
      if (lookahead == '(')
        ADVANCE(226);
      if (lookahead == '*')
        ADVANCE(228);
      if (lookahead == '+')
        ADVANCE(229);
      if (lookahead == '-')
        ADVANCE(231);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == ';')
        ADVANCE(253);
      if (lookahead == '<')
        ADVANCE(234);
      if (lookahead == '=')
        ADVANCE(235);
      if (lookahead == '>')
        ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(254);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(238);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(240);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(241);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(244);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(247);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(250);
      if (lookahead != 0)
        ADVANCE(251);
      END_STATE();
    case 255:
      if (lookahead == '\n')
        ADVANCE(108);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == ';')
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(78);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '.')
        ADVANCE(15);
      if (lookahead == '9')
        ADVANCE(156);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(19);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(159);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(257);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(259);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        SKIP(256);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      if (('2' <= lookahead && lookahead <= '8'))
        ADVANCE(160);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(258);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(59);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(258);
      if (lookahead == 'B' ||
          lookahead == 'b')
        ADVANCE(62);
      if (lookahead == 'Z' ||
          lookahead == 'z')
        ADVANCE(59);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      END_STATE();
    case 259:
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '8'))
        ADVANCE(260);
      END_STATE();
    case 261:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(62);
      END_STATE();
    case 262:
      if (lookahead == '\n')
        SKIP(262);
      if (lookahead == '!')
        ADVANCE(168);
      if (lookahead == '%')
        ADVANCE(197);
      if (lookahead == '(')
        ADVANCE(226);
      if (lookahead == ')')
        ADVANCE(227);
      if (lookahead == '*')
        ADVANCE(228);
      if (lookahead == '+')
        ADVANCE(229);
      if (lookahead == ',')
        ADVANCE(230);
      if (lookahead == '-')
        ADVANCE(231);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == ':')
        ADVANCE(233);
      if (lookahead == '<')
        ADVANCE(234);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(264);
      if (lookahead != 0)
        ADVANCE(251);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(68);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(202);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(207);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(212);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(217);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(223);
      END_STATE();
    case 264:
      if (lookahead == '\n')
        SKIP(262);
      if (lookahead == '!')
        ADVANCE(168);
      if (lookahead == '%')
        ADVANCE(197);
      if (lookahead == '(')
        ADVANCE(226);
      if (lookahead == ')')
        ADVANCE(227);
      if (lookahead == '*')
        ADVANCE(228);
      if (lookahead == '+')
        ADVANCE(229);
      if (lookahead == ',')
        ADVANCE(230);
      if (lookahead == '-')
        ADVANCE(231);
      if (lookahead == '/')
        ADVANCE(232);
      if (lookahead == ':')
        ADVANCE(233);
      if (lookahead == '<')
        ADVANCE(234);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(264);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(238);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(240);
      if (lookahead == 'G' ||
          lookahead == 'g')
        ADVANCE(241);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(244);
      if (lookahead == 'N' ||
          lookahead == 'n')
        ADVANCE(247);
      if (lookahead == 'O' ||
          lookahead == 'o')
        ADVANCE(250);
      if (lookahead != 0)
        ADVANCE(251);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 98},
  [2] = {.lex_state = 106},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 98},
  [5] = {.lex_state = 98},
  [6] = {.lex_state = 107},
  [7] = {.lex_state = 98},
  [8] = {.lex_state = 107},
  [9] = {.lex_state = 109},
  [10] = {.lex_state = 109},
  [11] = {.lex_state = 109},
  [12] = {.lex_state = 107},
  [13] = {.lex_state = 154},
  [14] = {.lex_state = 106},
  [15] = {.lex_state = 162},
  [16] = {.lex_state = 162},
  [17] = {.lex_state = 162},
  [18] = {.lex_state = 167},
  [19] = {.lex_state = 167},
  [20] = {.lex_state = 167},
  [21] = {.lex_state = 107},
  [22] = {.lex_state = 167},
  [23] = {.lex_state = 252},
  [24] = {.lex_state = 109},
  [25] = {.lex_state = 107},
  [26] = {.lex_state = 109},
  [27] = {.lex_state = 255},
  [28] = {.lex_state = 98},
  [29] = {.lex_state = 98},
  [30] = {.lex_state = 107},
  [31] = {.lex_state = 252},
  [32] = {.lex_state = 106},
  [33] = {.lex_state = 107},
  [34] = {.lex_state = 162},
  [35] = {.lex_state = 162},
  [36] = {.lex_state = 167},
  [37] = {.lex_state = 167},
  [38] = {.lex_state = 167},
  [39] = {.lex_state = 167},
  [40] = {.lex_state = 167},
  [41] = {.lex_state = 162},
  [42] = {.lex_state = 252},
  [43] = {.lex_state = 109},
  [44] = {.lex_state = 162},
  [45] = {.lex_state = 162},
  [46] = {.lex_state = 162},
  [47] = {.lex_state = 162},
  [48] = {.lex_state = 162},
  [49] = {.lex_state = 162},
  [50] = {.lex_state = 162},
  [51] = {.lex_state = 162},
  [52] = {.lex_state = 162},
  [53] = {.lex_state = 162},
  [54] = {.lex_state = 162},
  [55] = {.lex_state = 109},
  [56] = {.lex_state = 255},
  [57] = {.lex_state = 98},
  [58] = {.lex_state = 107},
  [59] = {.lex_state = 107},
  [60] = {.lex_state = 109},
  [61] = {.lex_state = 162},
  [62] = {.lex_state = 107},
  [63] = {.lex_state = 167},
  [64] = {.lex_state = 167},
  [65] = {.lex_state = 256},
  [66] = {.lex_state = 162},
  [67] = {.lex_state = 167},
  [68] = {.lex_state = 167},
  [69] = {.lex_state = 162},
  [70] = {.lex_state = 162},
  [71] = {.lex_state = 162},
  [72] = {.lex_state = 162},
  [73] = {.lex_state = 162},
  [74] = {.lex_state = 162},
  [75] = {.lex_state = 162},
  [76] = {.lex_state = 162},
  [77] = {.lex_state = 162},
  [78] = {.lex_state = 252},
  [79] = {.lex_state = 162},
  [80] = {.lex_state = 162},
  [81] = {.lex_state = 162},
  [82] = {.lex_state = 262},
  [83] = {.lex_state = 167},
  [84] = {.lex_state = 106},
  [85] = {.lex_state = 162},
  [86] = {.lex_state = 162},
  [87] = {.lex_state = 162},
  [88] = {.lex_state = 252},
  [89] = {.lex_state = 252},
  [90] = {.lex_state = 252},
  [91] = {.lex_state = 252},
  [92] = {.lex_state = 252},
  [93] = {.lex_state = 167},
  [94] = {.lex_state = 167},
  [95] = {.lex_state = 167},
  [96] = {.lex_state = 167},
  [97] = {.lex_state = 167},
  [98] = {.lex_state = 167},
  [99] = {.lex_state = 167},
  [100] = {.lex_state = 167},
  [101] = {.lex_state = 167},
  [102] = {.lex_state = 107},
  [103] = {.lex_state = 98},
  [104] = {.lex_state = 255},
  [105] = {.lex_state = 107},
  [106] = {.lex_state = 167},
  [107] = {.lex_state = 106},
  [108] = {.lex_state = 106},
  [109] = {.lex_state = 167},
  [110] = {.lex_state = 167},
  [111] = {.lex_state = 106},
  [112] = {.lex_state = 167},
  [113] = {.lex_state = 167},
  [114] = {.lex_state = 167},
  [115] = {.lex_state = 167},
  [116] = {.lex_state = 167},
  [117] = {.lex_state = 167},
  [118] = {.lex_state = 167},
  [119] = {.lex_state = 167},
  [120] = {.lex_state = 167},
  [121] = {.lex_state = 167},
  [122] = {.lex_state = 167},
  [123] = {.lex_state = 162},
  [124] = {.lex_state = 167},
  [125] = {.lex_state = 162},
  [126] = {.lex_state = 252},
  [127] = {.lex_state = 162},
  [128] = {.lex_state = 162},
  [129] = {.lex_state = 162},
  [130] = {.lex_state = 162},
  [131] = {.lex_state = 162},
  [132] = {.lex_state = 162},
  [133] = {.lex_state = 162},
  [134] = {.lex_state = 162},
  [135] = {.lex_state = 162},
  [136] = {.lex_state = 162},
  [137] = {.lex_state = 162},
  [138] = {.lex_state = 106},
  [139] = {.lex_state = 167},
  [140] = {.lex_state = 167},
  [141] = {.lex_state = 252},
  [142] = {.lex_state = 252},
  [143] = {.lex_state = 162},
  [144] = {.lex_state = 162},
  [145] = {.lex_state = 162},
  [146] = {.lex_state = 162},
  [147] = {.lex_state = 162},
  [148] = {.lex_state = 162},
  [149] = {.lex_state = 162},
  [150] = {.lex_state = 162},
  [151] = {.lex_state = 162},
  [152] = {.lex_state = 98},
  [153] = {.lex_state = 107},
  [154] = {.lex_state = 107},
  [155] = {.lex_state = 106},
  [156] = {.lex_state = 167},
  [157] = {.lex_state = 167},
  [158] = {.lex_state = 106},
  [159] = {.lex_state = 162},
  [160] = {.lex_state = 162},
  [161] = {.lex_state = 167},
  [162] = {.lex_state = 162},
  [163] = {.lex_state = 167},
  [164] = {.lex_state = 167},
  [165] = {.lex_state = 167},
  [166] = {.lex_state = 167},
  [167] = {.lex_state = 167},
  [168] = {.lex_state = 167},
  [169] = {.lex_state = 167},
  [170] = {.lex_state = 167},
  [171] = {.lex_state = 167},
  [172] = {.lex_state = 167},
  [173] = {.lex_state = 167},
  [174] = {.lex_state = 106},
  [175] = {.lex_state = 167},
  [176] = {.lex_state = 252},
  [177] = {.lex_state = 106},
  [178] = {.lex_state = 256},
  [179] = {.lex_state = 252},
  [180] = {.lex_state = 252},
  [181] = {.lex_state = 252},
  [182] = {.lex_state = 252},
  [183] = {.lex_state = 252},
  [184] = {.lex_state = 252},
  [185] = {.lex_state = 252},
  [186] = {.lex_state = 252},
  [187] = {.lex_state = 252},
  [188] = {.lex_state = 252},
  [189] = {.lex_state = 98},
  [190] = {.lex_state = 107},
  [191] = {.lex_state = 167},
  [192] = {.lex_state = 167},
  [193] = {.lex_state = 167},
  [194] = {.lex_state = 162},
  [195] = {.lex_state = 162},
  [196] = {.lex_state = 162},
  [197] = {.lex_state = 162},
  [198] = {.lex_state = 162},
  [199] = {.lex_state = 162},
  [200] = {.lex_state = 162},
  [201] = {.lex_state = 162},
  [202] = {.lex_state = 162},
  [203] = {.lex_state = 167},
  [204] = {.lex_state = 162},
  [205] = {.lex_state = 106},
  [206] = {.lex_state = 167},
  [207] = {.lex_state = 167},
  [208] = {.lex_state = 167},
  [209] = {.lex_state = 167},
  [210] = {.lex_state = 167},
  [211] = {.lex_state = 167},
  [212] = {.lex_state = 167},
  [213] = {.lex_state = 167},
  [214] = {.lex_state = 167},
  [215] = {.lex_state = 167},
  [216] = {.lex_state = 252},
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
    [sym_boolean_literal] = ACTIONS(1),
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
    [sym_boolean_literal] = ACTIONS(40),
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
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(42),
    [sym_statement_label] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(60),
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
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(62),
    [sym_statement_label] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
  },
  [12] = {
    [sym__end_of_statement] = STATE(29),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(64),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
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
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
  },
  [14] = {
    [sym_call_expression] = STATE(33),
    [sym_identifier] = ACTIONS(68),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(74),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [18] = {
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_EQ_GT] = ACTIONS(80),
    [anon_sym_PERCENT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_EQ_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_SLASH] = ACTIONS(80),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [19] = {
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_EQ_GT] = ACTIONS(86),
    [anon_sym_PERCENT] = ACTIONS(84),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(88),
    [anon_sym_LT] = ACTIONS(84),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(84),
    [anon_sym_GT] = ACTIONS(84),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(84),
    [anon_sym_LT_EQ] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(84),
    [anon_sym_GT_EQ] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(84),
    [anon_sym_EQ_EQ] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(84),
    [anon_sym_SLASH_EQ] = ACTIONS(86),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(84),
    [anon_sym_SLASH_SLASH] = ACTIONS(86),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_STAR] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(84),
    [anon_sym_STAR_STAR] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(84),
    [anon_sym_COLON] = ACTIONS(84),
    [sym_comment] = ACTIONS(34),
  },
  [20] = {
    [sym_argument_list] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_EQ_GT] = ACTIONS(80),
    [anon_sym_PERCENT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_EQ_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_SLASH] = ACTIONS(80),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(80),
    [sym_comment] = ACTIONS(34),
  },
  [21] = {
    [sym__end_of_statement] = STATE(43),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [22] = {
    [anon_sym_EQ] = ACTIONS(92),
    [anon_sym_EQ_GT] = ACTIONS(94),
    [anon_sym_PERCENT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(100),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(102),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(104),
    [anon_sym_LT] = ACTIONS(106),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_GT] = ACTIONS(106),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_LT_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_GT_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_EQ_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_SLASH_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_SLASH_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_STAR_STAR] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [23] = {
    [sym__end_of_statement] = STATE(43),
    [anon_sym_EQ] = ACTIONS(82),
    [anon_sym_EQ_GT] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_GT_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_EQ_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_SLASH_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_SLASH_SLASH] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_STAR_STAR] = ACTIONS(82),
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
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(62),
    [sym_statement_label] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
  },
  [25] = {
    [sym__end_of_statement] = STATE(57),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(118),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
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
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(120),
    [sym_statement_label] = ACTIONS(44),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(34),
  },
  [27] = {
    [sym__end_of_statement] = STATE(57),
    [sym_identifier] = ACTIONS(122),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(40),
    [sym_comment] = ACTIONS(14),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(124),
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
    [anon_sym_EQ] = ACTIONS(82),
    [anon_sym_EQ_GT] = ACTIONS(82),
    [anon_sym_PERCENT] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_GT_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_EQ_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_SLASH_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_SLASH_SLASH] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_STAR_STAR] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
  },
  [32] = {
    [sym_argument_list] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(126),
    [sym_comment] = ACTIONS(14),
  },
  [33] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(128),
    [sym__newline] = ACTIONS(128),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [36] = {
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_EQ_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_SLASH] = ACTIONS(80),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(130),
    [sym_comment] = ACTIONS(34),
  },
  [37] = {
    [sym_argument_list] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(78),
    [anon_sym_EQ_GT] = ACTIONS(80),
    [anon_sym_PERCENT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_EQ_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_SLASH] = ACTIONS(80),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [38] = {
    [anon_sym_RPAREN] = ACTIONS(134),
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
  [39] = {
    [anon_sym_EQ] = ACTIONS(158),
    [anon_sym_EQ_GT] = ACTIONS(160),
    [anon_sym_PERCENT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(106),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_GT] = ACTIONS(106),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_LT_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_GT_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_EQ_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_SLASH_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_SLASH_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_STAR_STAR] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [40] = {
    [anon_sym_EQ] = ACTIONS(164),
    [anon_sym_EQ_GT] = ACTIONS(166),
    [anon_sym_PERCENT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_LT] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_LT_EQ] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_GT_EQ] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_EQ_EQ] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_SLASH_EQ] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_SLASH_SLASH] = ACTIONS(166),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(164),
    [anon_sym_STAR] = ACTIONS(164),
    [anon_sym_SLASH] = ACTIONS(164),
    [anon_sym_STAR_STAR] = ACTIONS(166),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(170),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(176),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(34),
  },
  [42] = {
    [anon_sym_EQ] = ACTIONS(180),
    [anon_sym_EQ_GT] = ACTIONS(180),
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
    [anon_sym_STAR] = ACTIONS(180),
    [anon_sym_SLASH] = ACTIONS(180),
    [anon_sym_STAR_STAR] = ACTIONS(180),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(180),
    [sym__newline] = ACTIONS(180),
  },
  [43] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(182),
    [sym_statement_label] = ACTIONS(182),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(182),
    [anon_sym_LPAREN] = ACTIONS(182),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(182),
    [anon_sym_PLUS] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(182),
    [sym_number_literal] = ACTIONS(184),
    [sym__double_quoted_string] = ACTIONS(184),
    [sym__single_quoted_string] = ACTIONS(184),
    [sym_boolean_literal] = ACTIONS(186),
    [sym_identifier] = ACTIONS(184),
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
    [anon_sym_LPAREN] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [sym_number_literal] = ACTIONS(194),
    [sym__double_quoted_string] = ACTIONS(196),
    [sym__single_quoted_string] = ACTIONS(196),
    [sym_boolean_literal] = ACTIONS(198),
    [sym_identifier] = ACTIONS(200),
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
    [anon_sym_LPAREN] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [sym_number_literal] = ACTIONS(194),
    [sym__double_quoted_string] = ACTIONS(196),
    [sym__single_quoted_string] = ACTIONS(196),
    [sym_boolean_literal] = ACTIONS(198),
    [sym_identifier] = ACTIONS(200),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(50),
    [anon_sym_PLUS] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(52),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(182),
    [sym_statement_label] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(208),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_DASH] = ACTIONS(214),
    [sym_number_literal] = ACTIONS(217),
    [sym__double_quoted_string] = ACTIONS(220),
    [sym__single_quoted_string] = ACTIONS(220),
    [sym_boolean_literal] = ACTIONS(223),
    [sym_identifier] = ACTIONS(226),
    [sym_comment] = ACTIONS(34),
  },
  [56] = {
    [sym__end_of_statement] = STATE(103),
    [sym_identifier] = ACTIONS(229),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(231),
    [sym_comment] = ACTIONS(14),
  },
  [58] = {
    [sym__end_of_statement] = STATE(103),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(233),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [59] = {
    [sym__end_of_statement] = STATE(103),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [60] = {
    [aux_sym_SLASH_LBRACKeE_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_SLASH] = ACTIONS(235),
    [sym_statement_label] = ACTIONS(235),
    [aux_sym_SLASH_LBRACKcC_RBRACK_LBRACKaA_RBRACK_LBRACKlL_RBRACK_LBRACKlL_RBRACK_SLASH] = ACTIONS(235),
    [anon_sym_LPAREN] = ACTIONS(235),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(235),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(235),
    [sym_number_literal] = ACTIONS(237),
    [sym__double_quoted_string] = ACTIONS(237),
    [sym__single_quoted_string] = ACTIONS(237),
    [sym_boolean_literal] = ACTIONS(239),
    [sym_identifier] = ACTIONS(237),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(241),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(176),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(34),
  },
  [62] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(180),
    [sym__newline] = ACTIONS(180),
  },
  [63] = {
    [anon_sym_RPAREN] = ACTIONS(158),
    [anon_sym_PERCENT] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(162),
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
  [64] = {
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_PERCENT] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_LT] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_LT_EQ] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_GT_EQ] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_EQ_EQ] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_SLASH_EQ] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_SLASH_SLASH] = ACTIONS(166),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(164),
    [anon_sym_STAR] = ACTIONS(164),
    [anon_sym_SLASH] = ACTIONS(164),
    [anon_sym_STAR_STAR] = ACTIONS(166),
    [sym_comment] = ACTIONS(34),
  },
  [65] = {
    [sym_number_literal] = ACTIONS(243),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(245),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(176),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(34),
  },
  [67] = {
    [anon_sym_RPAREN] = ACTIONS(247),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_EQ_GT] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(247),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(247),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(247),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(247),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(180),
    [anon_sym_LT] = ACTIONS(247),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(247),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(247),
    [anon_sym_SLASH_EQ] = ACTIONS(249),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(247),
    [anon_sym_SLASH_SLASH] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_STAR_STAR] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(247),
    [anon_sym_COLON] = ACTIONS(247),
    [sym_comment] = ACTIONS(34),
  },
  [68] = {
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_EQ] = ACTIONS(251),
    [anon_sym_EQ_GT] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(251),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(251),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(251),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(251),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(251),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(251),
    [anon_sym_GT] = ACTIONS(251),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(251),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(251),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(251),
    [anon_sym_SLASH_EQ] = ACTIONS(253),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(251),
    [anon_sym_SLASH_SLASH] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(251),
    [anon_sym_STAR] = ACTIONS(251),
    [anon_sym_SLASH] = ACTIONS(251),
    [anon_sym_STAR_STAR] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(251),
    [anon_sym_COLON] = ACTIONS(251),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [78] = {
    [anon_sym_EQ] = ACTIONS(257),
    [anon_sym_EQ_GT] = ACTIONS(257),
    [anon_sym_PERCENT] = ACTIONS(257),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(257),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(257),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(257),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(257),
    [anon_sym_LT] = ACTIONS(257),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(257),
    [anon_sym_GT] = ACTIONS(257),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(257),
    [anon_sym_LT_EQ] = ACTIONS(257),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(257),
    [anon_sym_GT_EQ] = ACTIONS(257),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(257),
    [anon_sym_EQ_EQ] = ACTIONS(257),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(257),
    [anon_sym_SLASH_EQ] = ACTIONS(257),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(257),
    [anon_sym_SLASH_SLASH] = ACTIONS(257),
    [anon_sym_PLUS] = ACTIONS(257),
    [anon_sym_DASH] = ACTIONS(257),
    [anon_sym_STAR] = ACTIONS(257),
    [anon_sym_SLASH] = ACTIONS(257),
    [anon_sym_STAR_STAR] = ACTIONS(257),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(257),
    [sym__newline] = ACTIONS(257),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(259),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_COMMA] = ACTIONS(259),
    [anon_sym_COLON] = ACTIONS(261),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [82] = {
    [sym_argument_list] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_EQ] = ACTIONS(263),
    [anon_sym_PERCENT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_EQ_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_SLASH] = ACTIONS(80),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(78),
    [sym_comment] = ACTIONS(34),
  },
  [83] = {
    [aux_sym_argument_list_repeat1] = STATE(138),
    [anon_sym_RPAREN] = ACTIONS(265),
    [anon_sym_PERCENT] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(277),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_LT_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_SLASH_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_SLASH_SLASH] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_STAR_STAR] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_COLON] = ACTIONS(291),
    [sym_comment] = ACTIONS(34),
  },
  [84] = {
    [aux_sym_argument_list_repeat1] = STATE(138),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_COMMA] = ACTIONS(295),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(72),
    [anon_sym_DASH] = ACTIONS(72),
    [sym_number_literal] = ACTIONS(297),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [sym_number_literal] = ACTIONS(194),
    [sym__double_quoted_string] = ACTIONS(196),
    [sym__single_quoted_string] = ACTIONS(196),
    [sym_boolean_literal] = ACTIONS(198),
    [sym_identifier] = ACTIONS(200),
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
    [anon_sym_LPAREN] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [sym_number_literal] = ACTIONS(194),
    [sym__double_quoted_string] = ACTIONS(196),
    [sym__single_quoted_string] = ACTIONS(196),
    [sym_boolean_literal] = ACTIONS(198),
    [sym_identifier] = ACTIONS(200),
    [sym_comment] = ACTIONS(34),
  },
  [88] = {
    [anon_sym_PERCENT] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_GT_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_EQ_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_SLASH_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_SLASH_SLASH] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_STAR_STAR] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(82),
    [sym__newline] = ACTIONS(82),
  },
  [89] = {
    [anon_sym_PERCENT] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(88),
    [anon_sym_LT] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(88),
    [anon_sym_GT] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(88),
    [anon_sym_LT_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(88),
    [anon_sym_GT_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(88),
    [anon_sym_EQ_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(88),
    [anon_sym_SLASH_EQ] = ACTIONS(88),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(88),
    [anon_sym_SLASH_SLASH] = ACTIONS(88),
    [anon_sym_PLUS] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(88),
    [anon_sym_STAR] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(88),
    [anon_sym_STAR_STAR] = ACTIONS(88),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(88),
    [sym__newline] = ACTIONS(88),
  },
  [90] = {
    [sym_argument_list] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_PERCENT] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_GT] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_GT_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_EQ_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_SLASH_EQ] = ACTIONS(82),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_SLASH_SLASH] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(82),
    [anon_sym_DASH] = ACTIONS(82),
    [anon_sym_STAR] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_STAR_STAR] = ACTIONS(82),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(82),
    [sym__newline] = ACTIONS(82),
  },
  [91] = {
    [anon_sym_PERCENT] = ACTIONS(301),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(307),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(307),
    [anon_sym_LT] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_GT] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_LT_EQ] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_GT_EQ] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_EQ_EQ] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_SLASH_EQ] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_SLASH_SLASH] = ACTIONS(311),
    [anon_sym_PLUS] = ACTIONS(313),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_STAR_STAR] = ACTIONS(317),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(319),
    [sym__newline] = ACTIONS(319),
  },
  [92] = {
    [anon_sym_PERCENT] = ACTIONS(301),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(307),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(307),
    [anon_sym_LT] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_GT] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_LT_EQ] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_GT_EQ] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_EQ_EQ] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_SLASH_EQ] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_SLASH_SLASH] = ACTIONS(311),
    [anon_sym_PLUS] = ACTIONS(313),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_STAR_STAR] = ACTIONS(317),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(321),
    [sym__newline] = ACTIONS(321),
  },
  [93] = {
    [anon_sym_EQ] = ACTIONS(323),
    [anon_sym_EQ_GT] = ACTIONS(325),
    [anon_sym_PERCENT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_GT] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_LT_EQ] = ACTIONS(325),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(325),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_EQ_EQ] = ACTIONS(325),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_SLASH_EQ] = ACTIONS(325),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_SLASH_SLASH] = ACTIONS(325),
    [anon_sym_PLUS] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(323),
    [anon_sym_STAR] = ACTIONS(323),
    [anon_sym_SLASH] = ACTIONS(323),
    [anon_sym_STAR_STAR] = ACTIONS(325),
    [sym_comment] = ACTIONS(34),
  },
  [94] = {
    [anon_sym_EQ] = ACTIONS(329),
    [anon_sym_EQ_GT] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(100),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_LT] = ACTIONS(106),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_GT] = ACTIONS(106),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_LT_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_GT_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_EQ_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_SLASH_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_SLASH_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_STAR_STAR] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [95] = {
    [anon_sym_EQ] = ACTIONS(329),
    [anon_sym_EQ_GT] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_LT] = ACTIONS(106),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_GT] = ACTIONS(106),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_LT_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_GT_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_EQ_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_SLASH_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_SLASH_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_STAR_STAR] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [96] = {
    [anon_sym_EQ] = ACTIONS(329),
    [anon_sym_EQ_GT] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(98),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(100),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_LT] = ACTIONS(106),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_GT] = ACTIONS(106),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_LT_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_GT_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_EQ_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_SLASH_EQ] = ACTIONS(108),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(106),
    [anon_sym_SLASH_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_STAR_STAR] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [97] = {
    [anon_sym_EQ] = ACTIONS(335),
    [anon_sym_EQ_GT] = ACTIONS(337),
    [anon_sym_PERCENT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(335),
    [anon_sym_GT] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(335),
    [anon_sym_LT_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(335),
    [anon_sym_GT_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(335),
    [anon_sym_EQ_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(335),
    [anon_sym_SLASH_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(335),
    [anon_sym_SLASH_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_STAR_STAR] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [98] = {
    [anon_sym_EQ] = ACTIONS(341),
    [anon_sym_EQ_GT] = ACTIONS(343),
    [anon_sym_PERCENT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(345),
    [anon_sym_LT] = ACTIONS(341),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(341),
    [anon_sym_GT] = ACTIONS(341),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(341),
    [anon_sym_LT_EQ] = ACTIONS(343),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(341),
    [anon_sym_GT_EQ] = ACTIONS(343),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(341),
    [anon_sym_EQ_EQ] = ACTIONS(343),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(341),
    [anon_sym_SLASH_EQ] = ACTIONS(343),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(341),
    [anon_sym_SLASH_SLASH] = ACTIONS(110),
    [anon_sym_PLUS] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_STAR_STAR] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [99] = {
    [anon_sym_EQ] = ACTIONS(347),
    [anon_sym_EQ_GT] = ACTIONS(349),
    [anon_sym_PERCENT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_LT] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_GT] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_EQ_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_SLASH_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_SLASH_SLASH] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(347),
    [anon_sym_DASH] = ACTIONS(347),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_STAR_STAR] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [100] = {
    [anon_sym_EQ] = ACTIONS(347),
    [anon_sym_EQ_GT] = ACTIONS(349),
    [anon_sym_PERCENT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_LT] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_GT] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_EQ_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_SLASH_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_SLASH_SLASH] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(347),
    [anon_sym_DASH] = ACTIONS(347),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(347),
    [anon_sym_STAR_STAR] = ACTIONS(116),
    [sym_comment] = ACTIONS(34),
  },
  [101] = {
    [anon_sym_EQ] = ACTIONS(347),
    [anon_sym_EQ_GT] = ACTIONS(349),
    [anon_sym_PERCENT] = ACTIONS(96),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_LT] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_GT] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_EQ_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_SLASH_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_SLASH_SLASH] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(347),
    [anon_sym_DASH] = ACTIONS(347),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(347),
    [anon_sym_STAR_STAR] = ACTIONS(349),
    [sym_comment] = ACTIONS(34),
  },
  [102] = {
    [sym__end_of_statement] = STATE(152),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(353),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(353),
    [sym_comment] = ACTIONS(14),
  },
  [104] = {
    [sym__end_of_statement] = STATE(152),
    [sym_identifier] = ACTIONS(355),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [105] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(257),
    [sym__newline] = ACTIONS(257),
  },
  [106] = {
    [aux_sym_argument_list_repeat1] = STATE(155),
    [anon_sym_RPAREN] = ACTIONS(357),
    [anon_sym_PERCENT] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(277),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_LT_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_SLASH_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_SLASH_SLASH] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_STAR_STAR] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_COLON] = ACTIONS(291),
    [sym_comment] = ACTIONS(34),
  },
  [107] = {
    [aux_sym_argument_list_repeat1] = STATE(155),
    [anon_sym_RPAREN] = ACTIONS(359),
    [anon_sym_COMMA] = ACTIONS(295),
    [sym_comment] = ACTIONS(14),
  },
  [108] = {
    [anon_sym_RPAREN] = ACTIONS(361),
    [sym_comment] = ACTIONS(14),
  },
  [109] = {
    [anon_sym_RPAREN] = ACTIONS(363),
    [anon_sym_EQ] = ACTIONS(363),
    [anon_sym_EQ_GT] = ACTIONS(365),
    [anon_sym_PERCENT] = ACTIONS(363),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(363),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(257),
    [anon_sym_LT] = ACTIONS(363),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(363),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(363),
    [anon_sym_LT_EQ] = ACTIONS(365),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(363),
    [anon_sym_GT_EQ] = ACTIONS(365),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(363),
    [anon_sym_EQ_EQ] = ACTIONS(365),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(363),
    [anon_sym_SLASH_EQ] = ACTIONS(365),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(363),
    [anon_sym_SLASH_SLASH] = ACTIONS(365),
    [anon_sym_PLUS] = ACTIONS(363),
    [anon_sym_DASH] = ACTIONS(363),
    [anon_sym_STAR] = ACTIONS(363),
    [anon_sym_SLASH] = ACTIONS(363),
    [anon_sym_STAR_STAR] = ACTIONS(365),
    [anon_sym_COMMA] = ACTIONS(363),
    [anon_sym_COLON] = ACTIONS(363),
    [sym_comment] = ACTIONS(34),
  },
  [110] = {
    [aux_sym_argument_list_repeat1] = STATE(158),
    [anon_sym_RPAREN] = ACTIONS(367),
    [anon_sym_PERCENT] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(277),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_LT_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_SLASH_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_SLASH_SLASH] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_STAR_STAR] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
    [anon_sym_COLON] = ACTIONS(291),
    [sym_comment] = ACTIONS(34),
  },
  [111] = {
    [aux_sym_argument_list_repeat1] = STATE(158),
    [anon_sym_RPAREN] = ACTIONS(369),
    [anon_sym_COMMA] = ACTIONS(295),
    [sym_comment] = ACTIONS(14),
  },
  [112] = {
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_PERCENT] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_GT] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_LT_EQ] = ACTIONS(325),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(325),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_EQ_EQ] = ACTIONS(325),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_SLASH_EQ] = ACTIONS(325),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_SLASH_SLASH] = ACTIONS(325),
    [anon_sym_PLUS] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(323),
    [anon_sym_STAR] = ACTIONS(323),
    [anon_sym_SLASH] = ACTIONS(323),
    [anon_sym_STAR_STAR] = ACTIONS(325),
    [sym_comment] = ACTIONS(34),
  },
  [113] = {
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_PERCENT] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
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
  [114] = {
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_PERCENT] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
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
  [115] = {
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_PERCENT] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(138),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(140),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
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
  [116] = {
    [anon_sym_RPAREN] = ACTIONS(335),
    [anon_sym_PERCENT] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(335),
    [anon_sym_GT] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(335),
    [anon_sym_LT_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(335),
    [anon_sym_GT_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(335),
    [anon_sym_EQ_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(335),
    [anon_sym_SLASH_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(335),
    [anon_sym_SLASH_SLASH] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(152),
    [anon_sym_DASH] = ACTIONS(152),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [117] = {
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_PERCENT] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(345),
    [anon_sym_LT] = ACTIONS(341),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(341),
    [anon_sym_GT] = ACTIONS(341),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(341),
    [anon_sym_LT_EQ] = ACTIONS(343),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(341),
    [anon_sym_GT_EQ] = ACTIONS(343),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(341),
    [anon_sym_EQ_EQ] = ACTIONS(343),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(341),
    [anon_sym_SLASH_EQ] = ACTIONS(343),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(341),
    [anon_sym_SLASH_SLASH] = ACTIONS(150),
    [anon_sym_PLUS] = ACTIONS(152),
    [anon_sym_DASH] = ACTIONS(152),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [118] = {
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_PERCENT] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_LT] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_GT] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_EQ_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_SLASH_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_SLASH_SLASH] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(347),
    [anon_sym_DASH] = ACTIONS(347),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(154),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [119] = {
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_PERCENT] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_LT] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_GT] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_EQ_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_SLASH_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_SLASH_SLASH] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(347),
    [anon_sym_DASH] = ACTIONS(347),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(347),
    [anon_sym_STAR_STAR] = ACTIONS(156),
    [sym_comment] = ACTIONS(34),
  },
  [120] = {
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_PERCENT] = ACTIONS(136),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_LT] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_GT] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_EQ_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_SLASH_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_SLASH_SLASH] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(347),
    [anon_sym_DASH] = ACTIONS(347),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(347),
    [anon_sym_STAR_STAR] = ACTIONS(349),
    [sym_comment] = ACTIONS(34),
  },
  [121] = {
    [anon_sym_RPAREN] = ACTIONS(158),
    [anon_sym_PERCENT] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(277),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_LT_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_SLASH_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_SLASH_SLASH] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_STAR_STAR] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(158),
    [anon_sym_COLON] = ACTIONS(158),
    [sym_comment] = ACTIONS(34),
  },
  [122] = {
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_PERCENT] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_LT] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_LT_EQ] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_GT_EQ] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_EQ_EQ] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_SLASH_EQ] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_SLASH_SLASH] = ACTIONS(166),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(164),
    [anon_sym_STAR] = ACTIONS(164),
    [anon_sym_SLASH] = ACTIONS(164),
    [anon_sym_STAR_STAR] = ACTIONS(166),
    [anon_sym_COMMA] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(164),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(371),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [124] = {
    [anon_sym_RPAREN] = ACTIONS(375),
    [anon_sym_PERCENT] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(277),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_LT_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_SLASH_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_SLASH_SLASH] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_STAR_STAR] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(375),
    [anon_sym_COLON] = ACTIONS(377),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(371),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [126] = {
    [anon_sym_EQ] = ACTIONS(379),
    [anon_sym_EQ_GT] = ACTIONS(379),
    [anon_sym_PERCENT] = ACTIONS(379),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(379),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(379),
    [anon_sym_LT] = ACTIONS(379),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(379),
    [anon_sym_GT] = ACTIONS(379),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(379),
    [anon_sym_LT_EQ] = ACTIONS(379),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(379),
    [anon_sym_GT_EQ] = ACTIONS(379),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(379),
    [anon_sym_EQ_EQ] = ACTIONS(379),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(379),
    [anon_sym_SLASH_EQ] = ACTIONS(379),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(379),
    [anon_sym_SLASH_SLASH] = ACTIONS(379),
    [anon_sym_PLUS] = ACTIONS(379),
    [anon_sym_DASH] = ACTIONS(379),
    [anon_sym_STAR] = ACTIONS(379),
    [anon_sym_SLASH] = ACTIONS(379),
    [anon_sym_STAR_STAR] = ACTIONS(379),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(379),
    [sym__newline] = ACTIONS(379),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_COLON] = ACTIONS(176),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(178),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(375),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(174),
    [anon_sym_COMMA] = ACTIONS(375),
    [anon_sym_COLON] = ACTIONS(377),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [138] = {
    [aux_sym_argument_list_repeat1] = STATE(177),
    [anon_sym_RPAREN] = ACTIONS(381),
    [anon_sym_COMMA] = ACTIONS(295),
    [sym_comment] = ACTIONS(14),
  },
  [139] = {
    [anon_sym_RPAREN] = ACTIONS(78),
    [anon_sym_PERCENT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(82),
    [anon_sym_LT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT] = ACTIONS(78),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_EQ_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_EQ] = ACTIONS(80),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(78),
    [anon_sym_SLASH_SLASH] = ACTIONS(80),
    [anon_sym_PLUS] = ACTIONS(78),
    [anon_sym_DASH] = ACTIONS(78),
    [anon_sym_STAR] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_STAR_STAR] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(383),
    [sym_comment] = ACTIONS(34),
  },
  [140] = {
    [anon_sym_RPAREN] = ACTIONS(385),
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
  [141] = {
    [anon_sym_PERCENT] = ACTIONS(301),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(162),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_GT] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_LT_EQ] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_GT_EQ] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_EQ_EQ] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_SLASH_EQ] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_SLASH_SLASH] = ACTIONS(311),
    [anon_sym_PLUS] = ACTIONS(313),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_STAR_STAR] = ACTIONS(317),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(162),
    [sym__newline] = ACTIONS(162),
  },
  [142] = {
    [anon_sym_PERCENT] = ACTIONS(301),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_LT] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_GT] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_LT_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_GT_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_EQ_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_SLASH_EQ] = ACTIONS(168),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_SLASH_SLASH] = ACTIONS(168),
    [anon_sym_PLUS] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(168),
    [anon_sym_STAR] = ACTIONS(168),
    [anon_sym_SLASH] = ACTIONS(168),
    [anon_sym_STAR_STAR] = ACTIONS(168),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(168),
    [sym__newline] = ACTIONS(168),
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
    [anon_sym_LPAREN] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [sym_number_literal] = ACTIONS(194),
    [sym__double_quoted_string] = ACTIONS(196),
    [sym__single_quoted_string] = ACTIONS(196),
    [sym_boolean_literal] = ACTIONS(198),
    [sym_identifier] = ACTIONS(200),
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
    [anon_sym_LPAREN] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [sym_number_literal] = ACTIONS(194),
    [sym__double_quoted_string] = ACTIONS(196),
    [sym__single_quoted_string] = ACTIONS(196),
    [sym_boolean_literal] = ACTIONS(198),
    [sym_identifier] = ACTIONS(200),
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
    [anon_sym_LPAREN] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [sym_number_literal] = ACTIONS(194),
    [sym__double_quoted_string] = ACTIONS(196),
    [sym__single_quoted_string] = ACTIONS(196),
    [sym_boolean_literal] = ACTIONS(198),
    [sym_identifier] = ACTIONS(200),
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
    [anon_sym_LPAREN] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [sym_number_literal] = ACTIONS(194),
    [sym__double_quoted_string] = ACTIONS(196),
    [sym__single_quoted_string] = ACTIONS(196),
    [sym_boolean_literal] = ACTIONS(198),
    [sym_identifier] = ACTIONS(200),
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
    [anon_sym_LPAREN] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [sym_number_literal] = ACTIONS(194),
    [sym__double_quoted_string] = ACTIONS(196),
    [sym__single_quoted_string] = ACTIONS(196),
    [sym_boolean_literal] = ACTIONS(198),
    [sym_identifier] = ACTIONS(200),
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
    [anon_sym_LPAREN] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [sym_number_literal] = ACTIONS(194),
    [sym__double_quoted_string] = ACTIONS(196),
    [sym__single_quoted_string] = ACTIONS(196),
    [sym_boolean_literal] = ACTIONS(198),
    [sym_identifier] = ACTIONS(200),
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
    [anon_sym_LPAREN] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [sym_number_literal] = ACTIONS(194),
    [sym__double_quoted_string] = ACTIONS(196),
    [sym__single_quoted_string] = ACTIONS(196),
    [sym_boolean_literal] = ACTIONS(198),
    [sym_identifier] = ACTIONS(200),
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
    [anon_sym_LPAREN] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [sym_number_literal] = ACTIONS(194),
    [sym__double_quoted_string] = ACTIONS(196),
    [sym__single_quoted_string] = ACTIONS(196),
    [sym_boolean_literal] = ACTIONS(198),
    [sym_identifier] = ACTIONS(200),
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
    [anon_sym_LPAREN] = ACTIONS(188),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(190),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [sym_number_literal] = ACTIONS(194),
    [sym__double_quoted_string] = ACTIONS(196),
    [sym__single_quoted_string] = ACTIONS(196),
    [sym_boolean_literal] = ACTIONS(198),
    [sym_identifier] = ACTIONS(200),
    [sym_comment] = ACTIONS(34),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(387),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(387),
    [sym_comment] = ACTIONS(14),
  },
  [153] = {
    [sym__end_of_statement] = STATE(189),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
  },
  [154] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(379),
    [sym__newline] = ACTIONS(379),
  },
  [155] = {
    [aux_sym_argument_list_repeat1] = STATE(177),
    [anon_sym_RPAREN] = ACTIONS(389),
    [anon_sym_COMMA] = ACTIONS(295),
    [sym_comment] = ACTIONS(14),
  },
  [156] = {
    [anon_sym_RPAREN] = ACTIONS(391),
    [anon_sym_EQ] = ACTIONS(391),
    [anon_sym_EQ_GT] = ACTIONS(393),
    [anon_sym_PERCENT] = ACTIONS(391),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(391),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(391),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(391),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(395),
    [anon_sym_LT] = ACTIONS(391),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(391),
    [anon_sym_GT] = ACTIONS(391),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(391),
    [anon_sym_LT_EQ] = ACTIONS(393),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(391),
    [anon_sym_GT_EQ] = ACTIONS(393),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(391),
    [anon_sym_EQ_EQ] = ACTIONS(393),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(391),
    [anon_sym_SLASH_EQ] = ACTIONS(393),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(391),
    [anon_sym_SLASH_SLASH] = ACTIONS(393),
    [anon_sym_PLUS] = ACTIONS(391),
    [anon_sym_DASH] = ACTIONS(391),
    [anon_sym_STAR] = ACTIONS(391),
    [anon_sym_SLASH] = ACTIONS(391),
    [anon_sym_STAR_STAR] = ACTIONS(393),
    [anon_sym_COMMA] = ACTIONS(391),
    [anon_sym_COLON] = ACTIONS(391),
    [sym_comment] = ACTIONS(34),
  },
  [157] = {
    [anon_sym_RPAREN] = ACTIONS(397),
    [anon_sym_EQ] = ACTIONS(397),
    [anon_sym_EQ_GT] = ACTIONS(399),
    [anon_sym_PERCENT] = ACTIONS(397),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(397),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(397),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(397),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(379),
    [anon_sym_LT] = ACTIONS(397),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(397),
    [anon_sym_GT] = ACTIONS(397),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(397),
    [anon_sym_LT_EQ] = ACTIONS(399),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(397),
    [anon_sym_GT_EQ] = ACTIONS(399),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(397),
    [anon_sym_EQ_EQ] = ACTIONS(399),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(397),
    [anon_sym_SLASH_EQ] = ACTIONS(399),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(397),
    [anon_sym_SLASH_SLASH] = ACTIONS(399),
    [anon_sym_PLUS] = ACTIONS(397),
    [anon_sym_DASH] = ACTIONS(397),
    [anon_sym_STAR] = ACTIONS(397),
    [anon_sym_SLASH] = ACTIONS(397),
    [anon_sym_STAR_STAR] = ACTIONS(399),
    [anon_sym_COMMA] = ACTIONS(397),
    [anon_sym_COLON] = ACTIONS(397),
    [sym_comment] = ACTIONS(34),
  },
  [158] = {
    [aux_sym_argument_list_repeat1] = STATE(177),
    [anon_sym_RPAREN] = ACTIONS(401),
    [anon_sym_COMMA] = ACTIONS(295),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(371),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(371),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [161] = {
    [anon_sym_RPAREN] = ACTIONS(403),
    [anon_sym_PERCENT] = ACTIONS(405),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(413),
    [anon_sym_LT] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_GT] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_SLASH_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_SLASH_SLASH] = ACTIONS(419),
    [anon_sym_PLUS] = ACTIONS(421),
    [anon_sym_DASH] = ACTIONS(421),
    [anon_sym_STAR] = ACTIONS(423),
    [anon_sym_SLASH] = ACTIONS(423),
    [anon_sym_STAR_STAR] = ACTIONS(425),
    [anon_sym_COMMA] = ACTIONS(403),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(371),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [163] = {
    [anon_sym_RPAREN] = ACTIONS(427),
    [anon_sym_PERCENT] = ACTIONS(405),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(413),
    [anon_sym_LT] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_GT] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_SLASH_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_SLASH_SLASH] = ACTIONS(419),
    [anon_sym_PLUS] = ACTIONS(421),
    [anon_sym_DASH] = ACTIONS(421),
    [anon_sym_STAR] = ACTIONS(423),
    [anon_sym_SLASH] = ACTIONS(423),
    [anon_sym_STAR_STAR] = ACTIONS(425),
    [anon_sym_COMMA] = ACTIONS(427),
    [sym_comment] = ACTIONS(34),
  },
  [164] = {
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_PERCENT] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_GT] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_LT_EQ] = ACTIONS(325),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(325),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_EQ_EQ] = ACTIONS(325),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_SLASH_EQ] = ACTIONS(325),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_SLASH_SLASH] = ACTIONS(325),
    [anon_sym_PLUS] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(323),
    [anon_sym_STAR] = ACTIONS(323),
    [anon_sym_SLASH] = ACTIONS(323),
    [anon_sym_STAR_STAR] = ACTIONS(325),
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_COLON] = ACTIONS(323),
    [sym_comment] = ACTIONS(34),
  },
  [165] = {
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_PERCENT] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_LT] = ACTIONS(277),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_LT_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_SLASH_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_SLASH_SLASH] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_STAR_STAR] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(329),
    [anon_sym_COLON] = ACTIONS(329),
    [sym_comment] = ACTIONS(34),
  },
  [166] = {
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_PERCENT] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_LT] = ACTIONS(277),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_LT_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_SLASH_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_SLASH_SLASH] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_STAR_STAR] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(329),
    [anon_sym_COLON] = ACTIONS(329),
    [sym_comment] = ACTIONS(34),
  },
  [167] = {
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_PERCENT] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_LT] = ACTIONS(277),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_LT_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_SLASH_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_SLASH_SLASH] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_STAR_STAR] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(329),
    [anon_sym_COLON] = ACTIONS(329),
    [sym_comment] = ACTIONS(34),
  },
  [168] = {
    [anon_sym_RPAREN] = ACTIONS(335),
    [anon_sym_PERCENT] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(335),
    [anon_sym_GT] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(335),
    [anon_sym_LT_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(335),
    [anon_sym_GT_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(335),
    [anon_sym_EQ_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(335),
    [anon_sym_SLASH_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(335),
    [anon_sym_SLASH_SLASH] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_STAR_STAR] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(335),
    [anon_sym_COLON] = ACTIONS(335),
    [sym_comment] = ACTIONS(34),
  },
  [169] = {
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_PERCENT] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(345),
    [anon_sym_LT] = ACTIONS(341),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(341),
    [anon_sym_GT] = ACTIONS(341),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(341),
    [anon_sym_LT_EQ] = ACTIONS(343),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(341),
    [anon_sym_GT_EQ] = ACTIONS(343),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(341),
    [anon_sym_EQ_EQ] = ACTIONS(343),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(341),
    [anon_sym_SLASH_EQ] = ACTIONS(343),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(341),
    [anon_sym_SLASH_SLASH] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_STAR_STAR] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(341),
    [anon_sym_COLON] = ACTIONS(341),
    [sym_comment] = ACTIONS(34),
  },
  [170] = {
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_PERCENT] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_LT] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_GT] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_EQ_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_SLASH_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_SLASH_SLASH] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(347),
    [anon_sym_DASH] = ACTIONS(347),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_STAR_STAR] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(347),
    [anon_sym_COLON] = ACTIONS(347),
    [sym_comment] = ACTIONS(34),
  },
  [171] = {
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_PERCENT] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_LT] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_GT] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_EQ_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_SLASH_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_SLASH_SLASH] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(347),
    [anon_sym_DASH] = ACTIONS(347),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(347),
    [anon_sym_STAR_STAR] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(347),
    [anon_sym_COLON] = ACTIONS(347),
    [sym_comment] = ACTIONS(34),
  },
  [172] = {
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_PERCENT] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_LT] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_GT] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_EQ_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_SLASH_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_SLASH_SLASH] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(347),
    [anon_sym_DASH] = ACTIONS(347),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(347),
    [anon_sym_STAR_STAR] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(347),
    [anon_sym_COLON] = ACTIONS(347),
    [sym_comment] = ACTIONS(34),
  },
  [173] = {
    [anon_sym_RPAREN] = ACTIONS(429),
    [anon_sym_PERCENT] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(277),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_LT_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_SLASH_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_SLASH_SLASH] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_STAR_STAR] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(429),
    [anon_sym_COLON] = ACTIONS(291),
    [sym_comment] = ACTIONS(34),
  },
  [174] = {
    [anon_sym_RPAREN] = ACTIONS(431),
    [anon_sym_COMMA] = ACTIONS(431),
    [sym_comment] = ACTIONS(14),
  },
  [175] = {
    [anon_sym_RPAREN] = ACTIONS(403),
    [anon_sym_PERCENT] = ACTIONS(267),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(269),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(271),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(273),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(275),
    [anon_sym_LT] = ACTIONS(277),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_GT] = ACTIONS(277),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_LT_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_GT_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_EQ_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_SLASH_EQ] = ACTIONS(279),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(277),
    [anon_sym_SLASH_SLASH] = ACTIONS(281),
    [anon_sym_PLUS] = ACTIONS(283),
    [anon_sym_DASH] = ACTIONS(283),
    [anon_sym_STAR] = ACTIONS(285),
    [anon_sym_SLASH] = ACTIONS(285),
    [anon_sym_STAR_STAR] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(403),
    [anon_sym_COLON] = ACTIONS(433),
    [sym_comment] = ACTIONS(34),
  },
  [176] = {
    [anon_sym_EQ] = ACTIONS(435),
    [anon_sym_EQ_GT] = ACTIONS(435),
    [anon_sym_PERCENT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_LT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_LT_EQ] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_GT_EQ] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_EQ_EQ] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_EQ] = ACTIONS(435),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_SLASH_SLASH] = ACTIONS(435),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [anon_sym_STAR_STAR] = ACTIONS(435),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(435),
    [sym__newline] = ACTIONS(435),
  },
  [177] = {
    [aux_sym_argument_list_repeat1] = STATE(177),
    [anon_sym_RPAREN] = ACTIONS(431),
    [anon_sym_COMMA] = ACTIONS(437),
    [sym_comment] = ACTIONS(14),
  },
  [178] = {
    [sym_number_literal] = ACTIONS(440),
    [sym_comment] = ACTIONS(14),
  },
  [179] = {
    [anon_sym_PERCENT] = ACTIONS(255),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(255),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(255),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(255),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(255),
    [anon_sym_LT] = ACTIONS(255),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(255),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(255),
    [anon_sym_LT_EQ] = ACTIONS(255),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(255),
    [anon_sym_GT_EQ] = ACTIONS(255),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(255),
    [anon_sym_EQ_EQ] = ACTIONS(255),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(255),
    [anon_sym_SLASH_EQ] = ACTIONS(255),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(255),
    [anon_sym_SLASH_SLASH] = ACTIONS(255),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(255),
    [anon_sym_STAR] = ACTIONS(255),
    [anon_sym_SLASH] = ACTIONS(255),
    [anon_sym_STAR_STAR] = ACTIONS(255),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(255),
    [sym__newline] = ACTIONS(255),
  },
  [180] = {
    [anon_sym_PERCENT] = ACTIONS(301),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_GT] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_LT_EQ] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_GT_EQ] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_EQ_EQ] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_SLASH_EQ] = ACTIONS(327),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_SLASH_SLASH] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(327),
    [anon_sym_DASH] = ACTIONS(327),
    [anon_sym_STAR] = ACTIONS(327),
    [anon_sym_SLASH] = ACTIONS(327),
    [anon_sym_STAR_STAR] = ACTIONS(327),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(327),
    [sym__newline] = ACTIONS(327),
  },
  [181] = {
    [anon_sym_PERCENT] = ACTIONS(301),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_LT] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_GT] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_LT_EQ] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_GT_EQ] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_EQ_EQ] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_SLASH_EQ] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_SLASH_SLASH] = ACTIONS(311),
    [anon_sym_PLUS] = ACTIONS(313),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_STAR_STAR] = ACTIONS(317),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(333),
    [sym__newline] = ACTIONS(333),
  },
  [182] = {
    [anon_sym_PERCENT] = ACTIONS(301),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_LT] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_GT] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_LT_EQ] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_GT_EQ] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_EQ_EQ] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_SLASH_EQ] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_SLASH_SLASH] = ACTIONS(311),
    [anon_sym_PLUS] = ACTIONS(313),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_STAR_STAR] = ACTIONS(317),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(333),
    [sym__newline] = ACTIONS(333),
  },
  [183] = {
    [anon_sym_PERCENT] = ACTIONS(301),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(303),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_LT] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_GT] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_LT_EQ] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_GT_EQ] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_EQ_EQ] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_SLASH_EQ] = ACTIONS(309),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(309),
    [anon_sym_SLASH_SLASH] = ACTIONS(311),
    [anon_sym_PLUS] = ACTIONS(313),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_STAR_STAR] = ACTIONS(317),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(333),
    [sym__newline] = ACTIONS(333),
  },
  [184] = {
    [anon_sym_PERCENT] = ACTIONS(301),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(339),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(339),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(339),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(339),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(339),
    [anon_sym_GT] = ACTIONS(339),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(339),
    [anon_sym_LT_EQ] = ACTIONS(339),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(339),
    [anon_sym_GT_EQ] = ACTIONS(339),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(339),
    [anon_sym_EQ_EQ] = ACTIONS(339),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(339),
    [anon_sym_SLASH_EQ] = ACTIONS(339),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(339),
    [anon_sym_SLASH_SLASH] = ACTIONS(311),
    [anon_sym_PLUS] = ACTIONS(313),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_STAR_STAR] = ACTIONS(317),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(339),
    [sym__newline] = ACTIONS(339),
  },
  [185] = {
    [anon_sym_PERCENT] = ACTIONS(301),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(345),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(345),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(345),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(345),
    [anon_sym_LT] = ACTIONS(345),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(345),
    [anon_sym_GT] = ACTIONS(345),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(345),
    [anon_sym_LT_EQ] = ACTIONS(345),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(345),
    [anon_sym_GT_EQ] = ACTIONS(345),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(345),
    [anon_sym_EQ_EQ] = ACTIONS(345),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(345),
    [anon_sym_SLASH_EQ] = ACTIONS(345),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(345),
    [anon_sym_SLASH_SLASH] = ACTIONS(311),
    [anon_sym_PLUS] = ACTIONS(313),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_STAR_STAR] = ACTIONS(317),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(345),
    [sym__newline] = ACTIONS(345),
  },
  [186] = {
    [anon_sym_PERCENT] = ACTIONS(301),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_LT] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_GT] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_EQ_EQ] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_SLASH_EQ] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_SLASH_SLASH] = ACTIONS(351),
    [anon_sym_PLUS] = ACTIONS(351),
    [anon_sym_DASH] = ACTIONS(351),
    [anon_sym_STAR] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_STAR_STAR] = ACTIONS(317),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(351),
    [sym__newline] = ACTIONS(351),
  },
  [187] = {
    [anon_sym_PERCENT] = ACTIONS(301),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_LT] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_GT] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_EQ_EQ] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_SLASH_EQ] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_SLASH_SLASH] = ACTIONS(351),
    [anon_sym_PLUS] = ACTIONS(351),
    [anon_sym_DASH] = ACTIONS(351),
    [anon_sym_STAR] = ACTIONS(351),
    [anon_sym_SLASH] = ACTIONS(351),
    [anon_sym_STAR_STAR] = ACTIONS(317),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(351),
    [sym__newline] = ACTIONS(351),
  },
  [188] = {
    [anon_sym_PERCENT] = ACTIONS(301),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_LT] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_GT] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_EQ_EQ] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_SLASH_EQ] = ACTIONS(351),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_SLASH_SLASH] = ACTIONS(351),
    [anon_sym_PLUS] = ACTIONS(351),
    [anon_sym_DASH] = ACTIONS(351),
    [anon_sym_STAR] = ACTIONS(351),
    [anon_sym_SLASH] = ACTIONS(351),
    [anon_sym_STAR_STAR] = ACTIONS(351),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(351),
    [sym__newline] = ACTIONS(351),
  },
  [189] = {
    [ts_builtin_sym_end] = ACTIONS(442),
    [aux_sym_SLASH_LBRACKpP_RBRACK_LBRACKrR_RBRACK_LBRACKoO_RBRACK_LBRACKgG_RBRACK_LBRACKrR_RBRACK_LBRACKaA_RBRACK_LBRACKmM_RBRACK_SLASH] = ACTIONS(442),
    [sym_comment] = ACTIONS(14),
  },
  [190] = {
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(435),
    [sym__newline] = ACTIONS(435),
  },
  [191] = {
    [anon_sym_RPAREN] = ACTIONS(444),
    [anon_sym_EQ] = ACTIONS(444),
    [anon_sym_EQ_GT] = ACTIONS(446),
    [anon_sym_PERCENT] = ACTIONS(444),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(444),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(435),
    [anon_sym_LT] = ACTIONS(444),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(444),
    [anon_sym_GT] = ACTIONS(444),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(444),
    [anon_sym_LT_EQ] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(444),
    [anon_sym_GT_EQ] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(444),
    [anon_sym_EQ_EQ] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(444),
    [anon_sym_SLASH_EQ] = ACTIONS(446),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(444),
    [anon_sym_SLASH_SLASH] = ACTIONS(446),
    [anon_sym_PLUS] = ACTIONS(444),
    [anon_sym_DASH] = ACTIONS(444),
    [anon_sym_STAR] = ACTIONS(444),
    [anon_sym_SLASH] = ACTIONS(444),
    [anon_sym_STAR_STAR] = ACTIONS(446),
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_COLON] = ACTIONS(444),
    [sym_comment] = ACTIONS(34),
  },
  [192] = {
    [anon_sym_RPAREN] = ACTIONS(158),
    [anon_sym_PERCENT] = ACTIONS(405),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(158),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(162),
    [anon_sym_LT] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_GT] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_SLASH_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_SLASH_SLASH] = ACTIONS(419),
    [anon_sym_PLUS] = ACTIONS(421),
    [anon_sym_DASH] = ACTIONS(421),
    [anon_sym_STAR] = ACTIONS(423),
    [anon_sym_SLASH] = ACTIONS(423),
    [anon_sym_STAR_STAR] = ACTIONS(425),
    [anon_sym_COMMA] = ACTIONS(158),
    [sym_comment] = ACTIONS(34),
  },
  [193] = {
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_PERCENT] = ACTIONS(405),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(168),
    [anon_sym_LT] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_GT] = ACTIONS(164),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_LT_EQ] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_GT_EQ] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_EQ_EQ] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_SLASH_EQ] = ACTIONS(166),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(164),
    [anon_sym_SLASH_SLASH] = ACTIONS(166),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(164),
    [anon_sym_STAR] = ACTIONS(164),
    [anon_sym_SLASH] = ACTIONS(164),
    [anon_sym_STAR_STAR] = ACTIONS(166),
    [anon_sym_COMMA] = ACTIONS(164),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(371),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(371),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(371),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(371),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(371),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(371),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(371),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(371),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(371),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [203] = {
    [anon_sym_RPAREN] = ACTIONS(448),
    [anon_sym_PERCENT] = ACTIONS(405),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(413),
    [anon_sym_LT] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_GT] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_SLASH_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_SLASH_SLASH] = ACTIONS(419),
    [anon_sym_PLUS] = ACTIONS(421),
    [anon_sym_DASH] = ACTIONS(421),
    [anon_sym_STAR] = ACTIONS(423),
    [anon_sym_SLASH] = ACTIONS(423),
    [anon_sym_STAR_STAR] = ACTIONS(425),
    [anon_sym_COMMA] = ACTIONS(448),
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
    [anon_sym_LPAREN] = ACTIONS(48),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKoO_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(371),
    [anon_sym_PLUS] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [sym_number_literal] = ACTIONS(54),
    [sym__double_quoted_string] = ACTIONS(56),
    [sym__single_quoted_string] = ACTIONS(56),
    [sym_boolean_literal] = ACTIONS(58),
    [sym_identifier] = ACTIONS(76),
    [sym_comment] = ACTIONS(34),
  },
  [205] = {
    [anon_sym_RPAREN] = ACTIONS(450),
    [sym_comment] = ACTIONS(14),
  },
  [206] = {
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_PERCENT] = ACTIONS(405),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(327),
    [anon_sym_LT] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_GT] = ACTIONS(323),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_LT_EQ] = ACTIONS(325),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_GT_EQ] = ACTIONS(325),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_EQ_EQ] = ACTIONS(325),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_SLASH_EQ] = ACTIONS(325),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(323),
    [anon_sym_SLASH_SLASH] = ACTIONS(325),
    [anon_sym_PLUS] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(323),
    [anon_sym_STAR] = ACTIONS(323),
    [anon_sym_SLASH] = ACTIONS(323),
    [anon_sym_STAR_STAR] = ACTIONS(325),
    [anon_sym_COMMA] = ACTIONS(323),
    [sym_comment] = ACTIONS(34),
  },
  [207] = {
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_PERCENT] = ACTIONS(405),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_LT] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_GT] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_SLASH_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_SLASH_SLASH] = ACTIONS(419),
    [anon_sym_PLUS] = ACTIONS(421),
    [anon_sym_DASH] = ACTIONS(421),
    [anon_sym_STAR] = ACTIONS(423),
    [anon_sym_SLASH] = ACTIONS(423),
    [anon_sym_STAR_STAR] = ACTIONS(425),
    [anon_sym_COMMA] = ACTIONS(329),
    [sym_comment] = ACTIONS(34),
  },
  [208] = {
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_PERCENT] = ACTIONS(405),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_LT] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_GT] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_SLASH_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_SLASH_SLASH] = ACTIONS(419),
    [anon_sym_PLUS] = ACTIONS(421),
    [anon_sym_DASH] = ACTIONS(421),
    [anon_sym_STAR] = ACTIONS(423),
    [anon_sym_SLASH] = ACTIONS(423),
    [anon_sym_STAR_STAR] = ACTIONS(425),
    [anon_sym_COMMA] = ACTIONS(329),
    [sym_comment] = ACTIONS(34),
  },
  [209] = {
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_PERCENT] = ACTIONS(405),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(333),
    [anon_sym_LT] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_GT] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_SLASH_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_SLASH_SLASH] = ACTIONS(419),
    [anon_sym_PLUS] = ACTIONS(421),
    [anon_sym_DASH] = ACTIONS(421),
    [anon_sym_STAR] = ACTIONS(423),
    [anon_sym_SLASH] = ACTIONS(423),
    [anon_sym_STAR_STAR] = ACTIONS(425),
    [anon_sym_COMMA] = ACTIONS(329),
    [sym_comment] = ACTIONS(34),
  },
  [210] = {
    [anon_sym_RPAREN] = ACTIONS(335),
    [anon_sym_PERCENT] = ACTIONS(405),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(339),
    [anon_sym_LT] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(335),
    [anon_sym_GT] = ACTIONS(335),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(335),
    [anon_sym_LT_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(335),
    [anon_sym_GT_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(335),
    [anon_sym_EQ_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(335),
    [anon_sym_SLASH_EQ] = ACTIONS(337),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(335),
    [anon_sym_SLASH_SLASH] = ACTIONS(419),
    [anon_sym_PLUS] = ACTIONS(421),
    [anon_sym_DASH] = ACTIONS(421),
    [anon_sym_STAR] = ACTIONS(423),
    [anon_sym_SLASH] = ACTIONS(423),
    [anon_sym_STAR_STAR] = ACTIONS(425),
    [anon_sym_COMMA] = ACTIONS(335),
    [sym_comment] = ACTIONS(34),
  },
  [211] = {
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_PERCENT] = ACTIONS(405),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(341),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(345),
    [anon_sym_LT] = ACTIONS(341),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(341),
    [anon_sym_GT] = ACTIONS(341),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(341),
    [anon_sym_LT_EQ] = ACTIONS(343),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(341),
    [anon_sym_GT_EQ] = ACTIONS(343),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(341),
    [anon_sym_EQ_EQ] = ACTIONS(343),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(341),
    [anon_sym_SLASH_EQ] = ACTIONS(343),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(341),
    [anon_sym_SLASH_SLASH] = ACTIONS(419),
    [anon_sym_PLUS] = ACTIONS(421),
    [anon_sym_DASH] = ACTIONS(421),
    [anon_sym_STAR] = ACTIONS(423),
    [anon_sym_SLASH] = ACTIONS(423),
    [anon_sym_STAR_STAR] = ACTIONS(425),
    [anon_sym_COMMA] = ACTIONS(341),
    [sym_comment] = ACTIONS(34),
  },
  [212] = {
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_PERCENT] = ACTIONS(405),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_LT] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_GT] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_EQ_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_SLASH_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_SLASH_SLASH] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(347),
    [anon_sym_DASH] = ACTIONS(347),
    [anon_sym_STAR] = ACTIONS(423),
    [anon_sym_SLASH] = ACTIONS(423),
    [anon_sym_STAR_STAR] = ACTIONS(425),
    [anon_sym_COMMA] = ACTIONS(347),
    [sym_comment] = ACTIONS(34),
  },
  [213] = {
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_PERCENT] = ACTIONS(405),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_LT] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_GT] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_EQ_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_SLASH_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_SLASH_SLASH] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(347),
    [anon_sym_DASH] = ACTIONS(347),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(347),
    [anon_sym_STAR_STAR] = ACTIONS(425),
    [anon_sym_COMMA] = ACTIONS(347),
    [sym_comment] = ACTIONS(34),
  },
  [214] = {
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_PERCENT] = ACTIONS(405),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(351),
    [anon_sym_LT] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_GT] = ACTIONS(347),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_LT_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_GT_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_EQ_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_SLASH_EQ] = ACTIONS(349),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(347),
    [anon_sym_SLASH_SLASH] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(347),
    [anon_sym_DASH] = ACTIONS(347),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(347),
    [anon_sym_STAR_STAR] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(347),
    [sym_comment] = ACTIONS(34),
  },
  [215] = {
    [anon_sym_RPAREN] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(405),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(407),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(409),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(411),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(413),
    [anon_sym_LT] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_GT] = ACTIONS(415),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_LT_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_GT_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_EQ_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_SLASH_EQ] = ACTIONS(417),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(415),
    [anon_sym_SLASH_SLASH] = ACTIONS(419),
    [anon_sym_PLUS] = ACTIONS(421),
    [anon_sym_DASH] = ACTIONS(421),
    [anon_sym_STAR] = ACTIONS(423),
    [anon_sym_SLASH] = ACTIONS(423),
    [anon_sym_STAR_STAR] = ACTIONS(425),
    [anon_sym_COMMA] = ACTIONS(452),
    [sym_comment] = ACTIONS(34),
  },
  [216] = {
    [anon_sym_PERCENT] = ACTIONS(395),
    [aux_sym_SLASH_DOT_LBRACKoO_RBRACK_LBRACKrR_RBRACK_DOT_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_DOT_LBRACKaA_RBRACK_LBRACKnN_RBRACK_LBRACKdD_RBRACK_DOT_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(395),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_LBRACKvV_RBRACK_DOT_SLASH] = ACTIONS(395),
    [anon_sym_LT] = ACTIONS(395),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(395),
    [anon_sym_GT] = ACTIONS(395),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKtT_RBRACK_DOT_SLASH] = ACTIONS(395),
    [anon_sym_LT_EQ] = ACTIONS(395),
    [aux_sym_SLASH_DOT_LBRACKlL_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(395),
    [anon_sym_GT_EQ] = ACTIONS(395),
    [aux_sym_SLASH_DOT_LBRACKgG_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(395),
    [anon_sym_EQ_EQ] = ACTIONS(395),
    [aux_sym_SLASH_DOT_LBRACKeE_RBRACK_LBRACKqQ_RBRACK_DOT_SLASH] = ACTIONS(395),
    [anon_sym_SLASH_EQ] = ACTIONS(395),
    [aux_sym_SLASH_DOT_LBRACKnN_RBRACK_LBRACKeE_RBRACK_DOT_SLASH] = ACTIONS(395),
    [anon_sym_SLASH_SLASH] = ACTIONS(395),
    [anon_sym_PLUS] = ACTIONS(395),
    [anon_sym_DASH] = ACTIONS(395),
    [anon_sym_STAR] = ACTIONS(395),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_STAR_STAR] = ACTIONS(395),
    [sym_comment] = ACTIONS(34),
    [sym__semicolon] = ACTIONS(395),
    [sym__newline] = ACTIONS(395),
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
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__end_of_statement, 1),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(14),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(15),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(18),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(19),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(20),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(25),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(28),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string_literal, 1),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string_literal, 1),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(46),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(47),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(48),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(49),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(51),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(52),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(53),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
  [122] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 5),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_subroutine_call, 2),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(75),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(76),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_logical_expression, 2),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 2),
  [162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 2),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 2),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [168] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 2),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(82),
  [180] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2),
  [184] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
  [194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(88),
  [200] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [202] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(13),
  [205] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(14),
  [208] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(15),
  [211] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(16),
  [214] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(17),
  [217] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(18),
  [220] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(19),
  [223] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(18),
  [226] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 2), SHIFT_REPEAT(20),
  [229] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(102),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 6),
  [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(104),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_block_repeat1, 3),
  [237] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 3),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_block_repeat1, 3),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_call_expression, 2),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_call_expression, 2),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_expression, 3),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [255] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_expression, 3),
  [257] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 1),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [275] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(130),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(131),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(132),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [297] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(139),
  [299] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(143),
  [303] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(144),
  [305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(145),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(146),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(147),
  [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(148),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(149),
  [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(150),
  [317] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(151),
  [319] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3),
  [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_pointer_assignment_expression, 3),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [327] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_derived_type_member_expression, 3, .fragile = true),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_logical_expression, 3),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 3),
  [333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_logical_expression, 3),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [341] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_concatenation_expression, 3, .fragile = true),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_expression, 3),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [351] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_expression, 3),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 7),
  [355] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(153),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(156),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 2, .dynamic_precedence = 1),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 2),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
  [379] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
  [385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(179),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 8),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_complex_literal, 5),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [395] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_complex_literal, 5),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 3, .dynamic_precedence = 1),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 3),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
  [413] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(197),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
  [421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(201),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_keyword_argument, 3),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
  [435] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [437] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(136),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_block, 9),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_argument_list, 4, .dynamic_precedence = 1),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 4),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_array_slice, 5),
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
