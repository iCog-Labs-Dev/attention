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
bool suite_AttentionalFocusCBUTest_init = false;
#include "../../../tests/attentionbank/AttentionalFocusCBUTest.cxxtest"

static AttentionalFocusCBUTest suite_AttentionalFocusCBUTest;

static CxxTest::List Tests_AttentionalFocusCBUTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_AttentionalFocusCBUTest( "/home/tarik/attention/attention/tests/attentionbank/AttentionalFocusCBUTest.cxxtest", 31, "AttentionalFocusCBUTest", suite_AttentionalFocusCBUTest, Tests_AttentionalFocusCBUTest );

static class TestDescription_suite_AttentionalFocusCBUTest_test_af_bindlink : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionalFocusCBUTest_test_af_bindlink() : CxxTest::RealTestDescription( Tests_AttentionalFocusCBUTest, suiteDescription_AttentionalFocusCBUTest, 65, "test_af_bindlink" ) {}
 void runTest() { suite_AttentionalFocusCBUTest.test_af_bindlink(); }
} testDescription_suite_AttentionalFocusCBUTest_test_af_bindlink;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
