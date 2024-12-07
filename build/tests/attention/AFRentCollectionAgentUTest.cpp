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
bool suite_AFRentCollectionAgentUTest_init = false;
#include "../../../tests/attention/AFRentCollectionAgentUTest.cxxtest"

static AFRentCollectionAgentUTest suite_AFRentCollectionAgentUTest;

static CxxTest::List Tests_AFRentCollectionAgentUTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_AFRentCollectionAgentUTest( "/home/tarik/attention/attention/tests/attention/AFRentCollectionAgentUTest.cxxtest", 35, "AFRentCollectionAgentUTest", suite_AFRentCollectionAgentUTest, Tests_AFRentCollectionAgentUTest );

static class TestDescription_suite_AFRentCollectionAgentUTest_testSelectTargets : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AFRentCollectionAgentUTest_testSelectTargets() : CxxTest::RealTestDescription( Tests_AFRentCollectionAgentUTest, suiteDescription_AFRentCollectionAgentUTest, 80, "testSelectTargets" ) {}
 void runTest() { suite_AFRentCollectionAgentUTest.testSelectTargets(); }
} testDescription_suite_AFRentCollectionAgentUTest_testSelectTargets;

static class TestDescription_suite_AFRentCollectionAgentUTest_testCollectRent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AFRentCollectionAgentUTest_testCollectRent() : CxxTest::RealTestDescription( Tests_AFRentCollectionAgentUTest, suiteDescription_AFRentCollectionAgentUTest, 111, "testCollectRent" ) {}
 void runTest() { suite_AFRentCollectionAgentUTest.testCollectRent(); }
} testDescription_suite_AFRentCollectionAgentUTest_testCollectRent;

static class TestDescription_suite_AFRentCollectionAgentUTest_testParameterLoading : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AFRentCollectionAgentUTest_testParameterLoading() : CxxTest::RealTestDescription( Tests_AFRentCollectionAgentUTest, suiteDescription_AFRentCollectionAgentUTest, 134, "testParameterLoading" ) {}
 void runTest() { suite_AFRentCollectionAgentUTest.testParameterLoading(); }
} testDescription_suite_AFRentCollectionAgentUTest_testParameterLoading;

static class TestDescription_suite_AFRentCollectionAgentUTest_testCalculateSTIRent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AFRentCollectionAgentUTest_testCalculateSTIRent() : CxxTest::RealTestDescription( Tests_AFRentCollectionAgentUTest, suiteDescription_AFRentCollectionAgentUTest, 143, "testCalculateSTIRent" ) {}
 void runTest() { suite_AFRentCollectionAgentUTest.testCalculateSTIRent(); }
} testDescription_suite_AFRentCollectionAgentUTest_testCalculateSTIRent;

static class TestDescription_suite_AFRentCollectionAgentUTest_testCalculateLTIRent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AFRentCollectionAgentUTest_testCalculateLTIRent() : CxxTest::RealTestDescription( Tests_AFRentCollectionAgentUTest, suiteDescription_AFRentCollectionAgentUTest, 149, "testCalculateLTIRent" ) {}
 void runTest() { suite_AFRentCollectionAgentUTest.testCalculateLTIRent(); }
} testDescription_suite_AFRentCollectionAgentUTest_testCalculateLTIRent;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
