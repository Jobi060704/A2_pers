#include <iostream>

#define SCALE    2

using std::cout;
using std::cin;

double foo(int x, float y, char z);
void bar(int x, float y, char z);

int main (void) {
   int i;
   float f;
   char c;
   double d;

   cin >> i;
   cin >> f;
   cin >> c;
   i = i * SCALE;
   d = foo(i, f, c);

   cout << "foo:\t" << d << "+" << f << "*" << c << "=" << d << std::endl;

   bar(i, f, c);
   cout << "bar:\t" << d << "+" << f << "*" << c << "=" << d << std::endl;

   return EXIT_SUCCESS;
}

double foo(int x, float y, char z) {
   return x + y * z;
}

void bar(int x, float y, char z) {
   x = y;
}
