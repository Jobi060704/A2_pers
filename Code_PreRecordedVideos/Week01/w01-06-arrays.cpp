
#include <iostream>

#define LENGTH          10
#define ROWS            10
#define COLS            5



void printArray(int array[], int length);

int main (void) {
   int intarray[LENGTH] = {1};
   intarray[0] = -1;
   intarray[1] = 3;

   // Need this so that the compiler doesn't do bound checking for us
   int i = 20;

   std::cout << intarray[i] << std::endl;

   printArray(intarray, LENGTH);

   return EXIT_SUCCESS;
}

void printArray(int array[], int length) {
   for (int i = 0; i < length; ++i) {
      std::cout << array[i] << std::endl;
   }
}
