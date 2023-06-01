#include "B.h"

int main (void) {
    A* a1 = new A();
    B* b1 = new B();
    
    a1->foo();
    a1->foo(7);
    
    b1->foo();
    b1->foo(10);
    b1->bar();
    b1->bar(-10);
    
    A* a2 = b1;
    a2->foo();
    a2->foo(-7);
    
    delete a1;
    delete b1;
    delete a2;

    return EXIT_SUCCESS;
}
