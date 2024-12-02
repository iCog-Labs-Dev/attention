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
bool suite_AFRentCollectioAgentUTest_init = false;
#include "../../../tests/attention/AFRentCollectionAgentUTest.cxxtest"

static AFRentCollectioAgentUTest suite_AFRentCollectioAgentUTest;

static CxxTest::List Tests_AFRentCollectioAgentUTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_AFRentCollectioAgentUTest( "/home/yeab/attention/tests/attention/AFRentCollectionAgentUTest.cxxtest", 21, "AFRentCollectioAgentUTest", suite_AFRentCollectioAgentUTest, Tests_AFRentCollectioAgentUTest );

static class TestDescription_suite_AFRentCollectioAgentUTest_testSelectTargets : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AFRentCollectioAgentUTest_testSelectTargets() : CxxTest::RealTestDescription( Tests_AFRentCollectioAgentUTest, suiteDescription_AFRentCollectioAgentUTest, 65, "testSelectTargets" ) {}
 void runTest() { suite_AFRentCollectioAgentUTest.testSelectTargets(); }
} testDescription_suite_AFRentCollectioAgentUTest_testSelectTargets;

static class TestDescription_suite_AFRentCollectioAgentUTest_testCollectRent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AFRentCollectioAgentUTest_testCollectRent() : CxxTest::RealTestDescription( Tests_AFRentCollectioAgentUTest, suiteDescription_AFRentCollectioAgentUTest, 97, "testCollectRent" ) {}
 void runTest() { suite_AFRentCollectioAgentUTest.testCollectRent(); }
} testDescription_suite_AFRentCollectioAgentUTest_testCollectRent;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
