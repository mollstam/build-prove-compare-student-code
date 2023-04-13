#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 2
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 9

enum {
  sym_numeral = 1,
  sym_comment = 2,
  sym__identifier = 3,
  anon_sym_val = 4,
  anon_sym_define = 5,
  anon_sym_use = 6,
  anon_sym_check_DASHexpect = 7,
  anon_sym_check_DASHassert = 8,
  anon_sym_check_DASHerror = 9,
  anon_sym_set = 10,
  anon_sym_if = 11,
  anon_sym_while = 12,
  anon_sym_begin = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  sym_program = 16,
  sym__def = 17,
  sym__unit_test = 18,
  sym__exp = 19,
  sym__literal = 20,
  sym_formals = 21,
  sym_variable_definition = 22,
  sym_function_definition = 23,
  sym_use_keyword = 24,
  sym_check_expect_keyword = 25,
  sym_check_assert_keyword = 26,
  sym_check_error_keyword = 27,
  sym_begin_keyword = 28,
  sym_function_call = 29,
  sym_set_keyword = 30,
  sym_if_expression = 31,
  sym_while_expression = 32,
  aux_sym_program_repeat1 = 33,
  aux_sym_formals_repeat1 = 34,
  aux_sym_begin_keyword_repeat1 = 35,
  alias_sym_file_name = 36,
  alias_sym_function_name = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_numeral] = "numeral",
  [sym_comment] = "comment",
  [sym__identifier] = "variable_name",
  [anon_sym_val] = "val",
  [anon_sym_define] = "define",
  [anon_sym_use] = "use",
  [anon_sym_check_DASHexpect] = "check-expect",
  [anon_sym_check_DASHassert] = "check-assert",
  [anon_sym_check_DASHerror] = "check-error",
  [anon_sym_set] = "set",
  [anon_sym_if] = "if",
  [anon_sym_while] = "while",
  [anon_sym_begin] = "begin",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_program] = "program",
  [sym__def] = "_def",
  [sym__unit_test] = "_unit_test",
  [sym__exp] = "_exp",
  [sym__literal] = "_literal",
  [sym_formals] = "formals",
  [sym_variable_definition] = "variable_definition",
  [sym_function_definition] = "function_definition",
  [sym_use_keyword] = "use_keyword",
  [sym_check_expect_keyword] = "check_expect_keyword",
  [sym_check_assert_keyword] = "check_assert_keyword",
  [sym_check_error_keyword] = "check_error_keyword",
  [sym_begin_keyword] = "begin_keyword",
  [sym_function_call] = "function_call",
  [sym_set_keyword] = "set_keyword",
  [sym_if_expression] = "if_expression",
  [sym_while_expression] = "while_expression",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_formals_repeat1] = "formals_repeat1",
  [aux_sym_begin_keyword_repeat1] = "begin_keyword_repeat1",
  [alias_sym_file_name] = "file_name",
  [alias_sym_function_name] = "function_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_numeral] = sym_numeral,
  [sym_comment] = sym_comment,
  [sym__identifier] = sym__identifier,
  [anon_sym_val] = anon_sym_val,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_check_DASHexpect] = anon_sym_check_DASHexpect,
  [anon_sym_check_DASHassert] = anon_sym_check_DASHassert,
  [anon_sym_check_DASHerror] = anon_sym_check_DASHerror,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_begin] = anon_sym_begin,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_program] = sym_program,
  [sym__def] = sym__def,
  [sym__unit_test] = sym__unit_test,
  [sym__exp] = sym__exp,
  [sym__literal] = sym__literal,
  [sym_formals] = sym_formals,
  [sym_variable_definition] = sym_variable_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_use_keyword] = sym_use_keyword,
  [sym_check_expect_keyword] = sym_check_expect_keyword,
  [sym_check_assert_keyword] = sym_check_assert_keyword,
  [sym_check_error_keyword] = sym_check_error_keyword,
  [sym_begin_keyword] = sym_begin_keyword,
  [sym_function_call] = sym_function_call,
  [sym_set_keyword] = sym_set_keyword,
  [sym_if_expression] = sym_if_expression,
  [sym_while_expression] = sym_while_expression,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_formals_repeat1] = aux_sym_formals_repeat1,
  [aux_sym_begin_keyword_repeat1] = aux_sym_begin_keyword_repeat1,
  [alias_sym_file_name] = alias_sym_file_name,
  [alias_sym_function_name] = alias_sym_function_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_numeral] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_val] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check_DASHexpect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check_DASHassert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check_DASHerror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin] = {
    .visible = true,
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
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__def] = {
    .visible = false,
    .named = true,
  },
  [sym__unit_test] = {
    .visible = false,
    .named = true,
  },
  [sym__exp] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_formals] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_use_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_check_expect_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_check_assert_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_check_error_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_set_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_if_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_while_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_formals_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_begin_keyword_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_file_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_formals = 1,
  field_name = 2,
  field_val = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_formals] = "formals",
  [field_name] = "name",
  [field_val] = "val",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 2},
  [2] =
    {field_name, 0},
  [3] =
    {field_name, 2},
    {field_val, 3},
  [5] =
    {field_name, 1, .inherited = true},
  [6] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [8] =
    {field_formals, 3},
    {field_name, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_function_name,
  },
  [2] = {
    [2] = alias_sym_file_name,
  },
  [8] = {
    [2] = alias_sym_function_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 4,
  [11] = 9,
  [12] = 7,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 15,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 16,
  [23] = 23,
  [24] = 24,
  [25] = 17,
  [26] = 21,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 29,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 34,
  [40] = 40,
  [41] = 41,
  [42] = 38,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 36,
  [47] = 47,
  [48] = 48,
  [49] = 37,
  [50] = 35,
  [51] = 33,
  [52] = 32,
  [53] = 40,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 65,
  [70] = 64,
  [71] = 61,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 74,
  [76] = 76,
  [77] = 77,
  [78] = 78,
};

