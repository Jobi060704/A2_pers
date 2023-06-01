#include <iostream>
#include <string>

/**
 * Topics:
 * 
 * 1. The basics:
 *  - comments 
 *  - data types (int/float/double/string)
 *  - operators
 *  - if/else
 *  - while/for
 * 2. Differences:
 *  - strings
 *  - read / write / endl
 *  - Declarations (#defines) & Compiler process - see slide
 * 3. Concepts:
 *  - Types & Typecasting
 *  - Declaration / Definition / Initialisation
 * 4. More differences:
 *  - Functions - parameter passing
 *  - Arrays
 *  - Namespace
 *  - Global Variables
 */

#define RED    0
#define ORANGE 1
#define YELLOW 2
#define GREEN  3
#define BLUE   4
#define INDIGO 5
#define VIOLET 6

#define NUM_READS 5

void printColour(int colour);

int main(void) {



   int colour = RED;
   int number = 7;
   
   std::cout << "Red 7 Card:" << std::endl;
   //std::cout << "\tColour: " << colour << std::endl;
   printColour(colour);


   std::cout << "\tNumber: " << number << std::endl;

   // int i = 0;
   //for(int i = 0; i < NUM_READS; ++i){
   while(!std::cin.eof()){
      std::cin >> colour;
      std::cin >> number;

      std::cout << "Red 7 Card:" << std::endl;
      printColour(colour);
      std::cout << "\tNumber: " << number << std::endl;
      //++i;
   }






   return EXIT_SUCCESS;
}


void printColour(int colour){

   std::string red = "Red";
   std::string orange = "Orange";
   std::string yellow = "Yellow";
   std::string green = "Green";
   std::string blue = "Blue";
   std::string indigo = "Indigo";
   std::string violet = "Violet";
   std::string unknown = "UNKNOWN";

   std::cout << "\tcolour: ";
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
   std::cout << std::endl;
}