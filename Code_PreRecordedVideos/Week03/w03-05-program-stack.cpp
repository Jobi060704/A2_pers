
#include <iostream>

#define LENGTH          5

using std::cout;
using std::endl;

int foo(int x);

int main (void) {
   // This code example here is combined from what is
   // Run on the PythonTutor (C++Tutor) website.
   // It is put here for your reference
   int a = 7;
   int b = 8;
   int c = 9;
   int d = 10;
   int array[LENGTH] = {11, 12, 13, 14, 15};

   int* ptr = &a;
   int *ptr2 = &b;

   cout << "address a: " << &a << endl;
   cout << "address b: " << &b << endl;
   cout << "address c: " << &c << endl;
   cout << "address d: " << &d << endl;
   for(int i = 0; i != LENGTH; ++i) {
     // Also gives a scoping example on i!
     cout << "address array[" << i << "]: " << &array[i] << endl;
   }
   cout << "address ptr: " << &ptr << endl;
   cout << "address ptr2: " << &ptr2 << endl;

    // Function call
   a = foo(b);

   // Create some memory on the heap
   // int* heap = new int(10);
   // std::cout << "heap: " << heap << std::endl;
   // std::cout << "*heap: " << *heap << std::endl;

   // delete heap;
   // // heap = nullptr;
   // std::cout << "heap: " << heap << std::endl;
   // std::cout << "*heap: " << *heap << std::endl;

   // int * onHeap = new int[LENGTH];
   // for (int i = 0; i < LENGTH; ++i) {
   //    onHeap[i] = 0;
   // }

   return EXIT_SUCCESS;
}

int foo(int x) {
   int y = 3;
   return x + y;
}

// int foo(int x) {
//     int array[LENGTH] = {11, 12, 13, 14, 15};
//     for(int i = 0; i != LENGTH; ++i) {
//       cout << "address array[" << i << "]: " << &array[i] << endl;
//     }
//     return 2;
// }
