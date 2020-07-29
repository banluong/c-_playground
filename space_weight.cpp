#include <iostream>

int main() {

  int weight;
  int planet;

  std::cout << "Earth weight (kg)?";
  std::cin >> weight;

  /*
  1. Venus
  2. Mars
  3. Jupiter
  4. Saturn
  5. Uranus
  6. Neptune
  */

  std::cout << "Which planet (Enter number between 1 and 6)? 1. Venus   2. Mars  3. Jupiter   4. Saturn   5. Uranus   6. Neptune \n";
  std::cin >> planet;

  switch (planet) {
    case 1 :
      std::cout << "Weight on Venus:\n" << weight * 0.78 << "kg.\n";;
      break;
    case 2 :
      std::cout << "Weight on Mars:\n" << weight * 0.39 << "kg.\n";;
      break;
    case 3 :
      std::cout << "Weight on Jupiter:\n" << weight * 2.65 << "kg.\n";;
      break;
    case 4 :
      std::cout << "Weight on Saturn:\n" << weight * 1.17 << "kg.\n";
      break;
    case 5 :
      std::cout << "Weight on Uranus:\n" << weight * 1.05 << "kg.\n";
      break;
    case 6 :
      std::cout << "Weight on Neptune:\n" << weight * 1.23 << "kg.\n";;
      break;
    default :
      std::cout << "Please enter valid planet number.\n";
      break;
  }

}
