# CMake generated Testfile for 
# Source directory: /home/yeab/attention/tests/attention
# Build directory: /home/yeab/attention/build/tests/attention
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(AttentionParamQueryUTest "AttentionParamQueryUTest")
set_tests_properties(AttentionParamQueryUTest PROPERTIES  ENVIRONMENT "GUILE_LOAD_PATH=/home/yeab/attention/build/opencog/scm" _BACKTRACE_TRIPLES "/usr/local/share/opencog/cmake/AddCxxtest.cmake;36;ADD_TEST;/home/yeab/attention/tests/attention/CMakeLists.txt;7;ADD_CXXTEST;/home/yeab/attention/tests/attention/CMakeLists.txt;0;")
add_test(ImportanceDiffusionUTest "ImportanceDiffusionUTest")
set_tests_properties(ImportanceDiffusionUTest PROPERTIES  ENVIRONMENT "GUILE_LOAD_PATH=/home/yeab/attention/build/opencog/scm" _BACKTRACE_TRIPLES "/usr/local/share/opencog/cmake/AddCxxtest.cmake;36;ADD_TEST;/home/yeab/attention/tests/attention/CMakeLists.txt;8;ADD_CXXTEST;/home/yeab/attention/tests/attention/CMakeLists.txt;0;")
add_test(HebbianCreationModuleUTest "HebbianCreationModuleUTest")
set_tests_properties(HebbianCreationModuleUTest PROPERTIES  ENVIRONMENT "GUILE_LOAD_PATH=/home/yeab/attention/build/opencog/scm" _BACKTRACE_TRIPLES "/usr/local/share/opencog/cmake/AddCxxtest.cmake;36;ADD_TEST;/home/yeab/attention/tests/attention/CMakeLists.txt;9;ADD_CXXTEST;/home/yeab/attention/tests/attention/CMakeLists.txt;0;")
