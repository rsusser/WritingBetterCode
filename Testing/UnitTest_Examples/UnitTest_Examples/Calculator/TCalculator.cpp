//
//  TCalculator.cpp
//  UnitTest_Examples
//
//  Created by Rachel Susser on 05.09.25.
//

#include "Calculator.h"

#include <gtest/gtest.h>


// Define the parameterized test fixture
class TCalculator : public ::testing::TestWithParam<std::tuple<int, int, int>>
{
protected:
    Calculator calc; // The class under test
};


// Use TEST_P to define parameterized test
TEST_P(TCalculator, Addition) {
    int first, second, expected;
    
    // get the three parameters, i.e. from the make_tuple where we instantiate the test suite (below)
    std::tie(first, second, expected) = GetParam();

    EXPECT_EQ(calc.add(first, second), expected);
}


// Use INSTANTIATE_TEST_SUITE_P to enumerate parameters for running the test
INSTANTIATE_TEST_SUITE_P(
    Addition,
    TCalculator,
    ::testing::Values(
            // first, second, expected
            std::make_tuple(2, 3, 5),   // two positive integers
            std::make_tuple(0, 0, 0),   // 0 plus itself
            std::make_tuple(0, 4, 4),   // 0 plus positive
            std::make_tuple(-1, 0, -1),  // 0 plus negative
            std::make_tuple(-2, 2, 0),  // negative plus inverse
            std::make_tuple(2, -3, -1), // positive plus negative with larger magnitude
            std::make_tuple(3, -2, 1),  // positive plus negative with smaller magnitude
            std::make_tuple(-1, -2, 3) // two negative integers
    )
                      
);


