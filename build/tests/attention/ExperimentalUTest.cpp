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
bool suite_ImportanceDiffusionUTest_init = false;
#include "../../../tests/attention/ExperimentalUTest.cxxtest"

static ImportanceDiffusionUTest suite_ImportanceDiffusionUTest;

static CxxTest::List Tests_ImportanceDiffusionUTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ImportanceDiffusionUTest( "/home/stationone/Desktop/Singularitynet/attention/tests/attention/ExperimentalUTest.cxxtest", 51, "ImportanceDiffusionUTest", suite_ImportanceDiffusionUTest, Tests_ImportanceDiffusionUTest );

static class TestDescription_suite_ImportanceDiffusionUTest_testDiffuseAtom : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ImportanceDiffusionUTest_testDiffuseAtom() : CxxTest::RealTestDescription( Tests_ImportanceDiffusionUTest, suiteDescription_ImportanceDiffusionUTest, 69, "testDiffuseAtom" ) {}
 void runTest() { suite_ImportanceDiffusionUTest.testDiffuseAtom(); }
} testDescription_suite_ImportanceDiffusionUTest_testDiffuseAtom;

static class TestDescription_suite_ImportanceDiffusionUTest_testTradeSTI : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ImportanceDiffusionUTest_testTradeSTI() : CxxTest::RealTestDescription( Tests_ImportanceDiffusionUTest, suiteDescription_ImportanceDiffusionUTest, 70, "testTradeSTI" ) {}
 void runTest() { suite_ImportanceDiffusionUTest.testTradeSTI(); }
} testDescription_suite_ImportanceDiffusionUTest_testTradeSTI;

static class TestDescription_suite_ImportanceDiffusionUTest_testIncidentAtoms : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ImportanceDiffusionUTest_testIncidentAtoms() : CxxTest::RealTestDescription( Tests_ImportanceDiffusionUTest, suiteDescription_ImportanceDiffusionUTest, 71, "testIncidentAtoms" ) {}
 void runTest() { suite_ImportanceDiffusionUTest.testIncidentAtoms(); }
} testDescription_suite_ImportanceDiffusionUTest_testIncidentAtoms;

static class TestDescription_suite_ImportanceDiffusionUTest_testHebbianAdjacentAtoms : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ImportanceDiffusionUTest_testHebbianAdjacentAtoms() : CxxTest::RealTestDescription( Tests_ImportanceDiffusionUTest, suiteDescription_ImportanceDiffusionUTest, 72, "testHebbianAdjacentAtoms" ) {}
 void runTest() { suite_ImportanceDiffusionUTest.testHebbianAdjacentAtoms(); }
} testDescription_suite_ImportanceDiffusionUTest_testHebbianAdjacentAtoms;

static class TestDescription_suite_ImportanceDiffusionUTest_testProbabilityVectorIncident : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ImportanceDiffusionUTest_testProbabilityVectorIncident() : CxxTest::RealTestDescription( Tests_ImportanceDiffusionUTest, suiteDescription_ImportanceDiffusionUTest, 73, "testProbabilityVectorIncident" ) {}
 void runTest() { suite_ImportanceDiffusionUTest.testProbabilityVectorIncident(); }
} testDescription_suite_ImportanceDiffusionUTest_testProbabilityVectorIncident;

static class TestDescription_suite_ImportanceDiffusionUTest_testProbabilityVectorHebbianAdjacent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ImportanceDiffusionUTest_testProbabilityVectorHebbianAdjacent() : CxxTest::RealTestDescription( Tests_ImportanceDiffusionUTest, suiteDescription_ImportanceDiffusionUTest, 74, "testProbabilityVectorHebbianAdjacent" ) {}
 void runTest() { suite_ImportanceDiffusionUTest.testProbabilityVectorHebbianAdjacent(); }
} testDescription_suite_ImportanceDiffusionUTest_testProbabilityVectorHebbianAdjacent;

static class TestDescription_suite_ImportanceDiffusionUTest_testCombineIncidentAdjacentVectors : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ImportanceDiffusionUTest_testCombineIncidentAdjacentVectors() : CxxTest::RealTestDescription( Tests_ImportanceDiffusionUTest, suiteDescription_ImportanceDiffusionUTest, 75, "testCombineIncidentAdjacentVectors" ) {}
 void runTest() { suite_ImportanceDiffusionUTest.testCombineIncidentAdjacentVectors(); }
} testDescription_suite_ImportanceDiffusionUTest_testCombineIncidentAdjacentVectors;

static class TestDescription_suite_ImportanceDiffusionUTest_testCalculateHebbianDiffusionPercentage : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ImportanceDiffusionUTest_testCalculateHebbianDiffusionPercentage() : CxxTest::RealTestDescription( Tests_ImportanceDiffusionUTest, suiteDescription_ImportanceDiffusionUTest, 76, "testCalculateHebbianDiffusionPercentage" ) {}
 void runTest() { suite_ImportanceDiffusionUTest.testCalculateHebbianDiffusionPercentage(); }
} testDescription_suite_ImportanceDiffusionUTest_testCalculateHebbianDiffusionPercentage;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
