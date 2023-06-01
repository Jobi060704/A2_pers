
#ifndef A_H
#define A_H 

class A {
public:
   A();
   A(A &other);
   ~A();
    
private:
   B* b;
};

#endif // A_H
