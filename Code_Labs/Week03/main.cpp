#include <iostream>
#include "???"

#define EXIT_SUCCESS    0
#define LENGTH          10

int main (void) {
   Example* example = new Example(7.5);
   
   double dbl = 10;
   example->setValue(dbl);
   std::cout << example->getValue() << std::endl;

   return EXIT_SUCCESS;
}