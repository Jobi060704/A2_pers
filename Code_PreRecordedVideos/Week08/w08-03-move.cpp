#include <iostream>
#include <string>
#include <utility>
#include <vector>

#include "boats/Sail.h"

std::vector<Sail> createSails();

int main(void) {

   std::vector<Sail> sails = createSails();
   for (int i = 0; i != sails.size(); ++i) {
      std::cout << sails[i].getColour() << std::endl;
   }

   return EXIT_SUCCESS;
}

std::vector<Sail> createSails() {
   std::vector<Sail> sails;
   for (int i = 0; i != 100; ++i) {
      Sail sail;
      sails.push_back(sail);
   }
   return sails;
}
