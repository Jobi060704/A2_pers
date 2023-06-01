
#include "Rule.h"

Rule::Rule() {
   rule = new Card(RED, 7);
}

Rule::Rule(Rule& other)
{
   rule = new Card(*other.rule);
}

Rule::~Rule() {
   delete rule;
}

// Get the current rule
Colour Rule::getRule() {
   return rule->getColour();
}

// Set the rule
void Rule::setRule(Card* newRule) {
   delete rule;
   rule = newRule;
}
