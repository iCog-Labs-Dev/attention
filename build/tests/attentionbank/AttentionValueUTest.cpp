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
bool suite_AttentionValueUTest_init = false;
#include "../../../tests/attentionbank/AttentionValueUTest.cxxtest"

static AttentionValueUTest suite_AttentionValueUTest;

static CxxTest::List Tests_AttentionValueUTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_AttentionValueUTest( "/home/stationone/Desktop/Singularitynet/attention/tests/attentionbank/AttentionValueUTest.cxxtest", 53, "AttentionValueUTest", suite_AttentionValueUTest, Tests_AttentionValueUTest );

static class TestDescription_suite_AttentionValueUTest_testConstructors : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionValueUTest_testConstructors() : CxxTest::RealTestDescription( Tests_AttentionValueUTest, suiteDescription_AttentionValueUTest, 138, "testConstructors" ) {}
 void runTest() { suite_AttentionValueUTest.testConstructors(); }
} testDescription_suite_AttentionValueUTest_testConstructors;

static class TestDescription_suite_AttentionValueUTest_testGets : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionValueUTest_testGets() : CxxTest::RealTestDescription( Tests_AttentionValueUTest, suiteDescription_AttentionValueUTest, 154, "testGets" ) {}
 void runTest() { suite_AttentionValueUTest.testGets(); }
} testDescription_suite_AttentionValueUTest_testGets;

static class TestDescription_suite_AttentionValueUTest_testclone : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionValueUTest_testclone() : CxxTest::RealTestDescription( Tests_AttentionValueUTest, suiteDescription_AttentionValueUTest, 167, "testclone" ) {}
 void runTest() { suite_AttentionValueUTest.testclone(); }
} testDescription_suite_AttentionValueUTest_testclone;

static class TestDescription_suite_AttentionValueUTest_testOperatorEquals : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionValueUTest_testOperatorEquals() : CxxTest::RealTestDescription( Tests_AttentionValueUTest, suiteDescription_AttentionValueUTest, 179, "testOperatorEquals" ) {}
 void runTest() { suite_AttentionValueUTest.testOperatorEquals(); }
} testDescription_suite_AttentionValueUTest_testOperatorEquals;

static class TestDescription_suite_AttentionValueUTest_testVLTI : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionValueUTest_testVLTI() : CxxTest::RealTestDescription( Tests_AttentionValueUTest, suiteDescription_AttentionValueUTest, 192, "testVLTI" ) {}
 void runTest() { suite_AttentionValueUTest.testVLTI(); }
} testDescription_suite_AttentionValueUTest_testVLTI;

static class TestDescription_suite_AttentionValueUTest_testComparisons : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionValueUTest_testComparisons() : CxxTest::RealTestDescription( Tests_AttentionValueUTest, suiteDescription_AttentionValueUTest, 214, "testComparisons" ) {}
 void runTest() { suite_AttentionValueUTest.testComparisons(); }
} testDescription_suite_AttentionValueUTest_testComparisons;

static class TestDescription_suite_AttentionValueUTest_testgetDefault : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionValueUTest_testgetDefault() : CxxTest::RealTestDescription( Tests_AttentionValueUTest, suiteDescription_AttentionValueUTest, 311, "testgetDefault" ) {}
 void runTest() { suite_AttentionValueUTest.testgetDefault(); }
} testDescription_suite_AttentionValueUTest_testgetDefault;

static class TestDescription_suite_AttentionValueUTest_testfactory : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionValueUTest_testfactory() : CxxTest::RealTestDescription( Tests_AttentionValueUTest, suiteDescription_AttentionValueUTest, 320, "testfactory" ) {}
 void runTest() { suite_AttentionValueUTest.testfactory(); }
} testDescription_suite_AttentionValueUTest_testfactory;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
