#ifndef CARD_H
#define CARD_H

#define RED    0
#define ORANGE 1
#define YELLOW 2
#define GREEN  3
#define BLUE   4
#define INDIGO 5
#define VIOLET 6

class Card{
public:

   //constructor
   Card(int _colour, int _number);

    //deconstructor
    ~Card();

   int getColour();
   int getNumber();


private:
   int* colour;
   int* number;
};

#endif //CARD_H