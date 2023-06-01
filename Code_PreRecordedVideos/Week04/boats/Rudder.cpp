
#include "Rudder.h"

Rudder::Rudder() :
    steer(STRAIGHT)
{}

Rudder::Rudder(Rudder& other) :
    steer(other.steer)
{}

Rudder::~Rudder() {
    
}

Steer Rudder::getSteer() {
    return steer;
}

void Rudder::setSteer(Steer steer) {
    this->steer = steer;
}
