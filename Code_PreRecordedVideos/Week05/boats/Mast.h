#ifndef MAST_H
#define MAST_H 

#include "Sail.h"

class Mast {
public:
    Mast();
    Mast(Mast &other);
    ~Mast();
    
    int getLength();
    void setLength(int length);

    Sail* getSail();

private:
    int length;

    Sail* sail;
};

#endif // MAST_H
