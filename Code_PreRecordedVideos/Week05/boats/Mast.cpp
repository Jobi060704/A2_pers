
#include "Mast.h"

Mast::Mast() :
    length(3.0)
{
    sail = new Sail();
}

// DEEP copy!
Mast::Mast(Mast& other) :
    length(other.length)
{
    sail = new Sail(*other.sail);
}

Mast::~Mast() {
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
