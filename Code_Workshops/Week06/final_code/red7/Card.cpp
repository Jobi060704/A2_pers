#include "Card.h"

#include <iostream>

Card::Card(Colour _colour, int _number)
{
   this->colour = _colour;
   this->number = _number;
}

Card::Card(Card& other) {
   this->colour = other.colour;
   this->number = other.number;
}

Card::~Card() {
}

Colour Card::getColour() {
   return colour;
}

int Card::getNumber() {
   return number;
}
