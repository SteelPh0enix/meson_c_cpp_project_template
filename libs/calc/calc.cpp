#include "calc.hpp"

double celcius_to_fahrenheit(double celcius) {
  return (celcius * (9.0 / 5.0)) + 32.0;
}

double fahrenheit_to_celcius(double fahrenheit) {
  return (fahrenheit - 32.0) * (5.0 / 9.0);
}
