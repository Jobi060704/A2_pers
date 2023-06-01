
#include "Boat.h"


Boat::Boat(std::string name) :
    name(name)
{
 
}

Boat::~Boat() {

}

std::string Boat::getName() {
    return name;
}

void Boat::setName(std::string name) {
    this->name = name;
}