static inline bool sym_comment_character_set_1(int32_t c) {
  return (c < '0'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= ' ' || (c >= '(' && c <= ')')))
    : (c <= '9' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym__identifier_character_set_1(int32_t c) {
  return (c < '0'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? c == ' '
        : c <= ')')))
    : (c <= '9' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym__identifier_character_set_2(int32_t c) {
  return (c < '('
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= ')' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead == 'v') ADVANCE(10);
      if (lookahead == 'w') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(42);
      if (lookahead == 'v') ADVANCE(10);
      if (lookahead == 'w') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(49);
      END_STATE();
    case 2:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == 'w') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '(' &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(49);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (lookahead == ';') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(49);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_numeral);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comment);
      if (sym_comment_character_set_1(lookahead)) ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(11);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(32);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(38);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(31);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(47);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(25);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(45);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(12);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(52);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(58);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(51);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(24);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(13);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(41);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(57);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(30);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(28);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(29);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(16);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(34);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(33);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(35);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(9);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(50);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(18);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(59);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(19);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(40);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(21);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 'x') ADVANCE(37);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(36);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(55);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(46);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(17);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(22);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(43);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(56);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(54);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(53);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (!sym__identifier_character_set_2(lookahead)) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__identifier);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_val);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_define);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_use);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_check_DASHexpect);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_check_DASHassert);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_check_DASHerror);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_set);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_if);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_while);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_begin);
      if (!sym__identifier_character_set_1(lookahead)) ADVANCE(49);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_numeral] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__identifier] = ACTIONS(1),
    [anon_sym_val] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_check_DASHexpect] = ACTIONS(1),
    [anon_sym_check_DASHassert] = ACTIONS(1),
    [anon_sym_check_DASHerror] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(62),
    [sym__def] = STATE(2),
    [sym__unit_test] = STATE(2),
    [sym__exp] = STATE(2),
    [sym__literal] = STATE(2),
    [sym_variable_definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_use_keyword] = STATE(2),
    [sym_check_expect_keyword] = STATE(2),
    [sym_check_assert_keyword] = STATE(2),
    [sym_check_error_keyword] = STATE(2),
    [sym_begin_keyword] = STATE(2),
    [sym_function_call] = STATE(2),
    [sym_set_keyword] = STATE(2),
    [sym_if_expression] = STATE(2),
    [sym_while_expression] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_numeral] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
  },
  [2] = {
    [sym__def] = STATE(3),
    [sym__unit_test] = STATE(3),
    [sym__exp] = STATE(3),
    [sym__literal] = STATE(3),
    [sym_variable_definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_use_keyword] = STATE(3),
    [sym_check_expect_keyword] = STATE(3),
    [sym_check_assert_keyword] = STATE(3),
    [sym_check_error_keyword] = STATE(3),
    [sym_begin_keyword] = STATE(3),
    [sym_function_call] = STATE(3),
    [sym_set_keyword] = STATE(3),
    [sym_if_expression] = STATE(3),
    [sym_while_expression] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_numeral] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym__identifier] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(11),
  },
  [3] = {
    [sym__def] = STATE(3),
    [sym__unit_test] = STATE(3),
    [sym__exp] = STATE(3),
    [sym__literal] = STATE(3),
    [sym_variable_definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_use_keyword] = STATE(3),
    [sym_check_expect_keyword] = STATE(3),
    [sym_check_assert_keyword] = STATE(3),
    [sym_check_error_keyword] = STATE(3),
    [sym_begin_keyword] = STATE(3),
    [sym_function_call] = STATE(3),
    [sym_set_keyword] = STATE(3),
    [sym_if_expression] = STATE(3),
    [sym_while_expression] = STATE(3),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_numeral] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [sym__identifier] = ACTIONS(24),
    [anon_sym_LPAREN] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      sym_numeral,
    ACTIONS(32), 1,
      sym__identifier,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(36), 1,
      anon_sym_RPAREN,
    STATE(8), 8,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
      aux_sym_begin_keyword_repeat1,
  [26] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(38), 1,
      sym_numeral,
    ACTIONS(40), 1,
      sym__identifier,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    STATE(4), 8,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
      aux_sym_begin_keyword_repeat1,
  [52] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(44), 1,
      sym_numeral,
    ACTIONS(46), 1,
      sym__identifier,
    ACTIONS(48), 1,
      anon_sym_RPAREN,
    STATE(10), 8,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
      aux_sym_begin_keyword_repeat1,
  [78] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      sym_numeral,
    ACTIONS(52), 1,
      sym__identifier,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
    STATE(11), 8,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
      aux_sym_begin_keyword_repeat1,
  [104] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      sym_numeral,
    ACTIONS(59), 1,
      sym__identifier,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(8), 8,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
      aux_sym_begin_keyword_repeat1,
  [130] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      sym_numeral,
    ACTIONS(32), 1,
      sym__identifier,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(8), 8,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
      aux_sym_begin_keyword_repeat1,
  [156] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      sym_numeral,
    ACTIONS(32), 1,
      sym__identifier,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(8), 8,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
      aux_sym_begin_keyword_repeat1,
  [182] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      sym_numeral,
    ACTIONS(32), 1,
      sym__identifier,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(8), 8,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
      aux_sym_begin_keyword_repeat1,
  [208] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      sym_numeral,
    ACTIONS(75), 1,
      sym__identifier,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(9), 8,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
      aux_sym_begin_keyword_repeat1,
  [234] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym__identifier,
    ACTIONS(81), 1,
      anon_sym_val,
    ACTIONS(83), 1,
      anon_sym_define,
    ACTIONS(85), 1,
      anon_sym_use,
    ACTIONS(87), 1,
      anon_sym_check_DASHexpect,
    ACTIONS(89), 1,
      anon_sym_check_DASHassert,
    ACTIONS(91), 1,
      anon_sym_check_DASHerror,
    ACTIONS(93), 1,
      anon_sym_set,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      anon_sym_while,
    ACTIONS(99), 1,
      anon_sym_begin,
  [271] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_numeral,
    ACTIONS(103), 1,
      sym__identifier,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(68), 7,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
  [293] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      sym_numeral,
    ACTIONS(109), 1,
      sym__identifier,
    STATE(30), 7,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
  [315] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      sym_numeral,
    ACTIONS(113), 1,
      sym__identifier,
    STATE(15), 7,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
  [337] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      sym_numeral,
    ACTIONS(117), 1,
      sym__identifier,
    STATE(28), 7,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
  [359] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      sym_numeral,
    ACTIONS(121), 1,
      sym__identifier,
    STATE(29), 7,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
  [381] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      sym_numeral,
    ACTIONS(125), 1,
      sym__identifier,
    STATE(73), 7,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
  [403] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      sym_numeral,
    ACTIONS(129), 1,
      sym__identifier,
    STATE(66), 7,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
  [425] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_numeral,
    ACTIONS(133), 1,
      sym__identifier,
    STATE(69), 7,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
  [447] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      sym_numeral,
    ACTIONS(137), 1,
      sym__identifier,
    STATE(18), 7,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
  [469] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      sym_numeral,
    ACTIONS(141), 1,
      sym__identifier,
    STATE(63), 7,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
  [491] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      sym_numeral,
    ACTIONS(145), 1,
      sym__identifier,
    STATE(67), 7,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
  [513] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      sym_numeral,
    ACTIONS(149), 1,
      sym__identifier,
    STATE(27), 7,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
  [535] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      sym_numeral,
    ACTIONS(153), 1,
      sym__identifier,
    STATE(65), 7,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
  [557] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      sym_numeral,
    ACTIONS(157), 1,
      sym__identifier,
    STATE(70), 7,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
  [579] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      sym_numeral,
    ACTIONS(161), 1,
      sym__identifier,
    STATE(64), 7,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
  [601] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      sym_numeral,
    ACTIONS(165), 1,
      sym__identifier,
    STATE(71), 7,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
  [623] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      sym_numeral,
    ACTIONS(169), 1,
      sym__identifier,
    STATE(61), 7,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
  [645] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_LPAREN,
    ACTIONS(171), 1,
      sym_numeral,
    ACTIONS(173), 1,
      sym__identifier,
    STATE(23), 7,
      sym__exp,
      sym__literal,
      sym_begin_keyword,
      sym_function_call,
      sym_set_keyword,
      sym_if_expression,
      sym_while_expression,
  [667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym__identifier,
    ACTIONS(175), 4,
      ts_builtin_sym_end,
      sym_numeral,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym__identifier,
    ACTIONS(179), 4,
      ts_builtin_sym_end,
      sym_numeral,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [693] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym__identifier,
    ACTIONS(93), 1,
      anon_sym_set,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      anon_sym_while,
    ACTIONS(99), 1,
      anon_sym_begin,
  [712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym__identifier,
    ACTIONS(183), 4,
      ts_builtin_sym_end,
      sym_numeral,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym__identifier,
    ACTIONS(187), 4,
      ts_builtin_sym_end,
      sym_numeral,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym__identifier,
    ACTIONS(191), 4,
      ts_builtin_sym_end,
      sym_numeral,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym__identifier,
    ACTIONS(195), 4,
      ts_builtin_sym_end,
      sym_numeral,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [764] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym__identifier,
    ACTIONS(201), 1,
      anon_sym_set,
    ACTIONS(203), 1,
      anon_sym_if,
    ACTIONS(205), 1,
      anon_sym_while,
    ACTIONS(207), 1,
      anon_sym_begin,
  [783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__identifier,
    ACTIONS(209), 4,
      ts_builtin_sym_end,
      sym_numeral,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym__identifier,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      sym_numeral,
      anon_sym_LPAREN,
  [808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym__identifier,
    ACTIONS(195), 3,
      sym_numeral,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym__identifier,
    ACTIONS(217), 3,
      ts_builtin_sym_end,
      sym_numeral,
      anon_sym_LPAREN,
  [832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(221), 3,
      ts_builtin_sym_end,
      sym_numeral,
      anon_sym_LPAREN,
  [844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym__identifier,
    ACTIONS(225), 3,
      ts_builtin_sym_end,
      sym_numeral,
      anon_sym_LPAREN,
  [856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym__identifier,
    ACTIONS(187), 3,
      sym_numeral,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(229), 3,
      ts_builtin_sym_end,
      sym_numeral,
      anon_sym_LPAREN,
  [880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym__identifier,
    ACTIONS(233), 3,
      ts_builtin_sym_end,
      sym_numeral,
      anon_sym_LPAREN,
  [892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym__identifier,
    ACTIONS(191), 3,
      sym_numeral,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym__identifier,
    ACTIONS(183), 3,
      sym_numeral,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym__identifier,
    ACTIONS(179), 3,
      sym_numeral,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym__identifier,
    ACTIONS(175), 3,
      sym_numeral,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__identifier,
    ACTIONS(209), 3,
      sym_numeral,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym__identifier,
    ACTIONS(237), 2,
      sym_numeral,
      anon_sym_LPAREN,
  [963] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym__identifier,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_formals_repeat1,
  [976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym__identifier,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_formals_repeat1,
  [989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym__identifier,
    ACTIONS(247), 2,
      sym_numeral,
      anon_sym_LPAREN,
  [1000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym__identifier,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_formals_repeat1,
  [1013] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_formals,
  [1023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym__identifier,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
  [1033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
  [1040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
  [1047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
  [1054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_RPAREN,
  [1061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
  [1068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
  [1075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
  [1082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
  [1089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
  [1096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
  [1103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
  [1110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
  [1117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
  [1124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym__identifier,
  [1131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym__identifier,
  [1138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym__identifier,
  [1145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym__identifier,
  [1152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym__identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 26,
  [SMALL_STATE(6)] = 52,
  [SMALL_STATE(7)] = 78,
  [SMALL_STATE(8)] = 104,
  [SMALL_STATE(9)] = 130,
  [SMALL_STATE(10)] = 156,
  [SMALL_STATE(11)] = 182,
  [SMALL_STATE(12)] = 208,
  [SMALL_STATE(13)] = 234,
  [SMALL_STATE(14)] = 271,
  [SMALL_STATE(15)] = 293,
  [SMALL_STATE(16)] = 315,
  [SMALL_STATE(17)] = 337,
  [SMALL_STATE(18)] = 359,
  [SMALL_STATE(19)] = 381,
  [SMALL_STATE(20)] = 403,
  [SMALL_STATE(21)] = 425,
  [SMALL_STATE(22)] = 447,
  [SMALL_STATE(23)] = 469,
  [SMALL_STATE(24)] = 491,
  [SMALL_STATE(25)] = 513,
  [SMALL_STATE(26)] = 535,
  [SMALL_STATE(27)] = 557,
  [SMALL_STATE(28)] = 579,
  [SMALL_STATE(29)] = 601,
  [SMALL_STATE(30)] = 623,
  [SMALL_STATE(31)] = 645,
  [SMALL_STATE(32)] = 667,
  [SMALL_STATE(33)] = 680,
  [SMALL_STATE(34)] = 693,
  [SMALL_STATE(35)] = 712,
  [SMALL_STATE(36)] = 725,
  [SMALL_STATE(37)] = 738,
  [SMALL_STATE(38)] = 751,
  [SMALL_STATE(39)] = 764,
  [SMALL_STATE(40)] = 783,
  [SMALL_STATE(41)] = 796,
  [SMALL_STATE(42)] = 808,
  [SMALL_STATE(43)] = 820,
  [SMALL_STATE(44)] = 832,
  [SMALL_STATE(45)] = 844,
  [SMALL_STATE(46)] = 856,
  [SMALL_STATE(47)] = 868,
  [SMALL_STATE(48)] = 880,
  [SMALL_STATE(49)] = 892,
  [SMALL_STATE(50)] = 904,
  [SMALL_STATE(51)] = 916,
  [SMALL_STATE(52)] = 928,
  [SMALL_STATE(53)] = 940,
  [SMALL_STATE(54)] = 952,
  [SMALL_STATE(55)] = 963,
  [SMALL_STATE(56)] = 976,
  [SMALL_STATE(57)] = 989,
  [SMALL_STATE(58)] = 1000,
  [SMALL_STATE(59)] = 1013,
  [SMALL_STATE(60)] = 1023,
  [SMALL_STATE(61)] = 1033,
  [SMALL_STATE(62)] = 1040,
  [SMALL_STATE(63)] = 1047,
  [SMALL_STATE(64)] = 1054,
  [SMALL_STATE(65)] = 1061,
  [SMALL_STATE(66)] = 1068,
  [SMALL_STATE(67)] = 1075,
  [SMALL_STATE(68)] = 1082,
  [SMALL_STATE(69)] = 1089,
  [SMALL_STATE(70)] = 1096,
  [SMALL_STATE(71)] = 1103,
  [SMALL_STATE(72)] = 1110,
  [SMALL_STATE(73)] = 1117,
  [SMALL_STATE(74)] = 1124,
  [SMALL_STATE(75)] = 1131,
  [SMALL_STATE(76)] = 1138,
  [SMALL_STATE(77)] = 1145,
  [SMALL_STATE(78)] = 1152,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(13),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_begin_keyword_repeat1, 2), SHIFT_REPEAT(8),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_begin_keyword_repeat1, 2), SHIFT_REPEAT(8),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_begin_keyword_repeat1, 2), SHIFT_REPEAT(39),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_begin_keyword_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_keyword, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begin_keyword, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 6),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 6),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expression, 5),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_expression, 5),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_keyword, 5, .production_id = 5),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_keyword, 5, .production_id = 5),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_begin_keyword, 4),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_begin_keyword, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_error_keyword, 4),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_error_keyword, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, .production_id = 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5, .production_id = 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_expect_keyword, 5),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_expect_keyword, 5),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_keyword, 4, .production_id = 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_use_keyword, 4, .production_id = 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_assert_keyword, 4),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_assert_keyword, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 8),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, .production_id = 8),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formals, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formals, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_formals, 3, .production_id = 6),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_formals, 3, .production_id = 6),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_formals_repeat1, 2, .production_id = 7), SHIFT_REPEAT(60),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formals_repeat1, 2, .production_id = 7),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_formals_repeat1, 1, .production_id = 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_formals_repeat1, 1, .production_id = 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [264] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_impcore(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
