
#include "Mast.h"

#include <iostream>

Mast::Mast() :
    length(3.0)
{
    std::cout << "Mast()" << std::endl;
    sail = new Sail();
}

// DEEP copy!
Mast::Mast(Mast& other) :
    length(other.length)
{
    std::cout << "Mast(Mast&)" << std::endl;
    sail = new Sail(*other.sail);
}

Mast::~Mast() {
    std::cout << "~Mast()" << std::endl;
    delete sail;
}

int Mast::getLength() {
    return length;
}

void Mast::setLength(int length) {
    this->length = length;
}

Sail* Mast::getSail() {
    return sail;
}
