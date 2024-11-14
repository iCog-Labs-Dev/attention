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
bool suite_AttentionUTest_init = false;
#include "../../../tests/attentionbank/AttentionUTest.cxxtest"

static AttentionUTest suite_AttentionUTest;

static CxxTest::List Tests_AttentionUTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_AttentionUTest( "/home/stationone/Desktop/Singularitynet/attention/tests/attentionbank/AttentionUTest.cxxtest", 30, "AttentionUTest", suite_AttentionUTest, Tests_AttentionUTest );

static class TestDescription_suite_AttentionUTest_testTopSTIValues : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionUTest_testTopSTIValues() : CxxTest::RealTestDescription( Tests_AttentionUTest, suiteDescription_AttentionUTest, 38, "testTopSTIValues" ) {}
 void runTest() { suite_AttentionUTest.testTopSTIValues(); }
} testDescription_suite_AttentionUTest_testTopSTIValues;

static class TestDescription_suite_AttentionUTest_testGetRandomAtoms : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionUTest_testGetRandomAtoms() : CxxTest::RealTestDescription( Tests_AttentionUTest, suiteDescription_AttentionUTest, 57, "testGetRandomAtoms" ) {}
 void runTest() { suite_AttentionUTest.testGetRandomAtoms(); }
} testDescription_suite_AttentionUTest_testGetRandomAtoms;

static class TestDescription_suite_AttentionUTest_testGetRandomAtomsBigAF : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionUTest_testGetRandomAtomsBigAF() : CxxTest::RealTestDescription( Tests_AttentionUTest, suiteDescription_AttentionUTest, 73, "testGetRandomAtomsBigAF" ) {}
 void runTest() { suite_AttentionUTest.testGetRandomAtomsBigAF(); }
} testDescription_suite_AttentionUTest_testGetRandomAtomsBigAF;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
