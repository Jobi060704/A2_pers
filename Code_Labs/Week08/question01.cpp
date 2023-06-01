#include <iostream>
#include <memory>

void foo(std::shared_ptr<int> arg);

int main(void) {
   std::shared_ptr<int> x = std::make_shared<int>(0);
   std::shared_ptr<int> y = std::make_shared<int>(-10);
   std::cout << "x: " << *x << ", y: " << *y << std::endl;

   foo(x);
   std::cout << "x: " << *x << ", y: " << *y << std::endl;

   y = x;
   std::cout << "x: " << *x << ", y: " << *y << std::endl;

   {
      int x = 2;
      std::shared_ptr<int> y = std::make_shared<int>(7);
      std::cout << "x: " << x << ", y: " << *y << std::endl;
   }

   std::cout << "x: " << *x << ", y: " << *y << std::endl;

   return EXIT_SUCCESS;
}

void foo(std::shared_ptr<int> arg) {
   *arg += 1;
}