#include <iostream>
#include <cmath>
using namespace std;

class VectorOps {
public:
    double x, y;
    VectorOps(double x = 0, double y = 0) : x(x), y(y) {} // set up x and y coordinates 

    VectorOps operator+(const VectorOps& secondVec) const {
        return VectorOps(x + secondVec.x, y + secondVec.y);
    }

    VectorOps operator-(const VectorOps& secondVec) const {
        return VectorOps(x - secondVec.x, y - secondVec.y);
    }

    VectorOps operator*(double constant) const {
        return VectorOps(x * constant, y * constant);
    }

    friend VectorOps operator*(double constant, const VectorOps& secondVec) {
        return VectorOps(secondVec.x * constant, secondVec.y * constant);
    }

    VectorOps operator/(double constant) const {
        if (constant == 0) {
            throw invalid_argument("Division by 0.");
        }
        return VectorOps(x / constant, y / constant);
    }
    
    double magnitude() const {
        return sqrt((x * x) + (y * y));
    }

};

class rigidBody {
public: 
    VectorOps pos;
    VectorOps vel;
    double mass;
    double radius;

    rigidBody(VectorOps pos, VectorOps vel, double mass, double radius) : pos(pos), vel(vel), mass(mass), radius(radius) {}
};

