#include <iostream>
#include <string>

#define INPUT   "Input please: "

// Assume input is:
// 5 c 3.4

int main (void) {
   int i;
   char c;
   double d;
   std::string s = INPUT;

   std::cout << s << std::endl;
   std::cin >> i;
   std::cin >> c;
   std::cin >> d;
   if (i < 0) {
      std::cout << c << std::endl;
   } else {
      std::cout << d << std::endl;
   }

   return EXIT_SUCCESS;
}