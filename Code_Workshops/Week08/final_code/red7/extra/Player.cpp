
#include "Player.h"

#include "Card.h"
#include "Rule.h"
#include "utils.h"

#include <iostream>
#include <random>

Player::Player(int playerNo) :
   playerNo(playerNo)
{
   hand = new Deck();
   palette = new Deck();
}

Player::Player(Player &other) :
   Player(other.playerNo)
{
   delete hand;
   hand = new Deck(*other.hand);

   delete palette;
   hand = new Deck(*other.palette);
}

Player::~Player() {
   delete hand;
   delete palette;
}

void Player::setInitialHand(Deck* deck) {
   delete hand;
   hand = new Deck(*deck);
}

void Player::playToRule(int index, Rule* rule) {
   Card* card = hand->get(index);
   hand->remove(index);
   rule->setRule(card);
}

void Player::playToPalette(int index) {
   Card* card = hand->get(index);
   hand->remove(index);
   palette->add(card);
}

void showState(Player* player, Rule* rule) {
   std::cout << std::endl
             << "Player " << player->getPlayerNo()
             << ": here are the cards in your hand: " << std::endl;
   printDeck(player->getHand());

   std::cout << "Here is your Palette: " << std::endl;
   printDeck(player->getPalette());
   std::cout << std::endl;

   std::cout << "The current Rule is: ";
   printRule(std::cout, rule->getRule());
   std::cout << std::endl;
}

int Player::getPlayerNo() {
   return playerNo;
}

Deck* Player::getHand() {
   return hand;
}

Deck* Player::getPalette() {
   return palette;
}

void Player::reset() {
   delete hand;
   hand = new Deck();

   delete palette;
   palette = new Deck();
}
