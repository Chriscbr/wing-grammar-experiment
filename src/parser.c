#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 171
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 103
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 26

enum {
  anon_sym_SEMI = 1,
  anon_sym_let = 2,
  anon_sym_EQ = 3,
  anon_sym_bring = 4,
  anon_sym_as = 5,
  sym_var_specifier = 6,
  anon_sym_DASH = 7,
  anon_sym_BANG = 8,
  anon_sym_PLUS = 9,
  anon_sym_STAR = 10,
  anon_sym_SLASH = 11,
  anon_sym_BSLASH = 12,
  anon_sym_PERCENT = 13,
  anon_sym_STAR_STAR = 14,
  anon_sym_PIPE_PIPE = 15,
  anon_sym_AMP_AMP = 16,
  anon_sym_EQ_EQ = 17,
  anon_sym_BANG_EQ = 18,
  anon_sym_GT = 19,
  anon_sym_GT_EQ = 20,
  anon_sym_LT_EQ = 21,
  anon_sym_LT = 22,
  anon_sym_QMARK_QMARK = 23,
  anon_sym_LPAREN = 24,
  anon_sym_RPAREN = 25,
  anon_sym_if = 26,
  anon_sym_else = 27,
  anon_sym_LBRACE = 28,
  anon_sym_RBRACE = 29,
  anon_sym_return = 30,
  sym_break_expression = 31,
  sym_continue_expression = 32,
  anon_sym_LBRACK = 33,
  anon_sym_RBRACK = 34,
  anon_sym_new = 35,
  anon_sym_COMMA = 36,
  anon_sym_for = 37,
  anon_sym_in = 38,
  anon_sym_while = 39,
  anon_sym_PLUS_EQ = 40,
  anon_sym_DASH_EQ = 41,
  sym_identifier = 42,
  anon_sym_DOT = 43,
  anon_sym_QMARK_DOT = 44,
  anon_sym_COLON = 45,
  anon_sym_QMARK = 46,
  anon_sym_Array = 47,
  anon_sym_Set = 48,
  anon_sym_Map = 49,
  anon_sym_Promise = 50,
  anon_sym_num = 51,
  anon_sym_bool = 52,
  anon_sym_any = 53,
  anon_sym_str = 54,
  anon_sym_void = 55,
  anon_sym_duration = 56,
  anon_sym_inflight = 57,
  sym_number_literal = 58,
  sym_string_literal = 59,
  anon_sym_true = 60,
  anon_sym_false = 61,
  sym_source_file = 62,
  sym__statement = 63,
  sym_expression_statement = 64,
  sym_empty_statement = 65,
  sym__declaration_statement = 66,
  sym_let_declaration = 67,
  sym_bring_declaration = 68,
  sym_bring_alias = 69,
  sym__expression = 70,
  sym_unary_expression = 71,
  sym_binary_expression = 72,
  sym_parenthesized_expression = 73,
  sym_if_expression = 74,
  sym__condition = 75,
  sym_let_condition = 76,
  sym_else_clause = 77,
  sym_block = 78,
  sym_return_expression = 79,
  sym_index_expression = 80,
  sym_new_expression = 81,
  sym_for_expression = 82,
  sym_while_expression = 83,
  sym_assign_expression = 84,
  sym_assign_operator = 85,
  sym_call_expression = 86,
  sym_member_expression = 87,
  sym_access_operator = 88,
  sym_type_annotation = 89,
  sym__type = 90,
  sym_type_path = 91,
  sym_function_type = 92,
  sym_optional_type = 93,
  sym_container_type = 94,
  sym_primitive_type = 95,
  sym_phase_specifier = 96,
  sym_literal = 97,
  sym_boolean_literal = 98,
  aux_sym_source_file_repeat1 = 99,
  aux_sym_new_expression_repeat1 = 100,
  aux_sym_type_path_repeat1 = 101,
  aux_sym_function_type_repeat1 = 102,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_bring] = "bring",
  [anon_sym_as] = "as",
  [sym_var_specifier] = "var_specifier",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_PERCENT] = "%",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_QMARK_QMARK] = "\?\?",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [sym_break_expression] = "break_expression",
  [sym_continue_expression] = "continue_expression",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_new] = "new",
  [anon_sym_COMMA] = ",",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_while] = "while",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [sym_identifier] = "identifier",
  [anon_sym_DOT] = ".",
  [anon_sym_QMARK_DOT] = "\?.",
  [anon_sym_COLON] = ":",
  [anon_sym_QMARK] = "\?",
  [anon_sym_Array] = "Array",
  [anon_sym_Set] = "Set",
  [anon_sym_Map] = "Map",
  [anon_sym_Promise] = "Promise",
  [anon_sym_num] = "num",
  [anon_sym_bool] = "bool",
  [anon_sym_any] = "any",
  [anon_sym_str] = "str",
  [anon_sym_void] = "void",
  [anon_sym_duration] = "duration",
  [anon_sym_inflight] = "inflight",
  [sym_number_literal] = "number_literal",
  [sym_string_literal] = "string_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_expression_statement] = "expression_statement",
  [sym_empty_statement] = "empty_statement",
  [sym__declaration_statement] = "_declaration_statement",
  [sym_let_declaration] = "let_declaration",
  [sym_bring_declaration] = "bring_declaration",
  [sym_bring_alias] = "bring_alias",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_if_expression] = "if_expression",
  [sym__condition] = "_condition",
  [sym_let_condition] = "let_condition",
  [sym_else_clause] = "else_clause",
  [sym_block] = "block",
  [sym_return_expression] = "return_expression",
  [sym_index_expression] = "index_expression",
  [sym_new_expression] = "new_expression",
  [sym_for_expression] = "for_expression",
  [sym_while_expression] = "while_expression",
  [sym_assign_expression] = "assign_expression",
  [sym_assign_operator] = "assign_operator",
  [sym_call_expression] = "call_expression",
  [sym_member_expression] = "member_expression",
  [sym_access_operator] = "access_operator",
  [sym_type_annotation] = "type_annotation",
  [sym__type] = "_type",
  [sym_type_path] = "type_path",
  [sym_function_type] = "function_type",
  [sym_optional_type] = "optional_type",
  [sym_container_type] = "container_type",
  [sym_primitive_type] = "primitive_type",
  [sym_phase_specifier] = "phase_specifier",
  [sym_literal] = "literal",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_new_expression_repeat1] = "new_expression_repeat1",
  [aux_sym_type_path_repeat1] = "type_path_repeat1",
  [aux_sym_function_type_repeat1] = "function_type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_bring] = anon_sym_bring,
  [anon_sym_as] = anon_sym_as,
  [sym_var_specifier] = sym_var_specifier,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_QMARK_QMARK] = anon_sym_QMARK_QMARK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [sym_break_expression] = sym_break_expression,
  [sym_continue_expression] = sym_continue_expression,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_QMARK_DOT] = anon_sym_QMARK_DOT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_Array] = anon_sym_Array,
  [anon_sym_Set] = anon_sym_Set,
  [anon_sym_Map] = anon_sym_Map,
  [anon_sym_Promise] = anon_sym_Promise,
  [anon_sym_num] = anon_sym_num,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_duration] = anon_sym_duration,
  [anon_sym_inflight] = anon_sym_inflight,
  [sym_number_literal] = sym_number_literal,
  [sym_string_literal] = sym_string_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym_empty_statement] = sym_empty_statement,
  [sym__declaration_statement] = sym__declaration_statement,
  [sym_let_declaration] = sym_let_declaration,
  [sym_bring_declaration] = sym_bring_declaration,
  [sym_bring_alias] = sym_bring_alias,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_if_expression] = sym_if_expression,
  [sym__condition] = sym__condition,
  [sym_let_condition] = sym_let_condition,
  [sym_else_clause] = sym_else_clause,
  [sym_block] = sym_block,
  [sym_return_expression] = sym_return_expression,
  [sym_index_expression] = sym_index_expression,
  [sym_new_expression] = sym_new_expression,
  [sym_for_expression] = sym_for_expression,
  [sym_while_expression] = sym_while_expression,
  [sym_assign_expression] = sym_assign_expression,
  [sym_assign_operator] = sym_assign_operator,
  [sym_call_expression] = sym_call_expression,
  [sym_member_expression] = sym_member_expression,
  [sym_access_operator] = sym_access_operator,
  [sym_type_annotation] = sym_type_annotation,
  [sym__type] = sym__type,
  [sym_type_path] = sym_type_path,
  [sym_function_type] = sym_function_type,
  [sym_optional_type] = sym_optional_type,
  [sym_container_type] = sym_container_type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_phase_specifier] = sym_phase_specifier,
  [sym_literal] = sym_literal,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_new_expression_repeat1] = aux_sym_new_expression_repeat1,
  [aux_sym_type_path_repeat1] = aux_sym_type_path_repeat1,
  [aux_sym_function_type_repeat1] = aux_sym_function_type_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [sym_var_specifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
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
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_QMARK] = {
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
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [sym_break_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_continue_expression] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Promise] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_num] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_duration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inflight] = {
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
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_let_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_bring_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_bring_alias] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_if_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__condition] = {
    .visible = false,
    .named = true,
  },
  [sym_let_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_return_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_index_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_new_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_for_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_while_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_member_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_access_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_type_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_type_path] = {
    .visible = true,
    .named = true,
  },
  [sym_function_type] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_type] = {
    .visible = true,
    .named = true,
  },
  [sym_container_type] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_phase_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_new_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_type_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_alternative = 2,
  field_arg = 3,
  field_body = 4,
  field_condition = 5,
  field_consequence = 6,
  field_container_type = 7,
  field_element_type = 8,
  field_left = 9,
  field_module_name = 10,
  field_name = 11,
  field_op = 12,
  field_parameters = 13,
  field_phase = 14,
  field_return_type = 15,
  field_right = 16,
  field_type = 17,
  field_value = 18,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_alternative] = "alternative",
  [field_arg] = "arg",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_container_type] = "container_type",
  [field_element_type] = "element_type",
  [field_left] = "left",
  [field_module_name] = "module_name",
  [field_name] = "name",
  [field_op] = "op",
  [field_parameters] = "parameters",
  [field_phase] = "phase",
  [field_return_type] = "return_type",
  [field_right] = "right",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 1},
  [7] = {.index = 11, .length = 3},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 3},
  [11] = {.index = 20, .length = 2},
  [12] = {.index = 22, .length = 1},
  [13] = {.index = 23, .length = 1},
  [14] = {.index = 24, .length = 2},
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 1},
  [17] = {.index = 29, .length = 2},
  [18] = {.index = 31, .length = 2},
  [19] = {.index = 33, .length = 2},
  [20] = {.index = 35, .length = 2},
  [21] = {.index = 37, .length = 2},
  [22] = {.index = 39, .length = 3},
  [23] = {.index = 42, .length = 3},
  [24] = {.index = 45, .length = 3},
  [25] = {.index = 48, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_arg, 1},
    {field_op, 0},
  [2] =
    {field_module_name, 1},
  [3] =
    {field_condition, 1},
    {field_consequence, 2},
  [5] =
    {field_body, 2},
    {field_condition, 1},
  [7] =
    {field_left, 0},
    {field_op, 1},
    {field_right, 2},
  [10] =
    {field_alias, 1},
  [11] =
    {field_alternative, 3},
    {field_condition, 1},
    {field_consequence, 2},
  [14] =
    {field_type, 1},
  [15] =
    {field_name, 1},
    {field_value, 3},
  [17] =
    {field_body, 4},
    {field_name, 1},
    {field_value, 3},
  [20] =
    {field_name, 2},
    {field_value, 4},
  [22] =
    {field_parameters, 1},
  [23] =
    {field_phase, 0},
  [24] =
    {field_name, 1},
    {field_value, 4},
  [26] =
    {field_name, 2},
    {field_value, 5},
  [28] =
    {field_return_type, 3},
  [29] =
    {field_parameters, 1},
    {field_parameters, 2},
  [31] =
    {field_container_type, 0},
    {field_element_type, 2},
  [33] =
    {field_parameters, 2},
    {field_phase, 0},
  [35] =
    {field_parameters, 1},
    {field_return_type, 4},
  [37] =
    {field_phase, 0},
    {field_return_type, 4},
  [39] =
    {field_parameters, 2},
    {field_parameters, 3},
    {field_phase, 0},
  [42] =
    {field_parameters, 1},
    {field_parameters, 2},
    {field_return_type, 5},
  [45] =
    {field_parameters, 2},
    {field_phase, 0},
    {field_return_type, 5},
  [48] =
    {field_parameters, 2},
    {field_parameters, 3},
    {field_phase, 0},
    {field_return_type, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(84);
      if (lookahead == '!') ADVANCE(98);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '%') ADVANCE(103);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '<') ADVANCE(113);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '>') ADVANCE(110);
      if (lookahead == '?') ADVANCE(228);
      if (lookahead == 'A') ADVANCE(61);
      if (lookahead == 'M') ADVANCE(10);
      if (lookahead == 'P') ADVANCE(59);
      if (lookahead == 'S') ADVANCE(24);
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == ']') ADVANCE(130);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'b') ADVANCE(52);
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == 't') ADVANCE(60);
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead == 'w') ADVANCE(30);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '}') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(97);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == ':') ADVANCE(226);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '>') ADVANCE(109);
      if (lookahead == '?') ADVANCE(227);
      if (lookahead == 'b') ADVANCE(204);
      if (lookahead == 'c') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == 'w') ADVANCE(164);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(97);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'b') ADVANCE(204);
      if (lookahead == 'c') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == 'w') ADVANCE(164);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '%') ADVANCE(103);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '<') ADVANCE(113);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '>') ADVANCE(110);
      if (lookahead == '?') ADVANCE(8);
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == ']') ADVANCE(130);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '}') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(251);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(106);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == 'A') ADVANCE(203);
      if (lookahead == 'M') ADVANCE(143);
      if (lookahead == 'P') ADVANCE(200);
      if (lookahead == 'S') ADVANCE(159);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'b') ADVANCE(191);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == 's') ADVANCE(214);
      if (lookahead == 'v') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(225);
      if (lookahead == '?') ADVANCE(114);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(108);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(90);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 36:
      if (lookahead == 'k') ADVANCE(125);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(233);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 77:
      if (lookahead == 'v') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(77)
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 78:
      if (lookahead == 'w') ADVANCE(131);
      END_STATE();
    case 79:
      if (lookahead == 'y') ADVANCE(241);
      END_STATE();
    case 80:
      if (lookahead == 'y') ADVANCE(229);
      END_STATE();
    case 81:
      if (lookahead == '|') ADVANCE(105);
      END_STATE();
    case 82:
      if (eof) ADVANCE(84);
      if (lookahead == '!') ADVANCE(98);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '%') ADVANCE(103);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '<') ADVANCE(113);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '>') ADVANCE(110);
      if (lookahead == '?') ADVANCE(8);
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == ']') ADVANCE(130);
      if (lookahead == 'b') ADVANCE(194);
      if (lookahead == 'c') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == 'w') ADVANCE(164);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '}') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(82)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 83:
      if (eof) ADVANCE(84);
      if (lookahead == '!') ADVANCE(98);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '%') ADVANCE(103);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '.') ADVANCE(224);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == ';') ADVANCE(85);
      if (lookahead == '<') ADVANCE(113);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '>') ADVANCE(110);
      if (lookahead == '?') ADVANCE(8);
      if (lookahead == '[') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == 'b') ADVANCE(194);
      if (lookahead == 'c') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'f') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == 'w') ADVANCE(164);
      if (lookahead == '{') ADVANCE(121);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '}') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(83)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(107);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_bring);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_bring);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_var_specifier);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_var_specifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(140);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(108);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(139);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(104);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_break_expression);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_break_expression);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_continue_expression);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_continue_expression);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_new);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(222);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(246);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(91);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(165);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(167);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(210);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(126);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(205);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(240);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(206);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(238);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(221);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(248);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(218);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(183);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(234);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(135);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(244);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(188);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(157);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(232);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(178);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(152);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(201);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(155);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(202);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(132);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(242);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(230);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_QMARK_DOT);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '.') ADVANCE(225);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_Array);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_Set);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_Map);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_Map);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_Promise);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_Promise);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_num);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_num);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_any);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_str);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_duration);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_duration);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_inflight);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 82},
  [2] = {.lex_state = 82},
  [3] = {.lex_state = 82},
  [4] = {.lex_state = 82},
  [5] = {.lex_state = 82},
  [6] = {.lex_state = 82},
  [7] = {.lex_state = 82},
  [8] = {.lex_state = 82},
  [9] = {.lex_state = 82},
  [10] = {.lex_state = 83},
  [11] = {.lex_state = 82},
  [12] = {.lex_state = 82},
  [13] = {.lex_state = 82},
  [14] = {.lex_state = 83},
  [15] = {.lex_state = 82},
  [16] = {.lex_state = 83},
  [17] = {.lex_state = 82},
  [18] = {.lex_state = 82},
  [19] = {.lex_state = 83},
  [20] = {.lex_state = 82},
  [21] = {.lex_state = 82},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 82},
  [49] = {.lex_state = 82},
  [50] = {.lex_state = 82},
  [51] = {.lex_state = 82},
  [52] = {.lex_state = 82},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 82},
  [55] = {.lex_state = 82},
  [56] = {.lex_state = 82},
  [57] = {.lex_state = 82},
  [58] = {.lex_state = 82},
  [59] = {.lex_state = 82},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 82},
  [64] = {.lex_state = 82},
  [65] = {.lex_state = 82},
  [66] = {.lex_state = 82},
  [67] = {.lex_state = 82},
  [68] = {.lex_state = 82},
  [69] = {.lex_state = 82},
  [70] = {.lex_state = 82},
  [71] = {.lex_state = 82},
  [72] = {.lex_state = 82},
  [73] = {.lex_state = 82},
  [74] = {.lex_state = 82},
  [75] = {.lex_state = 82},
  [76] = {.lex_state = 82},
  [77] = {.lex_state = 82},
  [78] = {.lex_state = 82},
  [79] = {.lex_state = 82},
  [80] = {.lex_state = 82},
  [81] = {.lex_state = 82},
  [82] = {.lex_state = 82},
  [83] = {.lex_state = 82},
  [84] = {.lex_state = 82},
  [85] = {.lex_state = 82},
  [86] = {.lex_state = 82},
  [87] = {.lex_state = 82},
  [88] = {.lex_state = 82},
  [89] = {.lex_state = 82},
  [90] = {.lex_state = 82},
  [91] = {.lex_state = 82},
  [92] = {.lex_state = 82},
  [93] = {.lex_state = 82},
  [94] = {.lex_state = 82},
  [95] = {.lex_state = 82},
  [96] = {.lex_state = 82},
  [97] = {.lex_state = 82},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 82},
  [100] = {.lex_state = 82},
  [101] = {.lex_state = 82},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 82},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 77},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_bring] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [sym_var_specifier] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_break_expression] = ACTIONS(1),
    [sym_continue_expression] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_QMARK_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_Array] = ACTIONS(1),
    [anon_sym_Set] = ACTIONS(1),
    [anon_sym_Map] = ACTIONS(1),
    [anon_sym_Promise] = ACTIONS(1),
    [anon_sym_num] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_duration] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(167),
    [sym__statement] = STATE(17),
    [sym_expression_statement] = STATE(17),
    [sym_empty_statement] = STATE(17),
    [sym__declaration_statement] = STATE(17),
    [sym_let_declaration] = STATE(17),
    [sym_bring_declaration] = STATE(17),
    [sym__expression] = STATE(84),
    [sym_unary_expression] = STATE(84),
    [sym_binary_expression] = STATE(84),
    [sym_parenthesized_expression] = STATE(84),
    [sym_if_expression] = STATE(21),
    [sym_block] = STATE(21),
    [sym_return_expression] = STATE(84),
    [sym_index_expression] = STATE(84),
    [sym_new_expression] = STATE(84),
    [sym_for_expression] = STATE(21),
    [sym_while_expression] = STATE(21),
    [sym_assign_expression] = STATE(84),
    [sym_call_expression] = STATE(84),
    [sym_member_expression] = STATE(84),
    [sym_literal] = STATE(84),
    [sym_boolean_literal] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_bring] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_if] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(19),
    [sym_break_expression] = ACTIONS(21),
    [sym_continue_expression] = ACTIONS(21),
    [anon_sym_new] = ACTIONS(23),
    [anon_sym_for] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(27),
    [sym_identifier] = ACTIONS(21),
    [sym_number_literal] = ACTIONS(29),
    [sym_string_literal] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(35), 19,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_bring,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_return,
      sym_break_expression,
      sym_continue_expression,
      anon_sym_new,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 26,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      sym_number_literal,
      sym_string_literal,
  [50] = 2,
    ACTIONS(39), 19,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_bring,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_return,
      sym_break_expression,
      sym_continue_expression,
      anon_sym_new,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 26,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      sym_number_literal,
      sym_string_literal,
  [100] = 2,
    ACTIONS(43), 19,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_bring,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_return,
      sym_break_expression,
      sym_continue_expression,
      anon_sym_new,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(41), 26,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      sym_number_literal,
      sym_string_literal,
  [150] = 2,
    ACTIONS(47), 19,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_bring,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_return,
      sym_break_expression,
      sym_continue_expression,
      anon_sym_new,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 26,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      sym_number_literal,
      sym_string_literal,
  [200] = 2,
    ACTIONS(51), 19,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_bring,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_return,
      sym_break_expression,
      sym_continue_expression,
      anon_sym_new,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(49), 26,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      sym_number_literal,
      sym_string_literal,
  [250] = 2,
    ACTIONS(55), 19,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_bring,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_return,
      sym_break_expression,
      sym_continue_expression,
      anon_sym_new,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 26,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      sym_number_literal,
      sym_string_literal,
  [300] = 2,
    ACTIONS(59), 19,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_bring,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_return,
      sym_break_expression,
      sym_continue_expression,
      anon_sym_new,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(57), 26,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      sym_number_literal,
      sym_string_literal,
  [350] = 19,
    ACTIONS(63), 1,
      anon_sym_SEMI,
    ACTIONS(66), 1,
      anon_sym_let,
    ACTIONS(69), 1,
      anon_sym_bring,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(78), 1,
      anon_sym_if,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(84), 1,
      anon_sym_return,
    ACTIONS(90), 1,
      anon_sym_new,
    ACTIONS(93), 1,
      anon_sym_for,
    ACTIONS(96), 1,
      anon_sym_while,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(72), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(99), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(102), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(87), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(21), 4,
      sym_if_expression,
      sym_block,
      sym_for_expression,
      sym_while_expression,
    STATE(9), 7,
      sym__statement,
      sym_expression_statement,
      sym_empty_statement,
      sym__declaration_statement,
      sym_let_declaration,
      sym_bring_declaration,
      aux_sym_source_file_repeat1,
    STATE(84), 11,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [433] = 4,
    ACTIONS(109), 1,
      anon_sym_else,
    STATE(3), 1,
      sym_else_clause,
    ACTIONS(107), 19,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_bring,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_return,
      sym_break_expression,
      sym_continue_expression,
      anon_sym_new,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(105), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      sym_number_literal,
      sym_string_literal,
  [486] = 19,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(9), 1,
      anon_sym_bring,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(21), 4,
      sym_if_expression,
      sym_block,
      sym_for_expression,
      sym_while_expression,
    STATE(9), 7,
      sym__statement,
      sym_expression_statement,
      sym_empty_statement,
      sym__declaration_statement,
      sym_let_declaration,
      sym_bring_declaration,
      aux_sym_source_file_repeat1,
    STATE(76), 11,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [568] = 19,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(9), 1,
      anon_sym_bring,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(117), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(21), 4,
      sym_if_expression,
      sym_block,
      sym_for_expression,
      sym_while_expression,
    STATE(9), 7,
      sym__statement,
      sym_expression_statement,
      sym_empty_statement,
      sym__declaration_statement,
      sym_let_declaration,
      sym_bring_declaration,
      aux_sym_source_file_repeat1,
    STATE(79), 11,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [650] = 19,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(9), 1,
      anon_sym_bring,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(121), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(21), 4,
      sym_if_expression,
      sym_block,
      sym_for_expression,
      sym_while_expression,
    STATE(20), 7,
      sym__statement,
      sym_expression_statement,
      sym_empty_statement,
      sym__declaration_statement,
      sym_let_declaration,
      sym_bring_declaration,
      aux_sym_source_file_repeat1,
    STATE(77), 11,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [732] = 2,
    ACTIONS(55), 20,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_bring,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_else,
      anon_sym_return,
      sym_break_expression,
      sym_continue_expression,
      anon_sym_new,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      sym_number_literal,
      sym_string_literal,
  [780] = 19,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(9), 1,
      anon_sym_bring,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(125), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(21), 4,
      sym_if_expression,
      sym_block,
      sym_for_expression,
      sym_while_expression,
    STATE(11), 7,
      sym__statement,
      sym_expression_statement,
      sym_empty_statement,
      sym__declaration_statement,
      sym_let_declaration,
      sym_bring_declaration,
      aux_sym_source_file_repeat1,
    STATE(83), 11,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [862] = 2,
    ACTIONS(47), 20,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_bring,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_else,
      anon_sym_return,
      sym_break_expression,
      sym_continue_expression,
      anon_sym_new,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      sym_number_literal,
      sym_string_literal,
  [910] = 19,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(9), 1,
      anon_sym_bring,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(21), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(21), 4,
      sym_if_expression,
      sym_block,
      sym_for_expression,
      sym_while_expression,
    STATE(9), 7,
      sym__statement,
      sym_expression_statement,
      sym_empty_statement,
      sym__declaration_statement,
      sym_let_declaration,
      sym_bring_declaration,
      aux_sym_source_file_repeat1,
    STATE(84), 11,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [992] = 19,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(9), 1,
      anon_sym_bring,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(21), 4,
      sym_if_expression,
      sym_block,
      sym_for_expression,
      sym_while_expression,
    STATE(12), 7,
      sym__statement,
      sym_expression_statement,
      sym_empty_statement,
      sym__declaration_statement,
      sym_let_declaration,
      sym_bring_declaration,
      aux_sym_source_file_repeat1,
    STATE(78), 11,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [1074] = 2,
    ACTIONS(35), 20,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_bring,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
      anon_sym_else,
      anon_sym_return,
      sym_break_expression,
      sym_continue_expression,
      anon_sym_new,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(33), 23,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
      sym_number_literal,
      sym_string_literal,
  [1122] = 19,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(9), 1,
      anon_sym_bring,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(135), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(21), 4,
      sym_if_expression,
      sym_block,
      sym_for_expression,
      sym_while_expression,
    STATE(9), 7,
      sym__statement,
      sym_expression_statement,
      sym_empty_statement,
      sym__declaration_statement,
      sym_let_declaration,
      sym_bring_declaration,
      aux_sym_source_file_repeat1,
    STATE(81), 11,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [1204] = 4,
    ACTIONS(141), 5,
      anon_sym_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(137), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(139), 14,
      anon_sym_let,
      anon_sym_bring,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_if,
      anon_sym_return,
      sym_break_expression,
      sym_continue_expression,
      anon_sym_new,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(143), 16,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LBRACK,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
  [1255] = 15,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(145), 1,
      anon_sym_let,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(148), 2,
      sym__condition,
      sym_let_condition,
    ACTIONS(149), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(86), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [1321] = 15,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(145), 1,
      anon_sym_let,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(153), 2,
      sym__condition,
      sym_let_condition,
    ACTIONS(149), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(86), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [1387] = 15,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(145), 1,
      anon_sym_let,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(147), 2,
      sym__condition,
      sym_let_condition,
    ACTIONS(149), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(86), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [1453] = 14,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(147), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(153), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(74), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [1515] = 14,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(147), 1,
      anon_sym_if,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(157), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(75), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [1577] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(159), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(89), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [1636] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(161), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(80), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [1695] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(163), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(57), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [1754] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(165), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(91), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [1813] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(167), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(92), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [1872] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(169), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(82), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [1931] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(171), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(87), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [1990] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(173), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(93), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [2049] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(175), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(88), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [2108] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(177), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(59), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [2167] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(179), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(49), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [2226] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(181), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(56), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [2285] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(183), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(55), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [2344] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(185), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(54), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [2403] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(187), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(52), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [2462] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(189), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(51), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [2521] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(191), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(50), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [2580] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(193), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(48), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [2639] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(195), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(90), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [2698] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(197), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(85), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [2757] = 13,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_new,
    ACTIONS(25), 1,
      anon_sym_for,
    ACTIONS(27), 1,
      anon_sym_while,
    ACTIONS(147), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_boolean_literal,
    ACTIONS(11), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 2,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(199), 3,
      sym_break_expression,
      sym_continue_expression,
      sym_identifier,
    STATE(58), 15,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_if_expression,
      sym_block,
      sym_return_expression,
      sym_index_expression,
      sym_new_expression,
      sym_for_expression,
      sym_while_expression,
      sym_assign_expression,
      sym_call_expression,
      sym_member_expression,
      sym_literal,
  [2816] = 17,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(201), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2882] = 7,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(233), 6,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(231), 19,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [2928] = 10,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(233), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(231), 16,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [2980] = 11,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(233), 3,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(231), 15,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [3034] = 13,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_EQ,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(231), 13,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [3092] = 4,
    ACTIONS(235), 1,
      anon_sym_else,
    STATE(3), 1,
      sym_else_clause,
    ACTIONS(107), 6,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 23,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
  [3132] = 14,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_EQ,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(231), 11,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [3192] = 15,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_EQ,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(231), 10,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [3254] = 6,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(233), 6,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(231), 20,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [3298] = 7,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(239), 6,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(237), 19,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [3344] = 16,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_EQ,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(241), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [3408] = 9,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(233), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(231), 16,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [3458] = 2,
    ACTIONS(35), 6,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(33), 24,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
  [3493] = 2,
    ACTIONS(55), 6,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(53), 24,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
  [3528] = 2,
    ACTIONS(47), 6,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(45), 24,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_else,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
  [3563] = 3,
    ACTIONS(245), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(247), 6,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(249), 17,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
  [3599] = 2,
    ACTIONS(253), 6,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(251), 23,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
  [3633] = 2,
    ACTIONS(257), 6,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(255), 23,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
  [3667] = 3,
    ACTIONS(253), 6,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(259), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(251), 17,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
  [3703] = 2,
    ACTIONS(263), 6,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(261), 23,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
  [3737] = 2,
    ACTIONS(267), 6,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(265), 23,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
  [3771] = 3,
    ACTIONS(269), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(271), 6,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(273), 17,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
  [3807] = 2,
    ACTIONS(247), 6,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(249), 23,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
  [3841] = 2,
    ACTIONS(277), 6,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(275), 23,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
  [3875] = 2,
    ACTIONS(271), 6,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(273), 23,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
  [3909] = 2,
    ACTIONS(281), 6,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(279), 23,
      anon_sym_SEMI,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_QMARK_QMARK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
  [3943] = 20,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      sym_assign_operator,
    STATE(141), 1,
      aux_sym_new_expression_repeat1,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
  [4012] = 20,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      sym_assign_operator,
    STATE(144), 1,
      aux_sym_new_expression_repeat1,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
  [4081] = 19,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_SEMI,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
  [4147] = 19,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
  [4213] = 19,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
  [4279] = 19,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_SEMI,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
  [4345] = 19,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      sym_block,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
  [4411] = 19,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_SEMI,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
  [4477] = 18,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(299), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
  [4541] = 19,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
  [4607] = 18,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
  [4670] = 18,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
  [4733] = 18,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
  [4796] = 18,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(305), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
  [4859] = 18,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
  [4922] = 18,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
  [4985] = 18,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
  [5048] = 18,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
  [5111] = 18,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
  [5174] = 17,
    ACTIONS(203), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(223), 1,
      anon_sym_QMARK_QMARK,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_assign_operator,
    STATE(158), 1,
      sym_access_operator,
    ACTIONS(205), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(219), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(227), 2,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_QMARK_DOT,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
  [5234] = 2,
    ACTIONS(319), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(321), 12,
      anon_sym_let,
      anon_sym_bring,
      anon_sym_if,
      anon_sym_return,
      sym_break_expression,
      sym_continue_expression,
      anon_sym_new,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [5260] = 2,
    ACTIONS(323), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(325), 12,
      anon_sym_let,
      anon_sym_bring,
      anon_sym_if,
      anon_sym_return,
      sym_break_expression,
      sym_continue_expression,
      anon_sym_new,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [5286] = 2,
    ACTIONS(327), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(329), 12,
      anon_sym_let,
      anon_sym_bring,
      anon_sym_if,
      anon_sym_return,
      sym_break_expression,
      sym_continue_expression,
      anon_sym_new,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [5312] = 2,
    ACTIONS(331), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(333), 12,
      anon_sym_let,
      anon_sym_bring,
      anon_sym_if,
      anon_sym_return,
      sym_break_expression,
      sym_continue_expression,
      anon_sym_new,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [5338] = 8,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(345), 1,
      anon_sym_inflight,
    STATE(169), 1,
      sym_phase_specifier,
    ACTIONS(341), 4,
      anon_sym_Array,
      anon_sym_Set,
      anon_sym_Map,
      anon_sym_Promise,
    ACTIONS(343), 6,
      anon_sym_num,
      anon_sym_bool,
      anon_sym_any,
      anon_sym_str,
      anon_sym_void,
      anon_sym_duration,
    STATE(135), 6,
      sym__type,
      sym_type_path,
      sym_function_type,
      sym_optional_type,
      sym_container_type,
      sym_primitive_type,
  [5376] = 2,
    ACTIONS(347), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(349), 12,
      anon_sym_let,
      anon_sym_bring,
      anon_sym_if,
      anon_sym_return,
      sym_break_expression,
      sym_continue_expression,
      anon_sym_new,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [5402] = 2,
    ACTIONS(351), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(353), 12,
      anon_sym_let,
      anon_sym_bring,
      anon_sym_if,
      anon_sym_return,
      sym_break_expression,
      sym_continue_expression,
      anon_sym_new,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [5428] = 2,
    ACTIONS(355), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(357), 12,
      anon_sym_let,
      anon_sym_bring,
      anon_sym_if,
      anon_sym_return,
      sym_break_expression,
      sym_continue_expression,
      anon_sym_new,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [5454] = 8,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(345), 1,
      anon_sym_inflight,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      sym_phase_specifier,
    ACTIONS(341), 4,
      anon_sym_Array,
      anon_sym_Set,
      anon_sym_Map,
      anon_sym_Promise,
    ACTIONS(343), 6,
      anon_sym_num,
      anon_sym_bool,
      anon_sym_any,
      anon_sym_str,
      anon_sym_void,
      anon_sym_duration,
    STATE(136), 6,
      sym__type,
      sym_type_path,
      sym_function_type,
      sym_optional_type,
      sym_container_type,
      sym_primitive_type,
  [5492] = 2,
    ACTIONS(361), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(363), 12,
      anon_sym_let,
      anon_sym_bring,
      anon_sym_if,
      anon_sym_return,
      sym_break_expression,
      sym_continue_expression,
      anon_sym_new,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [5518] = 7,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(345), 1,
      anon_sym_inflight,
    STATE(169), 1,
      sym_phase_specifier,
    ACTIONS(341), 4,
      anon_sym_Array,
      anon_sym_Set,
      anon_sym_Map,
      anon_sym_Promise,
    ACTIONS(343), 6,
      anon_sym_num,
      anon_sym_bool,
      anon_sym_any,
      anon_sym_str,
      anon_sym_void,
      anon_sym_duration,
    STATE(129), 6,
      sym__type,
      sym_type_path,
      sym_function_type,
      sym_optional_type,
      sym_container_type,
      sym_primitive_type,
  [5553] = 7,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(345), 1,
      anon_sym_inflight,
    STATE(169), 1,
      sym_phase_specifier,
    ACTIONS(341), 4,
      anon_sym_Array,
      anon_sym_Set,
      anon_sym_Map,
      anon_sym_Promise,
    ACTIONS(343), 6,
      anon_sym_num,
      anon_sym_bool,
      anon_sym_any,
      anon_sym_str,
      anon_sym_void,
      anon_sym_duration,
    STATE(149), 6,
      sym__type,
      sym_type_path,
      sym_function_type,
      sym_optional_type,
      sym_container_type,
      sym_primitive_type,
  [5588] = 7,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(345), 1,
      anon_sym_inflight,
    STATE(169), 1,
      sym_phase_specifier,
    ACTIONS(341), 4,
      anon_sym_Array,
      anon_sym_Set,
      anon_sym_Map,
      anon_sym_Promise,
    ACTIONS(343), 6,
      anon_sym_num,
      anon_sym_bool,
      anon_sym_any,
      anon_sym_str,
      anon_sym_void,
      anon_sym_duration,
    STATE(128), 6,
      sym__type,
      sym_type_path,
      sym_function_type,
      sym_optional_type,
      sym_container_type,
      sym_primitive_type,
  [5623] = 7,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(345), 1,
      anon_sym_inflight,
    STATE(169), 1,
      sym_phase_specifier,
    ACTIONS(341), 4,
      anon_sym_Array,
      anon_sym_Set,
      anon_sym_Map,
      anon_sym_Promise,
    ACTIONS(343), 6,
      anon_sym_num,
      anon_sym_bool,
      anon_sym_any,
      anon_sym_str,
      anon_sym_void,
      anon_sym_duration,
    STATE(127), 6,
      sym__type,
      sym_type_path,
      sym_function_type,
      sym_optional_type,
      sym_container_type,
      sym_primitive_type,
  [5658] = 7,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(345), 1,
      anon_sym_inflight,
    STATE(169), 1,
      sym_phase_specifier,
    ACTIONS(341), 4,
      anon_sym_Array,
      anon_sym_Set,
      anon_sym_Map,
      anon_sym_Promise,
    ACTIONS(343), 6,
      anon_sym_num,
      anon_sym_bool,
      anon_sym_any,
      anon_sym_str,
      anon_sym_void,
      anon_sym_duration,
    STATE(126), 6,
      sym__type,
      sym_type_path,
      sym_function_type,
      sym_optional_type,
      sym_container_type,
      sym_primitive_type,
  [5693] = 7,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(345), 1,
      anon_sym_inflight,
    STATE(169), 1,
      sym_phase_specifier,
    ACTIONS(341), 4,
      anon_sym_Array,
      anon_sym_Set,
      anon_sym_Map,
      anon_sym_Promise,
    ACTIONS(343), 6,
      anon_sym_num,
      anon_sym_bool,
      anon_sym_any,
      anon_sym_str,
      anon_sym_void,
      anon_sym_duration,
    STATE(131), 6,
      sym__type,
      sym_type_path,
      sym_function_type,
      sym_optional_type,
      sym_container_type,
      sym_primitive_type,
  [5728] = 7,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(345), 1,
      anon_sym_inflight,
    STATE(169), 1,
      sym_phase_specifier,
    ACTIONS(341), 4,
      anon_sym_Array,
      anon_sym_Set,
      anon_sym_Map,
      anon_sym_Promise,
    ACTIONS(343), 6,
      anon_sym_num,
      anon_sym_bool,
      anon_sym_any,
      anon_sym_str,
      anon_sym_void,
      anon_sym_duration,
    STATE(142), 6,
      sym__type,
      sym_type_path,
      sym_function_type,
      sym_optional_type,
      sym_container_type,
      sym_primitive_type,
  [5763] = 7,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(345), 1,
      anon_sym_inflight,
    STATE(169), 1,
      sym_phase_specifier,
    ACTIONS(341), 4,
      anon_sym_Array,
      anon_sym_Set,
      anon_sym_Map,
      anon_sym_Promise,
    ACTIONS(343), 6,
      anon_sym_num,
      anon_sym_bool,
      anon_sym_any,
      anon_sym_str,
      anon_sym_void,
      anon_sym_duration,
    STATE(125), 6,
      sym__type,
      sym_type_path,
      sym_function_type,
      sym_optional_type,
      sym_container_type,
      sym_primitive_type,
  [5798] = 7,
    ACTIONS(335), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(345), 1,
      anon_sym_inflight,
    STATE(169), 1,
      sym_phase_specifier,
    ACTIONS(341), 4,
      anon_sym_Array,
      anon_sym_Set,
      anon_sym_Map,
      anon_sym_Promise,
    ACTIONS(343), 6,
      anon_sym_num,
      anon_sym_bool,
      anon_sym_any,
      anon_sym_str,
      anon_sym_void,
      anon_sym_duration,
    STATE(150), 6,
      sym__type,
      sym_type_path,
      sym_function_type,
      sym_optional_type,
      sym_container_type,
      sym_primitive_type,
  [5833] = 2,
    ACTIONS(365), 6,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      sym_number_literal,
      sym_string_literal,
    ACTIONS(367), 10,
      anon_sym_if,
      anon_sym_return,
      sym_break_expression,
      sym_continue_expression,
      anon_sym_new,
      anon_sym_for,
      anon_sym_while,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [5854] = 3,
    ACTIONS(371), 1,
      anon_sym_DOT,
    STATE(116), 1,
      aux_sym_type_path_repeat1,
    ACTIONS(369), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_QMARK,
  [5868] = 3,
    ACTIONS(371), 1,
      anon_sym_DOT,
    STATE(114), 1,
      aux_sym_type_path_repeat1,
    ACTIONS(373), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_QMARK,
  [5882] = 3,
    ACTIONS(377), 1,
      anon_sym_DOT,
    STATE(116), 1,
      aux_sym_type_path_repeat1,
    ACTIONS(375), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_QMARK,
  [5896] = 1,
    ACTIONS(375), 6,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_QMARK,
  [5905] = 2,
    ACTIONS(382), 1,
      anon_sym_COLON,
    ACTIONS(380), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_QMARK,
  [5916] = 2,
    ACTIONS(386), 1,
      anon_sym_COLON,
    ACTIONS(384), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_QMARK,
  [5927] = 2,
    ACTIONS(390), 1,
      anon_sym_COLON,
    ACTIONS(388), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_QMARK,
  [5938] = 2,
    ACTIONS(394), 1,
      anon_sym_COLON,
    ACTIONS(392), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_QMARK,
  [5949] = 2,
    ACTIONS(398), 1,
      anon_sym_COLON,
    ACTIONS(396), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_QMARK,
  [5960] = 2,
    ACTIONS(402), 1,
      anon_sym_COLON,
    ACTIONS(400), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_QMARK,
  [5971] = 1,
    ACTIONS(404), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_QMARK,
  [5979] = 2,
    ACTIONS(408), 1,
      anon_sym_QMARK,
    ACTIONS(406), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5989] = 2,
    ACTIONS(408), 1,
      anon_sym_QMARK,
    ACTIONS(410), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5999] = 2,
    ACTIONS(408), 1,
      anon_sym_QMARK,
    ACTIONS(412), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6009] = 2,
    ACTIONS(408), 1,
      anon_sym_QMARK,
    ACTIONS(414), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6019] = 2,
    ACTIONS(408), 1,
      anon_sym_QMARK,
    ACTIONS(416), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6029] = 1,
    ACTIONS(418), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_QMARK,
  [6037] = 2,
    ACTIONS(408), 1,
      anon_sym_QMARK,
    ACTIONS(420), 4,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6047] = 1,
    ACTIONS(422), 5,
      anon_sym_EQ,
      anon_sym_GT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_QMARK,
  [6055] = 3,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(424), 1,
      anon_sym_if,
    STATE(8), 2,
      sym_if_expression,
      sym_block,
  [6066] = 3,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(426), 1,
      anon_sym_if,
    STATE(8), 2,
      sym_if_expression,
      sym_block,
  [6077] = 4,
    ACTIONS(408), 1,
      anon_sym_QMARK,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    ACTIONS(430), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_function_type_repeat1,
  [6090] = 4,
    ACTIONS(408), 1,
      anon_sym_QMARK,
    ACTIONS(430), 1,
      anon_sym_COMMA,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      aux_sym_function_type_repeat1,
  [6103] = 3,
    ACTIONS(430), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      aux_sym_function_type_repeat1,
  [6113] = 3,
    ACTIONS(430), 1,
      anon_sym_COMMA,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      aux_sym_function_type_repeat1,
  [6123] = 3,
    ACTIONS(438), 1,
      anon_sym_EQ,
    ACTIONS(440), 1,
      anon_sym_COLON,
    STATE(156), 1,
      sym_type_annotation,
  [6133] = 3,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(444), 1,
      anon_sym_as,
    STATE(165), 1,
      sym_bring_alias,
  [6143] = 3,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      aux_sym_new_expression_repeat1,
  [6153] = 2,
    ACTIONS(408), 1,
      anon_sym_QMARK,
    ACTIONS(448), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6161] = 3,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_function_type_repeat1,
  [6171] = 3,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      aux_sym_new_expression_repeat1,
  [6181] = 3,
    ACTIONS(440), 1,
      anon_sym_COLON,
    ACTIONS(455), 1,
      anon_sym_EQ,
    STATE(159), 1,
      sym_type_annotation,
  [6191] = 3,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_new_expression_repeat1,
  [6201] = 2,
    ACTIONS(460), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_block,
  [6208] = 2,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_block,
  [6215] = 2,
    ACTIONS(408), 1,
      anon_sym_QMARK,
    ACTIONS(462), 1,
      anon_sym_GT,
  [6222] = 2,
    ACTIONS(408), 1,
      anon_sym_QMARK,
    ACTIONS(464), 1,
      anon_sym_EQ,
  [6229] = 1,
    ACTIONS(466), 2,
      sym_identifier,
      sym_string_literal,
  [6234] = 2,
    ACTIONS(468), 1,
      sym_var_specifier,
    ACTIONS(470), 1,
      sym_identifier,
  [6241] = 2,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_block,
  [6248] = 1,
    ACTIONS(474), 1,
      sym_identifier,
  [6252] = 1,
    ACTIONS(476), 1,
      sym_identifier,
  [6256] = 1,
    ACTIONS(478), 1,
      anon_sym_EQ,
  [6260] = 1,
    ACTIONS(480), 1,
      sym_identifier,
  [6264] = 1,
    ACTIONS(482), 1,
      sym_identifier,
  [6268] = 1,
    ACTIONS(484), 1,
      anon_sym_EQ,
  [6272] = 1,
    ACTIONS(486), 1,
      anon_sym_in,
  [6276] = 1,
    ACTIONS(488), 1,
      anon_sym_EQ,
  [6280] = 1,
    ACTIONS(490), 1,
      anon_sym_LT,
  [6284] = 1,
    ACTIONS(492), 1,
      sym_identifier,
  [6288] = 1,
    ACTIONS(494), 1,
      anon_sym_LPAREN,
  [6292] = 1,
    ACTIONS(496), 1,
      anon_sym_SEMI,
  [6296] = 1,
    ACTIONS(498), 1,
      sym_identifier,
  [6300] = 1,
    ACTIONS(500), 1,
      ts_builtin_sym_end,
  [6304] = 1,
    ACTIONS(502), 1,
      sym_identifier,
  [6308] = 1,
    ACTIONS(504), 1,
      anon_sym_LPAREN,
  [6312] = 1,
    ACTIONS(506), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 150,
  [SMALL_STATE(6)] = 200,
  [SMALL_STATE(7)] = 250,
  [SMALL_STATE(8)] = 300,
  [SMALL_STATE(9)] = 350,
  [SMALL_STATE(10)] = 433,
  [SMALL_STATE(11)] = 486,
  [SMALL_STATE(12)] = 568,
  [SMALL_STATE(13)] = 650,
  [SMALL_STATE(14)] = 732,
  [SMALL_STATE(15)] = 780,
  [SMALL_STATE(16)] = 862,
  [SMALL_STATE(17)] = 910,
  [SMALL_STATE(18)] = 992,
  [SMALL_STATE(19)] = 1074,
  [SMALL_STATE(20)] = 1122,
  [SMALL_STATE(21)] = 1204,
  [SMALL_STATE(22)] = 1255,
  [SMALL_STATE(23)] = 1321,
  [SMALL_STATE(24)] = 1387,
  [SMALL_STATE(25)] = 1453,
  [SMALL_STATE(26)] = 1515,
  [SMALL_STATE(27)] = 1577,
  [SMALL_STATE(28)] = 1636,
  [SMALL_STATE(29)] = 1695,
  [SMALL_STATE(30)] = 1754,
  [SMALL_STATE(31)] = 1813,
  [SMALL_STATE(32)] = 1872,
  [SMALL_STATE(33)] = 1931,
  [SMALL_STATE(34)] = 1990,
  [SMALL_STATE(35)] = 2049,
  [SMALL_STATE(36)] = 2108,
  [SMALL_STATE(37)] = 2167,
  [SMALL_STATE(38)] = 2226,
  [SMALL_STATE(39)] = 2285,
  [SMALL_STATE(40)] = 2344,
  [SMALL_STATE(41)] = 2403,
  [SMALL_STATE(42)] = 2462,
  [SMALL_STATE(43)] = 2521,
  [SMALL_STATE(44)] = 2580,
  [SMALL_STATE(45)] = 2639,
  [SMALL_STATE(46)] = 2698,
  [SMALL_STATE(47)] = 2757,
  [SMALL_STATE(48)] = 2816,
  [SMALL_STATE(49)] = 2882,
  [SMALL_STATE(50)] = 2928,
  [SMALL_STATE(51)] = 2980,
  [SMALL_STATE(52)] = 3034,
  [SMALL_STATE(53)] = 3092,
  [SMALL_STATE(54)] = 3132,
  [SMALL_STATE(55)] = 3192,
  [SMALL_STATE(56)] = 3254,
  [SMALL_STATE(57)] = 3298,
  [SMALL_STATE(58)] = 3344,
  [SMALL_STATE(59)] = 3408,
  [SMALL_STATE(60)] = 3458,
  [SMALL_STATE(61)] = 3493,
  [SMALL_STATE(62)] = 3528,
  [SMALL_STATE(63)] = 3563,
  [SMALL_STATE(64)] = 3599,
  [SMALL_STATE(65)] = 3633,
  [SMALL_STATE(66)] = 3667,
  [SMALL_STATE(67)] = 3703,
  [SMALL_STATE(68)] = 3737,
  [SMALL_STATE(69)] = 3771,
  [SMALL_STATE(70)] = 3807,
  [SMALL_STATE(71)] = 3841,
  [SMALL_STATE(72)] = 3875,
  [SMALL_STATE(73)] = 3909,
  [SMALL_STATE(74)] = 3943,
  [SMALL_STATE(75)] = 4012,
  [SMALL_STATE(76)] = 4081,
  [SMALL_STATE(77)] = 4147,
  [SMALL_STATE(78)] = 4213,
  [SMALL_STATE(79)] = 4279,
  [SMALL_STATE(80)] = 4345,
  [SMALL_STATE(81)] = 4411,
  [SMALL_STATE(82)] = 4477,
  [SMALL_STATE(83)] = 4541,
  [SMALL_STATE(84)] = 4607,
  [SMALL_STATE(85)] = 4670,
  [SMALL_STATE(86)] = 4733,
  [SMALL_STATE(87)] = 4796,
  [SMALL_STATE(88)] = 4859,
  [SMALL_STATE(89)] = 4922,
  [SMALL_STATE(90)] = 4985,
  [SMALL_STATE(91)] = 5048,
  [SMALL_STATE(92)] = 5111,
  [SMALL_STATE(93)] = 5174,
  [SMALL_STATE(94)] = 5234,
  [SMALL_STATE(95)] = 5260,
  [SMALL_STATE(96)] = 5286,
  [SMALL_STATE(97)] = 5312,
  [SMALL_STATE(98)] = 5338,
  [SMALL_STATE(99)] = 5376,
  [SMALL_STATE(100)] = 5402,
  [SMALL_STATE(101)] = 5428,
  [SMALL_STATE(102)] = 5454,
  [SMALL_STATE(103)] = 5492,
  [SMALL_STATE(104)] = 5518,
  [SMALL_STATE(105)] = 5553,
  [SMALL_STATE(106)] = 5588,
  [SMALL_STATE(107)] = 5623,
  [SMALL_STATE(108)] = 5658,
  [SMALL_STATE(109)] = 5693,
  [SMALL_STATE(110)] = 5728,
  [SMALL_STATE(111)] = 5763,
  [SMALL_STATE(112)] = 5798,
  [SMALL_STATE(113)] = 5833,
  [SMALL_STATE(114)] = 5854,
  [SMALL_STATE(115)] = 5868,
  [SMALL_STATE(116)] = 5882,
  [SMALL_STATE(117)] = 5896,
  [SMALL_STATE(118)] = 5905,
  [SMALL_STATE(119)] = 5916,
  [SMALL_STATE(120)] = 5927,
  [SMALL_STATE(121)] = 5938,
  [SMALL_STATE(122)] = 5949,
  [SMALL_STATE(123)] = 5960,
  [SMALL_STATE(124)] = 5971,
  [SMALL_STATE(125)] = 5979,
  [SMALL_STATE(126)] = 5989,
  [SMALL_STATE(127)] = 5999,
  [SMALL_STATE(128)] = 6009,
  [SMALL_STATE(129)] = 6019,
  [SMALL_STATE(130)] = 6029,
  [SMALL_STATE(131)] = 6037,
  [SMALL_STATE(132)] = 6047,
  [SMALL_STATE(133)] = 6055,
  [SMALL_STATE(134)] = 6066,
  [SMALL_STATE(135)] = 6077,
  [SMALL_STATE(136)] = 6090,
  [SMALL_STATE(137)] = 6103,
  [SMALL_STATE(138)] = 6113,
  [SMALL_STATE(139)] = 6123,
  [SMALL_STATE(140)] = 6133,
  [SMALL_STATE(141)] = 6143,
  [SMALL_STATE(142)] = 6153,
  [SMALL_STATE(143)] = 6161,
  [SMALL_STATE(144)] = 6171,
  [SMALL_STATE(145)] = 6181,
  [SMALL_STATE(146)] = 6191,
  [SMALL_STATE(147)] = 6201,
  [SMALL_STATE(148)] = 6208,
  [SMALL_STATE(149)] = 6215,
  [SMALL_STATE(150)] = 6222,
  [SMALL_STATE(151)] = 6229,
  [SMALL_STATE(152)] = 6234,
  [SMALL_STATE(153)] = 6241,
  [SMALL_STATE(154)] = 6248,
  [SMALL_STATE(155)] = 6252,
  [SMALL_STATE(156)] = 6256,
  [SMALL_STATE(157)] = 6260,
  [SMALL_STATE(158)] = 6264,
  [SMALL_STATE(159)] = 6268,
  [SMALL_STATE(160)] = 6272,
  [SMALL_STATE(161)] = 6276,
  [SMALL_STATE(162)] = 6280,
  [SMALL_STATE(163)] = 6284,
  [SMALL_STATE(164)] = 6288,
  [SMALL_STATE(165)] = 6292,
  [SMALL_STATE(166)] = 6296,
  [SMALL_STATE(167)] = 6300,
  [SMALL_STATE(168)] = 6304,
  [SMALL_STATE(169)] = 6308,
  [SMALL_STATE(170)] = 6312,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 4, .production_id = 7),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 4, .production_id = 7),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expression, 5, .production_id = 10),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expression, 5, .production_id = 10),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_expression, 3, .production_id = 4),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_expression, 3, .production_id = 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(152),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(151),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(168),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expression, 3, .production_id = 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expression, 3, .production_id = 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_expression, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_expression, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_expression, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_expression, 5, .production_id = 8),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 5),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_expression, 6, .production_id = 8),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_expression, 4, .production_id = 8),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expression, 4),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expression, 4),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_expression, 3),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_expression, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_new_expression_repeat1, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_condition, 4, .production_id = 9),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7, .production_id = 15),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 7, .production_id = 15),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bring_declaration, 4, .production_id = 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bring_declaration, 4, .production_id = 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 11),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 11),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bring_declaration, 3, .production_id = 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bring_declaration, 3, .production_id = 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 9),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 9),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 14),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 14),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_operator, 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assign_operator, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_path, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_path, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_path_repeat1, 2),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_path_repeat1, 2), SHIFT_REPEAT(157),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4, .production_id = 19),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 3, .production_id = 12),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5, .production_id = 22),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 3, .production_id = 13),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4, .production_id = 17),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 7, .production_id = 25),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 6, .production_id = 24),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 6, .production_id = 23),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5, .production_id = 21),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 5, .production_id = 20),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_type, 4, .production_id = 18),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_type, 4, .production_id = 16),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_type_repeat1, 2),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_type_repeat1, 2), SHIFT_REPEAT(110),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_new_expression_repeat1, 2), SHIFT_REPEAT(32),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access_operator, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_phase_specifier, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [500] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bring_alias, 2, .production_id = 6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_idk(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
