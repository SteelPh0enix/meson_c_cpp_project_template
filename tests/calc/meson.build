calc_test_exec = executable(
  'calc_test',
  sources: 'test.cpp',
  dependencies: cpputest,
  link_with: calc_lib,
  include_directories: libs_includes,
)

test('calc test', calc_test_exec)
