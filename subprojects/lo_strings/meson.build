project('lo_strings', 'cpp')

# This project does not have any dependencies.

if get_option('header_only')
  lo_strings_dep = declare_dependency(include_directories : include_directories('.'),
    sources : files('liftoff_strings.cpp'),
  )
else
  string_lib = library('lo_strings', 'liftoff_strings.cpp')
  lo_strings_dep = declare_dependency(link_with : string_lib,
    include_directories : include_directories('.'),
  )
endif

test('strings', executable('teststrings', 'stringtest_ok.cpp', dependencies : lo_strings_dep))

