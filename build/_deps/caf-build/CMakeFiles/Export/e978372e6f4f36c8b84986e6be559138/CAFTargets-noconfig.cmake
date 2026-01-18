#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "CAF::core" for configuration ""
set_property(TARGET CAF::core APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(CAF::core PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcaf_core.so.0.19.6"
  IMPORTED_SONAME_NOCONFIG "libcaf_core.so.0.19.6"
  )

list(APPEND _cmake_import_check_targets CAF::core )
list(APPEND _cmake_import_check_files_for_CAF::core "${_IMPORT_PREFIX}/lib/libcaf_core.so.0.19.6" )

# Import target "CAF::test" for configuration ""
set_property(TARGET CAF::test APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(CAF::test PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcaf_test.so.0.19.6"
  IMPORTED_SONAME_NOCONFIG "libcaf_test.so.0.19.6"
  )

list(APPEND _cmake_import_check_targets CAF::test )
list(APPEND _cmake_import_check_files_for_CAF::test "${_IMPORT_PREFIX}/lib/libcaf_test.so.0.19.6" )

# Import target "CAF::net" for configuration ""
set_property(TARGET CAF::net APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(CAF::net PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcaf_net.so.0.19.6"
  IMPORTED_SONAME_NOCONFIG "libcaf_net.so.0.19.6"
  )

list(APPEND _cmake_import_check_targets CAF::net )
list(APPEND _cmake_import_check_files_for_CAF::net "${_IMPORT_PREFIX}/lib/libcaf_net.so.0.19.6" )

# Import target "CAF::io" for configuration ""
set_property(TARGET CAF::io APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(CAF::io PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcaf_io.so.0.19.6"
  IMPORTED_SONAME_NOCONFIG "libcaf_io.so.0.19.6"
  )

list(APPEND _cmake_import_check_targets CAF::io )
list(APPEND _cmake_import_check_files_for_CAF::io "${_IMPORT_PREFIX}/lib/libcaf_io.so.0.19.6" )

# Import target "CAF::openssl" for configuration ""
set_property(TARGET CAF::openssl APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(CAF::openssl PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libcaf_openssl.so.0.19.6"
  IMPORTED_SONAME_NOCONFIG "libcaf_openssl.so.0.19.6"
  )

list(APPEND _cmake_import_check_targets CAF::openssl )
list(APPEND _cmake_import_check_files_for_CAF::openssl "${_IMPORT_PREFIX}/lib/libcaf_openssl.so.0.19.6" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
