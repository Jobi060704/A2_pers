
#include <iostream>

void swap(int* y, int* z);

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

   // Swap
   int i = 10;
   int j = 42;
   swap(&i, &j);
   std::cout << std::endl;
   std::cout << "i: " << i << std::endl;
   std::cout << "j: " << j << std::endl;


   return EXIT_SUCCESS;
}

void swap(int* y, int* z) {
   int tmp = *y;
   *y = *z;
   *z = tmp;
}
