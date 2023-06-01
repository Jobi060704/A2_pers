#ifndef BOAT_H
#define BOAT_H 

#include <string>

class Boat {
public:
    Boat(std::string name);
    ~Boat();

    std::string getName();
    void setName(std::string name);
    
private:
    std::string name;

};

#endif // BOAT_H
