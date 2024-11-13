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
bool suite_BankImplUTest_init = false;
#include "../../../tests/attentionbank/BankImplUTest.cxxtest"

static BankImplUTest suite_BankImplUTest;

static CxxTest::List Tests_BankImplUTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_BankImplUTest( "/home/tarik/attention/attention/tests/attentionbank/BankImplUTest.cxxtest", 287, "BankImplUTest", suite_BankImplUTest, Tests_BankImplUTest );

static class TestDescription_suite_BankImplUTest_testMiscellaneous : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BankImplUTest_testMiscellaneous() : CxxTest::RealTestDescription( Tests_BankImplUTest, suiteDescription_BankImplUTest, 322, "testMiscellaneous" ) {}
 void runTest() { suite_BankImplUTest.testMiscellaneous(); }
} testDescription_suite_BankImplUTest_testMiscellaneous;

static class TestDescription_suite_BankImplUTest_testAddAtomVtreeTruthValueBool : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BankImplUTest_testAddAtomVtreeTruthValueBool() : CxxTest::RealTestDescription( Tests_BankImplUTest, suiteDescription_BankImplUTest, 527, "testAddAtomVtreeTruthValueBool" ) {}
 void runTest() { suite_BankImplUTest.testAddAtomVtreeTruthValueBool(); }
} testDescription_suite_BankImplUTest_testAddAtomVtreeTruthValueBool;

static class TestDescription_suite_BankImplUTest_testAddNode : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BankImplUTest_testAddNode() : CxxTest::RealTestDescription( Tests_BankImplUTest, suiteDescription_BankImplUTest, 592, "testAddNode" ) {}
 void runTest() { suite_BankImplUTest.testAddNode(); }
} testDescription_suite_BankImplUTest_testAddNode;

static class TestDescription_suite_BankImplUTest_testAddLink : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BankImplUTest_testAddLink() : CxxTest::RealTestDescription( Tests_BankImplUTest, suiteDescription_BankImplUTest, 674, "testAddLink" ) {}
 void runTest() { suite_BankImplUTest.testAddLink(); }
} testDescription_suite_BankImplUTest_testAddLink;

static class TestDescription_suite_BankImplUTest_testIsSource : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BankImplUTest_testIsSource() : CxxTest::RealTestDescription( Tests_BankImplUTest, suiteDescription_BankImplUTest, 717, "testIsSource" ) {}
 void runTest() { suite_BankImplUTest.testIsSource(); }
} testDescription_suite_BankImplUTest_testIsSource;

static class TestDescription_suite_BankImplUTest_testGetHandle_bugfix1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BankImplUTest_testGetHandle_bugfix1() : CxxTest::RealTestDescription( Tests_BankImplUTest, suiteDescription_BankImplUTest, 739, "testGetHandle_bugfix1" ) {}
 void runTest() { suite_BankImplUTest.testGetHandle_bugfix1(); }
} testDescription_suite_BankImplUTest_testGetHandle_bugfix1;

static class TestDescription_suite_BankImplUTest_testgetSortedHandleSet : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BankImplUTest_testgetSortedHandleSet() : CxxTest::RealTestDescription( Tests_BankImplUTest, suiteDescription_BankImplUTest, 770, "testgetSortedHandleSet" ) {}
 void runTest() { suite_BankImplUTest.testgetSortedHandleSet(); }
} testDescription_suite_BankImplUTest_testgetSortedHandleSet;

static class TestDescription_suite_BankImplUTest_testGetNormalisedSTI : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BankImplUTest_testGetNormalisedSTI() : CxxTest::RealTestDescription( Tests_BankImplUTest, suiteDescription_BankImplUTest, 807, "testGetNormalisedSTI" ) {}
 void runTest() { suite_BankImplUTest.testGetNormalisedSTI(); }
} testDescription_suite_BankImplUTest_testGetNormalisedSTI;

static class TestDescription_suite_BankImplUTest_testgetHandleSetFiltered : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BankImplUTest_testgetHandleSetFiltered() : CxxTest::RealTestDescription( Tests_BankImplUTest, suiteDescription_BankImplUTest, 841, "testgetHandleSetFiltered" ) {}
 void runTest() { suite_BankImplUTest.testgetHandleSetFiltered(); }
} testDescription_suite_BankImplUTest_testgetHandleSetFiltered;

static class TestDescription_suite_BankImplUTest_testfilter : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_BankImplUTest_testfilter() : CxxTest::RealTestDescription( Tests_BankImplUTest, suiteDescription_BankImplUTest, 882, "testfilter" ) {}
 void runTest() { suite_BankImplUTest.testfilter(); }
} testDescription_suite_BankImplUTest_testfilter;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
