project('liftoff', 'cpp',
  default_options : 'cpp_std=c++11')

subprojects = ['lo_test']

chosen_subproject = get_option('module')

foreach s : subprojects
  if chosen_subproject == 'all' or chosen_subproject == s
    subproject(s)
  endif
endforeach

