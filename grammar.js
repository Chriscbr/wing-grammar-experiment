const PREC = {
  RETURN: 0,
  ASSIGN: 10,
  BLOCK_EXPRESSION: 20,
  LOGICAL_OR: 110,
  LOGICAL_AND: 120,
  INCLUSIVE_OR: 130,
  EXCLUSIVE_OR: 140,
  BITWISE_AND: 150,
  EQUAL: 160,
  RELATIONAL: 170,
  UNWRAP_OR: 180,
  SHIFT: 190,
  ADD: 200,
  MULTIPLY: 210,
  UNARY: 220,
  OPTIONAL_TEST: 230,
  POWER: 240,
  MEMBER: 250,
  CALL: 260,
  TYPE_PATH: 300,
};

module.exports = grammar({
  name: 'idk',

  inline: $ => [
    $._expression_ending_with_block,
  ],

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.expression_statement,
      $._declaration_statement,
    ),

    expression_statement: $ => choice(
      seq($._expression, ';'),
      prec(PREC.BLOCK_EXPRESSION, $._expression_ending_with_block),
    ),

    empty_statement: _ => ';',

    _declaration_statement: $ => choice(
      $.empty_statement,
      $.let_declaration,
      $.bring_declaration,
    ),

    let_declaration: $ => seq(
      'let',
      optional($.var_specifier),
      field('name', $.identifier),
      optional($.type_annotation),
      '=',
      field('value', $._expression),
      ';',
    ),

    bring_declaration: $ => seq(
      'bring',
      field('module_name', choice($.identifier, $.string_literal)),
      optional($.bring_alias),
      ';',
    ),

    bring_alias: $ => seq('as', field('alias', $.identifier)),

    var_specifier: _ => 'var',

    _expression: $ => choice(
      $.identifier,
      $.member_expression,
      $.parenthesized_expression,
      $.unary_expression,
      $.binary_expression,
      $.assign_expression,
      $.call_expression,
      $.return_expression,
      $.break_expression,
      $.continue_expression,
      $.index_expression,
      $.new_expression,
      $.array_literal_expression,
      $.object_literal_expression,
      $.literal,
      $._expression_ending_with_block,
    ),

    _expression_ending_with_block: $ => choice(
      $.block,
      $.if_expression,
      $.while_expression,
      $.for_expression,
    ),

    unary_expression: ($) => {
      /** @type {Array<[RuleOrLiteral, number]>} */
      const table = [
        ['-', PREC.UNARY],
        ['!', PREC.UNARY],
      ];

      return choice(
        ...table.map(([operator, precedence]) =>
          prec.left(
            precedence,
            seq(field('op', operator), field('arg', $._expression))
          )
        )
      );
    },

    binary_expression: ($) => {
      /** @type {Array<[RuleOrLiteral, number]>} */
      const table = [
        ['+', PREC.ADD],
        ['-', PREC.ADD],
        ['*', PREC.MULTIPLY],
        ['/', PREC.MULTIPLY],
        ['\\', PREC.MULTIPLY],
        ['%', PREC.MULTIPLY],
        ['**', PREC.POWER],
        ['||', PREC.LOGICAL_OR],
        ['&&', PREC.LOGICAL_AND],
        //['|', PREC.INCLUSIVE_OR],
        //['^', PREC.EXCLUSIVE_OR],
        //['&', PREC.BITWISE_AND],
        ['==', PREC.EQUAL],
        ['!=', PREC.EQUAL],
        ['>', PREC.RELATIONAL],
        ['>=', PREC.RELATIONAL],
        ['<=', PREC.RELATIONAL],
        ['<', PREC.RELATIONAL],
        //['<<', PREC.SHIFT],
        //['>>', PREC.SHIFT],
        //['>>>', PREC.SHIFT],
        ['??', PREC.UNWRAP_OR],
      ];

      return choice(
        ...table.map(([operator, precedence]) => {
          return prec.left(
            precedence,
            seq(
              field('left', $._expression),
              field('op', operator),
              field('right', $._expression)
            )
          );
        })
      );
    },

    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')'
    ),

    if_expression: $ => seq(
      'if',
      field('condition', $._condition),
      field('consequence', $.block),
      optional(field('alternative', $.else_clause)),
    ),

    _condition: $ => choice(
      $._expression,
      $.let_condition,
    ),

    let_condition: $ => seq(
      'let',
      field('name', $.identifier),
      '=',
      field('value', $._expression), // TODO: prec.left?
    ),

    else_clause: $ => seq(
      'else',
      choice(
        $.if_expression,
        $.block,
      )
    ),

    else_expression: $ => choice(
      $.if_expression,
      $.block,
    ),

    block: $ => seq(
      '{',
      choice(
        seq(repeat1($.empty_statement), optional($._expression)),
        $._expression,
      ),
      '}',
    ),

    return_expression: $ => prec.left(PREC.RETURN, seq(
      'return',
      $._expression,
    )),

    break_expression: $ => 'break',
    continue_expression: $ => 'continue',

    index_expression: $ => seq(
      $._expression,
      '[',
      $._expression,
      ']'
    ),

    new_expression: $ => seq(
      'new',
      field('type', $._expression),
      '(',
      sepBy(',', $._expression),
      ')'
    ),

    for_expression: $ => seq(
      'for',
      field('name', $.identifier),
      'in',
      field('value', $._expression),
      field('body', $.block),
    ),

    while_expression: $ => seq(
      'while',
      field('condition', $._condition),
      field('body', $.block),
    ),

    assign_expression: $ => prec.left(PREC.ASSIGN, seq(
      $._expression,
      $.assign_operator,
      $._expression,
    )),

    assign_operator: $ => choice(
      '=',
      '+=',
      '-=',
    ),

    call_expression: $ => prec.left(PREC.CALL, seq(
      $._expression,
      '(',
      sepBy(',', $._expression),
      ')'
    )),

    member_expression: $ => prec.left(PREC.MEMBER, seq(
      $._expression,
      $.access_operator,
      $.identifier,
    )),

    access_operator: _ => choice(
      '.',
      '?.',
    ),

    array_literal_expression: $ => seq(
      '[',
      sepBy(',', $._expression),
      ']',
    ),

    object_literal_expression: $ => seq(
      optional($.type_path),
      '{',
      sepBy(',', $.object_literal_property),
      '}',
    ),

    object_literal_property: $ => seq(
      field('key', $.identifier),
      ':',
      field('value', $._expression),
    ),

    type_annotation: $ => seq(
      ':',
      $._type,
    ),

    _type: $ => choice(
      $.type_path,
      $.function_type,
      $.optional_type,
      $.container_type,
    ),

    type_path: $ => prec(PREC.TYPE_PATH, sepBy1('.', $.identifier)),

    function_type: $ => prec.right(seq(
      optional(field('phase', $.phase_specifier)),
      '(',
      field('parameters', sepBy(',', $._type)),
      ')',
      optional(seq(':', field('return_type', $._type))),
    )),

    optional_type: $ => seq(
      $._type,
      '?',
    ),

    container_type: $ => seq(
      field('container_type', choice('Array', 'Set', 'Map', 'Promise')),
      seq('<', field('element_type', $._type), '>'),
    ),

    phase_specifier: _ => choice(
      'inflight',
      // 'preflight'
      // 'unphased'
    ),

    literal: $ => choice(
      $.number_literal,
      $.string_literal,
      $.boolean_literal,
      $.nil_literal,
    ),

    number_literal: $ => /\d+/,
    string_literal: $ => /"[^"]*"/,
    boolean_literal: $ => choice('true', 'false'),
    nil_literal: $ => 'nil',

    identifier: _ => /([A-Za-z_$][A-Za-z_$0-9]*)/,
  }
});

/**
 * Creates a rule to match one or more of the rules separated by the separator.
 *
 * @param {RuleOrLiteral} sep - The separator to use.
 * @param {RuleOrLiteral} rule
 *
 * @return {SeqRule}
 *
 */
function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by the separator.
 *
 * @param {RuleOrLiteral} sep - The separator to use.
 * @param {RuleOrLiteral} rule
 *
 * @return {ChoiceRule}
 *
 */
function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule));
}
