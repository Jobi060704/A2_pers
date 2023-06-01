
#ifndef UTILS_H
#define UTILS_H

#include "Card.h"

#include <fstream>

class Deck;

/*
 * CAREFUL NOTES!
 * 
 * As dicsussed in the workshop, you can convert all of the print
 * methods to use an output stream.
 * Completing this implementation is left as an activity for yourself!
 */

void printAllCards(std::ostream& output, Card* cards[], int numPrint);
void printAllCards(Card* cards[], int numPrint);

void printDeck(Deck* deck);
void printDeck(std::ostream& out, Deck* deck);

void printCard(std::ostream& output, Card* card);
void printCard(Card* card);

void printColourAsString(std::ostream& output, int colour);
void printColourAsString(int colour);

void printRule(std::ostream& output, int colour);
void printRule(int colour);

#endif // UTILS_H