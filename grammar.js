// Precedence pulled from: https://www.tutorialspoint.com/fortran/fortran_operators.htm
// I need to test this because there are some conflicts between info here and
// that provided in: https://software.intel.com/en-us/fortran-compiler-18.0-developer-guide-and-reference-summary-of-operator-precedence
// and in http://earth.uni-muenster.de/~joergs/doc/f90/lrm/lrm0067.htm
// my final settings will be based on gfortran test cases
const PREC = {
  ASSIGNMENT: -10,
  DEFAULT: 0,
  LOGICAL_XOR: 5,
  LOGICAL_EQUIV: 5
  LOGICAL_OR: 10,
  LOGICAL_AND: 20,
  LOGICAL_NOT: 30
  RELATIONAL: 40,
  ADDITIVE: 50,
  MULTIPLICATIVE: 60,
  EXPONENT: 70,
};

module.exports = grammar({
  name: 'fortran',

  extras: $ => [
    /\s/
  ]
});

module.exports.PREC = PREC

function preprocessor (command) {
  return alias(new RegExp('#[ \t]*' + command), '#' + command)
}
