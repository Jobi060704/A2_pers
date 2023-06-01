#include <iostream>
#include <string>

int factorial(int n);

int main(void) {

   // Implement factorial
   std::cout << factorial(5) << std::endl;

   return EXIT_SUCCESS;
}


int factorial(int n) {
   int retVal = 0;
   if (n == 0) {
      retVal = 1;
   } else if (n == 1) {
      retVal = 1;
   } else {
      // ASSUME THAT factorial(n-1) is CORRECT
      retVal = factorial(n-1) * n;
   }

   return retVal;
}
