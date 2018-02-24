// Precedence pulled from: https://www.tutorialspoint.com/fortran/fortran_operators.htm
// I need to test this because there are some conflicts between info here and
// that provided in: https://software.intel.com/en-us/fortran-compiler-18.0-developer-guide-and-reference-summary-of-operator-precedence
// and in http://earth.uni-muenster.de/~joergs/doc/f90/lrm/lrm0067.htm
// my final settings will be based on gfortran test cases
// Additional ref info: https://userpage.physik.fu-berlin.de/~tburnus/gcc-trunk/FortranRef/fQuickRef1.pdf
//  http://earth.uni-muenster.de/~joergs/doc/f90/lrm/dflrm.htm#book-toc
//
// Semicolons are treated exactly like newlines and can end any statement
// or be used to chain multiple ones together with the exception of using
// an ampersand to continue a line and comments.
//
// I'll need to figure out how best to add support for statement labels
// since the parser doesn't support the ^ regex token, a using a seq
// might work as long as the label is optional.
//
// The best route to handle line continuation in fortran might be using
// an external scanner. Basically the scanner would create the "end_of_statement"
// tokens, as well as newline tokens and if an ampersand was encounted prior to
// a newline the EOS token would get skipped. The same scanner would then be
// used as needed to support fixed form fortran although line truncation at
// 72 characters would not be supported because it can be configured at
// compile time.
//
const PREC = {
  ASSIGNMENT: -10,
  DEFAULT: 0,
  LOGICAL_EQUIV: 5,
  LOGICAL_OR: 10,
  LOGICAL_AND: 20,
  LOGICAL_NOT: 30,
  RELATIONAL: 40,
  ADDITIVE: 50,
  MULTIPLICATIVE: 60,
  EXPONENT: 70,
  CALL: 80,
  UNARY: 90,
  TYPE_MEMBER: 100
}

