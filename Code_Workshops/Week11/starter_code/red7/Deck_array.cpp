#include "Deck.h"

Deck::Deck(){
    length = 0;
    for (int i = 0; i != MAXIMUM_DECK_SIZE; ++i) {
        deck[i] = nullptr;
    }
}

Deck::Deck(Deck& other){
    for (int i = 0; i != MAXIMUM_DECK_SIZE; ++i) {
      deck[i] = nullptr;
    }
    length = other.length;
    for (int i = 0; i != length; ++i) {
        deck[i] = new Card(*other.deck[i]);
    }
}

Deck::~Deck(){
    clear();
}

/**
* Return the current size of the Deck.
*/
int Deck::size(){
    return length;
}

/**
* Get a card at the given index.
* Nullptr if out-of-range
*/
Card* Deck::get(int index){
    Card* card = nullptr;
    if (index >=0 && index < length) {
        card = deck[index];
    }
    return card;
}

/**
* Add a card to the deck to the bottom of the deck
*/
void Deck::add(Card* card){
    if (card != nullptr && length != MAXIMUM_DECK_SIZE) {
        deck[length] = card;
        ++length; 
    }
}

/**
* Add a card at the given index of the deck
*/
void Deck::add(Card* card, int index){
    if (card != nullptr && length != MAXIMUM_DECK_SIZE &&
        index >= 0 && index < length) {
        for (int i = length-1; i >= index; --i) {
            deck[i+1] = deck[i];
        }
        
        deck[index] = card;
        ++length; 
    }
}

/**
* Remove a card from the deck at the given index
*/
void Deck::remove(int index){
     if (length > 0 &&
       index >= 0 && index < length) {
      Card* toDelete = deck[index];
      for (int i = index; i != length; ++i) {
         if (i < MAXIMUM_DECK_SIZE - 2) {
            deck[i] = deck[i+1];
         }
      }

      deck[length-1] = nullptr;
      delete toDelete;
      --length; 
   }
}

/**
* Removes all cards from the deck.
* Delete these card
*/
void Deck::clear(){
    for (int i = 0; i != length; ++i) {
      delete deck[i];
      deck[i] = nullptr;
   }
}