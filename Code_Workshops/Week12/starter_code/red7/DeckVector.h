#ifndef DECK_VECTOR_H
#define DECK_VECTOR_H 

#include <istream>
#include <string>
#include <vector>

#include "Card.h"

#include "Deck.h"

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
class DeckVector : public Deck{
public:
   DeckVector();
   DeckVector(DeckVector& other);
   virtual ~DeckVector();

   /**
    * Return the current size of the Deck.
    */
   virtual int size();

   /**
    * Get a card at the given index.
    * Nullptr if out-of-range
    */
   virtual Card* get(int index);

   /**
    * Add a card to the deck to the bottom of the deck
    */
   virtual void add(Card* card);

   /**
    * Add a card at the given index of the deck
    */
   virtual void add(Card* card, int index);

   /**
    * Remove a card from the deck at the given index
    */
   virtual void remove(int index);

   /**
    * Removes all cards from the deck.
    * Delete these card
    */
   virtual void clear();

private:

   // Card* deck[MAXIMUM_DECK_SIZE];
   // // Card** deck;
   // int length;

   std::vector<Card*> deck;
};

#endif // DECK_H
