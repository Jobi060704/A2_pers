#include <iostream>
#include <vector>

#include "MyString.h"

int main(void) {

   int x = 0;

   // y = 1
   int y = ++x;

   // z = 1
   // x = 2
   int z = x++;
   x++;


   MyString mstring("hello", 5);

   // Copy constructor - as we've done a lot in the course
   MyString m2(mstring);

   // Copy into an exsiting object - reset fields
   m2 = mstring;

   // default constructor + assignment <- don't do this with classes - is bad
   MyString m3 = mstring;

   // MyString m2 = mstring++;
   // mstring++;

   {
      // new scope!!
      // lambda function - if we let it, it can access variables is the enclosing scope

      std::vector<int> vec;
      for (int i = 0; i != 100; ++i) {
         vec.push_back(i);
      }
      // i == 100

      for (int i = 0; i != vec.size(); ++i) {
         std::cout << vec[i] << std::endl;
      }

      for(std::vector<int>::const_iterator it = vec.begin();
         it != vec.end();
         ++it) {
         std::cout << *it << std::endl;
      }
   }

   return EXIT_SUCCESS;
}

