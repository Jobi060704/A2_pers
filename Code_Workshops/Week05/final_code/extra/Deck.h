#ifndef DECK_H
#define DECK_H 

#include <istream>
#include <string>

#include "Card.h"

#define MAXIMUM_DECK_SIZE    50

/**
 * Represents a Deck (or pile) of Red7 Cards
 * Has ownership over all cards.
 * 
 * The implementation of this will NOT be provided.
 * This is similar to your Hand class from labs
 * It is also similar to assignment 1
 * Implementating this is left as an EXERCISE!
 * We will revisit this in Week 06.
 */
class Deck {
public:
   Deck();
   Deck(Deck& other);
   ~Deck();

   /**
    * Return the current size of the Deck.
    */
   int size();

   /**
    * Get a card at the given index.
    * Nullptr if out-of-range
    */
   Card* get(int index);

   /**
    * Add a card to the deck to the bottom of the deck
    */
   void addCard(Card* card);

   /**
    * Add a card at the given index of the deck
    */
   void addCard(Card* card, int index);

   /**
    * Remove a card from the deck at the given index
    */
   void removeCard(int index);

   /**
    * Removes all cards from the deck.
    * Delete these card
    */
   void clear();

private:

   Card* deck[MAXIMUM_DECK_SIZE];
   int length;
};

#endif // DECK_H
