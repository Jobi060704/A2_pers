
#include <iostream>
#include <string>

class Boat {
public:
   Boat(std::string name, double weight, double length);

   std::string getName();
   double getWeight();
   double getLength();

   void setName(std::string name);

private:
   std::string name;
   double weight;
   double length;
};

void printBoat(Boat& boat);

int main(void) {
   Boat boat("Nautical", 6.0, 33.0);
   printBoat(boat);

   boat.setName("The Black Pearl");
   printBoat(boat);

   return EXIT_SUCCESS;
}


void printBoat(Boat& boat) {
   std::cout << "name: " << boat.getName() << std::endl;
   std::cout << "weight: " << boat.getWeight() << std::endl;
   std::cout << "length: " << boat.getLength() << std::endl;
}

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
