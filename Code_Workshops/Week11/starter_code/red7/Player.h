#ifndef PLAYER_H
#define PLAYER_H 

#include "Deck.h"

#define MAX_HAND_SIZE    5

// Forward declare Player for circular reference
class Rule;

/**
 * Represents a single player in Red7.
 */
class Player {
public:
    Player(int playerNo);
    Player(Player &other);
    ~Player();
    
    /**
     * Sets the initial hand for the deck using the given deck.
     * Keeps an internal copy of the given deck.
     */
    void setInitialHand(Deck* deck);

    /**
     * Play a card from the hand at the given index
     * to the Rule
     */
    void playToRule(int index, Rule* rule);

    /**
     * Play a card from the hand at the given index
     * to the players palette
     */
    void playToPalette(int index);

    /**
     * Return the player number
     */
    int getPlayerNo();

    /**
     * Returns the players current hand
     */
    Deck* getHand();

    /**
     * Returns the players current palette
     */
    Deck* getPalette();

    /**
     * Reset a player to an empty hand and palette
     */
    void reset();

private:
    int playerNo;

    Deck* hand;
    Deck* palette;
};

#endif // PLAYER_H
