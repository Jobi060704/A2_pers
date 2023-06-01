#include <iostream>
#include <string>

#include "Card.h"
#include "utils.h"
#include "Rule.h"

#define NUMBER_CARDS_TO_READ 5

bool readOneCard(Colour* colour, int* number);
void playTheGame(Card** cards, int numCards);
void deepCopy(Card** source, Card** destination, int numCards);

int main(void) {
   // TODO: Convert to use a Class
   Colour colour = RED;
   int number = 0;

   Card* cards[NUMBER_CARDS_TO_READ];
   for(int i=0; i<NUMBER_CARDS_TO_READ; ++i){
      cards[i] = nullptr;
   }

   //create a deep copy of cards
   Card* cards_copy[NUMBER_CARDS_TO_READ];
   for(int i=0; i<NUMBER_CARDS_TO_READ; ++i){
      cards_copy[i] = nullptr;
   }

   

   

   // Read a set number of cards from the user or until EOF
   int numRead = 0;
   while(!std::cin.eof() && numRead < NUMBER_CARDS_TO_READ) {
      bool readSuccess = false;
      readSuccess = readOneCard(&colour, &number);

      if (!std::cin.eof() && readSuccess == true) {
         //Create a card and add it to array
         Card* card = new Card(colour, number);
         cards[numRead] = card;
  
         // Increment cards read
         ++numRead;
      }

   }

   // When we had array's before - print out all the cards
   // for (int i = 0; i < numRead && i < NUMBER_CARDS_TO_READ; ++i) {
   //    printCard(cards[i]);
   // }
   printCards(cards, numRead);

   playTheGame(cards, numRead);

   deepCopy(cards, cards_copy, numRead);

   //Cleanup
   for(int i=0; i<NUMBER_CARDS_TO_READ; ++i){
      if(cards[i] != nullptr){
         delete cards[i];
      }
   }

   return EXIT_SUCCESS;
}

void deepCopy(Card** source, Card** destination, int numCards){
   for(int i = 0; i<numCards; ++i){
      //shallow copy
      //destination[i] = source[i];

      //deep copy
      destination[i] = new Card(*source[i]);
   }
}

void playTheGame(Card** cards, int numCards){

   std::cout << "Playing the game.." << std::endl;

   Rule* rule = new Rule();

   for(int i = 0; i < numCards; ++i){
      // // transfer thhe ownership to rule
      // rule->setRule(cards[i]);
      // cards[i] = nullptr;

      //create a copy
      // pass ownership of copy to rule
      Card* copyCard = new Card(*cards[i]);
      rule->setRule(copyCard);
      copyCard = nullptr;

      //print the rule
      std::cout << "Setting the rule as: ";
      printColourAsString(rule->getRule());
      std::cout << std::endl;

   }
}

bool readOneCard(Colour* colour, int* number) {
   //std::cin >> *colour;
   bool readSuccess  = true;
   int readColour = 0;
   std::cin >> readColour;

   if(readColour == 0){
      *colour = RED;
   }else if(readColour == 1){
      *colour = ORANGE;
   }else if(readColour == 2){
      *colour = YELLOW;
   }else if(readColour == 3){
      *colour = GREEN;
   }else if(readColour == 4){
      *colour = BLUE;
   }else if(readColour == 5){
      *colour = INDIGO;
   }else if(readColour == 6){
      *colour = VIOLET;
   }else{
      readSuccess = false;
      colour = nullptr;
      std::cout << "The colour is not valid.." << std::endl;
   }

   std::cin >> *number;

   return readSuccess;
}


