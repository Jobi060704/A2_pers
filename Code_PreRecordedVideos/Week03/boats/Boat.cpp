#include <iostream>
#include <string>

#include "Boat.h"

Boat::Boat(std::string name, double weight, double length) {
   this->name = name;
   this->weight = weight;
   this->length = length;
}

std::string Boat::getName() {
   return name;
}

double Boat::getWeight() {
   return weight;
}

double Boat::getLength() {
   return length;
}

void Boat::setName(std::string name) {
   // This keyword is a POINTER!!!!
   // (*this).name = name;

   this->name = name;
}