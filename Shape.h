#ifndef SHAPE_H
#define SHAPE_H
#include <iostream> // for std::cout
#include <string>
using namespace std;
// this class is being used as a base class (or Parent class)
class Shape
{
   private:
       string color="white"; 
   public:
       Shape() {} // default constructor
       Shape(string c) : color(c) {} // constructor with color
       string get_color() { return color; } // getter for color
       void set_color(string c) { color = c; } // setter for color
       virtual double area() { return 0; } 
};
#endif