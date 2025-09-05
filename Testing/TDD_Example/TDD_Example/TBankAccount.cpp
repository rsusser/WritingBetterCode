//
//  TBankAccount.cpp.h
//  BetterCode_TDD_Example
//
//  Created by Rachel Susser on 04.09.25.
//

#include "BankAccount.h"

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>


class UnnamedTestSuite : public CppUnit::TestFixture {
    CPPUNIT_TEST_SUITE(UnnamedTestSuite);
//    CPPUNIT_TEST(testExample);
    CPPUNIT_TEST(testCheckInitialBalanceIs0);
    CPPUNIT_TEST_SUITE_END();

public:

    void testExample() {
//        CPPUNIT_ASSERT_EQUAL(valueA, valueB);
//        CPPUNIT_ASSERT(true);
//        CPPUNIT_ASSERT_THROW(doSomething(), exceptionType);
//        CPPUNIT_ASSERT_DOUBLES_EQUAL(expected, actual, delta);
    }
    
    void testCheckInitialBalanceIs0() {
        BankAccount account;
        CPPUNIT_ASSERT_EQUAL(account.getBalance(), 0.);
    }

};

 CPPUNIT_TEST_SUITE_REGISTRATION(UnnamedTestSuite);
