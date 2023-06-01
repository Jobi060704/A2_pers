#include <iostream>
#include <string>

double add(int x, double y);

int main (void) {
   int i = 7.5;
   double d = 10.5;
   std::string s = "d + i = ";

   double sum = add(i, d);
   std::cout << s << sum << std::endl;

   return EXIT_SUCCESS;
}

double add(int x, double y) {
   return x + y;
}
