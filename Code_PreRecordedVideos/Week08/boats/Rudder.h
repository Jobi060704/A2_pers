#ifndef RUDDER_H
#define RUDDER_H 

enum Steer {
    LEFT,
    RIGHT,
    STRAIGHT
};

class Rudder {
public:
    Rudder();
    Rudder(Rudder& other);
    ~Rudder();
    
    Steer getSteer();
    void setSteer(Steer steer);

private:
    Steer steer; 
};

#endif // RUDDER_H
