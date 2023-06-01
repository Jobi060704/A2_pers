#include "Card.h"
#include <iostream>

Card::Card(Colour colour, int number)
{
   this->colour = new Colour(colour);
   this->number = new int(number);
}

// //shallow copy
// Card::Card(Card& other){
//    this->colour = other.colour;
//    this->number = other.number;
// }

//Deep copy
Card::Card(Card& other){
   this->colour = new Colour(*other.colour);
   this->number = new int(*other.number);
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