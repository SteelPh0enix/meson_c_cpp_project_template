#include <CppUTest/CommandLineTestRunner.h>
#include <CppUTest/TestHarness.h>

#include <calc/calc.hpp>

TEST_GROUP(TemperatureCalcTests){};

TEST(TemperatureCalcTests, convertsCelciusToFahrenheit) {
    auto const givenCelcius = 37.7778;
    auto const expectedFahrenheit = 100.0;
    auto const gotFahrenheit = celcius_to_fahrenheit(givenCelcius);
    DOUBLES_EQUAL(expectedFahrenheit, gotFahrenheit, 0.001);
}


TEST(TemperatureCalcTests, convertsFahrenheitToCelcius) {
    auto const givenFahrenheit = 212;
    auto const expectedCelcius = 100.0;
    auto const gotCelcius = fahrenheit_to_celcius(givenFahrenheit);
    DOUBLES_EQUAL(expectedCelcius, gotCelcius, 0.001);
}

int main(int ac, char** av) {
    return CommandLineTestRunner::RunAllTests(ac, av);
}
