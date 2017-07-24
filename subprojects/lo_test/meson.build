project('lo_test', 'cpp')

lo_test = library('liftoff_test', 'liftoff_test.cpp')

test('test ok', executable('testok', 'testok.cpp', link_with : lo_test))
test('test fail', executable('testfail', 'testfail.cpp', link_with : lo_test), should_fail : true)

lo_test_dep = declare_dependency(link_with : lo_test,
  include_directories : include_directories('.')
  )

