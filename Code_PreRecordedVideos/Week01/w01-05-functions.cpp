
#include <iostream>

// Declare function first at the top
void foo();

int passing(int x);

int main (void) {

   int      i = 9;


   foo();
   retVal = passing(9);
   
   std::cout << "i: " << i << std::endl;


   return EXIT_SUCCESS;
}

// Define function later
void foo() {
}

int passing(int x) {
   ++x;
   return x;
}
