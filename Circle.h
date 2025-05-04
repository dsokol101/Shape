#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle : public Shape
{
private:
    double radius=1.0; // default radius

public:
    Circle() {}
    Circle(double r, string color);
    void set_radius(double r) { radius = r; }
    double get_radius() { return radius; }
    double area();
};
#endif