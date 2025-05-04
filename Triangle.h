#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
#include <string>
#include "Shape.h" // include the base class header
using namespace std;

// Triangle class definition
// This class is derived from the Shape class
// It inherits the color attribute and the set_color() method from Shape
class Triangle : public Shape
{
private:
    double side1 = 0, side2 = 0, side3 = 0; // sides of the triangle

public:
    Triangle() {};
    Triangle(double s1, double s2, double s3, string color) : Shape(color), side1(s1), side2(s2), side3(s3) {} // constructor with sides and color

    void set_sides(double s1, double s2, double s3);                               // setter for sides
    double get_side1() { return side1; } // getter for side1
    double get_side2() { return side2; } // getter for side2
    double get_side3() { return side3; } // getter for side3

    double area(); // method to calculate the area of the triangle
};
#endif // TRIANGLE_H
