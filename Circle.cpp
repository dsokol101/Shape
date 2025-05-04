#include "Circle.h"
using namespace std;

Circle::Circle(double r, string color) : Shape(color), radius(r) {}
// this constructor initializes the base class
// and the derived class members
double Circle::area()
{
    cout << "in Circle::area() " << endl;
    cout << " my parents area() " << Shape::area() << endl;
    cout << " my area() ";
    return 3.14 * radius * radius;
}
