#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "attentionval" for configuration "Release"
set_property(TARGET attentionval APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(attentionval PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/opencog/libattentionval.so"
  IMPORTED_SONAME_RELEASE "libattentionval.so"
  )

list(APPEND _cmake_import_check_targets attentionval )
list(APPEND _cmake_import_check_files_for_attentionval "${_IMPORT_PREFIX}/lib/opencog/libattentionval.so" )

# Import target "attentionbank" for configuration "Release"
set_property(TARGET attentionbank APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(attentionbank PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/opencog/libattentionbank.so"
  IMPORTED_SONAME_RELEASE "libattentionbank.so"
  )

list(APPEND _cmake_import_check_targets attentionbank )
list(APPEND _cmake_import_check_files_for_attentionbank "${_IMPORT_PREFIX}/lib/opencog/libattentionbank.so" )

# Import target "attention-types" for configuration "Release"
set_property(TARGET attention-types APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(attention-types PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/opencog/libattention-types.so"
  IMPORTED_SONAME_RELEASE "libattention-types.so"
  )

list(APPEND _cmake_import_check_targets attention-types )
list(APPEND _cmake_import_check_files_for_attention-types "${_IMPORT_PREFIX}/lib/opencog/libattention-types.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
