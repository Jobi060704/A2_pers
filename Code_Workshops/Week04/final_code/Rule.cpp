#include "Rule.h"

Rule::Rule(){
    rule = new Card(RED, 7);
}


Rule::~Rule(){
    delete rule;
}

//set and read rule
void Rule::setRule(Card* newCard){
    delete rule;
    rule = newCard;
}

Colour Rule::getRule(){
    return rule->getColour();
}