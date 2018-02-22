// Precedence pulled from: https://www.tutorialspoint.com/fortran/fortran_operators.htm
// I need to test this because there are some conflicts between info here and
// that provided in: https://software.intel.com/en-us/fortran-compiler-18.0-developer-guide-and-reference-summary-of-operator-precedence
// and in http://earth.uni-muenster.de/~joergs/doc/f90/lrm/lrm0067.htm
// my final settings will be based on gfortran test cases
// Additional ref info: https://userpage.physik.fu-berlin.de/~tburnus/gcc-trunk/FortranRef/fQuickRef1.pdf
//  http://earth.uni-muenster.de/~joergs/doc/f90/lrm/dflrm.htm#book-toc
//
const PREC = {
  ASSIGNMENT: -10,
  DEFAULT: 0,
  LOGICAL_XOR: 5,
  LOGICAL_EQUIV: 5,
  LOGICAL_OR: 10,
  LOGICAL_AND: 20,
  LOGICAL_NOT: 30,
  RELATIONAL: 40,
  ADDITIVE: 50,
  MULTIPLICATIVE: 60,
  EXPONENT: 70,
  CALL: 80,
  UNARY: 100
}

module.exports = grammar({
  name: 'fortran',

  extras: $ => [
    /[ \t\n]/,
    $.comment
  ],

  conflicts: $ => [],

  // I'll need to figure out how best to add support for statement labels
  // since the parser doesn't support the ^ regex token, a using a seq
  // might work as long as the label is optional.

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

    _statement: $ => choice(
      $._simple_statements,
      $._compound_statement
    ),

    _simple_statements: $ => seq(
      $._simple_statement,
      optional(repeat(seq($._semicolon, $._simple_statement))),
      optional($._semicolon),
      $._newline
    ),

    _simple_statement: $ => choice(
      $._expression,
      //$.return_statement,
      //$.continue_statement,
      //$.goto_statement,
      //$.stop_statement,
      //$.data_statement,
      //$.call_statement,
      //$.inline_if_statment,
      //$.implied_do_loop  // https://pages.mtu.edu/~shene/COURSES/cs201/NOTES/chap08/io.html
    ),

    _compound_statement: $ => choice(
      //$.if_statement,
      //$.select_statement,
      //$.do_statement,
    ),

    // only appears inside DO loops
    cycle_statement: $ => seq(
      caseInsensitive('cycle'),
      optional($.identifier)
    ),

    exit_statement: $ => seq(
      caseInsensitive('exit'),
      optional($.identifier)
    ),

    // only appears at the end of blocks
    end_statement: $ => caseInsensitive('end'),

    // Expressions

    _expression: $ => choice(
      $.assignment_expression,
      $.pointer_assignment_expression,
      $.math_expression,
      //$.parenthesized_expression
    ),

    _expression_component: $ => choice(
      $._literals,
      $._expression
    ),

    // Not sure if the array slice should be included here
    // parenthesized_expression: $ => seq(
    //   '(',
    //   commaSep(choice($._expression, $.array_slice)),
    //   ')'
    // ),

    assignment_expression: $ => prec.right(PREC.ASSIGNMENT, seq(
      $._expression_component,
      '=',
      $._expression_component
    )),

    // http://earth.uni-muenster.de/~joergs/doc/f90/lrm/lrm0079.htm#pointer_assign
    pointer_assignment_expression: $ => prec.right(seq(
      $.identifier, // this needs to support structs i.e. mytype%attr
      '=>',
      $._expression_component
    )),

    math_expression: $ => choice(
      prec.left(PREC.ADDITIVE, seq($._expression_component, '+', $._expression_component)),
      prec.left(PREC.ADDITIVE, seq($._expression_component, '-', $._expression_component)),
      prec.left(PREC.MULTIPLICATIVE, seq($._expression_component, '*', $._expression_component)),
      prec.left(PREC.MULTIPLICATIVE, seq($._expression, '/', $._expression_component)),
      prec.left(PREC.EXPONENT, seq($._expression_component, '**', $._expression_component)),
      prec.right(PREC.UNARY, seq('-', $._expression_component)),
      prec.right(PREC.UNARY, seq('+', $._expression_component))
    ),

    // This should also work for subroutines, add an optional 'CALL'
    // call_expression: $ => prec(
    //   PREC.CALL, seq($._expression, $.argument_list)
    // ),
    //
    // Fortran allows named parameters (i.e. OPEN(FILE=name)), I need to make
    // sure this works with them, misclassifcation as an assignment_expression
    // might be bad. Python uses the same syntax for function calls
    // argument_list: $ => prec.dynamic(1, seq('(', commaSep1($._expression), ')')),

    // array_slice: $ => seq(
    //   optional($._expression),
    //   ':',
    //   optional($._expression),
    //   optional(seq(':', $._expression))
    // ),

    // bare literals cannot appear in valid fortran programs
    _literals: $ => choice(
      $.number_literal,
      $.complex_literal,
      //$.string_literal,
      $.boolean_literal,
      $.identifier
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
      $.number_literal,
      ',',
      $.number_literal,
      ')'
    ),

    // this is completely wrong but I'll tinker with it later since in
    // reality I'll need to check for the unescaped quote used to start
    // the string. Otherwise keep matching until a newline
    // string_literal: $ => token(seq(
    //   choice('"', "'"),
    //   repeat(choice(/[^\\"\n]/, /\\./)),
    //   choice('"', "'")
    // )),

    boolean_literal: $ => token(
      choice(
        `.${caseInsensitive('true')}.`,
        `.${caseInsensitive('false')}.`
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
    .map(letter => `[${letter}${letter.toUpperCase()}]`)
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
    $.end_statement,
    optional(seq(
      caseInsensitive(struct_type),
      optional($.identifier)
    )),
    $._newline
  ))
  //
  return obj
}
