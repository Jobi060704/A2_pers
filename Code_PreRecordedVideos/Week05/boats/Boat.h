#ifndef BOAT_H
#define BOAT_H 

#include <string>

#include "Mast.h"
#include "Rudder.h"

class Boat {
public:
    Boat();
    Boat(std::string name);
    Boat(Boat& other);
    ~Boat();

    std::string getName();
    void setName(std::string name);

    Mast* getMast();
    Rudder* getRudder();

    // Transfer ownserhip of the mast object to THIS boat
    void setMast(Mast* mast);
    
private:
    std::string name;

    Mast* mast;
    Rudder* rudder;
};

#endif // BOAT_H