module.exports = grammar({
  name: 'fortran',

  extras: $ => [
    /[ \t\n]/,
    $.comment
  ],

  inline: $ => [
    $._top_level_item,
    $._statement
  ],

  conflicts: $ => [],

  rules: {
    translation_unit: $ => repeat($._top_level_item),

    _top_level_item: $ => choice(
      $.program_block,
      //$.module_block,
      //$.interface_block,
      //$.subroutine_block
      //$.functon_block,
    ),

    // Block level structures

    program_block: $ => seq(
      prec.right(seq(
        caseInsensitive('program'),
        $.identifier
      )),
      optional($.comment),
      $._end_of_statement,
      //repeat($.use_statement),
      //repeat($.implicit_statement),
      //repeat(choice(seq($.variable_declaration, $._newline), $.type_block)),
      repeat($._statement),
      block_structure_ending($, 'program')
    ),

    // subroutine_block: $ => seq(
    //   prec.right(seq(
    //     caseInsensitive('subroutine'),
    //     $.identifier,
    //     optional($.parameters)
    //   )),
    //   $._newline,
    //   repeat($._statement),
    //   block_structure_ending($, 'subroutine')
    // ),

    // function_block: $ => seq(
    //   optional(choice($.intrinsic_type, $.custom_type)),
    //   prec.right(seq(
    //     caseInsensitive('function'),
    //     $.identifier,
    //     choice($.parameters, /\(\s*\)/)
    //   )),
    //   optional(seq(caseInsensitive('result'), '(', $.identifier ,')')),
    //   '\n',
    //   repeat(choice($.variable_declaration, $.type_block)),
    //   repeat($._statement),
    //   block_structure_ending($, 'function')
    // ),

    // parameters: $ => seq(
    //   '(',
    //   commaSep1($.identifier),
    //   ')'
    // ),

    /* Variable declarations will go here */

    // Statements

    _statement: $ => seq(
      optional($.statement_label),
      choice(
        $.assignment_expression,
        $.pointer_assignment_expression,
        $.call_expression,
        $.subroutine_call,
        //$.return_statement,
        //$.continue_statement,
        //$.goto_statement,
        //$.stop_statement,
        //$.data_statement,
        //$.inline_if_statment,
        //$.if_statement,
        //$.select_statement,
        //$.do_statement,
        //$.print_statement,
        //$.write_statement,
        //$.format_statement,
        //$.implied_do_loop  // https://pages.mtu.edu/~shene/COURSES/cs201/NOTES/chap08/io.html
      ),
      $._end_of_statement
    ),

    statement_label: $ => /\d+/,

    subroutine_call: $ => seq(
      caseInsensitive('call'),
      $.call_expression
    ),

    // Expressions

    _expression: $ => choice(
      $.number_literal,
      $.complex_literal,
      $.string_literal,
      $.boolean_literal,
      $.identifier,
      $.derived_type_member_expression,
      $.logical_expression,
      $.relational_expression,
      $.concatenation_expression,
      $.math_expression,
      $.parenthesized_expression,
      $.call_expression
    ),

    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')'
    ),

    assignment_expression: $ => prec.right(PREC.ASSIGNMENT, seq(
      $._expression,
      '=',
      $._expression
    )),

    pointer_assignment_expression: $ => prec.right(seq(
      $._expression, // this needs to support structs i.e. mytype%attr
      '=>',
      $._expression
    )),

    derived_type_member_expression: $ => prec.right(PREC.TYPE_MEMBER, seq(
      $._expression,
      '%',
      $._expression
    )),

    logical_expression: $ => choice(
      prec.left(PREC.LOGICAL_OR, seq($._expression, caseInsensitive('.or.'), $._expression)),
      prec.left(PREC.LOGICAL_AND, seq($._expression, caseInsensitive('.and.'), $._expression)),
      prec.left(PREC.LOGICAL_EQUIV, seq($._expression, caseInsensitive('.eqv.'), $._expression)),
      prec.left(PREC.LOGICAL_EQUIV, seq($._expression, caseInsensitive('.neqv.'), $._expression)),
      prec.left(PREC.LOGICAL_NOT, seq(caseInsensitive('.not.'), $._expression))
    ),

    relational_expression: $ => prec.left(PREC.RELATIONAL, seq(
      $._expression,
      choice(
        '<',
        caseInsensitive('.lt.'),
        '>',
        caseInsensitive('.gt.'),
        '<=',
        caseInsensitive('.le.'),
        '>=',
        caseInsensitive('.ge.'),
        '==',
        caseInsensitive('.eq.'),
        '/=',
        caseInsensitive('.ne.'),
      ),
      $._expression
    )),

    concatenation_expression: $ => prec.right(PREC.ADDITIVE, seq(
      $._expression,
      '//',
      $._expression
    )),

    math_expression: $ => choice(
      prec.left(PREC.ADDITIVE, seq($._expression, '+', $._expression)),
      prec.left(PREC.ADDITIVE, seq($._expression, '-', $._expression)),
      prec.left(PREC.MULTIPLICATIVE, seq($._expression, '*', $._expression)),
      prec.left(PREC.MULTIPLICATIVE, seq($._expression, '/', $._expression)),
      prec.left(PREC.EXPONENT, seq($._expression, '**', $._expression)),
      prec.right(PREC.UNARY, seq('-', $._expression)),
      prec.right(PREC.UNARY, seq('+', $._expression))
    ),

    // Due to the fact Fortran uses parentheses for both function calls and
    // array access there is no way to differentiate the two except for the
    // isolated case of assignment, since you can't assign to a function call.
    // Because the difference is context specific it is better to consistently
    // use the call expression for all cases instead of adding a few odd
    // corner cases when the two can be differentiated.
    call_expression: $ => prec(
      PREC.CALL,
      seq($.identifier, $.argument_list)
    ),

    argument_list: $ => prec.dynamic(
      1,
      seq(
        '(',
        commaSep(choice($.keyword_argument, $.array_slice, $._expression)),
         ')'
       )
    ),

    // precedence is used to prevent conflict with assignment expression
    keyword_argument: $ => prec(1, seq(
      $.identifier,
      '=',
      $._expression
    )),

    array_slice: $ => seq(
      optional($._expression), // start
      ':',
      optional($._expression), // stop
      optional(seq(':', $._expression)) // stride
    ),

    number_literal: $ => token(
      choice(
        // integer, real with and without exponential notation
        /[-+]?\d*(\.\d*)?([eEdD][-+]?\d+)?/,
        // binary literal
        /[bB]?[01]+[bB]?/,
        // octal literal
        /[oO]?[0-8]+[oO]?/,
        // hexcadecimal
        /[zZ]?[0-9a-fA-F]+[zZ]?/
    )),

    complex_literal: $ => seq(
      '(',
      choice($.number_literal, $.identifier),
      ',',
      choice($.number_literal, $.identifier),
      ')'
    ),

    string_literal: $ => choice(
      $._double_quoted_string,
      $._single_quoted_string
    ),

    _double_quoted_string: $ => token(seq(
      '"',
      repeat(choice(/[^"\n]/, /""./)),
      '"')
    ),

    _single_quoted_string: $ => token(seq(
      "'",
      repeat(choice(/[^'\n]/, /''./)),
      "'")
    ),

    boolean_literal: $ => token(
      choice(
        caseInsensitive('.true.'),
        caseInsensitive('.false.')
      )
    ),

    identifier: $ => /[a-zA-Z_]\w*/,

    comment: $ => token(seq('!', /.*/)),

    _semicolon: $ => ';',

    _newline: $ => '\n',

    _end_of_statement: $ => choice($._semicolon, $._newline)
  }
})

module.exports.PREC = PREC

function caseInsensitive (keyword) {
  return new RegExp(keyword
    .split('')
    .map(l => l != l.toUpperCase() ? `[${l}${l.toUpperCase()}]` : l)
    .join('')
  )
}

function preprocessor (command) {
  return alias(new RegExp('#[ \t]*' + command), '#' + command)
}

function commaSep (rule) {
  return optional(commaSep1(rule))
}

function commaSep1 (rule) {
  return sep1(rule, ',')
}

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)))
}

function block_structure_ending ($, struct_type) {
  var obj = prec.right(seq(
    caseInsensitive('end'),
    optional(seq(
      caseInsensitive(struct_type),
      optional($.identifier)
    )),
    $._end_of_statement
  ))
  //
  return obj
}
