/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_AttentionParamQueryUTest_init = false;
#include "../../../tests/attention/AttentionParamQueryUTest.cxxtest"

static AttentionParamQueryUTest suite_AttentionParamQueryUTest;

static CxxTest::List Tests_AttentionParamQueryUTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_AttentionParamQueryUTest( "/home/yeab/attention/tests/attention/AttentionParamQueryUTest.cxxtest", 34, "AttentionParamQueryUTest", suite_AttentionParamQueryUTest, Tests_AttentionParamQueryUTest );

static class TestDescription_suite_AttentionParamQueryUTest_test_get_param_value : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionParamQueryUTest_test_get_param_value() : CxxTest::RealTestDescription( Tests_AttentionParamQueryUTest, suiteDescription_AttentionParamQueryUTest, 59, "test_get_param_value" ) {}
 void runTest() { suite_AttentionParamQueryUTest.test_get_param_value(); }
} testDescription_suite_AttentionParamQueryUTest_test_get_param_value;

static class TestDescription_suite_AttentionParamQueryUTest_test_get_param_hvalue : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionParamQueryUTest_test_get_param_hvalue() : CxxTest::RealTestDescription( Tests_AttentionParamQueryUTest, suiteDescription_AttentionParamQueryUTest, 60, "test_get_param_hvalue" ) {}
 void runTest() { suite_AttentionParamQueryUTest.test_get_param_hvalue(); }
} testDescription_suite_AttentionParamQueryUTest_test_get_param_hvalue;

static class TestDescription_suite_AttentionParamQueryUTest_test_set_param : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionParamQueryUTest_test_set_param() : CxxTest::RealTestDescription( Tests_AttentionParamQueryUTest, suiteDescription_AttentionParamQueryUTest, 61, "test_set_param" ) {}
 void runTest() { suite_AttentionParamQueryUTest.test_set_param(); }
} testDescription_suite_AttentionParamQueryUTest_test_set_param;

static class TestDescription_suite_AttentionParamQueryUTest_test_get_params : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionParamQueryUTest_test_get_params() : CxxTest::RealTestDescription( Tests_AttentionParamQueryUTest, suiteDescription_AttentionParamQueryUTest, 62, "test_get_params" ) {}
 void runTest() { suite_AttentionParamQueryUTest.test_get_params(); }
} testDescription_suite_AttentionParamQueryUTest_test_get_params;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
