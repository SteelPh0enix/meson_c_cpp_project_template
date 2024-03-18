#include <CppUTest/CommandLineTestRunner.h>
#include <CppUTest/TestHarness.h>

#include <greeter/greeter.hpp>
#include <string>

TEST_GROUP(GreeterTests){};

TEST(GreeterTests, greetsUser) {
    auto const user = std::string("user");
    auto const expectedMessage = std::string("Hello user");
    auto const actualMessage = greet(user);
    CHECK_EQUAL(expectedMessage, actualMessage);
}

int main(int ac, char** av) {
    return CommandLineTestRunner::RunAllTests(ac, av);
}
