
#include <iostream>
#include <string>

void compare(int& i1, int& i2) {
   if (i1 == i2) {
      std::cout << "i1 == i2" << std::endl;
   } else {
      std::cout << "i1 != i2" << std::endl;
   }
};

int main(void) {

   int x = 1;
   int y = 2;

   

   compare(x, y);

   return EXIT_SUCCESS;
}
