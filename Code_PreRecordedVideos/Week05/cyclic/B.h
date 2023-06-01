#ifndef B_H
#define B_H 

class B {
public:
   B();
   B(B &other);
   ~B();
    
private:
   A* a;
};

#endif // B_H
