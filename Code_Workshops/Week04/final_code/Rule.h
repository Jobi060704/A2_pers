#ifndef RULE_H
#define RULE_H

#include "Card.h"

class Rule{
public:
    // Constructor
    Rule();

    //de constructor
    ~Rule();

    //set and read rule
    void setRule(Card* newCard);
    Colour getRule();

private:
    Card* rule;
};

#endif //RULE_H
