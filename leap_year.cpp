#include <iostream>

int main() {

  int year;

  std::cout << "Enter year (must by four-digits) \n";
  std::cin >> year;

  // Condition for 4-digit year
  if (year < 1000 || year > 9999) {

    std::cout << "Please enter 4-digit year. \n";

  }
  else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {

    std::cout << year << " is a leap year. \n";

  }
  else {

    std::cout << year << " is not a leap year. \n";

  }

}
