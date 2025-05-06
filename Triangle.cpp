#include "Triangle.h"
#include <cmath> // for sqrt functionS
void Triangle::set_sides(double s1, double s2, double s3)
{
    side1 = s1;
    side2 = s2;
    side3 = s3;
} // setter for sides
double Triangle::area()
{
    // Using Heron's formula to calculate the area of the triangle
    double s = (side1 + side2 + side3) / 2;                   // semi-perimeter
    return sqrt(s * (s - side1) * (s - side2) * (s - side3)); // area calculation
} // method to calculate the area of the triangle