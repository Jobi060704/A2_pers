#include "Card.h"
#include <iostream>

Card::Card(Colour colour, int number)
{
   this->colour = new Colour(colour);
   this->number = new int(number);
}

Card::~Card()
{
   // std::cout << "Deconstructer called " << std::endl;
   delete colour;
   delete number;
}

Colour Card::getColour(){
   return *colour;
}

int Card::getNumber(){
   return *number;
}