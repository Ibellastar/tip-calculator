project('Tip Calculator', 'c',
  version: '0.1',
  default_options: [
    'c_std=c99',
    'warning_level=3',
  ]
)

unity_subproject = subproject('unity')
unity_dependency = unity_subproject.get_variable('unity_dep')
unity_gen_runner = unity_subproject.get_variable('gen_test_runner')

inc = include_directories('../../src')

test_1 = executable('test_1',
  sources: [
    files([
      '../../src' / 'tip_calculator.c',
      'test' / 'test_1.c',
    ]),
    unity_gen_runner.process('test' / 'test_1.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)


test('Test 1 - Whole Number Input', test_1)

test_2 = executable('test_2',
  sources: [
    files([
      '../../src' / 'tip_calculator.c',
      'test' / 'test_2.c',
    ]),
    unity_gen_runner.process('test' / 'test_2.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)


test('Test 2 - Single Decimal Point Input', test_2)

test_3 = executable('test_3',
  sources: [
    files([
      '../../src' / 'tip_calculator.c',
      'test' / 'test_3.c',
    ]),
    unity_gen_runner.process('test' / 'test_3.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)


test('Test 3 - Two Decimal Point Input', test_3)

test_4 = executable('test_4',
  sources: [
    files([
      '../../src' / 'tip_calculator.c',
      'test' / 'test_4.c',
    ]),
    unity_gen_runner.process('test' / 'test_4.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)


test('Test 4 - Mixed Number Input - Whole Numbers & Decimals', test_4)