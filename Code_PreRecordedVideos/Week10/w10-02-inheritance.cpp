#include <iostream>

class A {
public:
   A(int x) : x(x) {};
   ~A() {};

   int getX() { return x; };

private:
   int x;
};

int main(void) {

   A a(10);
   std::cout << a.getX() << std::endl;

   return EXIT_SUCCESS;
}
