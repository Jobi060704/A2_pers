#include <iostream>

int main (void) {

   int a = 7;
   int* ptr = &a;

   std::cout << a << std::endl;
   std::cout << ptr << std::endl;
   std::cout << *ptr << std::endl;

   int b = 10;
   ptr = &b;
   *ptr = 12;
   std::cout << b << std::endl;
   std::cout << *ptr << std::endl;
   
   b = a;
   std::cout << *ptr << std::endl;
   
   int* ptr2 = &a;
   int *ptr3 = &b;
   a = -3;
   b = 10;
   *ptr = 2;
   *ptr3 = 6;
   std::cout << a << std::endl;
   std::cout << b << std::endl;
   std::cout << *ptr << std::endl;
   std::cout << *ptr2 << std::endl;
   std::cout << *ptr3 << std::endl;

   int** pptr = &ptr;
   **pptr = 20;
   std::cout << a << std::endl;
   std::cout << b << std::endl;
   std::cout << *ptr << std::endl;
   std::cout << *ptr2 << std::endl;
   std::cout << *ptr3 << std::endl;

    // Challenge
   *&**&pptr = &a;
   **pptr = -1;
   std::cout << a << std::endl;
   std::cout << b << std::endl;

   return EXIT_SUCCESS;
}