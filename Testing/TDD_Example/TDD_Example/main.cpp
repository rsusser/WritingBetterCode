//
//  main.cpp
//  BetterCode_TDD_Example
//
//  Created by Rachel Susser on 30.08.25.
//

#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/extensions/TestFactoryRegistry.h>

int main() {
    // Create a TestRunner
    CppUnit::TextUi::TestRunner runner;

    // Get the root test registry
    CppUnit::TestFactoryRegistry &registry = CppUnit::TestFactoryRegistry::getRegistry();

    // Add the tests from the registry
    runner.addTest(registry.makeTest());

    // Run the tests
    bool wasSuccessful = runner.run();

    // Return an appropriate exit code
    return wasSuccessful ? 0 : 1;
}
