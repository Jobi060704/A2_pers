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

void printColourAsString(int colour);
void printCard(int number, int colour);
void printCards(int* number, int* colour, int numReads);
// void readOneCard(int* ptrNumber, int* ptrColour);
void readOneCard(int& ptrNumber, int& ptrColour);

int main(void) {
   int number[NUMBER_CARDS_TO_READ]= {};
   int colour[NUMBER_CARDS_TO_READ] = {};
   

   // Read until EOF
   int numReads = 0;
   while(!std::cin.eof() && numReads < NUMBER_CARDS_TO_READ) {
   //for(int i = 0; i < NUMBER_CARDS_TO_READ; ++i){
      //printCard(number, colour);
      
      // Read the card value
      // std::cin >> colour[numReads];
      // std::cin >> number[numReads];

      //int tmpColour = RED;
      //int tmpNumber = 0;

      readOneCard(colour[numReads], number[numReads]);

      //colour[numReads] = tmpColour;
      //number[numReads] = tmpNumber;
      
      // Print out "natural version" of the card
      if(!std::cin.eof()){
       // printCard(number[i], colour[i]);
       ++numReads;
      }
   }

   // print
   for(int i=0; i < numReads; ++i){
      printCard(number[i], colour[i]);
   }

   return EXIT_SUCCESS;
}

// void readOneCard(int* ptrNumber, int* ptrColour){
//    std::cin >> *ptrColour;
//    std::cin >> *ptrNumber;
// }

void readOneCard(int& ptrNumber, int& ptrColour){
   std::cin >> ptrColour;
   std::cin >> ptrNumber;
}

void printCards(int* number, int* colour, int numReads){
   for(int i=0; i < numReads && numReads < NUMBER_CARDS_TO_READ; ++i){
      printCard(number[i], colour[i]);
   }
}

void printCard(int number, int colour){

   std::cout << "Red7 Card : ";
      printColourAsString(colour);
      std::cout << " - " << number << std::endl;
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
