#include <iostream>
#include <string>

// Assume input is:
// 5 3.4

void swap(double x, double y);

int main (void) {
   int i = 0;
   int j = 0;

   std::cin >> i;
   std::cin >> j;
   swap(i, j);
   std::cout << i << " " << j << std::endl;

   return EXIT_SUCCESS;
}

void swap(double x, double y) {
   int tmp = x;
   x = y;
   y = tmp;
}