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
bool suite_ExperimentTest_init = false;
#include "../../../tests/Experiment/ExperimentTest.cxxtest"

static ExperimentTest suite_ExperimentTest;

static CxxTest::List Tests_ExperimentTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ExperimentTest( "/home/stationone/Desktop/Singularitynet/attention/tests/Experiment/ExperimentTest.cxxtest", 51, "ExperimentTest", suite_ExperimentTest, Tests_ExperimentTest );

static class TestDescription_suite_ExperimentTest_testDiffuseAtom : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ExperimentTest_testDiffuseAtom() : CxxTest::RealTestDescription( Tests_ExperimentTest, suiteDescription_ExperimentTest, 69, "testDiffuseAtom" ) {}
 void runTest() { suite_ExperimentTest.testDiffuseAtom(); }
} testDescription_suite_ExperimentTest_testDiffuseAtom;

static class TestDescription_suite_ExperimentTest_testTradeSTI : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ExperimentTest_testTradeSTI() : CxxTest::RealTestDescription( Tests_ExperimentTest, suiteDescription_ExperimentTest, 70, "testTradeSTI" ) {}
 void runTest() { suite_ExperimentTest.testTradeSTI(); }
} testDescription_suite_ExperimentTest_testTradeSTI;

static class TestDescription_suite_ExperimentTest_testIncidentAtoms : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ExperimentTest_testIncidentAtoms() : CxxTest::RealTestDescription( Tests_ExperimentTest, suiteDescription_ExperimentTest, 71, "testIncidentAtoms" ) {}
 void runTest() { suite_ExperimentTest.testIncidentAtoms(); }
} testDescription_suite_ExperimentTest_testIncidentAtoms;

static class TestDescription_suite_ExperimentTest_testHebbianAdjacentAtoms : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ExperimentTest_testHebbianAdjacentAtoms() : CxxTest::RealTestDescription( Tests_ExperimentTest, suiteDescription_ExperimentTest, 72, "testHebbianAdjacentAtoms" ) {}
 void runTest() { suite_ExperimentTest.testHebbianAdjacentAtoms(); }
} testDescription_suite_ExperimentTest_testHebbianAdjacentAtoms;

static class TestDescription_suite_ExperimentTest_testProbabilityVectorIncident : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ExperimentTest_testProbabilityVectorIncident() : CxxTest::RealTestDescription( Tests_ExperimentTest, suiteDescription_ExperimentTest, 73, "testProbabilityVectorIncident" ) {}
 void runTest() { suite_ExperimentTest.testProbabilityVectorIncident(); }
} testDescription_suite_ExperimentTest_testProbabilityVectorIncident;

static class TestDescription_suite_ExperimentTest_testProbabilityVectorHebbianAdjacent : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ExperimentTest_testProbabilityVectorHebbianAdjacent() : CxxTest::RealTestDescription( Tests_ExperimentTest, suiteDescription_ExperimentTest, 74, "testProbabilityVectorHebbianAdjacent" ) {}
 void runTest() { suite_ExperimentTest.testProbabilityVectorHebbianAdjacent(); }
} testDescription_suite_ExperimentTest_testProbabilityVectorHebbianAdjacent;

static class TestDescription_suite_ExperimentTest_testCombineIncidentAdjacentVectors : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ExperimentTest_testCombineIncidentAdjacentVectors() : CxxTest::RealTestDescription( Tests_ExperimentTest, suiteDescription_ExperimentTest, 75, "testCombineIncidentAdjacentVectors" ) {}
 void runTest() { suite_ExperimentTest.testCombineIncidentAdjacentVectors(); }
} testDescription_suite_ExperimentTest_testCombineIncidentAdjacentVectors;

static class TestDescription_suite_ExperimentTest_testCalculateHebbianDiffusionPercentage : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ExperimentTest_testCalculateHebbianDiffusionPercentage() : CxxTest::RealTestDescription( Tests_ExperimentTest, suiteDescription_ExperimentTest, 76, "testCalculateHebbianDiffusionPercentage" ) {}
 void runTest() { suite_ExperimentTest.testCalculateHebbianDiffusionPercentage(); }
} testDescription_suite_ExperimentTest_testCalculateHebbianDiffusionPercentage;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
