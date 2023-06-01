
#include <iostream>

int main (void) {

   /* This is a C-style comment inside the main function */

   // This is a C++ Style comment inside the main function

   // The main function is the entry point in the code
   // By default, it must return an integer and takes no parameters
 
   // Types1
   int      i = 10;
   float    f = 2.2f;
   double   d = 3.2;
   char     c = 'a';
   bool     b = false;

   // All of the usual operators
   c = '$';
   b = true;
   i = 5 + 8;
   f = 2.30 - 1.4;
   d = 3.1 * 1.2;
   d = 7 / 2.0;
   i = 7 % 2;

   // Increment operators are very well defined
   i = 3;
   i++;
   ++i;
   i = ++i;
   i--;
   i = --i;

   // Same operator precedence order
   i = 1 + 2 * 3 / 4 + (8 * 9) * 2;

   // Self Assignment operators
   i += 10;
   i = i + 10;
   f -= 1;
   d *= 3;
   i /= 2;

   // If-statements are the Same
   if (b) {
      // do something
   } else if (!b) {
   } else {
   }

   // Comparison operators
   b = i == 10;
   b = i != 10;
   b = i < f;
   b = i <= f;
   b = i > f;
   b = i >= f;
   b = i == 10 && f < d;
   b = i == 10 || f < d;

   // Loops are the same
   while (i < 10) {
      ++i;
   }

   for (i = 3; i < 1; i++) {
   }

   // Can define variables in for loops
   for (int j = 3; j < 1; j++) {
   }

   // The return value of main, for now, should always be 0
   // More on this later in the course
   return EXIT_SUCCESS;
}

