#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 17
#define SYMBOL_COUNT 10
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  aux_sym_SLASHprogram_PIPEPROGRAM_SLASH = 1,
  anon_sym_LF = 2,
  sym_identifier = 3,
  sym_end_statement = 4,
  sym_comment = 5,
  sym_translation_unit = 6,
  sym__top_level_item = 7,
  sym_program_statement = 8,
  aux_sym_translation_unit_repeat1 = 9,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASHprogram_PIPEPROGRAM_SLASH] = "/program|PROGRAM/",
  [anon_sym_LF] = "\n",
  [sym_identifier] = "identifier",
  [sym_end_statement] = "end_statement",
  [sym_comment] = "comment",
  [sym_translation_unit] = "translation_unit",
  [sym__top_level_item] = "_top_level_item",
  [sym_program_statement] = "program_statement",
  [aux_sym_translation_unit_repeat1] = "translation_unit_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_SLASHprogram_PIPEPROGRAM_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_end_statement] = {
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
  [sym_program_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_translation_unit_repeat1] = {
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
      if (lookahead == 'E')
        ADVANCE(3);
      if (lookahead == 'P')
        ADVANCE(6);
      if (lookahead == 'e')
        ADVANCE(13);
      if (lookahead == 'p')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D')
        ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R')
        ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A')
        ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_SLASHprogram_PIPEPROGRAM_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd')
        ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g')
        ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 21:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == 'E')
        ADVANCE(22);
      if (lookahead == 'P')
        ADVANCE(25);
      if (lookahead == 'e')
        ADVANCE(32);
      if (lookahead == 'p')
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(21);
      END_STATE();
    case 22:
      if (lookahead == 'N')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'D')
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_end_statement);
      END_STATE();
    case 25:
      if (lookahead == 'R')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'O')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'G')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'R')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'A')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'M')
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_SLASHprogram_PIPEPROGRAM_SLASH);
      END_STATE();
    case 32:
      if (lookahead == 'n')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'd')
        ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'r')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'o')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'g')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'r')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'a')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'm')
        ADVANCE(31);
      END_STATE();
    case 40:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 41:
      if (lookahead == '\n')
        ADVANCE(42);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 40},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 41},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 21},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 21},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASHprogram_PIPEPROGRAM_SLASH] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_end_statement] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_translation_unit] = STATE(3),
    [sym__top_level_item] = STATE(4),
    [sym_program_statement] = STATE(5),
    [aux_sym_translation_unit_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(10),
    [aux_sym_SLASHprogram_PIPEPROGRAM_SLASH] = ACTIONS(12),
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
    [aux_sym_SLASHprogram_PIPEPROGRAM_SLASH] = ACTIONS(20),
    [sym_end_statement] = ACTIONS(20),
    [sym_comment] = ACTIONS(14),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(22),
    [aux_sym_SLASHprogram_PIPEPROGRAM_SLASH] = ACTIONS(22),
    [sym_end_statement] = ACTIONS(22),
    [sym_comment] = ACTIONS(14),
  },
  [6] = {
    [sym__top_level_item] = STATE(8),
    [sym_program_statement] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(24),
    [aux_sym_SLASHprogram_PIPEPROGRAM_SLASH] = ACTIONS(12),
    [sym_comment] = ACTIONS(14),
  },
  [7] = {
    [anon_sym_LF] = ACTIONS(26),
    [sym_comment] = ACTIONS(28),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(30),
    [aux_sym_SLASHprogram_PIPEPROGRAM_SLASH] = ACTIONS(30),
    [sym_end_statement] = ACTIONS(30),
    [sym_comment] = ACTIONS(14),
  },
  [9] = {
    [sym__top_level_item] = STATE(4),
    [sym_program_statement] = STATE(5),
    [aux_sym_translation_unit_repeat1] = STATE(11),
    [aux_sym_SLASHprogram_PIPEPROGRAM_SLASH] = ACTIONS(12),
    [sym_end_statement] = ACTIONS(32),
    [sym_comment] = ACTIONS(14),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(34),
    [aux_sym_SLASHprogram_PIPEPROGRAM_SLASH] = ACTIONS(36),
    [sym_end_statement] = ACTIONS(34),
    [sym_comment] = ACTIONS(14),
  },
  [11] = {
    [sym__top_level_item] = STATE(8),
    [sym_program_statement] = STATE(5),
    [aux_sym_SLASHprogram_PIPEPROGRAM_SLASH] = ACTIONS(12),
    [sym_end_statement] = ACTIONS(38),
    [sym_comment] = ACTIONS(14),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [aux_sym_SLASHprogram_PIPEPROGRAM_SLASH] = ACTIONS(42),
    [sym_identifier] = ACTIONS(44),
    [sym_end_statement] = ACTIONS(46),
    [sym_comment] = ACTIONS(14),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [aux_sym_SLASHprogram_PIPEPROGRAM_SLASH] = ACTIONS(48),
    [sym_end_statement] = ACTIONS(40),
    [sym_comment] = ACTIONS(14),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(50),
    [aux_sym_SLASHprogram_PIPEPROGRAM_SLASH] = ACTIONS(50),
    [sym_end_statement] = ACTIONS(50),
    [sym_comment] = ACTIONS(14),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(50),
    [aux_sym_SLASHprogram_PIPEPROGRAM_SLASH] = ACTIONS(52),
    [sym_identifier] = ACTIONS(54),
    [sym_end_statement] = ACTIONS(56),
    [sym_comment] = ACTIONS(14),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [aux_sym_SLASHprogram_PIPEPROGRAM_SLASH] = ACTIONS(58),
    [sym_end_statement] = ACTIONS(58),
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
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_statement, 4, .fragile = true),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_statement, 5, .fragile = true),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_program_statement, 5, .fragile = true),
  [44] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [46] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_program_statement, 5, .fragile = true),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_statement, 6),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_program_statement, 6),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [56] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_program_statement, 6),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program_statement, 7),
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
