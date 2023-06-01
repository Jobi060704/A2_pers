#include "Card.h"
#include <iostream>

Card::Card(int _colour, int _number)
{
   this->colour = new int(_colour);
   this->number = new int(_number);
}

Card::~Card()
{
   // std::cout << "Deconstructer called " << std::endl;
   delete colour;
   delete number;
}

int Card::getColour(){
   return *colour;
}

int Card::getNumber(){
   return *number;
}