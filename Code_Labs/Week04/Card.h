
#ifndef CARD_H
#define CARD_H

#include <string>

#define RED    0
#define ORANGE 1
#define YELLOW 2
#define GREEN  3
#define BLUE   4
#define INDIGO 5
#define VIOLET 6

typedef int Colour;

class Card {
public:
   Card();
   Card(Colour colour, int number);
   Card(Card& other);
   ~Card();

   Colour getColour();
   int getNumber();
   std::string getRule();

   std::string colourAsString();

private:
   Colour   colour;
   int      number;
};


#endif // CARD_H
