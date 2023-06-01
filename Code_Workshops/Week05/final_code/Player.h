#ifndef PLAYER_H
#define PLAYER_H 

#define MAX_HAND_SIZE        5
#define MAX_PALETTE_SIZE     MAX_HAND_SIZE

// #include "Card.h"

class Card;

//store information together
// encapsulating

//As a homework implement destructor and the constructor
class Player {
public:
    Card* hand[MAX_HAND_SIZE];
    int nCardsInHand;

private:
};

#endif // PLAYER_H
