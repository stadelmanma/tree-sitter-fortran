// Precedence pulled from: https://www.tutorialspoint.com/fortran/fortran_operators.htm
// I need to test this because there are some conflicts between info here and
// that provided in: https://software.intel.com/en-us/fortran-compiler-18.0-developer-guide-and-reference-summary-of-operator-precedence
// and in http://earth.uni-muenster.de/~joergs/doc/f90/lrm/lrm0067.htm
// my final settings will be based on gfortran test cases
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
  CALL: 80
};

module.exports = grammar({
  name: 'fortran',

  extras: $ => [
    /[ \t]/,
    $.comment
  ],

  // I'll need to figure out how best to add support for statement labels
  // since the parser doesn't support the ^ regex token, a using a seq
  // might work as long as the label is optional.

  rules: {
    translation_unit: $ => repeat($._top_level_item),

    _top_level_item: $ => choice(
      $.program_block,
      $.subroutine_block
    ),

    // Block level structures

    program_block: $ => seq(
      prec.right(seq(
        caseInsensitive('program'),
        $.identifier
      )),
      '\n',
      repeat($._top_level_item), // the program block can contain anything i think?
      block_structure_ending($, 'program')
    ),

    subroutine_block: $ => seq(
      prec.right(seq(
        caseInsensitive('subroutine'),
        $.identifier,
        optional($.parameters)
      )),
      '\n',
      // the contents of the subroutine (which can include functions as well as any inline statement)
      block_structure_ending($, 'subroutine')
    ),

    end_statement: $ => caseInsensitive('end'),

    // Statements

    _statement: $ => choice(
      $.expression_statement,
      $.variable_declaration
      //$.if_statement,
      //$.select_statement,
      //$.do_statement,
      //$.return_statement,
      //$.exit_statement,
      //$.cycle_statement,
      //$.continue_statement,
      //$.goto_statement,
      //$.stop_statement,
      //$.use_statement,
      //$.implicit_statement,
      //$.parameter_statment
      //
    ),

    expression_statement: $ => seq(
      optional(choice(
        $._expression,
        $.comma_expression
      )),
      choice(';', '\n')
    ),

    // Variable declaration expressions

    type_block: $ => seq(
      prec.right(seq(
        caseInsensitive('type'),
        $.identifier
      )),
      '\n',
      repeat($.variable_declaration),
      block_structure_ending($, 'type')
    ),

    variable_declaration: $ => seq(
      choice($._intrinsic_type, $._custom_type),
      // more stuff like dimensions, intent, etc..
      '::',
      commaSep1(seq($.identifier, optional(/\(.+?\)/)))
    ),

    _intrinsic_type: $ => token(
      seq(
        choice(
          caseInsensitive('integer'),
          caseInsensitive('real'),
          caseInsensitive('complex'),
          caseInsensitive('logical'),
          caseInsensitive('character'),
          caseInsensitive('integer')
        ),
        /\(.+?\)/
      )
    ),

    _custom_type: $ => seq(
      caseInsensitive('type'),
      '(',
      $.identifier,
      ')'
    ),

    // Expressions

    _expression: $ => choice(
      $.identifier,
      $.number_literal,
      $.string_literal,
      $.true,
      $.false,
      $.call_expression
    ),

    comma_expression: $ => seq(
      $._expression,
      ',',
      choice($._expression, $.comma_expression)
    ),

    // This should also work for subrooutines, add an optional 'CALL'
    call_expression: $ => prec(
      PREC.CALL, seq($._expression, $.argument_list)
    ),

    argument_list: $ => prec.dynamic(1, seq('(', commaSep1($._expression), ')')),

    // Fortran allows named parameters (i.e. OPEN), this doesn't work
    // with those
    parameters: $ => seq(
      '(',
      commaSep1($.identifier),
      ')'
    ),

    array_slice: $ => seq(
      '(',
      commaSep1($._array_slice),
      ')'
    ),

    _array_slice: $ => /\d*:?\d*/,

    number_literal: $ => token(
      choice(
        // integer, real with and without exponential notation
        /[-+]?\d*(\.\d*)?([eEdD][-+]?\d+)?/,
        // complex number (hopefully this doesn't conflict with parameter lists)
        seq('(', /[-+]?\d*(\.\d*)?([eEdD][-+]?\d+)?/, ',' , /[-+]?\d*(\.\d*)?([eEdD][-+]?\d+)?/, ')'),
        // binary literal
        /[bB]?[01]+[bB]?/,
        // octal literal
        /[oO]?[0-8]+[oO]?/,
        // hexcadecimal
        /[zZ]?[0-9a-fA-F]+[zZ]?/
    )),

    // trying to use this in the literal rule causes an invalid token error
    //_simple_number: $ => /[-+]?\d*(\.\d*)?([eEdD][-+]?\d+)?/,

    string_literal: $ => token(seq(
      choice('"', "'"),
      repeat(choice(/[^\\"\n]/, /\\./)),
      choice('"', "'")
    )),

    true: $ => token(prec(1, caseInsensitive('.true.'))),
    false: $ => token(prec(1, caseInsensitive('.false.'))),

    identifier: $ => /[a-zA-Z_]\w*/,

    comment: $ => token(seq('!', /.*/))
  }
});

module.exports.PREC = PREC

function caseInsensitive (keyword) {
  return new RegExp(keyword
    .split('')
    .map(letter => `[${letter}${letter.toUpperCase()}]`)
    .join('')
  )
}

function preprocessor (command) {
  return alias(new RegExp('#[ \t]*' + command), '#' + command);
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
    ))
  ));
  //
  return obj;
}
