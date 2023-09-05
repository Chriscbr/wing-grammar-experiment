const PREC = {
  RETURN: 0,
  ASSIGN: 10,
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
};

module.exports = grammar({
  name: 'idk',

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      $.let_statement,
      $.expression,
      $.semicolon,
    ),

    let_statement: $ => seq(
      'let',
      optional('var'),
      $.identifier,
      '=',
      $.expression,
      $.semicolon,
    ),

    semicolon: $ => ';',

    expression: $ => choice(
      $.identifier,
      $.member_expression,
      $.paren_expression,
      $.unary_expression,
      $.binary_expression,
      $.if_expression,
      $.block_expression,
      $.assign_expression,
      $.call_expression,
      $.return_expression,
      $.break_expression,
      $.continue_expression,
      $.index_expression,
      $.for_expression,
      $.literal,
    ),

    unary_expression: ($) => {
      /** @type {Array<[RuleOrLiteral, number]>} */
      const table = [
        ["-", PREC.UNARY],
        ["!", PREC.UNARY],
      ];

      return choice(
        ...table.map(([operator, precedence]) =>
          prec.left(
            precedence,
            seq(field("op", operator), field("arg", $.expression))
          )
        )
      );
    },

    binary_expression: ($) => {
      /** @type {Array<[RuleOrLiteral, number]>} */
      const table = [
        ["+", PREC.ADD],
        ["-", PREC.ADD],
        ["*", PREC.MULTIPLY],
        ["/", PREC.MULTIPLY],
        ["\\", PREC.MULTIPLY],
        ["%", PREC.MULTIPLY],
        ["**", PREC.POWER],
        ["||", PREC.LOGICAL_OR],
        ["&&", PREC.LOGICAL_AND],
        //['|', PREC.INCLUSIVE_OR],
        //['^', PREC.EXCLUSIVE_OR],
        //['&', PREC.BITWISE_AND],
        ["==", PREC.EQUAL],
        ["!=", PREC.EQUAL],
        [">", PREC.RELATIONAL],
        [">=", PREC.RELATIONAL],
        ["<=", PREC.RELATIONAL],
        ["<", PREC.RELATIONAL],
        //['<<', PREC.SHIFT],
        //['>>', PREC.SHIFT],
        //['>>>', PREC.SHIFT],
        ["??", PREC.UNWRAP_OR],
      ];

      return choice(
        ...table.map(([operator, precedence]) => {
          return prec.left(
            precedence,
            seq(
              field("left", $.expression),
              field("op", operator),
              field("right", $.expression)
            )
          );
        })
      );
    },

    paren_expression: $ => seq(
      '(',
      $.expression,
      ')'
    ),

    if_expression: $ => seq(
      'if',
      $.if_condition,
      $.block_expression,
      optional(seq('else', $.else_expression)),
    ),

    if_condition: $ => choice(
      $.expression,
      $.if_let_pattern,
    ),

    if_let_pattern: $ => seq(
      'let',
      $.identifier,
      '=',
      $.expression,
    ),

    else_expression: $ => choice(
      $.if_expression,
      $.block_expression,
    ),

    block_expression: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    return_expression: $ => prec.left(PREC.RETURN, seq(
      'return',
      $.expression,
    )),

    break_expression: $ => 'break',
    continue_expression: $ => 'continue',

    index_expression: $ => seq(
      $.expression,
      '[',
      $.expression,
      ']'
    ),

    for_expression: $ => seq(
      'for',
      $.identifier,
      'in',
      $.expression,
      $.block_expression,
    ),

    assign_expression: $ => prec.left(PREC.ASSIGN, seq(
      $.expression,
      $.assign_operator,
      $.expression,
    )),

    assign_operator: $ => choice(
      '=',
      '+=',
      '-=',
    ),

    call_expression: $ => prec.left(PREC.CALL, seq(
      $.expression,
      '(',
      sepBy(',', $.expression),
      ')'
    )),

    identifier: ($) => /([A-Za-z_$][A-Za-z_$0-9]*)/,

    member_expression: $ => prec.left(PREC.MEMBER, seq(
      $.expression,
      $.access_operator,
      $.identifier,
    )),

    access_operator: $ => choice(
      '.',
      '?.',
    ),

    literal: $ => choice(
      $.number_literal,
      $.string_literal,
      $.boolean_literal,
    ),

    number_literal: $ => /\d+/,
    string_literal: $ => /"[^"]*"/,
    boolean_literal: $ => choice('true', 'false'),
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
