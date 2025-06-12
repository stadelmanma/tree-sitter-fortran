// Precedence pulled from: https://www.tutorialspoint.com/fortran/fortran_operators.htm
// I need to test this because there are some conflicts between info here and
// that provided in: https://software.intel.com/en-us/fortran-compiler-18.0-developer-guide-and-reference-summary-of-operator-precedence
// and in http://earth.uni-muenster.de/~joergs/doc/f90/lrm/lrm0067.htm
// my final settings will be based on gfortran test cases
// Additional ref info:
//  https://userpage.physik.fu-berlin.de/~tburnus/gcc-trunk/FortranRef/fQuickRef1.pdf
//  http://earth.uni-muenster.de/~joergs/doc/f90/lrm/dflrm.htm#book-toc
//  http://www.lahey.com/docs/lfprohelp/F95AREXTERNALStmt.htm
//  http://www.personal.psu.edu/jhm/f90/statements/intrinsic.html
//  http://earth.uni-muenster.de/~joergs/doc/f90/lrm/lrm0083.htm#data_type_declar
//
// I'll need to figure out how best to add support for statement labels
// since the parser doesn't support the ^ regex token, a using a seq
// might work as long as the label is optional.
//
const PREC = {
  ASSIGNMENT: -10,
  DEFAULT: 0,
  DEFINED_OPERATOR: 2,
  LOGICAL_EQUIV: 5,
  LOGICAL_OR: 10,
  LOGICAL_AND: 20,
  LOGICAL_NOT: 30,
  RELATIONAL: 40,
  ADDITIVE: 50,
  UNARY: 55,
  MULTIPLICATIVE: 60,
  EXPONENT: 70,
  CALL: 80,
  TYPE_MEMBER: 100
}

const PREPROC_PREC = {
  DEFAULT: 0,
  LOGICAL_OR: 1,
  LOGICAL_AND: 2,
  INCLUSIVE_OR: 3,
  EXCLUSIVE_OR: 4,
  BITWISE_AND: 5,
  EQUAL: 6,
  RELATIONAL: 7,
  OFFSETOF: 8,
  SHIFT: 9,
  ADD: 10,
  MULTIPLY: 11,
  UNARY: 14,
  CALL: 15,
};

