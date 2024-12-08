# CMake generated Testfile for 
# Source directory: /home/stationone/Desktop/Singularitynet/attention/tests/attentionbank
# Build directory: /home/stationone/Desktop/Singularitynet/attention/build/tests/attentionbank
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(AttentionValueUTest "AttentionValueUTest")
set_tests_properties(AttentionValueUTest PROPERTIES  ENVIRONMENT "GUILE_LOAD_PATH=/home/stationone/Desktop/Singularitynet/attention/build/opencog/scm" _BACKTRACE_TRIPLES "/usr/local/share/opencog/cmake/AddCxxtest.cmake;36;ADD_TEST;/home/stationone/Desktop/Singularitynet/attention/tests/attentionbank/CMakeLists.txt;7;ADD_CXXTEST;/home/stationone/Desktop/Singularitynet/attention/tests/attentionbank/CMakeLists.txt;0;")
add_test(AttentionUTest "AttentionUTest")
set_tests_properties(AttentionUTest PROPERTIES  ENVIRONMENT "GUILE_LOAD_PATH=/home/stationone/Desktop/Singularitynet/attention/build/opencog/scm" _BACKTRACE_TRIPLES "/usr/local/share/opencog/cmake/AddCxxtest.cmake;36;ADD_TEST;/home/stationone/Desktop/Singularitynet/attention/tests/attentionbank/CMakeLists.txt;8;ADD_CXXTEST;/home/stationone/Desktop/Singularitynet/attention/tests/attentionbank/CMakeLists.txt;0;")
add_test(BankImplUTest "BankImplUTest")
set_tests_properties(BankImplUTest PROPERTIES  ENVIRONMENT "GUILE_LOAD_PATH=/home/stationone/Desktop/Singularitynet/attention/build/opencog/scm" _BACKTRACE_TRIPLES "/usr/local/share/opencog/cmake/AddCxxtest.cmake;36;ADD_TEST;/home/stationone/Desktop/Singularitynet/attention/tests/attentionbank/CMakeLists.txt;9;ADD_CXXTEST;/home/stationone/Desktop/Singularitynet/attention/tests/attentionbank/CMakeLists.txt;0;")
add_test(BankAsyncUTest "BankAsyncUTest")
set_tests_properties(BankAsyncUTest PROPERTIES  ENVIRONMENT "GUILE_LOAD_PATH=/home/stationone/Desktop/Singularitynet/attention/build/opencog/scm" _BACKTRACE_TRIPLES "/usr/local/share/opencog/cmake/AddCxxtest.cmake;36;ADD_TEST;/home/stationone/Desktop/Singularitynet/attention/tests/attentionbank/CMakeLists.txt;10;ADD_CXXTEST;/home/stationone/Desktop/Singularitynet/attention/tests/attentionbank/CMakeLists.txt;0;")
add_test(AttentionalFocusCBUTest "AttentionalFocusCBUTest")
set_tests_properties(AttentionalFocusCBUTest PROPERTIES  ENVIRONMENT "GUILE_LOAD_PATH=/home/stationone/Desktop/Singularitynet/attention/build/opencog/scm" _BACKTRACE_TRIPLES "/usr/local/share/opencog/cmake/AddCxxtest.cmake;36;ADD_TEST;/home/stationone/Desktop/Singularitynet/attention/tests/attentionbank/CMakeLists.txt;13;ADD_CXXTEST;/home/stationone/Desktop/Singularitynet/attention/tests/attentionbank/CMakeLists.txt;0;")
add_test(NewAttentionTest "NewAttentionTest")
set_tests_properties(NewAttentionTest PROPERTIES  ENVIRONMENT "GUILE_LOAD_PATH=/home/stationone/Desktop/Singularitynet/attention/build/opencog/scm" _BACKTRACE_TRIPLES "/usr/local/share/opencog/cmake/AddCxxtest.cmake;36;ADD_TEST;/home/stationone/Desktop/Singularitynet/attention/tests/attentionbank/CMakeLists.txt;15;ADD_CXXTEST;/home/stationone/Desktop/Singularitynet/attention/tests/attentionbank/CMakeLists.txt;0;")
add_test(AttentionBankCythonTest "/usr/bin/nosetests3" "-vs" "/home/stationone/Desktop/Singularitynet/attention/tests/attentionbank/cython/")
set_tests_properties(AttentionBankCythonTest PROPERTIES  ENVIRONMENT "PYTHONPATH=/home/stationone/Desktop/Singularitynet/attention/build/opencog/cython:/home/stationone/Desktop/Singularitynet/attention/build/opencog/attentionbank:/usr/local/lib/python3.10/dist-packages:/usr/local/lib/python3.10/dist-packages/opencog" _BACKTRACE_TRIPLES "/home/stationone/Desktop/Singularitynet/attention/tests/attentionbank/CMakeLists.txt;23;ADD_TEST;/home/stationone/Desktop/Singularitynet/attention/tests/attentionbank/CMakeLists.txt;0;")
