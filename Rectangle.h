#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream> // for std::cout
#include "Shape.h" // include the base class header
/* How do we use inheritance in C++ ? 
 
Some questions:
1. Can the derived class access the private members of the base class?
NO. Same as in Java, you have access to the public and protected members

2. How do I call a public member function in the derived class?
simply call as if it is an instance function of the derived class

3. How do I initialize the things that I inherited from the base class?
idea: before you enter your own constructor, the base class constructor
should be called and everything that you inherited is initialized.

This is done with an explicit constructor call in the member initialization list
********************************************************************/
class Rectangle : public Shape
{
private:
  double width=0, height=0; 

public:
  Rectangle(); 
  Rectangle(double w, double h, string color);
  
  void set_width(double w) { width = w; }
  void set_height(double h) { height = h; }
  double get_width() { return width; }
  double get_height() { return height; }
  // not inline
  void set_values(double, double);
  using Shape::set_color; // using declaration to bring the base class set_color into scope
  void set_color(int c); // overloads the set_color function in the base class
  double area() override; // there will be no access to the parent's area function from outside the class
};
#endif