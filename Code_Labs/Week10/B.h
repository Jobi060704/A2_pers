#include "A.h"

class B : public A {
public:
    B();
    virtual ~B();
    
    virtual int foo();
    virtual void bar();
    virtual void bar(double y);
};
