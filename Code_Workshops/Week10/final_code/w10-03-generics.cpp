#include <iostream>

template<typename T>
T multiply(T x, T y){
  return x*y; 
}

class Temp{
public:
   int x;
};

int main(void) {

   int i1 = 3;
   int i2 = 2;
   std::cout << multiply<int>(i1, i2) << std::endl;

   double d1 = 3;
   double d2 = 2;
   std::cout << multiply<double>(d1, d2) << std::endl;

   char c1 = 'a';
   char c2 = 'b';
   std::cout << multiply<char>(c1, c2) << std::endl;

   Temp t1;
   Temp t2;
   std::cout << multiply<Temp>(t1, t2) << std::endl;



   return EXIT_SUCCESS;
}
