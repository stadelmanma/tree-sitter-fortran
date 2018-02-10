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
};

module.exports = grammar({
  name: 'fortran',

  extras: $ => [
    /\s/,
    $.comment
  ],

  conflicts: $ => [
    // I don't think this should be a conflict but I can't figure out
    // how to resolve it
    [$.type_qualifier, $.parenthesized_expression]
  ],

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
      '\n',
      //repeat($.use_statement),
      //repeat($.implicit_statement),
      repeat(choice(seq($.variable_declaration, '\n'), $.type_block)),
      repeat($._statement),
      block_structure_ending($, 'program')
    ),

    // subroutine_block: $ => seq(
    //   prec.right(seq(
    //     caseInsensitive('subroutine'),
    //     $.identifier,
    //     optional($.parameters)
    //   )),
    //   '\n',
    //   //repeat($.use_statement),
    //   //repeat($.implicit_statement),
    //   repeat(choice(seq($.variable_declaration, '\n'), $.type_block)),
    //   //repeat($._statement),
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

    parameters: $ => seq(
      '(',
      commaSep1($.identifier),
      ')'
    ),

    /* Variable declarations will go here */


    /* Expressions and statements will go here */

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

    end_statement: $ => caseInsensitive('end'),

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
    ))
  ));
  //
  return obj;
}
