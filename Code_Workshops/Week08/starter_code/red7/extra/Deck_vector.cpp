#include "Deck.h"

Deck::Deck(){
    
}

//need to revisit later
Deck::Deck(Deck& other)
{
    for(int i=0; i != other.size() ; ++i){
        Card* card = new Card(*other.deck[i]);
        deck.push_back(card);
    }

}

Deck::~Deck(){
    clear();
}

/**
* Return the current size of the Deck.
*/
int Deck::size(){
   return (int)deck.size();
}

/**
* Get a card at the given index.
* Nullptr if out-of-range
*/
Card* Deck::get(int index){
    Card* retCard = nullptr;

    if(index >= 0 && index < size()){
        retCard = deck[index];
    }

    return retCard;
}

/**
* Add a card to the deck to the bottom of the deck
*/
void Deck::add(Card* card){
    deck.push_back(card);
}

/**
* Add a card at the given index of the deck
*/
void Deck::add(Card* card, int index){
    
}

/**
* Remove a card from the deck at the given index
*/
void Deck::remove(int index){
     if(size() > 0 && index >= 0 && index < size()){
         Card* toDelete = deck[index];
      
      if(deck.size() > 1){
        for (int i = index; i != size()-1; ++i) {
                deck[i] = deck[i+1];
        }
      }

      deck[size()-1] = nullptr;
      deck.pop_back();
      delete toDelete;
     }
}

/**
* Removes all cards from the deck.
* Delete these card
*/
void Deck::clear(){

    for(int i=0; i != size() ; ++i){
        delete deck[i];
        deck[i] = nullptr;
    }
    deck.clear();
}