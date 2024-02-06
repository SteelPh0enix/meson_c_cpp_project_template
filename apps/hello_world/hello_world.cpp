#include <calc/calc.hpp>
#include <greeter/greeter.hpp>
#include <iostream>

int main() {
    std::cout << greet("random developer") << std::endl;
    std::cout << "12.5*F == " << fahrenheit_to_celcius(12.5) << "*C" << std::endl;
    std::cout << "12.5*C == " << celcius_to_fahrenheit(12.5) << "*F" << std::endl;
}
