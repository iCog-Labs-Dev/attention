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
bool suite_NewAttentionTest_init = false;
#include "../../../tests/attentionbank/NewAttentionTest.cxxtest"

static NewAttentionTest suite_NewAttentionTest;

static CxxTest::List Tests_NewAttentionTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_NewAttentionTest( "/home/stationone/Desktop/Singularitynet/attention/tests/attentionbank/NewAttentionTest.cxxtest", 21, "NewAttentionTest", suite_NewAttentionTest, Tests_NewAttentionTest );

static class TestDescription_suite_NewAttentionTest_testAttentionValueSTI : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NewAttentionTest_testAttentionValueSTI() : CxxTest::RealTestDescription( Tests_NewAttentionTest, suiteDescription_NewAttentionTest, 138, "testAttentionValueSTI" ) {}
 void runTest() { suite_NewAttentionTest.testAttentionValueSTI(); }
} testDescription_suite_NewAttentionTest_testAttentionValueSTI;

static class TestDescription_suite_NewAttentionTest_testAttentionValueLTI : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NewAttentionTest_testAttentionValueLTI() : CxxTest::RealTestDescription( Tests_NewAttentionTest, suiteDescription_NewAttentionTest, 144, "testAttentionValueLTI" ) {}
 void runTest() { suite_NewAttentionTest.testAttentionValueLTI(); }
} testDescription_suite_NewAttentionTest_testAttentionValueLTI;

static class TestDescription_suite_NewAttentionTest_testAttentionValueVLTI : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NewAttentionTest_testAttentionValueVLTI() : CxxTest::RealTestDescription( Tests_NewAttentionTest, suiteDescription_NewAttentionTest, 150, "testAttentionValueVLTI" ) {}
 void runTest() { suite_NewAttentionTest.testAttentionValueVLTI(); }
} testDescription_suite_NewAttentionTest_testAttentionValueVLTI;

static class TestDescription_suite_NewAttentionTest_testCreateSimpleGraph : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NewAttentionTest_testCreateSimpleGraph() : CxxTest::RealTestDescription( Tests_NewAttentionTest, suiteDescription_NewAttentionTest, 157, "testCreateSimpleGraph" ) {}
 void runTest() { suite_NewAttentionTest.testCreateSimpleGraph(); }
} testDescription_suite_NewAttentionTest_testCreateSimpleGraph;

static class TestDescription_suite_NewAttentionTest_testLTIThenTVAscendingSort : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NewAttentionTest_testLTIThenTVAscendingSort() : CxxTest::RealTestDescription( Tests_NewAttentionTest, suiteDescription_NewAttentionTest, 163, "testLTIThenTVAscendingSort" ) {}
 void runTest() { suite_NewAttentionTest.testLTIThenTVAscendingSort(); }
} testDescription_suite_NewAttentionTest_testLTIThenTVAscendingSort;

static class TestDescription_suite_NewAttentionTest_testAttentionValueCreation : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NewAttentionTest_testAttentionValueCreation() : CxxTest::RealTestDescription( Tests_NewAttentionTest, suiteDescription_NewAttentionTest, 179, "testAttentionValueCreation" ) {}
 void runTest() { suite_NewAttentionTest.testAttentionValueCreation(); }
} testDescription_suite_NewAttentionTest_testAttentionValueCreation;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
