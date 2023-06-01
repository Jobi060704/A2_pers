
/**
 Quiz week 05 1: There is a error in the code. Find it?
 */

#include <iostream>
#include <string>
#include <fstream>
#include <random>

#include "Card.h"
#include "Rule.h"
#include "utils.h"
#include "Player.h"

#define NUMBER_CARDS_TO_READ  5
#define MAX_DECK_SIZE         49

bool readOneCard(std::ifstream& file,  Colour* colour, int* number);

void setupGame(std::string outFileName, Card* deck[], Player* player1);
void playTheGame(Player* player1);
void cleanupGame(Card* deck[], Player* player1);

int main(int argc, char** argv) {

   // for(int i = 0; i < argc; ++i){
   //    std::cout   << "Argv[" << i << "]: "
   //                << argv[i] << std::endl;
   // }

   std::string outFileName = "log.txt";
   if(argc >= 2){
      outFileName = argv[1];
   }
  
   // Array of Card objects -> cards array is ON the STACK
   // Card OBJECTS will be on the HEAP
   Card* deck[MAX_DECK_SIZE];
   for(int i =0; i < MAX_DECK_SIZE; ++i) {
      deck[i] = nullptr;
   }

   Player* player1 = new Player();
   for(int i =0; i < NUMBER_CARDS_TO_READ; ++i) {
      player1->hand[i] = nullptr;
   }
   player1->nCardsInHand = 0;

   // Card* hand[NUMBER_CARDS_TO_READ];
   // for(int i =0; i < NUMBER_CARDS_TO_READ; ++i) {
   //    hand[i] = nullptr;
   // }
   // int numCards = 0;

   // Setup the game (using the defined data structures)
   setupGame(outFileName, deck, player1);

   playTheGame(player1);

   // Cleanup - delete my array of objects
   cleanupGame(deck, player1);

   return EXIT_SUCCESS;
}

void setupGame(std::string outFileName, Card* deck[], Player* player1) {

   // open a file to read
   std::ifstream file("deck.txt");

   // Read a set number of cards from the user or until EOF
   int numRead = 0;
   while(!file.eof() && numRead < MAX_DECK_SIZE) {
      Colour colour = RED;
      int number = 0;  
      bool readSuccess = false; 
      readSuccess = readOneCard(file, &colour, &number);
      
      if (!file.eof() && readSuccess) {
         // Put the card in the array
         Card* card = new Card(colour, number);
         deck[numRead] = card;

         // Increment cards read
         ++numRead;
      }
   }

   file.close();

   std::ofstream outfile(outFileName);
   printAllCards(outfile, deck, numRead);
   outfile.close();

   // Update the number of cards read
   // player1->nCardsInHand = numRead;

   std::random_device randomSeed;
   std::uniform_int_distribution<int> uniform_dist(0, numRead-1);


   //for(int i = 0; i< MAX_HAND_SIZE; ++i){
   int i = 0;
   while(i< MAX_HAND_SIZE){
      int randIndex = uniform_dist(randomSeed);

      if(deck[randIndex] != nullptr){
         //transfer ownership to player
         player1->hand[i] = deck[randIndex];
         deck[randIndex] = nullptr;
         ++i;
         ++player1->nCardsInHand;
      }

   }

   // When we had array's before - print out all the cards
   // numRead is guaratenteed to be no longer than length of the array
   printAllCards(player1->hand, player1->nCardsInHand);

   //clear the std::cin after EOF (may be needed on mac)
   std::cin.clear();
   std::clearerr(stdin);
}

void playTheGame(Player* player1) {
   std::cout << "Playing this Game " << std::endl;
   // Simple game
   Rule* rule = new Rule();

   // Keep setting cards until we run out
   // Q: How do we ensure we don't run out??
   int lengthCards = player1->nCardsInHand;
   int move = 0;
   while(!std::cin.eof() && player1->nCardsInHand > 0) {
      std::cout << std::endl
                << "Here are the cards in your hand: "
                << std::endl;
      printAllCards(player1->hand, lengthCards);

      // Choose rule to play
      if (!std::cin.eof()) {
         std::cout << "Which card (choose index) do you want "
                   << "to move to the Rule?"
                   << std::endl;
         std::cin >> move;
         if (move >= 0 && move < lengthCards) {
            if(player1->hand[move] != nullptr) {
               // Transfering ownership
               rule->setRule(player1->hand[move]);
               player1->hand[move] = nullptr;

               --player1->nCardsInHand;
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

void cleanupGame(Card* deck[], Player* player1) {
   for(int i =0; i < MAX_HAND_SIZE; ++i) {
      if (player1->hand[i] != nullptr) {
         delete player1->hand[i];
      }
   }

   for(int i =0; i < MAX_DECK_SIZE; ++i) {
      if (deck[i] != nullptr) {
         delete deck[i];
      }
   }
}

bool readOneCard(std::ifstream& file, Colour* colour, int* number) {

   //read colour
   int readColour = 0;
   bool readSuccess = true;
   file >> readColour;

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
   file >> *number;

   return readSuccess;
}
