project('lo_strings', 'cpp')

# This project does not have any dependencies.

string_lib = library('lo_strings', 'liftoff_strings.cpp')

test('strings', executable('teststrings', 'stringtest_ok.cpp', link_with : string_lib))

lo_strings_dep = declare_dependency(link_with : string_lib,
  include_directories : include_directories('.'),
  )