module.exports = grammar({
  name: 'fortran',

  externals: $ => [
    '&',
    $._integer_literal,
    $._float_literal,
    $._boz_literal,
    $._string_literal,
    $._string_literal_kind,
    $._external_end_of_statement,
    $._preproc_unary_operator,
    $.hollerith_constant,
  ],

  extras: $ => [
    // This allows escaping newlines everywhere, although this is only valid in
    // preprocessor statements
    /\s|\\\r?\n/,
    $.comment,
    '&',
  ],

  inline: $ => [
    $._top_level_item,
    $._statement
  ],

  conflicts: $ => [
    [$._expression, $.complex_literal],
    [$._argument_list, $.parenthesized_expression],
    [$.case_statement],
    [$.data_set, $._expression],
    [$.data_statement, $.identifier],
    [$.data_value, $._expression],
    [$.else_clause],
    [$.elseif_clause, $.identifier],
    [$.elseif_clause],
    [$.elsewhere_clause],
    [$.intrinsic_type],
    [$._intrinsic_type, $.identifier],
    [$.module_statement, $.procedure_qualifier],
    [$.procedure_declaration],
    [$.rank_statement],
    [$.stop_statement, $.identifier],
    [$.type_statement],
    [$.preproc_ifdef_in_specification_part, $.program],
    [$.preproc_else_in_specification_part, $.program],
    [$.coarray_critical_statement, $.identifier],
    [$.format_statement, $.identifier],
    [$._inline_if_statement, $.arithmetic_if_statement, $._block_if_statement, $.identifier],
    [$.cray_pointer_declaration, $.identifier],
    [$.unit_identifier, $.identifier],
  ],

  supertypes: $ => [
    $._specification_parts,
    $._expression,
    $._statements,
    $._argument_item,
  ],

  rules: {
    translation_unit: $ => seq(
      repeat($._top_level_item),
      optional($.program),
    ),

    _top_level_item: $ => prec(2, choice(
      $.include_statement,
      $.program,
      $.module,
      $.submodule,
      $.interface,
      $.subroutine,
      $.function,
      $.block_data,
      $.preproc_if,
      $.preproc_ifdef,
      $.preproc_include,
      $.preproc_def,
      $.preproc_function_def,
      $.preproc_call,
    )),

    // Preprocessor

    preproc_include: $ => seq(
      preprocessor('include'),
      field('path', choice(
        $.string_literal,
        $.identifier,
        $.system_lib_string,
        alias($.preproc_call_expression, $.call_expression),
      )),
      /\r?\n/,
    ),

    preproc_def: $ => seq(
      preprocessor('define'),
      field('name', $.identifier),
      field('value', optional($.preproc_arg)),
      token(prec(1, /\r?\n/)), // force newline to win over preproc_arg
    ),

    preproc_function_def: $ => seq(
      preprocessor('define'),
      field('name', $.identifier),
      field('parameters', $.preproc_params),
      field('value', optional($.preproc_arg)),
      token.immediate(/\r?\n/),
    ),

    preproc_params: $ => seq(
      token.immediate('('), commaSep(choice($.identifier, '...')), ')',
    ),

    preproc_call: $ => seq(
      field('directive', $.preproc_directive),
      field('argument', optional($.preproc_arg)),
      token.immediate(/\r?\n/),
    ),

    ...preprocIf('', $ => repeat($._top_level_item)),
    ...preprocIf('_in_module', $ => seq(
      repeat($._specification_part),
      optional($.internal_procedures)
    )),
    ...preprocIf('_in_specification_part', $ => seq(
      repeat($._specification_part),
      repeat($._statement),
      optional($.internal_procedures)
    ), 3),
    ...preprocIf('_in_statements', $ => seq(
      repeat($._statement),
      optional($.internal_procedures)
    ), 1),
    ...preprocIf('_in_procedure_statements', $ => seq(
      repeat($._statement),
      optional($.internal_procedures)
    ), 2),
    ...preprocIf('_in_internal_procedures', $ => repeat($._internal_procedures)),
    ...preprocIf('_in_interface', $ => repeat($._interface_items)),
    ...preprocIf('_in_derived_type', $ => repeat($.variable_declaration)),
    ...preprocIf('_in_bound_procedures', $ => repeat($.procedure_statement)),
    ...preprocIf('_in_select_case', $ => $.case_statement),
    ...preprocIf('_in_select_type', $ => $.type_statement),
    ...preprocIf('_in_select_rank', $ => $.rank_statement),

    preproc_arg: _ => token(prec(-1, /\S([^/\n]|\/[^*]|\\\r?\n)*/)),
    preproc_directive: _ => /#[ \t]*[a-zA-Z0-9]\w*/,

    _preproc_expression: $ => choice(
      $.identifier,
      alias($.preproc_call_expression, $.call_expression),
      $.number_literal,
      $.string_literal,
      $.preproc_defined,
      alias($.preproc_unary_expression, $.unary_expression),
      alias($.preproc_binary_expression, $.binary_expression),
      alias($.preproc_parenthesized_expression, $.parenthesized_expression),
    ),

    preproc_parenthesized_expression: $ => seq(
      '(',
      $._preproc_expression,
      ')',
    ),

    preproc_defined: $ => choice(
      prec(PREPROC_PREC.CALL, seq('defined', '(', $.identifier, ')')),
      seq('defined', $.identifier),
    ),

    // Preprocessor unary operator uses an external scanner to catch
    // '!' before its parsed as a comment
    preproc_unary_expression: $ => prec.left(PREPROC_PREC.UNARY, seq(
      field('operator', $._preproc_unary_operator),
      field('argument', $._preproc_expression),
    )),

    preproc_call_expression: $ => prec(PREPROC_PREC.CALL, seq(
      field('function', $.identifier),
      field('arguments', alias($.preproc_argument_list, $.argument_list)),
    )),

    preproc_argument_list: $ => seq(
      '(',
      commaSep($._preproc_expression),
      ')',
    ),

    preproc_comment: $ => /\/\*.*\*\//,

    preproc_binary_expression: $ => {
      const table = [
        ['+', PREPROC_PREC.ADD],
        ['-', PREPROC_PREC.ADD],
        ['*', PREPROC_PREC.MULTIPLY],
        ['/', PREPROC_PREC.MULTIPLY],
        ['%', PREPROC_PREC.MULTIPLY],
        ['||', PREPROC_PREC.LOGICAL_OR],
        ['&&', PREPROC_PREC.LOGICAL_AND],
        ['|', PREPROC_PREC.INCLUSIVE_OR],
        ['^', PREPROC_PREC.EXCLUSIVE_OR],
        ['&', PREPROC_PREC.BITWISE_AND],
        ['==', PREPROC_PREC.EQUAL],
        ['!=', PREPROC_PREC.EQUAL],
        ['>', PREPROC_PREC.RELATIONAL],
        ['>=', PREPROC_PREC.RELATIONAL],
        ['<=', PREPROC_PREC.RELATIONAL],
        ['<', PREPROC_PREC.RELATIONAL],
        ['<<', PREPROC_PREC.SHIFT],
        ['>>', PREPROC_PREC.SHIFT],
      ];

      return choice(...table.map(([operator, precedence]) => {
        return prec.left(precedence, seq(
          field('left', $._preproc_expression),
          // @ts-ignore
          field('operator', operator),
          field('right', $._preproc_expression),
        ));
      }));
    },

    system_lib_string: _ => token(seq(
      '<',
      repeat(choice(/[^>\n]/, '\\>')),
      '>',
    )),

    // Block level structures

    program: $ => seq(
      optional($.program_statement),
      repeat(
        choice(
          $._specification_part,
          alias($.preproc_if_in_specification_part, $.preproc_if),
          alias($.preproc_ifdef_in_specification_part, $.preproc_ifdef)
        ),
      ),
      repeat($._statement),
      optional($.internal_procedures),
      $.end_program_statement
    ),

    program_statement: $ => seq(caseInsensitive('program'), $._name, $._end_of_statement),
    end_program_statement: $ => blockStructureEnding($, 'program'),

    module: $ => seq(
      $.module_statement,
      repeat(
        choice(
          $._specification_part,
          alias($.preproc_if_in_module, $.preproc_if),
          alias($.preproc_ifdef_in_module, $.preproc_ifdef)
        ),
      ),
      optional($.internal_procedures),
      $.end_module_statement
    ),

    module_statement: $ => seq(caseInsensitive('module'), $._name, $._end_of_statement),
    end_module_statement: $ => blockStructureEnding($, 'module'),

    submodule: $ => seq(
      $.submodule_statement,
      repeat(
        choice(
          $._specification_part,
          alias($.preproc_if_in_module, $.preproc_if),
          alias($.preproc_ifdef_in_module, $.preproc_ifdef)
        ),
      ),
      optional($.internal_procedures),
      $.end_submodule_statement
    ),

    submodule_statement: $ => seq(
      caseInsensitive('submodule'),
      '(',
      field('ancestor', $.module_name),
      optional(seq(
        ':', field('parent', $.module_name)
      )),
      ')',
      $._name,
      $._end_of_statement,
    ),
    end_submodule_statement: $ => blockStructureEnding($, 'submodule'),
    module_name: $ => $._name,

    interface: $ => seq(
      $.interface_statement,
      repeat(choice(
        $._interface_items,
        $.include_statement,
        $.preproc_include,
        $.preproc_def,
        $.preproc_function_def,
        $.preproc_call,
        alias($.preproc_if_in_interface, $.preproc_if),
        alias($.preproc_ifdef_in_interface, $.preproc_ifdef),
      )),
      $.end_interface_statement
    ),

    _interface_items: $ => choice(
        $.import_statement,
        $.procedure_statement,
        $.function,
        $.subroutine,
        ';'
    ),

    interface_statement: $ => seq(
      optional($.abstract_specifier),
      caseInsensitive('interface'),
      optional(choice($._name, $._generic_procedure)),
      $._end_of_statement,
    ),

    end_interface_statement: $ => prec.right(seq(
      whiteSpacedKeyword('end', 'interface'),
      optional(choice($._name, $._generic_procedure)),
      $._end_of_statement
    )),

    // Obsolescent feature
    block_data: $ => seq(
      $.block_data_statement,
      repeat(
        choice(
          $._specification_part,
          alias($.preproc_if_in_module, $.preproc_if),
          alias($.preproc_ifdef_in_module, $.preproc_ifdef)
        ),
      ),
      $.end_block_data_statement
    ),

    block_data_statement: $ => seq(
      whiteSpacedKeyword('block', 'data'),
      optional($._name),
      $._end_of_statement
    ),

    // Can't use `blockStructureEnding` because it's two keywords
    end_block_data_statement: $ => {
      const structType = whiteSpacedKeyword('block', 'data', false)
      return prec.right(seq(
        choice(
          seq(
            alias(caseInsensitive('end', false), 'end'),
            optional(alias(structType, 'blockdata'))),
          alias(caseInsensitive('end' + structType, false), 'endblockdata')),
        optional($._name),
        $._end_of_statement))
    },

    assignment: $ => seq(caseInsensitive('assignment'), '(', '=', ')'),
    operator: $ => seq(caseInsensitive('operator'), '(', alias(/[^()]+/, $.operator_name), ')'),
    defined_io_procedure: $ => seq(
      choice(caseInsensitive('read'), caseInsensitive('write')),
      '(',
      choice(caseInsensitive('formatted'), caseInsensitive('unformatted')),
      ')'
    ),
    _generic_procedure: $ => choice(
        $.assignment,
        $.operator,
        $.defined_io_procedure,
    ),

    subroutine: $ => procedure($, $.subroutine_statement, $.end_subroutine_statement),

    subroutine_statement: $ => seq(
      optional($._callable_interface_qualifers),
      caseInsensitive('subroutine'),
      field('name', $._name),
      optional(field('parameters',$._parameters)),
      optional($.language_binding),
      $._end_of_statement,
    ),

    end_subroutine_statement: $ => blockStructureEnding($, 'subroutine'),

    module_procedure: $ => procedure($, $.module_procedure_statement, $.end_module_procedure_statement),

    module_procedure_statement: $ => seq(
      optional($._callable_interface_qualifers),
      seq(caseInsensitive('module'), caseInsensitive('procedure')),
      field('name', $._name),
      $._end_of_statement,
    ),

    end_module_procedure_statement: $ => blockStructureEnding($, 'procedure'),

    function: $ => procedure($, $.function_statement, $.end_function_statement),

    function_statement: $ => seq(
      optional($._callable_interface_qualifers),
      caseInsensitive('function'),
      field('name', $._name),
      optional(field('parameters',$._parameters)),
      optional(repeat(choice(
        $.language_binding,
        $.function_result
      ))),
      $._end_of_statement,
    ),

    language_binding: $ => seq(
      caseInsensitive('bind'),
      '(',
      $.identifier,
      optional(seq(',', $.keyword_argument)),
      ')'
    ),

    _callable_interface_qualifers: $ => repeat1(
      prec.right(1, choice(
        $.procedure_attributes,
        $.procedure_qualifier,
        field('type', $.intrinsic_type),
        field('type', $.derived_type)
      ))),

    procedure_attributes: $ => prec(1, seq(
      caseInsensitive('attributes'),
      '(',
      commaSep1(choice(
        caseInsensitive('global'),
        caseInsensitive('device'),
        caseInsensitive('host'),
        caseInsensitive('grid_global'))),
      ')'
    )),

    end_function_statement: $ => blockStructureEnding($, 'function'),

    function_result: $ => seq(
      caseInsensitive('result'),
      '(',
      $.identifier,
      ')'
    ),

    _name: $ => alias($.identifier, $.name),

    _parameters: $ => choice(
      seq('(', ')'),
      $.parameters
    ),

    parameters: $ => seq(
      '(',
      commaSep1($.identifier),
      ')'
    ),

    internal_procedures: $ => seq(
      $.contains_statement,
      $._end_of_statement,
      repeat($._internal_procedures)
    ),

    contains_statement: $ => caseInsensitive('contains'),

    _internal_procedures: $ => choice(
      $.function,
      $.module_procedure,
      $.subroutine,
      $.include_statement,
      alias($.preproc_if_in_internal_procedures, $.preproc_if),
      alias($.preproc_ifdef_in_internal_procedures, $.preproc_ifdef),
      $.preproc_include,
      $.preproc_def,
      $.preproc_function_def,
      $.preproc_call,
    ),

    // Variable Declarations

    _specification_part: $ => prec(1, choice(
      // Split out so it can be used as a supertype
      seq($._specification_parts, $._end_of_statement),
      // These two can't be included in the above because or we
      // duplicate the end_of_statement in the end block rule
      $.interface,
      $.derived_type_definition,
      // This allows format statements in the specification part,
      // without making the statements rule particularly awkward
      prec(1, seq($.statement_label, $.format_statement, $._end_of_statement)),
      $.preproc_include,
      $.preproc_def,
      $.preproc_function_def,
      $.preproc_call,
      alias($.preproc_if_in_specification_part, $.preproc_if),
      alias($.preproc_ifdef_in_specification_part, $.preproc_ifdef),
      ';',
    )),

    _specification_parts: $ => prec(1, choice(
      $.include_statement,
      $.use_statement,
      $.implicit_statement,
      $.save_statement,
      $.import_statement,
      $.public_statement,
      $.private_statement,
      $.bind_statement,
      $.enum,
      $.enumeration_type,
      $.namelist_statement,
      $.common_statement,
      $.variable_declaration,
      $.variable_modification,
      $.parameter_statement,
      $.equivalence_statement,
      $.data_statement,
      $.cray_pointer_declaration,
      // This catches statement functions, which are completely ambiguous
      $.assignment_statement,
      // This can appear immediately after procedure statement, or after `return`
      $.entry_statement,
    )),

    use_statement: $ => seq(
      caseInsensitive('use'),
      choice(
        optional(
          seq(',', choice(caseInsensitive('intrinsic'), caseInsensitive('non_intrinsic')), '::')
        ),
        optional('::')
      ),
      alias($.identifier, $.module_name),
      optional(
        choice(
          seq(',', commaSep1($.use_alias)),
          $.included_items
        )
      ),
    ),

    included_items: $ => seq(
      ',',
      caseInsensitive('only'),
      ':',
      optional(commaSep1(
        choice(
          $.use_alias,
          $.identifier,
          $._generic_procedure)
      ))
    ),

    use_alias: $ => seq(
      alias($.identifier, $.local_name),
      '=>',
      $.identifier
    ),

    implicit_statement: $ => seq(
      caseInsensitive('implicit'),
      choice(
        commaSep1(seq(
          choice(
            $.intrinsic_type,
            $.derived_type
          ),
          '(',
          commaSep1($.implicit_range),
          ')'
        )),
        seq(
          alias(caseInsensitive('none', false), $.none),
          optional(seq(
            '(',
            commaSep1(choice(
              caseInsensitive('type'),
              caseInsensitive('external')
            )),
            ')'
          ))
        )
      ),
    ),

    save_statement: $ => prec(1, seq(
      caseInsensitive('save'),
      optional($._identifier_or_common_block),
    )),

    bind_statement: $ => seq(
      $.language_binding,
      $._identifier_or_common_block,
    ),

    _identifier_or_common_block: $ => seq(
      optional('::'),
      commaSep1(choice(
        $.identifier,
        seq('/', alias($.identifier, $.common_block), '/'),
      )),
    ),

    private_statement: $ => prec.right(1, seq(
      caseInsensitive('private'),
      optional(seq(
        optional('::'),
        commaSep1(choice($.identifier, $._generic_procedure))
      )),
    )),

    public_statement: $ => prec.right(1, seq(
      caseInsensitive('public'),
      optional(seq(
        optional('::'),
        commaSep1(choice($.identifier, $._generic_procedure))
      )),
    )),

    namelist_statement: $ => seq(
      caseInsensitive('namelist'),
      repeat1($.variable_group),
    ),

    common_statement: $ => seq(
      caseInsensitive('common'),
      repeat1(choice(
        $.variable_group,
        commaSep1($._variable_declarator)
      )),
    ),

    variable_group: $ => seq(
      '/',
      $._name,
      '/',
      commaSep1($._variable_declarator)
    ),

    implicit_range: $ => seq(
      /[a-zA-Z]/,
      optional(seq('-', /[a-zA-Z]/))
    ),

    import_statement: $ => prec.left(seq(
      caseInsensitive('import'),
      optional($._import_names),
    )),
    _import_names: $ => choice(
      seq(optional('::'), commaSep1($.identifier)),
      seq(',',
          choice(
            seq(caseInsensitive('only'), ':', commaSep1($.identifier)),
            caseInsensitive('none'),
            caseInsensitive('all')
          )
         )
    ),

    derived_type_definition: $ => seq(
      $.derived_type_statement,
      repeat(choice(
        seq(
          choice(
            $.public_statement,
            $.private_statement,
            alias(caseInsensitive('sequence'), $.sequence_statement),
            $.include_statement,
          ),
          $._end_of_statement
        ),
        seq($.variable_declaration, $._end_of_statement),
        $.preproc_include,
        $.preproc_def,
        $.preproc_function_def,
        $.preproc_call,
        alias($.preproc_if_in_derived_type, $.preproc_if),
        alias($.preproc_ifdef_in_derived_type, $.preproc_ifdef),
      )),
      optional($.derived_type_procedures),
      $.end_type_statement
    ),

    abstract_specifier: $ => caseInsensitive('abstract'),

    access_specifier: $ => choice(
      caseInsensitive('public'),
      caseInsensitive('private')
    ),

    base_type_specifier: $ => seq(
      caseInsensitive('extends'),
      '(', $.identifier, ')'
    ),

    // These are only valid to specify once each, but tree-sitter
    // doesn't support permutations
    _derived_type_qualifier: $ => choice(
      $.abstract_specifier,
      field('access', $.access_specifier),
      field('base', $.base_type_specifier),
      $.language_binding
    ),

    derived_type_statement: $ => seq(
      optional($.statement_label),
      caseInsensitive('type'),
      choice(
        seq(optional('::'), $._type_name),
        seq(',', commaSep1($._derived_type_qualifier), '::', $._type_name)
      ),
      optional(alias($.argument_list, $.derived_type_parameter_list)),
      $._end_of_statement,
    ),

    end_type_statement: $ => blockStructureEnding($, 'type'),

    _type_name: $ => alias($.identifier, $.type_name),

    derived_type_procedures: $ => seq(
      $.contains_statement,
      repeat(choice(
        $.public_statement,
        $.private_statement,
        $.procedure_statement,
        $.include_statement,
        alias($.preproc_if_in_bound_procedures, $.preproc_if),
        alias($.preproc_ifdef_in_bound_procedures, $.preproc_ifdef),
      )),
    ),

    procedure_statement: $ => seq(
      $.procedure_kind,
      optional(seq(
        '(', alias($.identifier, $.procedure_interface), ')'
      )),
      optional(seq(
        ',',
        commaSep1($.procedure_attribute)
      )),
      optional('::'),
      commaSep1(field('declarator', choice(
        $.method_name,
        $.binding,
      ))),
    ),
    binding: $ => seq($.binding_name, '=>', $.method_name),
    binding_name: $ => choice(
      $.identifier,
      $._generic_procedure
    ),
    method_name: $ => alias($.identifier, 'method_name'),

    procedure_kind: $ => choice(
      caseInsensitive('generic'),
      caseInsensitive('initial'),
      caseInsensitive('procedure'),
      seq(caseInsensitive('module'), caseInsensitive('procedure')),
      caseInsensitive('property'),
      caseInsensitive('final')
    ),

    procedure_attribute: $ => prec.left(choice(
      caseInsensitive('deferred'),
      seq(
        caseInsensitive('pass'),
        optional(seq('(', $.identifier, ')'))
      ),
      caseInsensitive('nopass'),
      caseInsensitive('non_overridable'),
      caseInsensitive('public'),
      caseInsensitive('private'),
      caseInsensitive('family'),
      caseInsensitive('pointer')
    )),

    variable_declaration: $ => seq(
      field('type', choice(
        $.intrinsic_type,
        $.derived_type,
        alias($.procedure_declaration, $.procedure),
        $.declared_type,
      )),
      optional(seq(',',
        commaSep1(
          field(
            'attribute',
            choice(
              $.type_qualifier,
              $.language_binding
            ))
        )
      )),
      optional('::'),
      $._declaration_targets,
    ),

    procedure_declaration: $ => seq(
      caseInsensitive('procedure'),
      optional(seq(
        '(',
        optional(
          choice(
            alias($.identifier, $.procedure_interface),
            $.intrinsic_type,
            $.derived_type,
          )
        ),
        ')'
      )),
      optional(seq(',', commaSep1($.procedure_attribute))),
    ),

    variable_modification: $ => seq(
      repeat1(choice(
        alias($._standalone_type_qualifier, $.type_qualifier),
        $.variable_attributes,
      )),
      optional('::'),
      commaSep1(field('declarator', $._variable_declarator)),
    ),

    variable_attributes: $ => seq(
      caseInsensitive('attributes'),
      '(',
      choice(
        caseInsensitive('device'),
        caseInsensitive('managed'),
        caseInsensitive('constant'),
        caseInsensitive('shared'),
        caseInsensitive('pinned'),
        caseInsensitive('texture')),
      ')'
    ),

    _variable_declarator: $ => choice(
      $.identifier,
      $.sized_declarator,
      $.coarray_declarator,
    ),

    sized_declarator: $ => prec.right(1, seq(
        $.identifier,
        choice(
          seq(
            alias($.argument_list, $.size),
            optional($.character_length),
          ),
          $.character_length
        )
    )),

    _declaration_assignment: $ => seq(
      field('left', $._variable_declarator),
      '=',
      field('right', $._expression)
    ),
    _declaration_pointer_association: $ => seq(
      field('left', $._variable_declarator),
      '=>',
      field('right', $._expression)
    ),
    data_declarator: $ => seq(
      field('left', $._variable_declarator),
      field('right', $.data_value),
    ),

    _declaration_targets: $ => commaSep1(field('declarator', choice(
      $._variable_declarator,
      alias($._declaration_assignment, $.init_declarator),
      alias($._declaration_pointer_association, $.pointer_init_declarator),
      $.data_declarator,
    ))),

    _intrinsic_type: $ => choice(
        caseInsensitive('byte'),
        caseInsensitive('integer'),
        caseInsensitive('real'),
        whiteSpacedKeyword('double', 'precision'),
        caseInsensitive('complex'),
        whiteSpacedKeyword('double', 'complex'),
        caseInsensitive('logical'),
        caseInsensitive('character'),
    ),

    intrinsic_type: $ => seq(
      $._intrinsic_type,
      optional(field('kind', $.kind)),
    ),

    derived_type: $ => seq(
      choice(caseInsensitive('type'), caseInsensitive('class')),
      '(',
      // Strictly, only `class` can be unlimited polymorphic
      choice(
        seq(
          field('name', choice(
            prec.dynamic(1, alias($._intrinsic_type, $.intrinsic_type)),
            $._type_name,
          )),
          optional(field('kind', $.kind)),
        ),
        $.unlimited_polymorphic
      ),
      ')'
    ),

    declared_type: $ => seq(
      choice(
        caseInsensitive('typeof'),
        caseInsensitive('classof'),
      ),
      '(',
      field('name', choice(
        $.identifier,
        $.derived_type_member_expression,
      )),
      ')'
    ),

    unlimited_polymorphic: $ => '*',

    kind: $ => choice(
      seq(optional(alias('*', $.assumed_size)), $._argument_list),
      seq('*', choice(alias(/\d+/, $.number_literal), $.parenthesized_expression))
    ),

    character_length: $ => seq(
      '*',
      optional(/\d+/),
      optional(seq('(', '*', ')'))
    ),

    _standalone_type_qualifier: $ => choice(
      caseInsensitive('abstract'),
      caseInsensitive('allocatable'),
      caseInsensitive('asynchronous'),
      caseInsensitive('automatic'),
      prec.right(seq(
        caseInsensitive('codimension'),
        alias($.coarray_index, $.coarray_size),
      )),
      prec.right(seq(
        caseInsensitive('dimension'),
        optional($.argument_list)
      )),
      caseInsensitive('constant'),
      caseInsensitive('contiguous'),
      caseInsensitive('device'),
      caseInsensitive('external'),
      seq(
        caseInsensitive('intent'),
        '(',
        choice(
          caseInsensitive('in'),
          caseInsensitive('out'),
          whiteSpacedKeyword('in', 'out')
        ),
        ')'
      ),
      caseInsensitive('intrinsic'),
      caseInsensitive('managed'),
      caseInsensitive('optional'),
      caseInsensitive('parameter'),
      caseInsensitive('pinned'),
      caseInsensitive('pointer'),
      caseInsensitive('private'),
      caseInsensitive('protected'),
      caseInsensitive('public'),
      seq(
        caseInsensitive('rank'),
        $.argument_list
      ),
      caseInsensitive('save'),
      caseInsensitive('sequence'),
      caseInsensitive('shared'),
      caseInsensitive('static'),
      caseInsensitive('target'),
      caseInsensitive('texture'),
      caseInsensitive('value'),
      caseInsensitive('volatile')
    ),

    // These are split out to avoid clash with assignment statements
    // as it turns out `len` is more likely to be used as a variable
    // name than any of the other qualifiers
    type_qualifier: $ => choice(
      $._standalone_type_qualifier,
      // Next two technically only valid on derived type components
      field('type_param', caseInsensitive('kind')),
      field('type_param', caseInsensitive('len')),
    ),

    procedure_qualifier: $ => choice(
      caseInsensitive('elemental'),
      caseInsensitive('impure'),
      caseInsensitive('module'),
      caseInsensitive('pure'),
      caseInsensitive('recursive'),
      caseInsensitive('simple'),
    ),

    parameter_statement: $ => prec(1, seq(
      caseInsensitive('parameter'),
      '(',
      commaSep1($.parameter_assignment),
      ')',
    )),

    parameter_assignment: $ => seq($.identifier, '=', $._expression),

    equivalence_statement: $ => seq(
      caseInsensitive('equivalence'),
      commaSep1($.equivalence_set),
    ),

    equivalence_set: $ => seq(
      '(',
      choice($.identifier, $.call_expression),
      ',',
      commaSep1(choice($.identifier, $.call_expression)),
      ')'
    ),

    cray_pointer_declaration: $ => seq(
      caseInsensitive('pointer'),
      commaSep1($.cray_pointer_pair),
    ),
    cray_pointer_pair: $ => seq(
      '(',
      field('pointer', $.identifier),
      ',',
      field('target', $._variable_declarator),
      ')',
    ),

    // Statements

    _statement: $ => choice(
      alias($.preproc_if_in_statements, $.preproc_if),
      alias($.preproc_ifdef_in_statements, $.preproc_ifdef),
      $.preproc_include,
      $.preproc_def,
      $.preproc_function_def,
      $.preproc_call,
      seq(
        optional($.statement_label),
        $._statements,
        $._end_of_statement
      ),
      ';'
    ),

    _statements: $ => choice(
      $.assignment_statement,
      $.pointer_association_statement,
      $.subroutine_call,
      $.keyword_statement,
      $.if_statement,
      $.arithmetic_if_statement,
      $.where_statement,
      $.forall_statement,
      $.select_case_statement,
      $.select_type_statement,
      $.select_rank_statement,
      $.do_loop_statement,
      $.do_label_statement,
      $.end_do_label_statement,
      $.format_statement,
      $.open_statement,
      $.close_statement,
      $.print_statement,
      $.write_statement,
      $.read_statement,
      $.inquire_statement,
      $.stop_statement,
      $.block_construct,
      $.associate_statement,
      $.file_position_statement,
      $.allocate_statement,
      $.deallocate_statement,
      $.nullify_statement,
      $.entry_statement,
      $.assign_statement,
      $.coarray_statement,
      $.coarray_team_statement,
      $.coarray_critical_statement,
      // Not strictly valid, but can catch extensions and preprocessor macros
      $.call_expression,
      $.include_statement,
    ),

    statement_label: $ => prec(1, alias($._integer_literal, 'statement_label')),

    statement_label_reference: $ => alias($.statement_label, 'statement_label_reference'),

    stop_statement: $ => seq(
      optional(caseInsensitive("error")),
      caseInsensitive('stop'),
      optional($._expression),
      optional(seq(
        ',',
        prec(1, seq(caseInsensitive('quiet'), '=', $._expression))
      ))
    ),

    assignment_statement: $ => prec.right(PREC.ASSIGNMENT, seq(
      field('left',$._expression),
      '=',
      field('right',$._expression),
    )),

    pointer_association_statement: $ => prec.right(seq(
      $._expression, // this needs to support structs i.e. mytype%attr
      '=>',
      $._expression
    )),

    // `call` should bind more tightly than ordinary expressions
    subroutine_call: $ => prec(1, seq(
      caseInsensitive('call'),
      // Allow expressions to allow calling type-bound procedures
      field('subroutine', $._expression),
      optional($.cuda_kernel_argument_list),
      optional($.argument_list)
    )),

    cuda_kernel_argument_list: $ => seq(
      '<<<',
      commaSep1($._expression),
      '>>>'
    ),

    keyword_statement: $ => choice(
      caseInsensitive('continue'),
      seq(caseInsensitive('cycle'), optional($.identifier)),
      seq(caseInsensitive('exit'), optional($.identifier)),
      seq(
        whiteSpacedKeyword('go', 'to'),
        choice(
          $.statement_label_reference,
          // Computed goto (obsolete)
          seq(
            '(', commaSep1($.statement_label_reference), ')',
            optional(','),
            $._expression,
          ),
          // Assigned goto (deleted)
          seq(
            $._expression,
            optional(','),
            '(', commaSep1($.statement_label_reference), ')',
          ),
        )
      ),
      seq(
        caseInsensitive('return'),
        // Obsolescent alternate return
        optional($._expression),
      )
    ),

    include_statement: $ => prec(1, seq(
      caseInsensitive('include'),
      field("path", alias($.string_literal, $.filename)),
    )),

    data_statement: $ => seq(
      caseInsensitive('data'),
      sep1($.data_set, optional(',')),
    ),
    data_set: $ => prec(1, seq(
      commaSep1(
        choice(
          $.identifier,
          $.implied_do_loop_expression,
          $.call_expression,  // For array indexing
          $.derived_type_member_expression
        )
      ),
      $.data_value,
    )),
    data_value: $ => seq(
      '/',
      commaSep1(seq(
        optional(prec(1, seq(field('repeat', $.number_literal), '*'))),
        choice(
          $.number_literal,
          $.complex_literal,
          $.string_literal,
          $.boolean_literal,
          // Only constants allowed here, so can't have general expression as child
          alias($._signed_literal, $.unary_expression),
          $.null_literal,
          $.identifier,
          $.call_expression
        )
      )),
      '/'
    ),
    _signed_literal: $ => prec.right(PREC.UNARY, seq(choice('-', '+'), $.number_literal)),

    do_loop_statement: $ => seq(
      optional($.block_label_start_expression),
      caseInsensitive('do'),
      optional(','),
      optional(choice(
        $.while_statement,
        $.loop_control_expression,
        $.concurrent_statement
      )),
      $._end_of_statement,
      repeat($._statement),
      optional($.statement_label),
      $.end_do_loop_statement
    ),

    end_do_loop_statement: $ => seq(
      whiteSpacedKeyword('end', 'do'),
      optional($._block_label)
    ),

    // Deleted feature: non-block `do`. Actually, labelled-do is still
    // valid (but obsolescent), but we need to capture them separately
    // because otherwise it's too had to capture them at all
    do_label_statement: $ => seq(
      caseInsensitive('do'),
      $.statement_label_reference,
      optional(','),
      $.loop_control_expression
    ),

    // Because we've lumped together labelled-do and non-block-do in
    // `do_label_statement`, we also need to be able to capture `end
    // do` for a labelled-do
    end_do_label_statement: $ => prec(-1, seq(
      $.statement_label,
      whiteSpacedKeyword('end', 'do'),
    )),

    while_statement: $ => seq(caseInsensitive('while'),
      $.parenthesized_expression),

    concurrent_statement: $ => seq(
      $.concurrent_header,
      repeat($.concurrent_locality)
    ),

    concurrent_header: $ => seq(
      caseInsensitive('concurrent'),
      '(',
      optional(seq(
        // This is actually limited to integer types only
        field('type', $.intrinsic_type),
        '::'
      )),
      commaSep1($.concurrent_control),
      optional(seq(',', alias($._expression, $.concurrent_mask))),
      ')'
    ),

    concurrent_control: $ => seq(
      $.identifier,
      '=',
      field('initial', $._expression),
      ':',
      field('final', $._expression),
      optional(seq(
        ':',
        field('step', $._expression)
      ))
    ),

    concurrent_locality: $ => choice(
      seq(
        choice(
          caseInsensitive('local'),
          caseInsensitive('local_init'),
          caseInsensitive('shared'),
        ),
        '(', commaSep1($.identifier), ')'
      ),
      seq(
        caseInsensitive('default'),
        '(', caseInsensitive('none'), ')'
      ),
      seq(
        caseInsensitive('reduce'),
        '(', $.binary_op, ':', commaSep1($.identifier), ')',
      ),
    ),
    binary_op: $ => choice('+', '*', /(\.\w+\.|\w+)/),

    if_statement: $ => choice(
      $._inline_if_statement,
      $._block_if_statement
    ),

    _inline_if_statement: $ => seq(
      caseInsensitive('if'),
      $.parenthesized_expression,
      $._statements
    ),

    arithmetic_if_statement: $ => prec.right(seq(
      caseInsensitive('if'),
      $.parenthesized_expression,
      $.statement_label_reference,
      ',',
      $.statement_label_reference,
      ',',
      $.statement_label_reference,
    )),

    _block_if_statement: $ => seq(
      optional($.block_label_start_expression),
      caseInsensitive('if'),
      $.parenthesized_expression,
      caseInsensitive('then'),
      optional($._block_label),
      $._end_of_statement,
      repeat($._statement),
      repeat($.elseif_clause),
      optional($.else_clause),
      optional($.statement_label),
      $.end_if_statement
    ),

    end_if_statement: $ => seq(
      whiteSpacedKeyword('end', 'if'),
      optional($._block_label)
    ),

    elseif_clause: $ => seq(
      whiteSpacedKeyword('else', 'if'),
      $.parenthesized_expression,
      caseInsensitive('then'),
      optional($._block_label),
      $._end_of_statement,
      repeat($._statement)
    ),

    else_clause: $ => seq(
      caseInsensitive('else'),
      optional($._block_label),
      $._end_of_statement,
      repeat($._statement)
    ),

    where_statement: $ => choice(
      $._inline_where_statement,
      $._block_where_statement
    ),

    _inline_where_statement: $ => prec.right(seq(
      caseInsensitive('where'),
      $.parenthesized_expression,
      $._statements
    )),

    _block_where_statement: $ => seq(
      optional($.block_label_start_expression),
      caseInsensitive('where'),
      $.parenthesized_expression,
      $._end_of_statement,
      repeat($._statement),
      repeat($.elsewhere_clause),
      $.end_where_statement
    ),

    end_where_statement: $ => seq(
      whiteSpacedKeyword('end', 'where'),
      optional($._block_label)
    ),

    elsewhere_clause: $ => seq(
      whiteSpacedKeyword('else', 'where'),
      optional($.parenthesized_expression),
      optional($._block_label),
      $._end_of_statement,
      repeat($._statement)
    ),

    forall_statement: $ => choice(
      $._inline_forall_statement,
      $._block_forall_statement
    ),

    triplet_spec: $ => seq(
      $.identifier,
      '=',
      $._expression,
      ':',
      $._expression,
      optional(seq(
        ':',
        $._expression
      ))
    ),

    _forall_control_expression: $ => seq(
      caseInsensitive('forall'),
      '(',
      commaSep1($.triplet_spec),
      optional(seq(',', choice($.logical_expression, $.relational_expression))),
      ')'
    ),

    _inline_forall_statement: $ => seq(
      $._forall_control_expression,
      $._statements
    ),

    _block_forall_statement: $ => seq(
      optional($.block_label_start_expression),
      $._forall_control_expression,
      $._end_of_statement,
      repeat($._statement),
      optional($.statement_label),
      $.end_forall_statement
    ),

    end_forall_statement: $ => seq(
      whiteSpacedKeyword('end', 'forall'),
      optional($._block_label)
    ),

    select_case_statement: $ => seq(
      optional($.block_label_start_expression),
      whiteSpacedKeyword('select', 'case'),
      $.selector,
      $._end_of_statement,
      repeat(choice(
        $.case_statement,
        $.preproc_include,
        $.preproc_def,
        $.preproc_function_def,
        $.preproc_call,
        alias($.preproc_if_in_select_case, $.preproc_if),
        alias($.preproc_ifdef_in_select_case, $.preproc_ifdef),
      )),
      optional($.statement_label),
      $.end_select_statement
    ),

    select_type_statement: $ => seq(
      optional($.block_label_start_expression),
      whiteSpacedKeyword('select', 'type'),
      $.selector,
      $._end_of_statement,
      repeat(choice(
        $.type_statement,
        $.preproc_include,
        $.preproc_def,
        $.preproc_function_def,
        $.preproc_call,
        alias($.preproc_if_in_select_type, $.preproc_if),
        alias($.preproc_ifdef_in_select_type, $.preproc_ifdef),
      )),
      optional($.statement_label),
      $.end_select_statement
    ),

    select_rank_statement: $ => seq(
      optional($.block_label_start_expression),
      whiteSpacedKeyword('select', 'rank'),
      $.selector,
      $._end_of_statement,
      repeat(choice(
        $.rank_statement,
        $.preproc_include,
        $.preproc_def,
        $.preproc_function_def,
        $.preproc_call,
        alias($.preproc_if_in_select_rank, $.preproc_if),
        alias($.preproc_ifdef_in_select_rank, $.preproc_ifdef),
      )),
      optional($.statement_label),
      $.end_select_statement
    ),

    end_select_statement: $ => seq(
      whiteSpacedKeyword('end', 'select'),
      optional($._block_label)
    ),

    selector: $ => seq('(',
      choice($._expression, $.pointer_association_statement),
      ')'),

    case_statement: $ => seq(
      caseInsensitive('case'),
      choice(
        seq('(', $.case_value_range_list, ')'),
        alias(caseInsensitive('default'), $.default)
      ),
      optional($._block_label),
      $._end_of_statement,
      repeat($._statement)
    ),

    type_statement: $ => seq(
      choice(
        seq(
          choice(
            whiteSpacedKeyword('type', 'is'),
            whiteSpacedKeyword('class', 'is')
          ),
          choice(
            seq('(', field('type', choice($.intrinsic_type, $.identifier)), ')'),
          ),
        ),
        alias($._class_default, $.default)
      ),
      optional($._block_label),
      $._end_of_statement,
      repeat($._statement)
    ),

    // Standalone rule otherwise it gets aliased as '(default) (default)'
    _class_default: $ => whiteSpacedKeyword('class', 'default', false),

    case_value_range_list: $ => commaSep1(choice(
      $._expression,
      $.extent_specifier
    )),

    rank_statement: $ => prec(2, seq(
      caseInsensitive('rank'),
      choice(
        seq('(', $.case_value_range_list, ')'),
        alias(caseInsensitive('default'), $.default)
      ),
      optional($._block_label),
      $._end_of_statement,
      repeat($._statement)
    )),

    block_construct: $ => seq(
      optional($.block_label_start_expression),
      caseInsensitive('block'),
      $._end_of_statement,
      repeat($._specification_part),
      repeat($._statement),
      $.end_block_construct_statement
    ),

    end_block_construct_statement: $ => seq(
      whiteSpacedKeyword('end', 'block'),
      optional($._block_label)
    ),

    associate_statement: $ => seq(
      optional($.block_label_start_expression),
      caseInsensitive('associate'),
      '(',
      commaSep1($.association),
      ')',
      $._end_of_statement,
      repeat($._statement),
      $.end_associate_statement
    ),

    association: $ => seq(
      field('name', $.identifier),
      '=>',
      field('selector', $._expression)
    ),

    end_associate_statement: $ => seq(
      whiteSpacedKeyword('end', 'associate'),
      optional($._block_label)
    ),

    format_statement: $ => prec.dynamic(PREC.CALL, seq(
      caseInsensitive('format'),
      '(',
      alias($._transfer_items, $.transfer_items),
      ')'
    )),

    _transfer_item: $ => choice(
      $.string_literal,
      $.edit_descriptor,
      $.hollerith_constant,
      seq('(', $._transfer_items, ')')
    ),

    // Comma is technically only optional in certain circumstances,
    // but capturing all of those is complicated!
    _transfer_items: $ => sep1($._transfer_item, optional(',')),

    // H is not a valid edit descriptor because it clashes with Hollerith constants
    edit_descriptor: $ => choice('/', /[a-gi-zA-GI-Z0-9:.*$]+/),

    _io_arguments: $ => seq(
      '(',
      choice(
        $.unit_identifier,
        seq($.unit_identifier, ',', $.format_identifier),
        seq($.unit_identifier, ',', $.format_identifier, ',', commaSep1($.keyword_argument)),
        seq($.unit_identifier, ',', commaSep1($.keyword_argument)),
        commaSep1($.keyword_argument)
      ),
      ')'
    ),

    read_statement: $ => prec(1, choice(
      $._simple_read_statement,
      $._parameterized_read_statement
    )),

    _simple_read_statement: $ => prec(1, seq(
      caseInsensitive('read'),
      $.format_identifier,
      optional(seq(',', $.input_item_list))
    )),

    _parameterized_read_statement: $ => prec(1, seq(
      caseInsensitive('read'),
      $._io_arguments,
      optional($.input_item_list)
    )),

    print_statement: $ => seq(
      caseInsensitive('print'),
      $.format_identifier,
      optional(seq(',', $.output_item_list))
    ),

    open_statement: $ => seq(
      caseInsensitive('open'),
      $._io_arguments,
      optional($.output_item_list)
    ),

    close_statement: $ => prec(1,
    seq(
      caseInsensitive('close'),
      '(',
      choice(
        $.unit_identifier,
        seq($.unit_identifier, ',', commaSep1($.keyword_argument)),
        commaSep1($.keyword_argument)
      ),
      ')',
    )),

    write_statement: $ => prec(1, seq(
      caseInsensitive('write'),
      $._io_arguments,
      // Trailing comma here is a legacy extension to gfortran
      optional(','),
      optional($.output_item_list)
    )),

    inquire_statement: $ => prec(1, seq(
      caseInsensitive('inquire'),
      $._io_arguments,
      optional($.output_item_list),
    )),

    enum: $ => seq(
      $.enum_statement,
      repeat($.enumerator_statement),
      $.end_enum_statement,
    ),

    enum_statement: $ => seq(
      caseInsensitive('enum'),
      ',',
      $.language_binding,
      $._end_of_statement,
    ),

    enumeration_type: $ => seq(
      $.enumeration_type_statement,
      repeat($.enumerator_statement),
      $.end_enumeration_type_statement,
    ),

    enumeration_type_statement: $ => seq(
      caseInsensitive('enumeration'),
      caseInsensitive('type'),
      optional(seq(',', $.access_specifier)),
      optional('::'),
      $._type_name,
    ),

    enumerator_statement: $ => seq(
      caseInsensitive('enumerator'),
      optional('::'),
      commaSep1(field('declarator', choice(
        $.identifier,
        alias($._declaration_assignment, $.init_declarator),
      )))
    ),

    end_enum_statement: $ => whiteSpacedKeyword('end', 'enum'),
    end_enumeration_type_statement: $ => seq(
      caseInsensitive('end'),
      caseInsensitive('enumeration'),
      caseInsensitive('type'),
      optional($._name)
    ),

    // precedence is used to override a conflict with the complex literal
    unit_identifier: $ => seq(
      optional(seq(caseInsensitive('unit'), '=')),
      prec(1, choice(
        $.number_literal,
        $._io_expressions
      ))
    ),

    format_identifier: $ => seq(
      optional(seq(caseInsensitive('fmt'), '=')),
      choice(
        $.statement_label_reference,
        $._io_expressions
      )
    ),

    _file_position_spec: $ => choice(
      $.unit_identifier,
      seq('(', $.unit_identifier, ',', commaSep1($.keyword_argument), ')'),
      seq('(', commaSep1($.keyword_argument), ')'),
    ),

    file_position_statement: $ => choice(
      seq(
        choice(
          caseInsensitive('backspace'),
          caseInsensitive('endfile'),
          caseInsensitive('flush'),
          caseInsensitive('rewind'),
          // Technically not quite right, but will accept valid code,
          // and too rare to bother being stricter
          caseInsensitive('wait'),
        ),
        $._file_position_spec,
      ),

      // Deleted feature -- not quite file position statement
      seq(caseInsensitive('pause'), optional($.string_literal)),
    ),

    // This is a limited set of expressions that can be used in IO statements
    // precedence is used to override a conflict with the complex literal
    _io_expressions: $ => prec(1, choice(
      '*',
      $.string_literal,
      $.identifier,
      $.derived_type_member_expression,
      $.concatenation_expression,
      $.math_expression,
      $.parenthesized_expression,
      $.call_expression
    )),

    input_item_list: $ => prec.right(commaSep1($._expression)),

    output_item_list: $ => prec.right(commaSep1($._expression)),

    allocate_statement: $ => seq(
      caseInsensitive('allocate'),
      '(',
      optional(field('type', seq(
        choice(
          $.intrinsic_type,
          $.identifier,
        ),
        '::'
      ))),
      commaSep1(field('allocation', choice(
        $.identifier,
        $.derived_type_member_expression,
        $.sized_allocation,
        $.coarray_allocation,

      ))),
      optional(seq(',', commaSep1($.keyword_argument))),
      ')',
    ),

    sized_allocation: $ => prec.right(1, seq(
      $._expression,
      alias($.argument_list, $.size),
    )),

    coarray_allocation: $ => seq(
      choice(
        $._expression,
        $.sized_allocation,
      ),
      alias($.coarray_index, $.coarray_size),
    ),

    deallocate_statement: $ => seq(
      caseInsensitive('deallocate'),
      '(',
      commaSep1(choice($.identifier, $.derived_type_member_expression)),
      optional(seq(',', commaSep1($.keyword_argument))),
      ')',
    ),

    nullify_statement: $ => seq(
      caseInsensitive('nullify'),
      '(',
      commaSep1(choice($.identifier, $.derived_type_member_expression)),
      ')',
    ),

    // Obsolescent feature
    entry_statement: $ => seq(
      caseInsensitive('entry'),
      field('name', $._name),
      optional(field('parameters',$._parameters)),
      optional(repeat(choice(
        $.language_binding,
        $.function_result
      ))),
    ),

    // Deleted feature
    assign_statement: $ => seq(
      caseInsensitive('assign'),
      $.number_literal,
      caseInsensitive('to'),
      $.identifier
    ),

    // Expressions

    _expression: $ => choice(
      $.number_literal,
      $.complex_literal,
      $.string_literal,
      $.boolean_literal,
      $.array_literal,
      $.null_literal,
      $.identifier,
      $.derived_type_member_expression,
      $.logical_expression,
      $.relational_expression,
      $.concatenation_expression,
      $.math_expression,
      $.unary_expression,
      $.parenthesized_expression,
      $.call_expression,
      $.implied_do_loop_expression,
      $.coarray_expression,
      $.conditional_expression,
    ),

    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')'
    ),

    derived_type_member_expression: $ => prec.right(PREC.TYPE_MEMBER, seq(
      $._expression,
      '%',
      alias($.identifier, $.type_member)
    )),

    logical_expression: $ => {
      const table = [
        [caseInsensitive('\\.or\\.'), PREC.LOGICAL_OR],
        [caseInsensitive('\\.and\\.'), PREC.LOGICAL_AND],
        [caseInsensitive('\\.eqv\\.'), PREC.LOGICAL_EQUIV],
        [caseInsensitive('\\.neqv\\.'), PREC.LOGICAL_EQUIV]
      ]

      return choice(...table.map(([operator, precedence]) => {
        return prec.left(precedence, seq(
          field('left', $._expression),
          field('operator', operator),
          field('right', $._expression)
        ))
      }).concat(
        [prec.left(PREC.LOGICAL_NOT, seq(caseInsensitive('\\.not\\.'), $._expression))])
      )
    },

    relational_expression: $ => {
      const operators = [
        '<',
        caseInsensitive('\\.lt\\.'),
        '>',
        caseInsensitive('\\.gt\\.'),
        '<=',
        caseInsensitive('\\.le\\.'),
        '>=',
        caseInsensitive('\\.ge\\.'),
        '==',
        caseInsensitive('\\.eq\\.'),
        '/=',
        caseInsensitive('\\.ne\\.')
      ]

      return choice(...operators.map((operator) => {
        return prec.left(PREC.RELATIONAL, seq(
          field('left', $._expression),
          field('operator', operator),
          field('right', $._expression)
        ))
      }))
    },

    concatenation_expression: $ => prec.right(PREC.ADDITIVE, seq(
      field('left', $._expression),
      field('operator', '//'),
      field('right', $._expression)
    )),

    math_expression: $ => {
      const table = [
        ['+', PREC.ADDITIVE],
        ['-', PREC.ADDITIVE],
        ['*', PREC.MULTIPLICATIVE],
        ['/', PREC.MULTIPLICATIVE],
        ['**', PREC.EXPONENT],
        [$.user_defined_operator, PREC.DEFINED_OPERATOR]
      ]

      return choice(...table.map(([operator, precedence]) => {
        return prec.left(precedence, seq(
          field('left', $._expression),
          field('operator', operator),
          field('right', $._expression)
        ))
      }))
    },

    unary_expression: $ => prec.right(PREC.UNARY, seq(
      field('operator', choice('-', '+', $.user_defined_operator)),
      field('argument', $._expression)
    )),

    user_defined_operator: $ => prec.right(seq(
      '.', /[a-zA-Z]+/, '.'
    )),

    // Due to the fact Fortran uses parentheses for both function calls and
    // array access there is no way to differentiate the two except for the
    // isolated case of assignment, since you can't assign to a function call.
    // Because the difference is context specific it is better to consistently
    // use the call expression for all cases instead of adding a few odd
    // corner cases when the two can be differentiated.
    // Similarly call_expressions can also get chained e.g. accessing
    // elements of an array of strings so we need to repeat the arg list.
    // Ideally we'd nest call_expressions innermost to outer but that
    // isn't easy to do.
    call_expression: $ => prec(
      PREC.CALL,
      seq($._expression, repeat1($.argument_list))
    ),

    implied_do_loop_expression: $ => seq(
      '(',
      commaSep1($._expression),
      ',',
      // This should really be _inside_ loop_control_expression, but
      // type-spec only valid here, and not other places that use
      // loop_control_expression
      optional(seq(field('type', $.intrinsic_type), '::')),
      $.loop_control_expression,
      ')'
    ),

    // Unnamed node so we can reuse it for e.g. kind
    _argument_list: $ => prec.dynamic(
      1,
      seq('(', commaSep(choice($._expression, $._argument_item)), ')')
    ),
    _argument_item: $ => choice(
      $.keyword_argument,
      $.extent_specifier,
      $.assumed_size,
      $.assumed_rank,
      $.multiple_subscript,
      $.multiple_subscript_triplet,
    ),
    argument_list: $ => $._argument_list,

    // precedence is used to prevent conflict with assignment expression
    keyword_argument: $ => prec(1, seq(
      field("name",$.identifier),
      '=',
      field("value",choice($._expression, $.assumed_size, $.assumed_shape))
    )),

    _extent_specifier: $ => seq(
      optional($._expression), // start
      ':',
      optional(choice($._expression, $.assumed_size)), // stop
      optional(seq(':', $._expression)) // stride
    ),
    extent_specifier: $=> $._extent_specifier,

    multiple_subscript: $ => seq('@', $._expression),
    multiple_subscript_triplet: $ => seq('@', $._extent_specifier),

    assumed_size: $ => '*',

    assumed_shape: $ => ':',

    assumed_rank: $ => '..',

    block_label_start_expression: $ => seq(alias($.identifier, 'label'), ':'),
    _block_label: $ => alias($.identifier, $.block_label),

    loop_control_expression: $ => seq(
      $.identifier,
      '=',
      $._expression,
      ',',
      $._expression,
      optional(seq(',', $._expression))
    ),

    array_literal: $ => choice(
      $._array_constructor_legacy,
      $._array_constructor_f2003
    ),

    _array_constructor_legacy: $ => seq('(/', $._ac_value_list, '/)'),

    _array_constructor_f2003: $ => seq('[', $._ac_value_list, ']'),

    _type_spec: $ => seq(choice($.intrinsic_type, $.derived_type), '::'),

    _ac_value_list: $ => choice(
      field('type', $._type_spec),
      seq(
        optional(field('type', $._type_spec)),
        commaSep1($._expression)
      )
    ),

    complex_literal: $ => seq(
      '(',
      choice($.number_literal, $.identifier, $.unary_expression),
      ',',
      choice($.number_literal, $.identifier, $.unary_expression),
      ')'
    ),

    number_literal: $ => seq(
      choice(
        $._integer_literal,
        $._float_literal,
        $._boz_literal
      ),
      optional($._kind)
    ),

    boolean_literal: $ => seq(
      choice(
        caseInsensitive('\\.true\\.'),
        caseInsensitive('\\.false\\.')
      ),
      optional($._kind)
    ),

    _kind: $ => seq(
        token.immediate('_'),
        field(
          'kind',
          choice(
            alias(token.immediate(/[a-zA-Z]\w*/), $.identifier),
            alias(token.immediate(/\d+/), $.number_literal)
          )
        )
    ),

    null_literal: $ => prec(1, seq(
      caseInsensitive('null'),
      '(',
      optional(field('mold', choice(
        $.identifier,
        $.derived_type_member_expression,
      ))),
      ')',
    )),

    string_literal: $ => seq(
      // Having a kind _prefix_, with an underscore and no whitespace,
      // is _really_ hard to parse without breaking other things, so
      // we have to rely on an external scanner
      optional(seq(
        field('kind', choice(
          alias($._string_literal_kind, $.identifier),
          alias($._integer_literal, $.number_literal)
        )),
        // Although external scanner enforces trailing underscore, we
        // also need to *capture* it here
        token.immediate('_'),
      )),
      $._string_literal,
    ),

    // Coarrays

    coarray_index: $ => seq(
      '[',
      commaSep1(choice(
        $._expression,
        alias($._coarray_extent_specifier, $.extent_specifier),
        '*',
      )),
      commaSep(seq(',', $.keyword_argument)),
      ']'
    ),

    // Copy of `extent_specifier` but we don't want `*` to be named `assumed_size`
    _coarray_extent_specifier: $ => seq(
      optional($._expression), // start
      ':',
      optional(choice($._expression, '*')), // stop
      optional(seq(':', $._expression)) // stride
    ),

    coarray_declarator: $ => prec.right(seq(
      choice(
        $.identifier,
        $.sized_declarator,
      ),
      alias($.coarray_index, $.coarray_size),
    )),

    coarray_expression: $ => prec.right(seq(
      $._expression,
      $.coarray_index,
    )),

    coarray_statement: $ => choice(
      seq(
        choice(
          caseInsensitive('sync'),
          caseInsensitive('form'),
        ),
        choice(
          caseInsensitive('all'),
          caseInsensitive('images'),
          caseInsensitive('memory'),
          caseInsensitive('team'),
        ),
        optional($.argument_list),
      ),
      seq(caseInsensitive('fail'), caseInsensitive('image')),
      seq(
        caseInsensitive('event'),
        choice(
          caseInsensitive('post'),
          caseInsensitive('wait'),
        ),
        $.argument_list,
      ),
      prec.right(1, seq(
        choice(
          caseInsensitive('lock'),
          caseInsensitive('unlock'),
        ),
        $.argument_list,
      )),
      seq(
        caseInsensitive('notify'),
        caseInsensitive('wait'),
        $.argument_list,
      ),
    ),

    coarray_team_statement: $ => seq(
      optional($.block_label_start_expression),
      caseInsensitive('change'),
      caseInsensitive('team'),
      $.argument_list,
      $._end_of_statement,
      repeat($._statement),
      $.end_coarray_team_statement,
    ),

    end_coarray_team_statement: $ => seq(
      whiteSpacedKeyword('end', 'team'),
      optional($.argument_list),
      optional($._block_label),
    ),

    coarray_critical_statement: $ => seq(
      optional($.block_label_start_expression),
      caseInsensitive('critical'),
      optional($.argument_list),
      $._end_of_statement,
      repeat($._statement),
      $.end_coarray_critical_statement,
    ),

    end_coarray_critical_statement: $ => seq(
      whiteSpacedKeyword('end', 'critical'),
      optional($._block_label),
    ),

    conditional_expression: $ => seq(
      field('condition', $._expression),
      '?',
      field('consequence', choice(prec.left($._expression), $.nil_literal)),
      ':',
      field('alternative', choice(prec.left($._expression), $.nil_literal)),
    ),

    // Strictly only valid when used in a conditional_expression as an
    // actual argument
    nil_literal: $ => caseInsensitive('\\.nil\\.'),

    // Fortran doesn't have reserved keywords, and to allow _just
    // enough_ ambiguity so that tree-sitter can parse tokens
    // correctly as either a keyword or a plain identifier, we must
    // add the keywords here -- and possibly in `conflicts` too.
    identifier: $ => choice(
      /[a-zA-Z_$][\w$]*/,
      caseInsensitive('allocatable'),
      caseInsensitive('asynchronous'),
      caseInsensitive('automatic'),
      caseInsensitive('block'),
      caseInsensitive('byte'),
      prec(-1, caseInsensitive('call')),
      caseInsensitive('change'),
      caseInsensitive('constant'),
      caseInsensitive('contiguous'),
      caseInsensitive('critical'),
      caseInsensitive('cycle'),
      caseInsensitive('data'),
      caseInsensitive('device'),
      prec(-1, caseInsensitive('dimension')),
      caseInsensitive('double'),
      caseInsensitive('else'),
      caseInsensitive('elseif'),
      caseInsensitive('end'),
      caseInsensitive('endif'),
      caseInsensitive('entry'),
      caseInsensitive('error'),
      caseInsensitive('event'),
      caseInsensitive('exit'),
      caseInsensitive('external'),
      caseInsensitive('fail'),
      prec(-1, caseInsensitive('flush')),
      caseInsensitive('form'),
      caseInsensitive('format'),
      caseInsensitive('go'),
      caseInsensitive('if'),
      prec(-1, caseInsensitive('include')),
      caseInsensitive('inquire'),
      caseInsensitive('intrinsic'),
      caseInsensitive('kind'),
      caseInsensitive('len'),
      caseInsensitive('lock'),
      caseInsensitive('null'),
      prec(-1, caseInsensitive('open')),
      caseInsensitive('optional'),
      caseInsensitive('parameter'),
      caseInsensitive('pointer'),
      prec(-1, caseInsensitive('print')),
      caseInsensitive('private'),
      caseInsensitive('public'),
      prec(-1, caseInsensitive('rank')),
      caseInsensitive('read'),
      caseInsensitive('real'),
      caseInsensitive('save'),
      caseInsensitive('select'),
      caseInsensitive('sequence'),
      caseInsensitive('shared'),
      caseInsensitive('static'),
      caseInsensitive('stop'),
      caseInsensitive('sync'),
      caseInsensitive('target'),
      caseInsensitive('texture'),
      prec(-1, caseInsensitive('type')),
      caseInsensitive('unit'),
      caseInsensitive('unlock'),
      caseInsensitive('value'),
      prec(-1, caseInsensitive('wait')),
      prec(-1, caseInsensitive('where')),
      caseInsensitive('write'),
    ),

    comment: $ => token(seq('!', /.*/)),

    _end_of_statement: $ => choice(';', $._external_end_of_statement),

    _newline: $ => '\n',
  }
})

