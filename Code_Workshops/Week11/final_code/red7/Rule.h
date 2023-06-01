#ifndef RULE_H
#define RULE_H 

#include "Card.h"

class Rule {
public:
   Rule();
   Rule(Rule& other);
   ~Rule();

   // Get the current rule
   Colour getRule();

   // Set the rule
   // Transfer ownership of the card object to the RULE class
   void setRule(Card* card);
    
private:
   Card* rule;
};

#endif // RULE_H
