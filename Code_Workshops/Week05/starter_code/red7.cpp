
/**
 Quiz week 05 1: There is a error in the code. Find it?
 */

#include <iostream>
#include <string>

#include "Card.h"
#include "Rule.h"
#include "utils.h"

#define NUMBER_CARDS_TO_READ 5

bool readOneCard(Colour* colour, int* number);

void setupGame(Card* hand[], int* lengthHand);
void playTheGame(Card* hand[], int nCardsInHand);
void cleanupGame(Card* hand[], int lengthHand);

int main(void) {
  
   // Array of Card objects -> cards array is ON the STACK
   // Card OBJECTS will be on the HEAP
   Card* hand[NUMBER_CARDS_TO_READ];
   for(int i =0; i < NUMBER_CARDS_TO_READ; ++i) {
      hand[i] = nullptr;
   }
   int numCards = 0;

   // Setup the game (using the defined data structures)
   setupGame(hand, &numCards);

   playTheGame(hand, numCards);

   // Cleanup - delete my array of objects
   cleanupGame(hand, numCards);

   return EXIT_SUCCESS;
}

void setupGame(Card* hand[], int* lengthHand) {
   // Read a set number of cards from the user or until EOF
   int numRead = 0;
   while(!std::cin.eof() && numRead < NUMBER_CARDS_TO_READ) {
      Colour colour = RED;
      int number = 0;  
      bool readSuccess = false; 
      readSuccess = readOneCard(&colour, &number);
      
      if (!std::cin.eof() && readSuccess) {
         // Put the card in the array
         Card* card = new Card(colour, number);
         hand[numRead] = card;

         // Increment cards read
         ++numRead;
      }
   }

   // Update the number of cards read
   *lengthHand = numRead;

   // When we had array's before - print out all the cards
   // numRead is guaratenteed to be no longer than length of the array
   printAllCards(hand, numRead);

   //clear the std::cin after EOF (may be needed on mac)
   std::cin.clear();
   std::clearerr(stdin);
}

void playTheGame(Card* hand[], int nCardsInHand) {
   std::cout << "Playing this Game " << std::endl;
   // Simple game
   Rule* rule = new Rule();

   // Keep setting cards until we run out
   // Q: How do we ensure we don't run out??
   int lengthCards = nCardsInHand;
   int move = 0;
   while(!std::cin.eof() && nCardsInHand > 0) {
      std::cout << std::endl
                << "Here are the cards in your hand: "
                << std::endl;
      printAllCards(hand, lengthCards);

      // Choose rule to play
      if (!std::cin.eof()) {
         std::cout << "Which card (choose index) do you want "
                   << "to move to the Rule?"
                   << std::endl;
         std::cin >> move;
         if (move >= 0 && move < lengthCards) {
            if(hand[move] != nullptr) {
               // Transfering ownership
               rule->setRule(hand[move]);
               hand[move] = nullptr;

               --nCardsInHand;
            } else{
               std::cout << "No card at index" << std::endl;
            }
         }else{
            std::cout << "Index is outside the range" << std::endl;
         }
      }
   }

   // Cleanup!
   delete rule;

   //clear the std::cin after EOF (may be needed on mac)
   std::cin.clear();
   std::clearerr(stdin);
}

void cleanupGame(Card* hand[], int lengthHand) {
   for(int i =0; i < lengthHand; ++i) {
      if (hand[i] != nullptr) {
         delete hand[i];
      }
   }
}

bool readOneCard(Colour* colour, int* number) {

   //read colour
   int readColour = 0;
   bool readSuccess = true;
   std::cin >> readColour;

   if(readColour == 0){
      *colour = RED;
   }else if (readColour == 1){
      *colour = ORANGE;
   }else if (readColour == 2){
      *colour = YELLOW;
   }else if (readColour == 3){
      *colour = GREEN;
   }else if (readColour == 4){
      *colour = BLUE;
   }else if (readColour == 5){
      *colour = INDIGO;
   }else if (readColour == 6){
      *colour = VIOLET;
   }else{
      readSuccess = false;
      std::cout << "Incorrect color try again!" << std::endl;
   }

   //read number
   std::cin >> *number;

   return readSuccess;
}
