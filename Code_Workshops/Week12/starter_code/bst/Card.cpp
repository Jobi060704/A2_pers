#include "Card.h"

#include <iostream>

Card::Card(Colour _colour, int _number)
{
   this->colour = _colour;
   this->number = _number;
}

Card::Card(const Card& other) {
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


bool Card::operator<(const Card& other) const{
   return number < other.number &&
            colour < other.colour;
}

bool Card::operator==(const Card& other) const{
   return number == other.number &&
            colour == other.colour;
}

std::ostream& operator<<(std::ostream& os, Card& card){
   os << " ("<< card.getColour() << ", " 
               << card.getNumber() << " ) ";

   return os;
}