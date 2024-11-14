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
bool suite_AttentionValueOfLinkUTest_init = false;
#include "../../../tests/attentionbank/AttentionValueOfLinkUTest.cxxtest"

static AttentionValueOfLinkUTest suite_AttentionValueOfLinkUTest;

static CxxTest::List Tests_AttentionValueOfLinkUTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_AttentionValueOfLinkUTest( "/home/stationone/Desktop/Singularitynet/attention/tests/attentionbank/AttentionValueOfLinkUTest.cxxtest", 54, "AttentionValueOfLinkUTest", suite_AttentionValueOfLinkUTest, Tests_AttentionValueOfLinkUTest );

static class TestDescription_suite_AttentionValueOfLinkUTest_testConstructors : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionValueOfLinkUTest_testConstructors() : CxxTest::RealTestDescription( Tests_AttentionValueOfLinkUTest, suiteDescription_AttentionValueOfLinkUTest, 139, "testConstructors" ) {}
 void runTest() { suite_AttentionValueOfLinkUTest.testConstructors(); }
} testDescription_suite_AttentionValueOfLinkUTest_testConstructors;

static class TestDescription_suite_AttentionValueOfLinkUTest_testGets : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionValueOfLinkUTest_testGets() : CxxTest::RealTestDescription( Tests_AttentionValueOfLinkUTest, suiteDescription_AttentionValueOfLinkUTest, 155, "testGets" ) {}
 void runTest() { suite_AttentionValueOfLinkUTest.testGets(); }
} testDescription_suite_AttentionValueOfLinkUTest_testGets;

static class TestDescription_suite_AttentionValueOfLinkUTest_testclone : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionValueOfLinkUTest_testclone() : CxxTest::RealTestDescription( Tests_AttentionValueOfLinkUTest, suiteDescription_AttentionValueOfLinkUTest, 168, "testclone" ) {}
 void runTest() { suite_AttentionValueOfLinkUTest.testclone(); }
} testDescription_suite_AttentionValueOfLinkUTest_testclone;

static class TestDescription_suite_AttentionValueOfLinkUTest_testOperatorEquals : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionValueOfLinkUTest_testOperatorEquals() : CxxTest::RealTestDescription( Tests_AttentionValueOfLinkUTest, suiteDescription_AttentionValueOfLinkUTest, 180, "testOperatorEquals" ) {}
 void runTest() { suite_AttentionValueOfLinkUTest.testOperatorEquals(); }
} testDescription_suite_AttentionValueOfLinkUTest_testOperatorEquals;

static class TestDescription_suite_AttentionValueOfLinkUTest_testVLTI : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionValueOfLinkUTest_testVLTI() : CxxTest::RealTestDescription( Tests_AttentionValueOfLinkUTest, suiteDescription_AttentionValueOfLinkUTest, 193, "testVLTI" ) {}
 void runTest() { suite_AttentionValueOfLinkUTest.testVLTI(); }
} testDescription_suite_AttentionValueOfLinkUTest_testVLTI;

static class TestDescription_suite_AttentionValueOfLinkUTest_testComparisons : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionValueOfLinkUTest_testComparisons() : CxxTest::RealTestDescription( Tests_AttentionValueOfLinkUTest, suiteDescription_AttentionValueOfLinkUTest, 215, "testComparisons" ) {}
 void runTest() { suite_AttentionValueOfLinkUTest.testComparisons(); }
} testDescription_suite_AttentionValueOfLinkUTest_testComparisons;

static class TestDescription_suite_AttentionValueOfLinkUTest_testgetDefault : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionValueOfLinkUTest_testgetDefault() : CxxTest::RealTestDescription( Tests_AttentionValueOfLinkUTest, suiteDescription_AttentionValueOfLinkUTest, 312, "testgetDefault" ) {}
 void runTest() { suite_AttentionValueOfLinkUTest.testgetDefault(); }
} testDescription_suite_AttentionValueOfLinkUTest_testgetDefault;

static class TestDescription_suite_AttentionValueOfLinkUTest_testfactory : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionValueOfLinkUTest_testfactory() : CxxTest::RealTestDescription( Tests_AttentionValueOfLinkUTest, suiteDescription_AttentionValueOfLinkUTest, 321, "testfactory" ) {}
 void runTest() { suite_AttentionValueOfLinkUTest.testfactory(); }
} testDescription_suite_AttentionValueOfLinkUTest_testfactory;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
