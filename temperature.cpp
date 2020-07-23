#include <iostream>

int main() {

  double tempf = 83;
  double tempc;

  // Ask the user
  std::cout << "Enter the temperature in Fahrenheit:\n";
  std::cin >> tempf;

  tempc = (tempf - 32) / 1.8;

  std::cout << "The temp is " << tempc << " degrees Celsius.\n";

}
