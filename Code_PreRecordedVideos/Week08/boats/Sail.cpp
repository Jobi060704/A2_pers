
#include "Sail.h"

#include <iostream>

Sail::Sail() :
    colour("black")
{
    std::cout << "Sail()" << std::endl;
}

Sail::Sail(Sail& other) :
    colour(other.colour)
{
    std::cout << "Sail(Sail&)" << std::endl;
}

Sail::~Sail() {
    std::cout << "~Sail()" << std::endl;
}

std::string Sail::getColour() {
    return colour;
}

void Sail::setColour(std::string colour) {
    this->colour = colour;
}

