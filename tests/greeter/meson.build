greeter_test_exec = executable(
  'greeter_test',
  sources: 'test.cpp',
  dependencies: cpputest,
  link_with: greeter_lib,
  include_directories: libs_includes,
)

test('greeter test', greeter_test_exec)
