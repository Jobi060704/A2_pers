#include <iostream>
#include <limits>
#include <random>

#include "Stack.h"

int main(void) {

   int min = std::numeric_limits<int>::min();;
   int max = std::numeric_limits<int>::max();

   Stack* stack = new Stack();

   std::random_device engine;
   // std::default_random_engine engine(10);
   std::uniform_int_distribution<int> uniform_dist(min, max);
   int value = -1;
   for (int i = 0; i != 10; ++i) {
      value = uniform_dist(engine);
      stack->push(value);
   }

   // Pop off the stack
   while(stack->size() != 0) {
      value = stack->top();
      std::cout << "Top of the stack: " << value << std::endl;
      stack->pop();
   }

   return EXIT_SUCCESS;
}
