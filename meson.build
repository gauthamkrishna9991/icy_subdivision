project(
  'icy_subdivision',
  'c',
  version : '0.1',
  default_options : [
    'warning_level=3'
  ]
)

# import the source files
subdir('src')

exe = executable(
  'icy_subdivision',
  src,
  install : true
)

test('basic', exe)
