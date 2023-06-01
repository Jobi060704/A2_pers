#ifndef SAIL_H
#define SAIL_H 

#include <string>

class Sail {
public:
    Sail();
    Sail(Sail &other);
    ~Sail();

    std::string getColour();
    void setColour(std::string colour);
    
private:
    std::string colour;
};

#endif // SAIL_H
