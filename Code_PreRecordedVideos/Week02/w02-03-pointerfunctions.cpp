
#include <iostream>

int increment(int x);

int main (void) {

   int a = 1;
   int b = 2;
   int c = 3;

   std::cout << &a << " " << a << std::endl;
   std::cout << &b << " " << b <<  std::endl;
   std::cout << &c << " " << c <<  std::endl;

   int* ptr_a = &a;
   int* ptr_b = &b;
   int* ptr_c = &c;

   std::cout << std::endl;
   std::cout << *ptr_a << std::endl;
   std::cout << *ptr_b << std::endl;
   std::cout << *ptr_c << std::endl;


   // Call the increment function
   c = increment(c);
   std::cout << std::endl;
   std::cout << *ptr_c << std::endl;


   return EXIT_SUCCESS;
}

int increment(int x) {
   x = x + 1;
   return x;
}
