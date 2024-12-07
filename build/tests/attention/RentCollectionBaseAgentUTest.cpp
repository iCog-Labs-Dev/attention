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
bool suite_RentCollectionAgentUTest_init = false;
#include "../../../tests/attention/RentCollectionBaseAgentUTest.cxxtest"

static RentCollectionAgentUTest suite_RentCollectionAgentUTest;

static CxxTest::List Tests_RentCollectionAgentUTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_RentCollectionAgentUTest( "/home/tarik/attention/attention/tests/attention/RentCollectionBaseAgentUTest.cxxtest", 52, "RentCollectionAgentUTest", suite_RentCollectionAgentUTest, Tests_RentCollectionAgentUTest );

static class TestDescription_suite_RentCollectionAgentUTest_testRentCollection : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RentCollectionAgentUTest_testRentCollection() : CxxTest::RealTestDescription( Tests_RentCollectionAgentUTest, suiteDescription_RentCollectionAgentUTest, 118, "testRentCollection" ) {}
 void runTest() { suite_RentCollectionAgentUTest.testRentCollection(); }
} testDescription_suite_RentCollectionAgentUTest_testRentCollection;

static class TestDescription_suite_RentCollectionAgentUTest_testParameterLoading : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RentCollectionAgentUTest_testParameterLoading() : CxxTest::RealTestDescription( Tests_RentCollectionAgentUTest, suiteDescription_RentCollectionAgentUTest, 135, "testParameterLoading" ) {}
 void runTest() { suite_RentCollectionAgentUTest.testParameterLoading(); }
} testDescription_suite_RentCollectionAgentUTest_testParameterLoading;

static class TestDescription_suite_RentCollectionAgentUTest_testCalculateLTIRent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RentCollectionAgentUTest_testCalculateLTIRent() : CxxTest::RealTestDescription( Tests_RentCollectionAgentUTest, suiteDescription_RentCollectionAgentUTest, 144, "testCalculateLTIRent" ) {}
 void runTest() { suite_RentCollectionAgentUTest.testCalculateLTIRent(); }
} testDescription_suite_RentCollectionAgentUTest_testCalculateLTIRent;

static class TestDescription_suite_RentCollectionAgentUTest_testCalculateSTIRent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_RentCollectionAgentUTest_testCalculateSTIRent() : CxxTest::RealTestDescription( Tests_RentCollectionAgentUTest, suiteDescription_RentCollectionAgentUTest, 153, "testCalculateSTIRent" ) {}
 void runTest() { suite_RentCollectionAgentUTest.testCalculateSTIRent(); }
} testDescription_suite_RentCollectionAgentUTest_testCalculateSTIRent;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
