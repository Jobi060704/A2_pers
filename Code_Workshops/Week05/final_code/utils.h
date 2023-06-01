
#ifndef UTILS_H
#define UTILS_H
#include <fstream>
#include "Card.h"

void printAllCards(Card* cards[], int numPrint);
void printAllCards(std::ostream& outfile, Card* cards[], int numPrint);

void printCard(Card* card);
void printCard(std::ostream& outfile, Card* card);

void printColourAsString(int colour);
void printColourAsString(std::ostream& outfile, int colour);

void printRule(int colour);
void printRule(std::ostream& outfile, int colour);

#endif // UTILS_H