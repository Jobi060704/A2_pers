#include <fstream>
#include <iostream>
#include <random>
#include <string>

#include "Card.h"
#include "Rule.h"
#include "Player.h"
#include "utils.h"
#include "Deck.h"
#include "DeckVector.h"

#define NUM_COLOURS     7
#define NUM_NUMS        7
#define MAX_SIZE_DECK (NUM_COLOURS * NUM_NUMS)

bool readOneCard(std::ifstream& file, Colour* colour, int* number);

void setupGame(std::string deckFile, Deck* deck, Player* player1);
void playTheGame(Deck* deck, Player* player1);
void cleanupGame(Deck* deck, Player* player1);

int main(int argc, char** argv) {
  
   // Process our command-line args
   std::string deckFilename = "deck.txt";
   if (argc >= 2) {
      deckFilename = argv[1];
   }

   // Create a Deck of cards
   Deck* deck = new Deck();
   Player* player1 = new Player(1);

   // Setup the game (using the defined data structures)
   setupGame(deckFilename, deck, player1);

   // Play the game
   playTheGame(deck, player1);

   // Cleanup - delete my array of objects
   cleanupGame(deck, player1);

   return EXIT_SUCCESS;
}

void setupGame(std::string deckFile, Deck* deck, Player* player1) {
   // 1. open the file to read
   std::ifstream file(deckFile);

   // Read a set number of cards from the user or until EOF
   int numRead = 0;
   while(!file.eof() && numRead < MAX_SIZE_DECK) {
      Colour colour = RED;
      int number = 0;   
      bool readSuccess = false; 
      readSuccess = readOneCard(file, &colour, &number);
      
      if (!file.eof() && readSuccess) {
         // Put the card in the array
         Card* card = new Card(colour, number);
         // TODO - USE Deck
         deck->add(card);

         // Increment cards read
         ++numRead;
      }
   }

   // Close the file
   file.close();

   //print the deck
   printDeck(deck);

   // Create a new temporary deck
   Deck* initialHand = new Deck();

   // Randomise the players hand!!!!
   std::random_device randomSeed;
   std::uniform_int_distribution<int> uniform_dist(0, numRead-1);
   int i = 0;
   while (i < MAX_HAND_SIZE) {         // && deck->get(randIndex) != nullptr
      // Pick a random card from the deck!!!!
      int randIndex = uniform_dist(randomSeed);

      if (deck->get(randIndex) != nullptr) {
         // TODO - move from deck to player
         Card* card = new Card(*deck->get(randIndex));
         initialHand->add(card);
         deck->remove(randIndex);

         ++i;
      }
   }

   // Set the player's initial deck
   // TODO
   player1->setInitialHand(initialHand);
   delete initialHand;

}

void playTheGame(Deck* deck, Player* player1) {
   std::cout << "Playing this Game " << std::endl;
   
   // Simple game
   Rule* rule = new Rule();

   // Keep setting cards until we run out
   int move = 0;
   while(!std::cin.eof() && player1->getHand()->size() > 0) {
      std::cout << std::endl
                << "Here are the cards in your hand: "
                << std::endl;
      printDeck(player1->getHand());

      // Choose a card to move to the palette

      // Choose rule to play
      if (!std::cin.eof()) {
         std::cout << "Which card (choose index) do you want "
                   << "to move to the Rule?"
                   << std::endl;
         std::cin >> move;
         if (move >= 0 && move < player1->getHand()->size()) {
            // Transfering ownership - Week 04
            // TODO: PLAY TO RULE
            Card* card = new Card(*player1->getHand()->get(move));
            rule->setRule(card);
            player1->getHand()->remove(move);
         }
      }
   }

   // Cleanup!
   delete rule;
}

void cleanupGame(Deck* deck, Player* player1) {
   delete player1;
   delete deck;
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
