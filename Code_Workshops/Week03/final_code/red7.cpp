#include <iostream>
#include <string>

#include "Card.h"
#include "utils.h"

#define NUMBER_CARDS_TO_READ 5

int main(void) {
   // TODO: Convert to use a Class
   int colour = 0;
   int number = 0;
   
   Card* cards[NUMBER_CARDS_TO_READ];
   for(int i=0; i<NUMBER_CARDS_TO_READ; ++i){
      cards[i] = nullptr;
   }

   // Read a set number of cards from the user or until EOF
   int numRead = 0;
   while(!std::cin.eof() && numRead < NUMBER_CARDS_TO_READ) {
      readOneCard(&colour, &number);

      
      
      if (!std::cin.eof()) {

         Card* card = new Card(colour, number);
         cards[numRead] = card;
         // Print the card read
         // printCard(colour, number);
         //printCard(card);

         // Increment cards read
         ++numRead;
      }

   }

   //std::cout << "test" << std::endl;

   // When we had array's before - print out all the cards
   for (int i = 0; i < numRead && i < NUMBER_CARDS_TO_READ; ++i) {
      printCard(cards[i]);
   }

   for(int i=0; i<NUMBER_CARDS_TO_READ; ++i){
      if(cards[i] != nullptr){
         delete cards[i];
      }
   }

   return EXIT_SUCCESS;
}

void readOneCard(int* colour, int* number) {
   std::cin >> *colour;
   std::cin >> *number;
}


