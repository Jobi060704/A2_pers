

#include <iostream>
#include <string>
#include <random>


using std::string;
using std::cout;
using std::endl;

int main(void) {

   int min = 1;
   int max = 10;

   std::random_device engine;
   // std::default_random_engine engine(10);
   std::uniform_int_distribution<int> uniform_dist(min, max);

   int value = -1;
   for (int i = 0; i != 10; ++i) {
      value = uniform_dist(engine);
      cout << "Randomly-chosen value: " << value << endl;
   }

   return EXIT_SUCCESS;
}
