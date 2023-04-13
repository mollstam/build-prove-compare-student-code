
module.exports = grammar({
  name: 'impcore',

  extras: $ => [
    /\n/,
    /\s/,
    $.comment
  ],

  rules: {
    program: $ => seq(
      repeat($._def)
    ),

    _def: $ => choice(
      $.variable_definition,
      $._exp,
      $.function_definition,
      $.use_keyword,
      $._unit_test
    ),

    _unit_test: $ => choice(
      $.check_expect_keyword,
      $.check_assert_keyword,
      $.check_error_keyword,
    ),

    _exp: $ => choice(
      $._literal,
      alias($._identifier, $.variable_name),
      $.set_keyword,
      $.if_expression,
      $.while_expression,
      $.begin_keyword,
      $.function_call,
    ),

    _literal: $ => $.numeral,

    numeral: $ => token(seq(optional(choice('-', '+')), /\d+/)),

    comment: $ => token(seq(';', /.*/)),

    _identifier: $ => token(seq(/[^\(\)\[\]\{\}\s\d]+/)),

    _reserved_identifier: $ => choice(
      'val',
      'define',
      'use',
      'check-expect',
      'check-assert',
      'check-error',
      'set',
      'if',
      'while',
      'begin',
    ),

    formals: $ => seq(
      '(',
      repeat(field('name', alias($._identifier, $.variable_name))),
      ')',
    ),

    variable_definition: $ => seq(
      '(',
      'val',
      field('name', alias($._identifier, $.variable_name)),
      $._exp,
      ')'
    ),

    function_definition: $ => seq(
      '(',
      'define',
      field('name', alias($._identifier, $.function_name)),
      field('formals', $.formals),
      $._exp,
      ')'
    ),

    use_keyword: $ => seq(
      '(',
      'use',
      field('name', alias($._identifier, $.file_name)),
      ')'
    ),

    check_expect_keyword: $ => seq(
      '(',
      'check-expect',
      $._exp,
      $._exp,
      ')'
    ),

    check_assert_keyword: $ => seq(
      '(',
      'check-assert',
      $._exp,
      ')'
    ),

    check_error_keyword: $ => seq(
      '(',
      'check-error',
      $._exp,
      ')'
    ),

    begin_keyword: $ => seq(
      '(',
      'begin',
      repeat($._exp),
      ')'
    ),

    function_call: $ => seq(
      '(',
      field('name', alias($._identifier, $.function_name)),
      repeat($._exp),
      ')'
    ),

    set_keyword: $ => seq(
      '(',
      'set',
      field('name', alias($._identifier, $.variable_name)),
      field('val', $._exp),
      ')',
    ),

    if_expression: $ => seq(
      '(',
      'if',
      $._exp,
      $._exp,
      $._exp,
      ')',
    ),

    while_expression: $ => seq(
      '(',
      'while',
      $._exp,
      $._exp,
      ')',
    ),
  }
});
