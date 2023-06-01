
#ifndef CARD_H
#define CARD_H

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
   Card(Card& other);
   ~Card();

   Colour getColour();
   int getNumber();

private:
   Colour colour;
   int number;
};

#endif // CARD_H
