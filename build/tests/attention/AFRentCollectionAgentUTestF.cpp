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
bool suite_ForgettingAgentUTest_init = false;
#include "../../../tests/attention/AFRentCollectionAgentUTestF.cxxtest"

static ForgettingAgentUTest suite_ForgettingAgentUTest;

static CxxTest::List Tests_ForgettingAgentUTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ForgettingAgentUTest( "/home/stationone/Desktop/Singularitynet/attention/tests/attention/AFRentCollectionAgentUTestF.cxxtest", 21, "ForgettingAgentUTest", suite_ForgettingAgentUTest, Tests_ForgettingAgentUTest );

static class TestDescription_suite_ForgettingAgentUTest_testForgetAtom : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ForgettingAgentUTest_testForgetAtom() : CxxTest::RealTestDescription( Tests_ForgettingAgentUTest, suiteDescription_ForgettingAgentUTest, 64, "testForgetAtom" ) {}
 void runTest() { suite_ForgettingAgentUTest.testForgetAtom(); }
} testDescription_suite_ForgettingAgentUTest_testForgetAtom;

static class TestDescription_suite_ForgettingAgentUTest_testForgetAtoms : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ForgettingAgentUTest_testForgetAtoms() : CxxTest::RealTestDescription( Tests_ForgettingAgentUTest, suiteDescription_ForgettingAgentUTest, 137, "testForgetAtoms" ) {}
 void runTest() { suite_ForgettingAgentUTest.testForgetAtoms(); }
} testDescription_suite_ForgettingAgentUTest_testForgetAtoms;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
