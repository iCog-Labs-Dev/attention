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
bool suite_AvOfLink_init = false;
#include "../../../tests/attentionbank/AvOfLink.cxxtest"

static AvOfLink suite_AvOfLink;

static CxxTest::List Tests_AvOfLink = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_AvOfLink( "/home/stationone/Desktop/Singularitynet/attention/tests/attentionbank/AvOfLink.cxxtest", 10, "AvOfLink", suite_AvOfLink, Tests_AvOfLink );

static class TestDescription_suite_AvOfLink_testSTIOfLink : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AvOfLink_testSTIOfLink() : CxxTest::RealTestDescription( Tests_AvOfLink, suiteDescription_AvOfLink, 26, "testSTIOfLink" ) {}
 void runTest() { suite_AvOfLink.testSTIOfLink(); }
} testDescription_suite_AvOfLink_testSTIOfLink;

static class TestDescription_suite_AvOfLink_testLTIOfLink : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AvOfLink_testLTIOfLink() : CxxTest::RealTestDescription( Tests_AvOfLink, suiteDescription_AvOfLink, 41, "testLTIOfLink" ) {}
 void runTest() { suite_AvOfLink.testLTIOfLink(); }
} testDescription_suite_AvOfLink_testLTIOfLink;

static class TestDescription_suite_AvOfLink_testVLTIOfLink : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AvOfLink_testVLTIOfLink() : CxxTest::RealTestDescription( Tests_AvOfLink, suiteDescription_AvOfLink, 53, "testVLTIOfLink" ) {}
 void runTest() { suite_AvOfLink.testVLTIOfLink(); }
} testDescription_suite_AvOfLink_testVLTIOfLink;

static class TestDescription_suite_AvOfLink_testSetSTIOfLink : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AvOfLink_testSetSTIOfLink() : CxxTest::RealTestDescription( Tests_AvOfLink, suiteDescription_AvOfLink, 65, "testSetSTIOfLink" ) {}
 void runTest() { suite_AvOfLink.testSetSTIOfLink(); }
} testDescription_suite_AvOfLink_testSetSTIOfLink;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
