// Rectangle class implementation file (contains the full-fledged class definition)
// Rectangle2.cpp uses inheritance
#include "Rectangle.h"
#include <iostream>
// memberwise initialization
// before you enter the body of the constructor,
// the members are already initialized
Rectangle::Rectangle() : Shape("blue"), width(1.0), height(1.0) {}
   // color = "blue"; private field is inaccessible
   // set_color("red"); // public members can be called
    // as if they are your own.

// explicitly call your base class constructor by saying Shape(color)
Rectangle::Rectangle(double w, double h, string color) : Shape(color), width(w), height(h) {
    // this constructor initializes the base class
    // and the derived class members
}

// overriding area function
// we specifically want to block access to the base class area function
double Rectangle::area()
{
  return width * height;
}

void Rectangle::set_values(double x, double y)
{
  width = x;
  height = y;
}

void Rectangle::set_color(int c)
{
  // this function overloads the set_color function in the base class
  // it is not a good idea to overload a function in the derived class
  // that has the same name as a function in the base class
  // because it can be confusing.
  if (c == 1) {
    Shape::set_color("red");
  } else if (c == 2) {
    Shape::set_color("green");
  } else {
    Shape::set_color("blue");
  }
}
