#include <iostream>
#include <cmath>
#include "classes.h"
using namespace std;

void appliedForce(rigidBody& body, const VectorOps FORCE, double timeInterval) {
    VectorOps accel = FORCE / body.mass;
    body.vel = body.vel + accel * timeInterval;
}

void kinematics(rigidBody& body, const VectorOps accel, double timeInterval) {
    body.vel = body.vel + accel * timeInterval;
    body.pos = body.pos + (body.vel * timeInterval) + (0.5 * accel * timeInterval * timeInterval);
}

int main() {
    
    return 0;
}
