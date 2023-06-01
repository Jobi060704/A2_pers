#ifndef UTILS_H
#define UTILS_H

#include "Card.h"

//void printCard(int colour, int number);
void printColourAsString(int colour);
void printRule(int colour);
void readOneCard(int* colour, int* number);
void printCard(Card* card);

#endif //UTILS_H