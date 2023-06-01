
#include <iostream>
#include <limits>

#define FALSE        0
#define TRUE         (!FALSE)

int main (void) {

   if (0) {
      std::cout << "this is true" << std::endl;
   } else if (1) {
      std::cout << "this is true" << std::endl;
   } else if (-1) {
      std::cout << "this is true" << std::endl;
   } else if (10) {
      std::cout << "this is true" << std::endl;
   }

   if (TRUE) {
      std::cout << "true #define" << std::endl;
   }
   if (FALSE) {
   } else {
      std::cout << "false #define" << std::endl;
   }

   // The bool type
   bool b = false;
   std::cout << b << std::endl;
   std::cout << "bools: " << true << " " << false
             << " are actually integers" << std::endl;



   // Characters are integers
   // I have to use an old form of printing here
   //    to show this. We will not use printf in the course.
   char c = 'a';
   printf("char: %c (%d)\n", c, c);
   ++c;
   printf("char: %c (%d)\n", c, c);


   // Strings
   std::string s = "this is a string \t-\t sort of";
   std::cout << "string: " << s << std::endl;
   s = s + "hello world";
   std::cout << "string: " << s << std::endl;


   // Casting (implicit and explicit)
   int      i = 10;
   // float    f = 2.2f;
   double   d = 3.2;
   // char     c = 'a';
   // bool     b = false;

   std::cout << "i: " << i << std::endl;
   std::cout << "d: " << d << std::endl;

   i = d;
   std::cout << "i: " << i << std::endl;
   std::cout << "d: " << d << std::endl;

   d = 4 / 3;
   std::cout << "i: " << i << std::endl;
   std::cout << "d: " << d << std::endl;

   d = 4 / 3.0;
   std::cout << "i: " << i << std::endl;
   std::cout << "d: " << d << std::endl;

   d = 4 / (double) 3;
   std::cout << "i: " << i << std::endl;
   std::cout << "d: " << d << std::endl;

   i = (unsigned int) - 1;
   std::cout << "i: " << i << std::endl;
   std::cout << "d: " << d << std::endl;


   // Extended Types
   std::cout << "max int: " << std::numeric_limits<int>::max() << std::endl;
   std::cout << "min int: " << std::numeric_limits<int>::min() << std::endl;

   std::cout << "max unsigned int: " << std::numeric_limits<unsigned int>::max() << std::endl;
   std::cout << "min unsigned int: " << std::numeric_limits<unsigned int>::min() << std::endl;

   std::cout << "max long: " << std::numeric_limits<long>::max() << std::endl;
   std::cout << "min long: " << std::numeric_limits<long>::min() << std::endl;

   std::cout << "max long int: " << std::numeric_limits<long int>::max() << std::endl;
   std::cout << "min long int: " << std::numeric_limits<long int>::min() << std::endl;

   std::cout << "max short: " << std::numeric_limits<short>::max() << std::endl;
   std::cout << "min short: " << std::numeric_limits<short>::min() << std::endl;

   std::cout << "max short int: " << std::numeric_limits<short int>::max() << std::endl;
   std::cout << "min short int: " << std::numeric_limits<short int>::min() << std::endl;

   std::cout << "max float: " << std::numeric_limits<float>::max() << std::endl;
   std::cout << "min float: " << std::numeric_limits<float>::min() << std::endl;

   std::cout << "max double: " << std::numeric_limits<double>::max() << std::endl;
   std::cout << "min double: " << std::numeric_limits<double>::min() << std::endl;

   std::cout << "max long double: " << std::numeric_limits<long double>::max() << std::endl;
   std::cout << "min long double: " << std::numeric_limits<long double>::min() << std::endl;

   std::cout << "max char: " << std::numeric_limits<char>::max() << std::endl;
   std::cout << "min char: " << std::numeric_limits<char>::min() << std::endl;

   int c1 = std::numeric_limits<char>::max();
   int c2 = std::numeric_limits<char>::min();
   std::cout << "max char: " << c1 << std::endl;
   std::cout << "min char: " << c2 << std::endl;

   return EXIT_SUCCESS;
}
