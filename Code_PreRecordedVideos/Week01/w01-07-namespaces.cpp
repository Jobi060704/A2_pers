
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

namespace test {
   void foo() {
      cout << "test::foo" << std::endl;
   }

   namespace more {
      void foo() {
         cout << "test::more::foo" << std::endl;
      }
   }
}

void foo() {
   cout << "foo" << std::endl;
}


int globalVariable = 1;

void globalFn() {
   globalVariable = 7;
}


int main (void) {

   // Strings
   string s = "this is a string";
   cout << "string: " << s << endl;

   foo();
   test::foo();
   test::more::foo();
   

   return EXIT_SUCCESS;
}