module.exports.PREC = PREC

function caseInsensitive (keyword, aliasAsWord = true) {
  let result = new RegExp(keyword
    .split('')
    .map(l => l !== l.toUpperCase() ? `[${l}${l.toUpperCase()}]` : l)
    .join('')
  )
  if (aliasAsWord) result = alias(result, keyword)
  return result
}

function whiteSpacedKeyword (prefix, suffix, aliasAsWord = true) {
  let prefix_bit = caseInsensitive(prefix, false)
  let suffix_bit = caseInsensitive(suffix, false)
  let both_bits = caseInsensitive(prefix + suffix, false)
  if (aliasAsWord) {
    prefix_bit = alias(prefix_bit, prefix)
    suffix_bit = alias(suffix_bit, suffix)
    both_bits = alias(both_bits, prefix + suffix)
  }
  return choice(
    seq(prefix_bit, suffix_bit),
    both_bits
  )
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

// This can be merged with whiteSpacedKeyword, keeping for now.
function blockStructureEnding ($, structType) {
  const obj = prec.right(seq(
    choice(
      seq(
        alias(caseInsensitive('end', false), 'end'),
        optional(alias(caseInsensitive(structType, false), structType))),
      alias(caseInsensitive('end' + structType, false), 'end' + structType)),
    optional($._name),
    $._end_of_statement
  ))
  return obj
}

/**
 *
 * @param {string} suffix
 *
 * @param {RuleBuilder<string>} content
 *
 * @param {number} precedence
 *
 * @return {RuleBuilders<string, string>}
 */
function preprocIf(suffix, content, precedence = 0) {
  /**
    *
    * @param {GrammarSymbols<string>} $
    *
    * @return {ChoiceRule}
    *
    */
  function alternativeBlock($) {
    return choice(
      suffix ? alias($['preproc_else' + suffix], $.preproc_else) : $.preproc_else,
      suffix ? alias($['preproc_elif' + suffix], $.preproc_elif) : $.preproc_elif,
      suffix ? alias($['preproc_elifdef' + suffix], $.preproc_elifdef) : $.preproc_elifdef,
    );
  }

  return {
    ['preproc_if' + suffix]: $ => prec(precedence, seq(
      preprocessor('if'),
      field('condition', $._preproc_expression),
      optional($.preproc_comment),
      '\n',
      content($),
      field('alternative', optional(alternativeBlock($))),
      preprocessor('endif'),
      optional($.preproc_comment),
    )),

    ['preproc_ifdef' + suffix]: $ => prec(precedence, seq(
      choice(preprocessor('ifdef'), preprocessor('ifndef')),
      field('name', $.identifier),
      optional($.preproc_comment),
      content($),
      field('alternative', optional(alternativeBlock($))),
      preprocessor('endif'),
      optional($.preproc_comment),
    )),

    ['preproc_else' + suffix]: $ => prec(precedence, seq(
      preprocessor('else'),
      optional($.preproc_comment),
      content($),
    )),

    ['preproc_elif' + suffix]: $ => prec(precedence, seq(
      preprocessor('elif'),
      optional($.preproc_comment),
      field('condition', $._preproc_expression),
      '\n',
      content($),
      field('alternative', optional(alternativeBlock($))),
    )),

    ['preproc_elifdef' + suffix]: $ => prec(precedence, seq(
      choice(preprocessor('elifdef'), preprocessor('elifndef')),
      field('name', $.identifier),
      optional($.preproc_comment),
      content($),
      field('alternative', optional(alternativeBlock($))),
    )),
  };
}

/**
  * Creates a preprocessor regex rule
  *
  * @param {RegExp|Rule|String} command
  *
  * @return {AliasRule}
  */
function preprocessor(command) {
  return alias(new RegExp('#[ \t]*' + command), '#' + command);
}

/**
 * Common rule for procedures (function, subroutine, module procedure)
 *
 * @param {GrammarSymbols<string>} $
 * @param {Rule} start_statement
 * @param {Rule} end_statement
 *
 * @return {Rule}
 */
function procedure($, start_statement, end_statement) {
  return seq(
    start_statement,
    repeat(
      choice(
        $._specification_part,
        alias($.preproc_if_in_specification_part, $.preproc_if),
        alias($.preproc_ifdef_in_specification_part, $.preproc_ifdef)
      ),
    ),
    repeat(
      choice(
        $._statement,
        alias($.preproc_if_in_procedure_statements, $.preproc_if),
        alias($.preproc_ifdef_in_procedure_statements, $.preproc_ifdef)
      ),
    ),
    optional($.internal_procedures),
    end_statement
  );
}
