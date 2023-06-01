
#include <iostream>

#define LENGTH          10

using std::cout;
using std::endl;

void changeArray1(int array[]);
void changeArray2(int* array);


int main (void) {

   int array[LENGTH] = {1};

   // Array addresses
   for (int i = 0; i != LENGTH; ++i) {
      cout << "array[" << i << "] at: " << &(array[i]) << endl;
   }

   // // What about array?
   // cout << array << endl;
   // cout << *array << endl;

   // // Arrays as pointer
   // int* ptr = array;
   // for (int i = 0; i != LENGTH; ++i) {
   //    cout << "ptr[" << i << "] at: " << &(ptr[i]) << " = " << ptr[i] << endl;
   // }

   // changeArray1(array);
   // cout << array[0] << endl;
   // changeArray2(array);
   // cout << array[0] << endl;

   return EXIT_SUCCESS;
}

void changeArray1(int array[]) {
   array[0] = 10;
}

void changeArray2(int* array) {
   array[0] = 20;
}
