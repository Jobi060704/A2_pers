
#include <iostream>

void swap(int* a, int* b);

int main (void) {
   int i = 1;
   int j = -2;

   swap (&i, &j);

   return EXIT_SUCCESS;
}

void swap(int* a, int* b) {
    int* tmp = a;
    a = b;
    b = tmp;
}