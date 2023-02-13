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
    $._boz_literal
  ],

  extras: $ => [
    /[ \t\r\n]/,
    $.comment,
    $._line_continuation
  ],

  inline: $ => [
    $._top_level_item,
    $._statement
  ],

  conflicts: $ => [
    [$._expression, $.complex_literal]
  ],

  rules: {
    translation_unit: $ => repeat($._top_level_item),

    _top_level_item: $ => choice(
      $.program,
      $.module,
      $.submodule,
      $.interface,
      $.subroutine,
      $.function
    ),

    // Block level structures

    program: $ => seq(
      $.program_statement,
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

    submodule_statement: $ => seq(caseInsensitive('submodule'), '(', $.module_name, ')', $._name),
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
      optional(choice(
        $._name,
        $.assignment,
        $.operator
      ))
    ),

    end_interface_statement: $ => prec.right(seq(
      whiteSpacedKeyword('end', 'interface'),
      optional(choice(
        $._name,
        $.assignment,
        $.operator
      )),
      $._end_of_statement
    )),

    assignment: $ => seq(caseInsensitive('assignment'), '(', '=', ')'),
    operator: $ => seq(caseInsensitive('operator'), '(', /[^()]+/, ')'),

    subroutine: $ => seq(
      $.subroutine_statement,
      $._end_of_statement,
      repeat($._specification_part),
      repeat($._statement),
      optional($.internal_procedures),
      $.end_subroutine_statement
    ),

    subroutine_statement: $ => seq(
      optional(caseInsensitive('module')),
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
      optional(caseInsensitive('module')),
      optional($._callable_interface_qualifers),
      caseInsensitive('function'),
      field('name', $._name),
      optional(field('parameters',$._parameters)),
      optional($.language_binding),
      optional($.function_result)
    ),

    language_binding: $ => seq(
      caseInsensitive('bind'),
      '(',
      $.identifier,
      optional(seq(',', $.keyword_argument)),
      ')'
    ),

    _callable_interface_qualifers: $ => repeat1(
      choice(
        $.procedure_attributes,
        $.procedure_qualifier,
        $._intrinsic_type,
        $.derived_type
      )),

    procedure_attributes: $ => seq(
      caseInsensitive('attributes'),
      '(',
      commaSep1(choice(
        caseInsensitive('global'),
        caseInsensitive('device'),
        caseInsensitive('host'),
        caseInsensitive('grid_global'))),
      ')'
    ),

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

    _specification_part: $ => choice(
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
      prec(1, seq($.statement_label, $.format_statement, $._end_of_statement))
    ),

    use_statement: $ => seq(
      caseInsensitive('use'),
      optional(
        seq(',', choice(caseInsensitive('intrinsic'), caseInsensitive('non_intrinsic')), '::')
      ),
      alias($.identifier, $.module_name),
      optional($.included_items)
    ),

    included_items: $ => seq(
      ',',
      caseInsensitive('only'),
      ':',
      commaSep1(
        choice($.use_alias, $.identifier)
      )
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
        alias(caseInsensitive('none', false), $.none)
      )
    ),

    save_statement: $ => prec(1, seq(
      caseInsensitive('save'),
      optional(seq(
        '::',
        commaSep1($.identifier)
      ))
    )),

    private_statement: $ => prec(1, seq(
      caseInsensitive('private'),
      optional(seq(
        '::',
        commaSep1(choice($.identifier, $.operator))
      ))
    )),

    public_statement: $ => prec(1, seq(
      caseInsensitive('public'),
      optional(seq(
        '::',
        commaSep1(choice($.identifier, $.operator))
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

    import_statement: $ => seq(
      caseInsensitive('import'),
      optional('::'),
      commaSep1($.identifier)
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
      repeat($.procedure_statement)
    ),

    procedure_statement: $ => seq(
      $._procedure_kind,
      optional(seq(
        '(', alias($.identifier,$.procedure_interface),')'
      )),
      optional(seq(
        ',',
        commaSep1($.procedure_attribute)
      )),
      optional(choice(
        seq('::', $._binding_name, '=>'),
        '::'
      )),
      commaSep1($._method_name)
    ),

    _binding_name: $ => alias($.identifier, $.binding_name),
    _method_name: $ => alias($.identifier, $.method_name),

    _procedure_kind: $ => choice(
      caseInsensitive('generic'),
      caseInsensitive('initial'),
      caseInsensitive('procedure'),
      seq(caseInsensitive('module'), caseInsensitive('procedure')),
      caseInsensitive('property')
    ),

    procedure_attribute: $ => choice(
      caseInsensitive('deferred'),
      caseInsensitive('pass'),
      caseInsensitive('nopass'),
      caseInsensitive('non_overridable'),
      caseInsensitive('public'),
      caseInsensitive('private'),
      caseInsensitive('family'),
      caseInsensitive('pointer')
    ),

    variable_declaration: $ => seq(
      choice($._intrinsic_type, $.derived_type, alias($.procedure_declaration, $.procedure)),
      optional(seq(',', commaSep1($.type_qualifier))),
      optional('::'),
      $._declaration_targets
    ),

    procedure_declaration: $ => prec.right(1, seq(
      caseInsensitive('procedure'),
      optional(seq(
        '(', alias($.identifier, $.procedure_interface), ')'
      ))
    )),

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
      choice($._intrinsic_type, $._type_name, $.unlimited_polymorphic),
      ')'
    ),

    unlimited_polymorphic: $ => '*',

    size: $ => choice(
      $.argument_list,
      seq('*', choice(/\d+/, $.parenthesized_expression))
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
      // $.data_statement,
      $.if_statement,
      $.where_statement,
      $.forall_statement,
      $.select_case_statement,
      $.select_type_statement,
      $.do_loop_statement,
      $.format_statement,
      $.open_statement,
      $.close_statement,
      $.print_statement,
      $.write_statement,
      $.read_statement,
      $.stop_statement,
      $.block_construct
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
      seq(whiteSpacedKeyword('go', 'to'), $.statement_label),
      caseInsensitive('return'),
      // seq(caseInsensitive('stop'), optional($._expression))
    ),

    include_statement: $ => seq(
      caseInsensitive('include'),
      field("path", alias($.string_literal, $.filename))
    ),

    do_loop_statement: $ => seq(
      optional($.block_label_start_expression),
      caseInsensitive('do'),
      optional(choice($.while_statement, $.loop_control_expression)),
      $._end_of_statement,
      repeat($._statement),
      $.end_do_loop_statement
    ),

    end_do_loop_statement: $ => seq(
      whiteSpacedKeyword('end', 'do'),
      optional($._block_label)
    ),

    while_statement: $ => seq(caseInsensitive('while'),
      $.parenthesized_expression),

    if_statement: $ => choice(
      $._inline_if_statement,
      $._block_if_statement
    ),

    _inline_if_statement: $ => prec.right(seq(
      caseInsensitive('if'),
      $.parenthesized_expression,
      $._statements
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
      $.end_select_statement
    ),

    select_type_statement: $ => seq(
      optional($.block_label_start_expression),
      whiteSpacedKeyword('select', 'type'),
      $.selector,
      $._end_of_statement,
      repeat1($.type_statement),
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

    format_statement: $ => seq(
      caseInsensitive('format'),
      '(',
      alias($._transfer_items, $.transfer_items),
      ')'
    ),

    _transfer_items: $ => commaSep1(choice(
      $.string_literal,
      $.edit_descriptor,
      seq(optional($.edit_descriptor), '(', $._transfer_items, ')')
    )),

    edit_descriptor: $ => /[a-zA-Z0-9/:.*]+/,

    read_statement: $ => choice(
      $._simple_read_statement,
      $._parameterized_read_statement
    ),

    _simple_read_statement: $ => seq(
      caseInsensitive('read'),
      $.format_identifier,
      optional(seq(',', $.input_item_list))
    ),

    _parameterized_read_statement: $ => seq(
      caseInsensitive('read'),
      '(',
      choice(
        $.unit_identifier,
        seq($.unit_identifier, ',', $.format_identifier),
        seq($.unit_identifier, ',', $.format_identifier, ',', commaSep1($.keyword_argument)),
        seq($.unit_identifier, ',', commaSep1($.keyword_argument)),
        commaSep1($.keyword_argument)
      ),
      ')',
      optional($.input_item_list)
    ),

    print_statement: $ => seq(
      caseInsensitive('print'),
      $.format_identifier,
      optional(seq(',', $.output_item_list))
    ),

    open_statement: $ => seq(
      caseInsensitive('open'),
      '(',
      choice(
        $.unit_identifier,
        seq($.unit_identifier, ',', $.format_identifier),
        seq($.unit_identifier, ',', $.format_identifier, ',', commaSep1($.keyword_argument)),
        seq($.unit_identifier, ',', commaSep1($.keyword_argument)),
        commaSep1($.keyword_argument)
      ),
      ')',
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

    write_statement: $ => seq(
      caseInsensitive('write'),
      '(',
      choice(
        $.unit_identifier,
        seq($.unit_identifier, ',', $.format_identifier),
        seq($.unit_identifier, ',', $.format_identifier, ',', commaSep1($.keyword_argument)),
        seq($.unit_identifier, ',', commaSep1($.keyword_argument)),
        commaSep1($.keyword_argument)
      ),
      ')',
      optional($.output_item_list)
    ),

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
        seq($.identifier, '=', $.number_literal)
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
      $.identifier,
      $.derived_type_member_expression,
      $.logical_expression,
      $.relational_expression,
      $.concatenation_expression,
      $.math_expression,
      $.unary_expression,
      $.parenthesized_expression,
      $.call_expression,
      $.implied_do_loop_expression
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
        ['**', PREC.EXPONENT]
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
      field('operator', choice('-', '+')),
      field('argument', $._expression)
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
      optional($._expression), // stop
      optional(seq(':', $._expression)) // stride
    ),

    assumed_size: $ => '*',

    assumed_shape: $ => ':',

    block_label_start_expression: $ => /[a-zA-Z_]\w*:[^:]/,
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

    _ac_value_list: $ => commaSep1($._expression),

    complex_literal: $ => seq(
      '(',
      choice($.number_literal, $.identifier),
      ',',
      choice($.number_literal, $.identifier),
      ')'
    ),

    number_literal: $ => choice(
      $._integer_literal,
      $._float_literal,
      $._boz_literal
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
        caseInsensitive('\\.true\\.'),
        caseInsensitive('\\.false\\.')
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
