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
bool suite_HebbianCreationModuleUTest_init = false;
#include "../../../tests/attention/HebbianCreationModuleUTest.cxxtest"

static HebbianCreationModuleUTest suite_HebbianCreationModuleUTest;

static CxxTest::List Tests_HebbianCreationModuleUTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_HebbianCreationModuleUTest( "/home/tarik/attention/attention/tests/attention/HebbianCreationModuleUTest.cxxtest", 48, "HebbianCreationModuleUTest", suite_HebbianCreationModuleUTest, Tests_HebbianCreationModuleUTest );

static class TestDescription_suite_HebbianCreationModuleUTest_testHebbianLinkCreation : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_HebbianCreationModuleUTest_testHebbianLinkCreation() : CxxTest::RealTestDescription( Tests_HebbianCreationModuleUTest, suiteDescription_HebbianCreationModuleUTest, 83, "testHebbianLinkCreation" ) {}
 void runTest() { suite_HebbianCreationModuleUTest.testHebbianLinkCreation(); }
} testDescription_suite_HebbianCreationModuleUTest_testHebbianLinkCreation;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
