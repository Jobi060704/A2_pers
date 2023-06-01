
#define EXIT_SUCCESS    0
#define LENGTH          100

#include <iostream>
#include <string>
#include <limits>

using std::string;
using std::cout;
using std::endl;

int sum(int* array, int length);
int max(int* array, int length);

int main(void) {

   int array[LENGTH] = {1};


   int aSum = sum(array, LENGTH);
   cout << "Sum = " << aSum << endl;

   int aMax = max(array, LENGTH);
   cout << "Max = " << aMax << endl;

   return EXIT_SUCCESS;
}

int sum(int* array, int length) {
   int sum = 0;
   int i = 0;

   while (i != LENGTH) {
      sum += array[i];

      ++i;
   }

   return sum;
}

// P: array[0,length)
int max(int* array, int length) {
   // P: array[0,length)
   int max = std::numeric_limits<int>::min();
   int i = 0;
   // i = 0
   // array[0,length)
   // max = maximum{array[0,0)}


   // i = 0
   // max = maximum{array[0,i)}
   while (i != length) {
      // max = maximum{array[0,i)}
      if (array[i] > max) {
         max = array[i];
      }
      // max = maximum{array[0,i]}

      ++i;
      // max = maximum{array[0,i)}
   }
   // i = length
   // max = maximum{array[0,length)}

   return max;
}
// max = maximum{array[0,length)}
// Q: max = maximum{array[0,length)}