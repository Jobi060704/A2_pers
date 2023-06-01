#include <iostream>

#include "print.h"

void printBoat(Boat& boat) {
   std::cout << "name: " << boat.getName() << std::endl;
   std::cout << "weight: " << boat.getWeight() << std::endl;
   std::cout << "length: " << boat.getLength() << std::endl;
}


// void printBoat(Boat* boat) {
//    std::cout << "name: " << boat->getName() << std::endl;
//    std::cout << "weight: " << boat->getWeight() << std::endl;
//    std::cout << "length: " << boat->getLength() << std::endl;
// }