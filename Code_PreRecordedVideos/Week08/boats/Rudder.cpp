
#include "Rudder.h"

#include <iostream>

Rudder::Rudder() :
    steer(STRAIGHT)
{
    std::cout << "Rudder()" << std::endl;
}

Rudder::Rudder(Rudder& other) :
    steer(other.steer)
{
    std::cout << "Rudder(Rudder&)" << std::endl;
}

Rudder::~Rudder() {
    std::cout << "~Rudder()" << std::endl;
}

Steer Rudder::getSteer() {
    return steer;
}

void Rudder::setSteer(Steer steer) {
    this->steer = steer;
}
