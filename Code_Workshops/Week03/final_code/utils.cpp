#include "utils.h"
#include <iostream>

// void printCard(int colour, int number) {
//    std::cout << "Card: ";
//    printColourAsString(colour);
//    std::cout << " " << number << std::endl;
//    printRule(colour);
//    std::cout << std::endl;
// }

void printCard(Card* card){
   std::cout << "Card: ";
   printColourAsString(card->getColour());
   std::cout << " " << card->getNumber() << std::endl;
   printRule(card->getColour());
   std::cout << std::endl;
}

void printColourAsString(int colour) {
   // Define some colours as string
   char red[] = "Red";
   char orange[] = "Orange";
   char yellow[] = "Yellow";
   char green[] = "Green";
   char blue[] = "Blue";
   char indigo[] = "Indigo";
   char violet[] = "Violet";
   char unknown[] = "UNKNOWN";

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

void printRule(int colour) {
   std::cout << "      ";
   if (colour == RED) {
      std::cout << "Highest Card";
   } else if (colour == ORANGE) {
      std::cout << "Most of one Number";
   } else if (colour == YELLOW) {
      std::cout << "Most of one Colour";
   } else if (colour == GREEN) {
      std::cout << "Most Even Cards";
   } else if (colour == BLUE) {
      std::cout << "Most different Colours";
   } else if (colour == INDIGO) {
      std::cout << "Most Cards in a Row";
   } else if (colour == VIOLET) {
      std::cout << "Most Cards below 4";
   } else {
      std::cout << "???";
   }

   return;
}