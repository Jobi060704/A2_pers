#include "Card.h"

#include <iostream>

Card::Card(Colour _colour, int _number)
{
   this->colour = new Colour(_colour);
   this->number = new int(_number);
}

Card::Card(Card& other) {
   this->colour = new Colour(*other.colour);
   this->number = new int(*other.number);
}

Card::~Card() {
   // std::cout << "Card::~Card" << std::endl;
   delete colour;
   delete number;
}

Colour Card::getColour() {
   return *colour;
}

int Card::getNumber() {
   return *number;
}
