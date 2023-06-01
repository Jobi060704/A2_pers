#include "Deck.h"

Deck::Deck(){
    deck = new LinkedList();
}

//need to revisit later
Deck::Deck(Deck& other)
{
    deck = new LinkedList(*other.deck);
}

Deck::~Deck(){
   delete deck;
}

/**
* Return the current size of the Deck.
*/
int Deck::size(){
    return deck->size();
}

/**
* Get a card at the given index.
* Nullptr if out-of-range
*/
Card* Deck::get(int index){
    //DO NOT DO THIS
    //BAD DESIGHN
    return deck->get(index).get();
}

/**
* Add a card to the deck to the bottom of the deck
*/
void Deck::add(Card* card){
    //DO NOT DO THIS
    //BAD DESIGHN
    std::shared_ptr<Card> card1(card);
    deck->add_back(card1);
}

/**
* Add a card at the given index of the deck
*/
void Deck::add(Card* card, int index){
    //TODO
}

/**
* Remove a card from the deck at the given index
*/
void Deck::remove(int index){
     deck->remove(index);
}

/**
* Removes all cards from the deck.
* Delete these card
*/
void Deck::clear(){
    deck->clear(); 
}