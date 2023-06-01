#ifndef UTILS_H
#define UTILS_H

#include "Card.h"

//void printCard(int colour, int number);
void printColourAsString(Colour colour);
void printRule(Colour colour);
void printCard(Card* card);

//Assumption:
// the numCards should be less than the lengthh of cards array
void printCards(Card** cards, int numCard);

#endif //UTILS_H