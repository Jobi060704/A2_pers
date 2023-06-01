
#include <iostream>
#include <string>
#include <vector>

int main(void) {
   std::vector<int> vec;

   for (int i = 0; i != 10; ++i) {
      vec.push_back(i);
   }

   for (int& value : vec) {
      std::cout << value << std::endl;
   }

   return EXIT_SUCCESS;
}
