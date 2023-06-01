
#include <iostream>
#include "utils.h"

// ASSUMPTION!!
// numPrint MUST be not bigger than the length of the array!
void printAllCards(Card* cards[], int numPrint) {
   for (int i = 0; i < numPrint; ++i) {
      std::cout << "Index: " 
                  << i << ": "
                  << std::endl;
      printCard(cards[i]);
   }
}

void printCard(Card* card) {
   std::cout << "\tCard: ";
   printColourAsString(card->getColour());
   std::cout << " "
             << card->getNumber()
             << std::endl;
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
   std::cout << "\t";
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
