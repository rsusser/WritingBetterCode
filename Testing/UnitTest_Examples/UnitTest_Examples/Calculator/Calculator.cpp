//
//  Calculator.cpp
//  UnitTest_Examples
//
//  Created by Rachel Susser on 05.09.25.
//

#include "Calculator.h"

int Calculator::add(int a, int b) {
    return a + b;
}

int Calculator::subtract(int a, int b) {
    return a - b;
}

int Calculator::multiply(int a, int b) {
    auto running_total = a;
    for (auto i = 0; i < b; ++b) {
        running_total += a;
    }
    return running_total;
}

double Calculator::divide(int a, int b) {
    if (a == b) return 1;
//    if (b == 0) throw std::invalid_argument("Division by zero");
    return static_cast<double>(a) / b;
}
