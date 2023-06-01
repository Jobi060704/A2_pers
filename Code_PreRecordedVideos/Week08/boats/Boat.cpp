
#include "Boat.h"

#include <iostream>

Boat::Boat() :
    Boat("Boaty McBoatface")
{
    std::cout << "Boat()" << std::endl;
}

Boat::Boat(std::string name) :
    name(name)
{
    std::cout << "Boat(std::string)" << std::endl;
    mast = new Mast();
    rudder = new Rudder();    
}

// DEEP copy!
Boat::Boat(Boat& other) :
    name(other.name)
{
    std::cout << "Boat(Boat&)" << std::endl;
    mast = new Mast(*other.mast);
    rudder = new Rudder(*other.rudder);
}

Boat::~Boat() {
    std::cout << "~Boat()" << std::endl;
    delete mast;
    delete rudder;
}

std::string Boat::getName() {
    return name;
}

void Boat::setName(std::string name) {
    this->name = name;
}

Mast* Boat::getMast() {
    return mast;
}

Rudder* Boat::getRudder() {
    return rudder;
}

void Boat::setMast(Mast* mastGiven) {
    delete this->mast;
    this->mast = mastGiven;
}
