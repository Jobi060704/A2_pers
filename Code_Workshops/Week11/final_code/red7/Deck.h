#ifndef DECK_H
#define DECK_H 

#include <istream>
#include <string>
#include <vector>

#include "Card.h"
#include "LinkedList.h"

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

   virtual ~Deck() {};

   /**
    * Return the current size of the Deck.
    */
   virtual int size() = 0;

   /**
    * Get a card at the given index.
    * Nullptr if out-of-range
    */
   virtual Card* get(int index) = 0;

   /**
    * Add a card to the deck to the bottom of the deck
    */
   virtual void add(Card* card) = 0;

   /**
    * Add a card at the given index of the deck
    */
   virtual void add(Card* card, int index) = 0;

   /**
    * Remove a card from the deck at the given index
    */
   virtual void remove(int index) = 0;

   /**
    * Removes all cards from the deck.
    * Delete these card
    */
   virtual void clear() = 0;

private:

};

#endif // DECK_H
