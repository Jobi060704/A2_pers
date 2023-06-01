
#include <iostream>
#define LENGTH 5

void modifyArray(char* cstring);

int main (void) {

   char hello[] = "Hello World";

   std::cout << hello << std::endl;
   
   // Make second output just print "Hello"
   // ??
   //hello[5] = '\0';
   // hello[5] = 0;
   //*(hello+5) = '\0';

   modifyArray(hello);

   std::cout << hello << std::endl;

   int ints[LENGTH] = {};
   std::cout << &ints[0] << std::endl;
   std::cout << ints << std::endl;

   return EXIT_SUCCESS;
}

void modifyArray(char* cstring){
   cstring[5] = '\0';
}
