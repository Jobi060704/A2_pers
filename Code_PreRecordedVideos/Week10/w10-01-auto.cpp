
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main(void) {
   int a = -8;
   float b = 6.8;
   double c = 10.0;
   int* d = &a;
   double* e = &c;
   char f[20] = "hello world";
   std::string g = std::string("hello world");

     
   cout << a << endl;
   cout << b << endl;
   cout << c << endl;
   cout << d << endl;
   cout << e << endl;
   cout << f << endl;
   cout << g << endl;

   // cout << f + "!" << endl;
   cout << g + "!" << endl;

   return EXIT_SUCCESS;
}
