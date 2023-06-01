#include <iostream>
#include <string>

#define RED    0
#define ORANGE 1
#define YELLOW 2
#define GREEN  3
#define BLUE   4
#define INDIGO 5
#define VIOLET 6

class Card {
public:
   // TODO: Constructor

   // 4 methods to implement
   int getNumber();
   int getColourAsInt();
   std::string getColourAsString();
   std::string getRule();

private:
   // TODO: Fields to store information

};

int main(void) {
   // TODO: Implement making a card.
   //

   return EXIT_SUCCESS;
}