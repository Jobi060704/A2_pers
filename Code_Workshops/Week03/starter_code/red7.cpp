#include <iostream>
#include <string>

#define RED    0
#define ORANGE 1
#define YELLOW 2
#define GREEN  3
#define BLUE   4
#define INDIGO 5
#define VIOLET 6

#define NUMBER_CARDS_TO_READ 5

void printCard(int colour, int number);
void printColourAsString(int colour);
void printRule(int colour);

void readOneCard(int* colour, int* number);

int main(void) {
   // TODO: Convert to use a Class
   int colour = 0;
   int number = 0;
   
   // Read a set number of cards from the user or until EOF
   int numRead = 0;
   while(!std::cin.eof() && numRead < NUMBER_CARDS_TO_READ) {
      readOneCard(&colour, &number);
      
      if (!std::cin.eof()) {
         // Print the card read
         printCard(colour, number);

         // Increment cards read
         ++numRead;
      }
   }

   // When we had array's before - print out all the cards
   // for (int i = 0; i < numRead && i < NUMBER_CARDS_TO_READ; ++i) {
   //    printCard(colour[i], number[i]);
   // }

   return EXIT_SUCCESS;
}

void readOneCard(int* colour, int* number) {
   std::cin >> *colour;
   std::cin >> *number;
}

void printCard(int colour, int number) {
   std::cout << "Card: ";
   printColourAsString(colour);
   std::cout << " " << number << std::endl;
   printRule(colour);
   std::cout << std::endl;
}

void printColourAsString(int colour) {
   // Define some colours as string
   char red[] = "Red";
   char orange[] = "Orange";
   char yellow[] = "Yellow";
   char green[] = "Green";
   char blue[] = "Blue";
   char indigo[] = "Indigo";
   char violet[] = "Violet";
   char unknown[] = "UNKNOWN";

   if (colour == RED) {
      std::cout << red;
   } else if (colour == ORANGE) {
      std::cout << orange;
   } else if (colour == YELLOW) {
      std::cout << yellow;
   } else if (colour == GREEN) {
      std::cout << green;
   } else if (colour == BLUE) {
      std::cout << blue;
   } else if (colour == INDIGO) {
      std::cout << indigo;
   } else if (colour == VIOLET) {
      std::cout << violet;
   } else {
      std::cout << unknown;
   }
}

void printRule(int colour) {
   std::cout << "      ";
   if (colour == RED) {
      std::cout << "Highest Card";
   } else if (colour == ORANGE) {
      std::cout << "Most of one Number";
   } else if (colour == YELLOW) {
      std::cout << "Most of one Colour";
   } else if (colour == GREEN) {
      std::cout << "Most Even Cards";
   } else if (colour == BLUE) {
      std::cout << "Most different Colours";
   } else if (colour == INDIGO) {
      std::cout << "Most Cards in a Row";
   } else if (colour == VIOLET) {
      std::cout << "Most Cards below 4";
   } else {
      std::cout << "???";
   }

   return;
}
