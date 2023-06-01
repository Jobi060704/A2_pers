#include <iostream>
#include <string>


#define RED    0
#define ORANGE 1
#define YELLOW 2
#define GREEN  3
#define BLUE   4
#define INDIGO 5
#define VIOLET 6

#define NUMBER_CARDS_TO_READ 5

void printColourAsString(int colour);
void printCard(int number, int colour);

int main(void) {
   int number = 7;
   int colour = RED;

   // Read until EOF
   while(!std::cin.eof()) {
      // Read the card value
      std::cin >> colour;
      std::cin >> number;
      
      // Print out "natural version" of the card
      printCard(number, colour);
   }

   return EXIT_SUCCESS;
}

void printCard(int number, int colour){

   std::cout << "Red7 Card : ";
      printColourAsString(colour);
      std::cout << " - " << number << std::endl;
}

void printColourAsString(int colour) {
   // Define some colours as string
   std::string red = "Red";
   std::string orange = "Orange";
   std::string yellow = "Yellow";
   std::string green = "Green";
   std::string blue = "Blue";
   std::string indigo = "Indigo";
   std::string violet = "Violet";
   std::string unknown = "UNKNOWN";

   if (colour == RED) {
      std::cout << red;
   } else if (colour == ORANGE) {
      std::cout << orange;
   } else if (colour == YELLOW) {
      std::cout << yellow;
   } else if (colour == GREEN) {
      std::cout << green;
   } else if (colour == BLUE) {
      std::cout << blue;
   } else if (colour == INDIGO) {
      std::cout << indigo;
   } else if (colour == VIOLET) {
      std::cout << violet;
   } else {
      std::cout << unknown;
   }
}
