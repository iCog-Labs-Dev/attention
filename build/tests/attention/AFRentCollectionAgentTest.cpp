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
bool suite_AFRentCollectionAgentTest_init = false;
#include "../../../tests/attention/AFRentCollectionAgentTest.cxxtest"

static AFRentCollectionAgentTest suite_AFRentCollectionAgentTest;

static CxxTest::List Tests_AFRentCollectionAgentTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_AFRentCollectionAgentTest( "/home/stationone/Desktop/Singularitynet/attention/tests/attention/AFRentCollectionAgentTest.cxxtest", 108, "AFRentCollectionAgentTest", suite_AFRentCollectionAgentTest, Tests_AFRentCollectionAgentTest );

static class TestDescription_suite_AFRentCollectionAgentTest_testCollectRent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AFRentCollectionAgentTest_testCollectRent() : CxxTest::RealTestDescription( Tests_AFRentCollectionAgentTest, suiteDescription_AFRentCollectionAgentTest, 171, "testCollectRent" ) {}
 void runTest() { suite_AFRentCollectionAgentTest.testCollectRent(); }
} testDescription_suite_AFRentCollectionAgentTest_testCollectRent;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
