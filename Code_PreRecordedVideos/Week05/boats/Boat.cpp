
#include "Boat.h"

#define DEFAULT_NAME "Boaty McBoatface"

Boat::Boat() :
    Boat(DEFAULT_NAME)
{}

Boat::Boat(std::string name) :
    name(name)
{
    mast = new Mast();
    rudder = new Rudder();    
}

// SHALLOW copy!
// Boat::Boat(Boat& other) :
//     name(other.name),
//     mast(other.mast),
//     rudder(other.rudder)
// {}

// DEEP copy!
Boat::Boat(Boat& other) :
    name(other.name)
{
    mast = new Mast(*other.mast);
    rudder = new Rudder(*other.rudder);
}

Boat::~Boat() {
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
