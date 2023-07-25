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
// compile time. Additionally, I can make the line continuation token an
// extra so it gets ignored, for free form a trailing "&" would get labeled
// as the token, for fixed form it would be anything in column 6. Additionally,
// when using the scanner perhaps I could define statement labels as extras
// since they can exist almost anywhere and are only required in a small
// subset of cases.
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
  MULTIPLICATIVE: 60,
  EXPONENT: 70,
  CALL: 80,
  UNARY: 90,
  TYPE_MEMBER: 100
}

module.exports = grammar({
  name: 'fortran',

  externals: $ => [
    $._line_continuation,
    $._integer_literal,
    $._float_literal,
    $._boz_literal,
    $.string_literal,
    $._end_of_statement
  ],

  extras: $ => [
    /[ \t\r\n]/,
    $.comment,
    $._line_continuation,
    $.preproc_file_line
  ],

  inline: $ => [
    $._top_level_item,
    $._statement
  ],

  conflicts: $ => [
    [$._expression, $.complex_literal],
    [$._inline_if_statement, $._block_if_statement, $.identifier],
    [$._simple_read_statement, $._parameterized_read_statement, $.identifier],
    [$._simple_read_statement, $.identifier],
    [$.write_statement, $.identifier],
    [$.argument_list, $.parenthesized_expression],
    [$.case_statement],
    [$.data_set, $._expression],
    [$.data_value, $._expression],
    [$.else_clause],
    [$.elseif_clause, $.identifier],
    [$.elseif_clause],
    [$.elsewhere_clause, $.identifier],
    [$.elsewhere_clause],
    [$.format_statement, $.identifier],
    [$.interface_statement],
    [$.intrinsic_type, $.identifier],
    [$.inquire_statement, $.identifier],
    [$.module_statement, $.procedure_qualifier],
    [$.null_literal, $.identifier],
    [$.procedure_declaration],
    [$.rank_statement],
    [$.stop_statement, $.identifier],
    [$.type_qualifier, $.identifier],
    [$.type_statement],
    [$.translation_unit],
  ],

  rules: {
    translation_unit: $ => seq(
      repeat($._top_level_item),
      optional($.program),
    ),

    _top_level_item: $ => prec(2, choice(
      seq($.include_statement, $._end_of_statement),
      $.program,
      $.module,
      $.submodule,
      $.interface,
      $.subroutine,
      $.function
    )),

    // Block level structures

    program: $ => seq(
      optional($.program_statement),
      repeat($._specification_part),
      repeat($._statement),
      optional($.internal_procedures),
      $.end_program_statement
    ),

    program_statement: $ => seq(caseInsensitive('program'), $._name),
    end_program_statement: $ => blockStructureEnding($, 'program'),

    module: $ => seq(
      $.module_statement,
      repeat($._specification_part),
      optional($.internal_procedures),
      $.end_module_statement
    ),

    module_statement: $ => seq(caseInsensitive('module'), $._name),
    end_module_statement: $ => blockStructureEnding($, 'module'),


    submodule: $ => seq(
      $.submodule_statement,
      repeat($._specification_part),
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
      $._name
    ),
    end_submodule_statement: $ => blockStructureEnding($, 'submodule'),
    module_name: $ => $._name,

    interface: $ => seq(
      $.interface_statement,
      repeat(choice(
        $.import_statement,
        $.procedure_statement,
        $.function,
        $.subroutine
      )),
      $.end_interface_statement
    ),

    interface_statement: $ => seq(
      optional($.abstract_specifier),
      caseInsensitive('interface'),
      optional(choice($._name, $._generic_procedure)),
    ),

    end_interface_statement: $ => prec.right(seq(
      whiteSpacedKeyword('end', 'interface'),
      optional(choice($._name, $._generic_procedure)),
      $._end_of_statement
    )),

    assignment: $ => seq(caseInsensitive('assignment'), '(', '=', ')'),
    operator: $ => seq(caseInsensitive('operator'), '(', /[^()]+/, ')'),
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

    subroutine: $ => seq(
      $.subroutine_statement,
      $._end_of_statement,
      repeat($._specification_part),
      repeat($._statement),
      optional($.internal_procedures),
      $.end_subroutine_statement
    ),

    subroutine_statement: $ => seq(
      optional($._callable_interface_qualifers),
      caseInsensitive('subroutine'),
      field('name', $._name),
      optional(field('parameters',$._parameters)),
      optional($.language_binding)
    ),

    end_subroutine_statement: $ => blockStructureEnding($, 'subroutine'),

    module_procedure: $ => seq(
      $.module_procedure_statement,
      $._end_of_statement,
      repeat($._specification_part),
      repeat($._statement),
      optional($.internal_procedures),
      $.end_module_procedure_statement
    ),

    module_procedure_statement: $ => seq(
      optional($._callable_interface_qualifers),
      seq(caseInsensitive('module'), caseInsensitive('procedure')),
      field('name', $._name)
    ),

    end_module_procedure_statement: $ => blockStructureEnding($, 'procedure'),

    function: $ => seq(
      $.function_statement,
      $._end_of_statement,
      repeat($._specification_part),
      repeat($._statement),
      optional($.internal_procedures),
      $.end_function_statement
    ),

    function_statement: $ => seq(
      optional($._callable_interface_qualifers),
      caseInsensitive('function'),
      field('name', $._name),
      optional(field('parameters',$._parameters)),
      optional(repeat(choice(
        $.language_binding,
        $.function_result
      )))
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
        $._intrinsic_type,
        $.derived_type
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
      repeat(choice(
        $.function,
        $.module_procedure,
        $.subroutine,
      ))
    ),

    contains_statement: $ => caseInsensitive('contains'),

    // Variable Declarations

    _specification_part: $ => prec(1, choice(
      prec(1, seq($.include_statement, $._end_of_statement)),
      seq($.use_statement, $._end_of_statement),
      seq($.implicit_statement, $._end_of_statement),
      seq($.save_statement, $._end_of_statement),
      seq($.import_statement, $._end_of_statement),
      seq($.public_statement, $._end_of_statement),
      seq($.private_statement, $._end_of_statement),
      $.enum,
      $.interface,
      $.derived_type_definition,
      seq($.namelist_statement, $._end_of_statement),
      seq($.common_statement, $._end_of_statement),
      seq($.variable_declaration, $._end_of_statement),
      seq($.variable_modification, $._end_of_statement),
      seq($.parameter_statement, $._end_of_statement),
      seq($.equivalence_statement, $._end_of_statement),
      seq($.data_statement, $._end_of_statement),
      prec(1, seq($.statement_label, $.format_statement, $._end_of_statement))
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
      )
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
          $.intrinsic_type,
          optional($.size),
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
      )
    ),

    save_statement: $ => prec(1, seq(
      caseInsensitive('save'),
      optional(seq(
        optional('::'),
        commaSep1(choice(
          $.identifier,
          seq('/', $.identifier, '/'),
        )),
      ))
    )),

    private_statement: $ => prec(1, seq(
      caseInsensitive('private'),
      optional(seq(
        '::',
        commaSep1(choice($.identifier, $._generic_procedure))
      ))
    )),

    public_statement: $ => prec(1, seq(
      caseInsensitive('public'),
      optional(seq(
        '::',
        commaSep1(choice($.identifier, $._generic_procedure))
      ))
    )),

    namelist_statement: $ => seq(
      caseInsensitive('namelist'),
      repeat1($.variable_group)
    ),

    common_statement: $ => seq(
      caseInsensitive('common'),
      repeat1(choice(
        $.variable_group,
        commaSep1($.identifier)
      ))
    ),

    variable_group: $ => seq(
      '/',
      $._name,
      '/',
      commaSep1($.identifier)
    ),

    implicit_range: $ => seq(
      /[a-zA-Z]/,
      optional(seq('-', /[a-zA-Z]/))
    ),

    import_statement: $ => prec.left(seq(
      caseInsensitive('import'),
      optional($._import_names)
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
      optional($.public_statement),
      optional($.private_statement),
      optional(
        seq(
          alias(caseInsensitive('sequence'), $.sequence_statement),
          $._end_of_statement
        )
      ),
      repeat(seq(
        choice($.include_statement, $.variable_declaration),
        $._end_of_statement
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
      $._end_of_statement
    ),

    end_type_statement: $ => blockStructureEnding($, 'type'),

    _type_name: $ => alias($.identifier, $.type_name),

    derived_type_procedures: $ => seq(
      $.contains_statement,
      optional($.public_statement),
      optional($.private_statement),
      repeat($.procedure_statement)
    ),

    procedure_statement: $ => seq(
      $._procedure_kind,
      optional(seq(
        '(', alias($.identifier, $.procedure_interface), ')'
      )),
      optional(seq(
        ',',
        commaSep1($.procedure_attribute)
      )),
      optional(choice(
        seq('::', $.binding_name, '=>'),
        '::'
      )),
      commaSep1($._method_name),
    ),

    binding_name: $ => choice(
      $.identifier,
      $._generic_procedure
    ),
    _method_name: $ => alias($.identifier, $.method_name),

    _procedure_kind: $ => choice(
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
      choice($._intrinsic_type, $.derived_type, alias($.procedure_declaration, $.procedure)),
      optional(seq(',', commaSep1($.type_qualifier))),
      optional('::'),
      $._declaration_targets
    ),

    procedure_declaration: $ => seq(
      caseInsensitive('procedure'),
      optional(seq(
        '(', optional(alias($.identifier, $.procedure_interface)), ')'
      )),
      optional(seq(',', commaSep1($.procedure_attribute))),
    ),

    variable_modification: $ => seq(
      repeat1(choice(
        $.type_qualifier,
        $.variable_attributes
      )),
      optional('::'),
      $._declaration_targets
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

    _declaration_targets: $ => commaSep1(choice(
      $.identifier,
      // Only valid for characters
      prec.right(1, seq($.identifier, $.character_length)),
      $.call_expression,
      $.assignment_statement,
      $.pointer_association_statement
    )),

    _intrinsic_type: $ => prec.right(seq(
      $.intrinsic_type,
      optional($.size)
    )),

    intrinsic_type: $ => choice(
      caseInsensitive('byte'),
      caseInsensitive('integer'),
      caseInsensitive('real'),
      whiteSpacedKeyword('double', 'precision'),
      caseInsensitive('complex'),
      whiteSpacedKeyword('double', 'complex'),
      caseInsensitive('logical'),
      caseInsensitive('character')
    ),

    derived_type: $ => seq(
      choice(caseInsensitive('type'), caseInsensitive('class')),
      '(',
      // Strictly, only `class` can be unlimited polymorphic
      choice(prec.dynamic(1, $._intrinsic_type), $._type_name, $.unlimited_polymorphic),
      ')'
    ),

    unlimited_polymorphic: $ => '*',

    size: $ => choice(
      seq(optional(alias('*', $.assumed_size)), $.argument_list),
      seq('*', choice(/\d+/, $.parenthesized_expression))
    ),

    character_length: $ => seq(
      '*',
      optional(/\d+/),
      optional(seq('(', '*', ')'))
    ),

    type_qualifier: $ => choice(
      caseInsensitive('abstract'),
      caseInsensitive('allocatable'),
      caseInsensitive('automatic'),
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
      caseInsensitive('save'),
      caseInsensitive('sequence'),
      caseInsensitive('shared'),
      caseInsensitive('static'),
      caseInsensitive('target'),
      caseInsensitive('texture'),
      caseInsensitive('value'),
      caseInsensitive('volatile')
    ),

    procedure_qualifier: $ => choice(
      caseInsensitive('elemental'),
      caseInsensitive('impure'),
      caseInsensitive('module'),
      caseInsensitive('pure'),
      caseInsensitive('recursive')
    ),

    parameter_statement: $ => prec(1, seq(
      caseInsensitive('parameter'),
      '(',
      commaSep1($.parameter_assignment),
      ')'
    )),

    parameter_assignment: $ => seq($.identifier, '=', $._expression),

    equivalence_statement: $ => seq(
      caseInsensitive('equivalence'),
      commaSep1($.equivalence_set)
    ),

    equivalence_set: $ => seq(
      '(',
      choice($.identifier, $.call_expression),
      ',',
      commaSep1(choice($.identifier, $.call_expression)),
      ')'
    ),

    // Statements

    _statement: $ => seq(
      optional($.statement_label),
      $._statements,
      $._end_of_statement
    ),

    _statements: $ => choice(
      $.assignment_statement,
      $.pointer_association_statement,
      $.call_expression,
      $.subroutine_call,
      $.keyword_statement,
      $.include_statement,
      $.if_statement,
      $.arithmetic_if_statement,
      $.where_statement,
      $.forall_statement,
      $.select_case_statement,
      $.select_type_statement,
      $.select_rank_statement,
      $.do_loop_statement,
      $.do_label_statement,
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
          )
        )
      ),
      caseInsensitive('return'),
    ),

    include_statement: $ => seq(
      caseInsensitive('include'),
      field("path", alias($.string_literal, $.filename))
    ),

    data_statement: $ => prec(1, seq(
      caseInsensitive('data'),
      commaSep1($.data_set)
    )),
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
          $.unary_expression,
          $.null_literal,
          $.identifier,
          $.call_expression
        )
      )),
      '/'
    ),

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

    // Deleted feature
    do_label_statement: $ => seq(
      caseInsensitive('do'),
      $.statement_label_reference,
      optional(','),
      $.loop_control_expression
    ),

    end_do_loop_statement: $ => seq(
      whiteSpacedKeyword('end', 'do'),
      optional($._block_label)
    ),

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
        field('type', $._intrinsic_type),
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
      )
    ),

    if_statement: $ => choice(
      $._inline_if_statement,
      $._block_if_statement
    ),

    _inline_if_statement: $ => prec.right(2, seq(
      caseInsensitive('if'),
      $.parenthesized_expression,
      $._statements
    )),

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
      repeat1($.case_statement),
      optional($.statement_label),
      $.end_select_statement
    ),

    select_type_statement: $ => seq(
      optional($.block_label_start_expression),
      whiteSpacedKeyword('select', 'type'),
      $.selector,
      $._end_of_statement,
      repeat1($.type_statement),
      optional($.statement_label),
      $.end_select_statement
    ),

    select_rank_statement: $ => seq(
      optional($.block_label_start_expression),
      whiteSpacedKeyword('select', 'rank'),
      $.selector,
      $._end_of_statement,
      repeat1($.rank_statement),
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
            seq('(', field('type', choice($._intrinsic_type, $.identifier)), ')'),
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

    rank_statement: $ => seq(
      caseInsensitive('rank'),
      choice(
        seq('(', $.case_value_range_list, ')'),
        alias(caseInsensitive('default'), $.default)
      ),
      optional($._block_label),
      $._end_of_statement,
      repeat($._statement)
    ),

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

    format_statement: $ => prec(1, seq(
      caseInsensitive('format'),
      '(',
      alias($._transfer_items, $.transfer_items),
      ')'
    )),

    _transfer_item: $ => choice(
      $.string_literal,
      $.edit_descriptor,
      seq('(', $._transfer_items, ')')
    ),

    // Comma is technically only optional in certain circumstances,
    // but capturing all of those is complicated!
    _transfer_items: $ => seq(
      $._transfer_item,
      repeat(seq(optional(','), $._transfer_item))
    ),

    edit_descriptor: $ => /[a-zA-Z0-9/:.*$]+/,

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
      $._end_of_statement
    ),

    enum_statement: $ => seq(
      caseInsensitive('enum'),
      ',',
      $.language_binding
    ),

    enumerator_statement: $ => seq(
      caseInsensitive('enumerator'),
      optional('::'),
      commaSep1(choice(
        $.identifier,
        seq($.identifier, '=', choice(
          $.number_literal,
          $.unary_expression,
        ))
      ))
    ),

    end_enum_statement: $ => whiteSpacedKeyword('end', 'enum'),

    // precedence is used to override a conflict with the complex literal
    unit_identifier: $ => prec(1, choice(
      $.number_literal,
      $._io_expressions
    )),

    format_identifier: $ => choice(
      $.statement_label_reference,
      $._io_expressions
    ),

    _file_position_spec: $ => choice(
      $.unit_identifier,
      seq('(', $.unit_identifier, ',', commaSep1($.keyword_argument), ')'),
      seq('(', commaSep1($.keyword_argument), ')'),
    ),

    file_position_statement: $ => choice(
      seq(caseInsensitive('backspace'), $._file_position_spec),
      seq(caseInsensitive('endfile'), $._file_position_spec),
      seq(caseInsensitive('rewind'), $._file_position_spec),
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

    unary_expression: $ => prec.left(PREC.UNARY, seq(
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
      $.loop_control_expression,
      ')'
    ),

    argument_list: $ => prec.dynamic(
      1,
      seq(
        '(',
        commaSep(choice(
          $.keyword_argument,
          $.extent_specifier,
          $.assumed_size,
          $.assumed_rank,
          $._expression
        )),
        ')'
      )
    ),

    // precedence is used to prevent conflict with assignment expression
    keyword_argument: $ => prec(1, seq(
      field("name",$.identifier),
      '=',
      field("value",choice($._expression, $.assumed_size, $.assumed_shape))
    )),

    extent_specifier: $ => seq(
      optional($._expression), // start
      ':',
      optional(choice($._expression, $.assumed_size)), // stop
      optional(seq(':', $._expression)) // stride
    ),

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

    _type_spec: $ => seq(choice($._intrinsic_type, $.derived_type), '::'),

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

    number_literal: $ => choice(
      $._integer_literal,
      $._float_literal,
      $._boz_literal
    ),

    boolean_literal: $ => token(seq(
      choice(
        caseInsensitive('\\.true\\.'),
        caseInsensitive('\\.false\\.')
      ),
      optional(seq('_', /\w+/))
    )),

    null_literal: $ => prec(1, seq(
      caseInsensitive('null'), '(', ')'
    )),

    // This handles files preprocessed by gfortran -E
    // Other preprocessors may use different syntax
    preproc_file_line: $ => seq(
      '#',
      alias(/\d+/, $.preproc_line_number),
      alias(/"[^"\n]*"/, $.preproc_filename),
      optional(/\d+/),
      $._newline
    ),

    // Fortran doesn't have reserved keywords, and to allow _just
    // enough_ ambiguity so that tree-sitter can parse tokens
    // correctly as either a keyword or a plain identifier, we must
    // add the keywords here -- and possibly in `conflicts` too.
    identifier: $ => choice(
      /[a-zA-Z_]\w*/,
      caseInsensitive('block'),
      caseInsensitive('byte'),
      caseInsensitive('cycle'),
      caseInsensitive('data'),
      caseInsensitive('double'),
      caseInsensitive('elseif'),
      caseInsensitive('end'),
      caseInsensitive('endif'),
      caseInsensitive('error'),
      caseInsensitive('exit'),
      caseInsensitive('format'),
      caseInsensitive('if'),
      caseInsensitive('inquire'),
      caseInsensitive('null'),
      caseInsensitive('read'),
      caseInsensitive('real'),
      caseInsensitive('select'),
      caseInsensitive('stop'),
      caseInsensitive('target'),
      caseInsensitive('value'),
      caseInsensitive('write'),
    ),

    comment: $ => token(seq('!', /.*/)),

    _line_continuation: $ => '&',

    _semicolon: $ => ';',

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
  let result = choice(
    seq(caseInsensitive(prefix, false), caseInsensitive(suffix, false)),
    caseInsensitive(prefix + suffix, false))
  if (aliasAsWord) result = alias(result, prefix + suffix)
  return result
}

/* TODO
function preprocessor (command) {
  return alias(new RegExp('#[ \t]*' + command), '#' + command)
}
*/

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
    alias(choice(
      seq(
        caseInsensitive('end', false),
        optional(caseInsensitive(structType, false))),
      caseInsensitive('end' + structType, false)),
    'end' + structType),
    optional($._name),
    $._end_of_statement
  ))
  return obj
}
