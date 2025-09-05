//
//  TCalculator.cpp
//  UnitTest_Examples
//
//  Created by Rachel Susser on 05.09.25.
//

#include "Calculator.h"

#include <gtest/gtest.h>


TEST(Calculator, AddTwoPositives) {
    Calculator calc;
    EXPECT_EQ(calc.add(2, 3), 5);
}
