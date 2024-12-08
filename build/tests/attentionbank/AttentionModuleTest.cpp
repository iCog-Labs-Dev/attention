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
bool suite_AttentionModuleTest_init = false;
#include "../../../tests/attentionbank/AttentionModuleTest.cxxtest"

static AttentionModuleTest suite_AttentionModuleTest;

static CxxTest::List Tests_AttentionModuleTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_AttentionModuleTest( "/home/stationone/Desktop/Singularitynet/attention/tests/attentionbank/AttentionModuleTest.cxxtest", 279, "AttentionModuleTest", suite_AttentionModuleTest, Tests_AttentionModuleTest );

static class TestDescription_suite_AttentionModuleTest_testInit : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionModuleTest_testInit() : CxxTest::RealTestDescription( Tests_AttentionModuleTest, suiteDescription_AttentionModuleTest, 302, "testInit" ) {}
 void runTest() { suite_AttentionModuleTest.testInit(); }
} testDescription_suite_AttentionModuleTest_testInit;

static class TestDescription_suite_AttentionModuleTest_testStartEcan : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AttentionModuleTest_testStartEcan() : CxxTest::RealTestDescription( Tests_AttentionModuleTest, suiteDescription_AttentionModuleTest, 308, "testStartEcan" ) {}
 void runTest() { suite_AttentionModuleTest.testStartEcan(); }
} testDescription_suite_AttentionModuleTest_testStartEcan;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
