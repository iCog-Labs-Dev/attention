/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

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
bool suite_NewAttentionTest_init = false;
#include "../../../tests/attentionbank/new_test.cxxtest"

static NewAttentionTest suite_NewAttentionTest;

static CxxTest::List Tests_NewAttentionTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_NewAttentionTest( "/home/stationone/Desktop/Singularitynet/attention/tests/attentionbank/new_test.cxxtest", 6, "NewAttentionTest", suite_NewAttentionTest, Tests_NewAttentionTest );

static class TestDescription_suite_NewAttentionTest_testAttentionValue : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NewAttentionTest_testAttentionValue() : CxxTest::RealTestDescription( Tests_NewAttentionTest, suiteDescription_NewAttentionTest, 9, "testAttentionValue" ) {}
 void runTest() { suite_NewAttentionTest.testAttentionValue(); }
} testDescription_suite_NewAttentionTest_testAttentionValue;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
