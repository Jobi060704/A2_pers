
#include <iostream>
#include <string>

#define LENGTH          10

int main (void) {

   std::string strclass = "this is a string \t-\t sort of";
   std::cout << "string: " << strclass << std::endl;
   strclass = strclass + " - COSC1076";
   std::cout << "string: " << strclass << std::endl;

   return EXIT_SUCCESS;
}
