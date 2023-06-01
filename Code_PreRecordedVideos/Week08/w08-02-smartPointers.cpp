
#include <iostream>
#include <string>
#include <memory>

int main(void) {
   std::unique_ptr<int> intPtr = std::make_unique<int>(10);

   std::cout << intPtr << std::endl;
   std::cout << *intPtr << std::endl;


   return EXIT_SUCCESS;
}
