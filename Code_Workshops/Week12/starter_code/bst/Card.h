
#ifndef CARD_H
#define CARD_H

#include <iostream>

enum Colour {
   RED,
   ORANGE,
   YELLOW,
   GREEN,
   BLUE,
   INDIGO,
   VIOLET
};

class Card {
public:
   Card(Colour colour, int number);
   Card(const Card& other);
   ~Card();

   Colour getColour();
   int getNumber();

   bool operator<(const Card& other) const;
   bool operator==(const Card& other) const;

private:
   Colour colour;
   int number;
};

std::ostream& operator<<(std::ostream& os, Card& card);


#endif // CARD_H
