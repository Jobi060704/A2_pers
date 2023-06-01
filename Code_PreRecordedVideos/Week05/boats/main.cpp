#include <iostream>

#include "Boat.h"

void printBoat(Boat* boat, int number);

int main(void) {

    Boat* boat = new Boat();

    boat = nullptr;
    
    printBoat(boat);
    boat->setName("Nautical");
    printBoat(boat, 1);
    boat->setName();
    printBoat(boat, 2);

    // Duplicate boat 1
    std::cout << "duplicate!" << std::endl;
    Boat* boat2 = new Boat(*boat);
    printBoat(boat, 1);
    printBoat(boat2, 2);

    std::cout << "change some stuff" << std::endl;
    boat2->setName("Knot Again");
    boat2->getRudder()->setSteer(LEFT);
    boat2->getMast()->getSail()->setColour("white");
    boat->getMast()->setLength(5);
    printBoat(boat, 1);
    printBoat(boat2, 2);

    // cleaup
    delete boat;
    delete boat2;



    // Create a new mast
    Mast* mast = new Mast();
    mast->getSail()->setColour("white");
    std::cout << "Testing with Mast" << std::endl;
    std::cout << "Mast length: " << mast->getLength()
              << ", Colour Sail: " << mast->getSail()->getColour()
              << std::endl;

    // Create a new boat
    boat = new Boat("Nautical");
    printBoat(boat, 3);
    boat->setMast(mast);
    printBoat(boat, 3);

    // cleanup
    // delete mast;
    delete boat;

    return EXIT_SUCCESS;
}

void printBoat(Boat* boat, int number) {
    std::cout << "Boat " << number
              << " Name: " << boat->getName()
              << ", Mast length: " << boat->getMast()->getLength()
              << ", Colour Sail: " << boat->getMast()->getSail()->getColour()
              << ", Rudder steering: " << boat->getRudder()->getSteer()
              << std::endl;
}
