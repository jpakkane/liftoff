project('lo_adder', 'cpp')

lo_test_dep = dependency('lo_test', fallback : ['lo_test', 'lo_test_dep'])

test('test addition', executable('test_add', 'test_add.cpp', dependencies : lo_test_dep))

lo_adder_dep = declare_dependency(include_directories : include_directories('.'))

