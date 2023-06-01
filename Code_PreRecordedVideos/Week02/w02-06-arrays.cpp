
#include <cstdio>
#include <iostream>

#define LENGTH          10
#define ROWS            10
#define COLS            5

void printArray(int array[], int length);

int main (void) {

   int a[LENGTH] = {1};
   printArray(a, LENGTH);

   int b[LENGTH] = {1,2,3,4};
   printArray(b, LENGTH);

   
   int twoD[ROWS][COLS];
   int counter = 100;
   for (int row = 0; row < ROWS; ++row) {
      for (int column = 0; column < COLS; ++column) {
         twoD[row][column] = counter;
         ++counter;
      }
   }
   
   // Print
   for (int row = 0; row < ROWS; ++row) {
      for (int column = 0; column < COLS; ++column) {
         std::cout << twoD[row][column] << " ";
      }
      std::cout << std::endl;
   }
   

   return EXIT_SUCCESS;
}

void printArray(int array[], int length) {
   for (int i = 0; i < length; ++i) {
      std::cout << "array[" << i << "] = " << array[i] << std::endl;
   }
   std::cout << std::endl;
}
