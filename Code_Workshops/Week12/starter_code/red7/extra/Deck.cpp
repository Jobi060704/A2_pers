
#include "Deck.h"

#include <iostream>
#include <fstream>

Deck::Deck() {
   // deck = new Card*[MAXIMUM_DECK_SIZE];
   length = 0;
   for (int i = 0; i != MAXIMUM_DECK_SIZE; ++i) {
      deck[i] = nullptr;
   }
}

Deck::Deck(Deck& other)
{
   // deck = new Card*[MAXIMUM_DECK_SIZE];
   for (int i = 0; i != MAXIMUM_DECK_SIZE; ++i) {
      deck[i] = nullptr;
   }
   length = other.length;
   for (int i = 0; i != length; ++i) {
      deck[i] = new Card(*other.deck[i]);
   }
}

Deck::~Deck() {
   clear();
   // delete deck;
}

int Deck::size() {
   return length;
}

Card* Deck::get(int index) {
   Card* card = nullptr;
   if (index >=0 && index < length) {
      card = deck[index];
   }
   return card;
}

void Deck::add(Card* card) {
   if (card != nullptr && length != MAXIMUM_DECK_SIZE) {
      deck[length] = card;
      ++length; 
   }
}

void Deck::add(Card* card, int index) {
   if (card != nullptr && length != MAXIMUM_DECK_SIZE &&
       index >= 0 && index < length) {
      for (int i = length-1; i >= index; --i) {
         deck[i+1] = deck[i];
      }
      
      deck[index] = card;
      ++length; 
   }
}

void Deck::remove(int index) {
   if (length > 0 &&
       index >= 0 && index < length) {
      // Card* toDelete = deck[index];
      for (int i = index; i != length; ++i) {
         if (i < MAXIMUM_DECK_SIZE - 2) {
            deck[i] = deck[i+1];
         }
      }

      deck[length-1] = nullptr;
      // delete toDelete;
      --length; 
   }
}

void Deck::clear() {
   for (int i = 0; i != length; ++i) {
      delete deck[i];
      deck[i] = nullptr;
   }
}

