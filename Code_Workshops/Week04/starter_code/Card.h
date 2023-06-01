#ifndef CARD_H
#define CARD_H

#define RED    0
#define ORANGE 1
#define YELLOW 2
#define GREEN  3
#define BLUE   4
#define INDIGO 5
#define VIOLET 6

typedef int Colour;

class Card{
public:

   //constructor
   Card(Colour colour, int number);

    //deconstructor
    ~Card();

   Colour getColour();
   int getNumber();


private:
   Colour* colour;
   int* number;
};

#endif //CARD_H