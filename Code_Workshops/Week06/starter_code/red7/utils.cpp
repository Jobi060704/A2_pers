
#include "utils.h"

#include "Deck.h"

#include <iostream>

void printAllCards(std::ostream& output, Card* cards[], int numPrint) {
   for (int i = 0; i < numPrint; ++i) {
      output << "Index: " 
             << i << ": "
             << std::endl;
      if (cards[i] != nullptr) {
         printCard(output, cards[i]);
      }
   }
}

// ASSUMPTION!!
// numPrint MUST be not bigger than the length of the array!
void printAllCards(Card* cards[], int numPrint) {
   printAllCards(std::cout, cards, numPrint);
}

void printDeck(Deck* deck) {
   printDeck(std::cout, deck);
}

void printDeck(std::ostream& out, Deck* deck) {
   // TODO
}  

void printCard(std::ostream& output, Card* card) {
   output << "\tCard: ";
   printColourAsString(output, card->getColour());
   output << " "
          << card->getNumber()
          << std::endl;
   printRule(output, card->getColour());
   output << std::endl;
}

void printCard(Card* card) {
   printCard(std::cout, card);
}

void printColourAsString(std::ostream& output, int colour) {
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
      output << red;
   } else if (colour == ORANGE) {
      output << orange;
   } else if (colour == YELLOW) {
      output << yellow;
   } else if (colour == GREEN) {
      output << green;
   } else if (colour == BLUE) {
      output << blue;
   } else if (colour == INDIGO) {
      output << indigo;
   } else if (colour == VIOLET) {
      output << violet;
   } else {
      output << unknown;
   }
}

void printColourAsString(int colour) {
   printColourAsString(std::cout, colour);
}

void printRule(std::ostream& output, int colour) {
   output << "\t";
   if (colour == RED) {
      output << "Highest Card";
   } else if (colour == ORANGE) {
      output << "Most of one Number";
   } else if (colour == YELLOW) {
      output << "Most of one Colour";
   } else if (colour == GREEN) {
      output << "Most Even Cards";
   } else if (colour == BLUE) {
      output << "Most different Colours";
   } else if (colour == INDIGO) {
      output << "Most Cards in a Row";
   } else if (colour == VIOLET) {
      output << "Most Cards below 4";
   } else {
      output << "???";
   }

   return;
}

void printRule(int colour) {
   printRule(std::cout, colour);
}