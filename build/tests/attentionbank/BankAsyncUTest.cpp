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
bool suite_BankAsyncUTest_init = false;
#include "../../../tests/attentionbank/BankAsyncUTest.cxxtest"

static BankAsyncUTest suite_BankAsyncUTest;

static CxxTest::List Tests_BankAsyncUTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_BankAsyncUTest( "/home/yeab/attention/tests/attentionbank/BankAsyncUTest.cxxtest", 42, "BankAsyncUTest", suite_BankAsyncUTest, Tests_BankAsyncUTest );

static class TestDescription_suite_BankAsyncUTest_testAFSignals : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BankAsyncUTest_testAFSignals() : CxxTest::RealTestDescription( Tests_BankAsyncUTest, suiteDescription_BankAsyncUTest, 98, "testAFSignals" ) {}
 void runTest() { suite_BankAsyncUTest.testAFSignals(); }
} testDescription_suite_BankAsyncUTest_testAFSignals;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
