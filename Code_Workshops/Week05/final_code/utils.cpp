
#include <iostream>
#include "utils.h"

// ASSUMPTION!!
// numPrint MUST be not bigger than the length of the array!
void printAllCards(Card* cards[], int numPrint) {
   printAllCards(std::cout, cards, numPrint);
}


void printAllCards(std::ostream& outfile, Card* cards[], int numPrint) {
   for (int i = 0; i < numPrint; ++i) {
      outfile << "Index: " 
                  << i << ": "
                  << std::endl;
      if(cards[i] != nullptr){
         printCard(outfile, cards[i]);
      }
   }
}

void printCard(Card* card) {
   printCard(std::cout, card);
}

void printCard(std::ostream& outfile, Card* card) {
   outfile << "\tCard: ";
   printColourAsString(outfile, card->getColour());
   outfile << " "
             << card->getNumber()
             << std::endl;
   printRule(outfile, card->getColour());
   outfile << std::endl;
}

void printColourAsString(int colour) {
   printColourAsString(std::cout, colour);
}

void printColourAsString(std::ostream& outfile, int colour) {
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
      outfile << red;
   } else if (colour == ORANGE) {
      outfile << orange;
   } else if (colour == YELLOW) {
      outfile << yellow;
   } else if (colour == GREEN) {
      outfile << green;
   } else if (colour == BLUE) {
      outfile << blue;
   } else if (colour == INDIGO) {
      outfile << indigo;
   } else if (colour == VIOLET) {
      outfile << violet;
   } else {
      outfile << unknown;
   }
}

void printRule(int colour) {
   printRule(std::cout, colour);
}


void printRule(std::ostream& outfile,  int colour) {
   std::cout << "\t";
   if (colour == RED) {
      outfile << "Highest Card";
   } else if (colour == ORANGE) {
      outfile << "Most of one Number";
   } else if (colour == YELLOW) {
      outfile << "Most of one Colour";
   } else if (colour == GREEN) {
      outfile << "Most Even Cards";
   } else if (colour == BLUE) {
      outfile << "Most different Colours";
   } else if (colour == INDIGO) {
      outfile << "Most Cards in a Row";
   } else if (colour == VIOLET) {
      outfile << "Most Cards below 4";
   } else {
      outfile << "???";
   }

   return;
}