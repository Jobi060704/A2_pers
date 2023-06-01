
#include "Mast.h"

Mast::Mast() :
    length(3.0)
{
    
}

// DEEP copy!
Mast::Mast(Mast& other) :
    length(other.length)
{
    
}

Mast::~Mast() {
    
}

int Mast::getLength() {
    return length;
}

void Mast::setLength(int length) {
    this->length = length;
}

