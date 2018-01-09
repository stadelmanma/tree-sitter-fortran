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
};

module.exports = grammar({
  name: 'fortran',

  extras: $ => [
    /\s/,
    $.comment
  ],

  // I'll need to figure out how best to add support for statement labels
  // since the parser doesn't support the ^ regex token, a using a seq
  // might work as long as the label is optional.

  rules: {
    translation_unit: $ => repeat($._top_level_item),

    _top_level_item: $ => choice(
      $.program_statement
    ),

    program_statement: $ => seq(
      prec.right(seq(
        /program|PROGRAM/,
        $.identifier
      )),
      '\n',
      repeat($._top_level_item),
      block_structure_ending($, 'program')
    ),

    identifier: $ => /[a-zA-Z_]\w*/,

    end_statement: $ => /end|END/,

    comment: $ => token(seq('!', /.*/))
  }
});

module.exports.PREC = PREC

function preprocessor (command) {
  return alias(new RegExp('#[ \t]*' + command), '#' + command);
}

function block_structure_ending ($, struct_type) {
  var obj = prec.right(seq(
    $.end_statement,
    optional(seq(
      new RegExp(struct_type + '|' + struct_type.toUpperCase()),
      optional($.identifier)
    ))
  ));
  //
  return obj;
}
