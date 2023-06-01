#include <iostream>

#include "Boat.h"

void printBoat(Boat* boat, int number);

int main(void) {

    Boat* boat = new Boat("Nautical");
    
    printBoat(boat, 1);
    boat->setName("Knot Again");
    printBoat(boat, 1);


    return EXIT_SUCCESS;
}

void printBoat(Boat* boat, int number) {
    std::cout << "Boat " << number
              << " Name: " << boat->getName()
              << std::endl;
}
