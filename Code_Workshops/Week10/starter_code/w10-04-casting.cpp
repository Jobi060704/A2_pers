
#include <iostream>
#include <string>

void foo(int x);
void foo(double x);

int main(void) {

   int a = -8;
   float b = 6.8;

   float f = 1.9;

   auto x = 1;
   std::cout << x / 2 << std::endl;

   foo(7);
   foo(x);
   foo(b);
   foo(1.0f);
   foo(f);
   foo('a');

   return EXIT_SUCCESS;
}


void foo(int x) {
   std::cout << "Int foo" << std::endl;
}

void foo(double x) {
   std::cout << "Double foo" << std::endl;
}

