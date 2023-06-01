#include <iostream>

#include <memory>

#define EXIT_SUCCESS    0

using std::cout;
using std::endl;

void foo(int x);

int main(void) {
   int y = 7;
   cout << y << endl;

   int x = 1;
   cout << x << endl;
   {
      int x = 2;
      cout << x << endl;
      foo(3);
   }
   cout << x << endl;

   x = 9;
   return EXIT_SUCCESS;
}

void foo(int x) {
   cout << x << endl;
}
