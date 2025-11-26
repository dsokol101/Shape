#ifndef POLYGON_H
#define POLYGON_H
#include <iostream> // for std::cout
#include <string>
using namespace std;
// this class is being used as a base class (or Parent class)
class Polygon
{
   private:
       int num_sides; 
   public:
       Polygon() { num_sides = 0; } 
       Polygon(int n) { num_sides = n; } 
       int getNumSides() const { return num_sides; } 
       virtual double area() { return 0; } 
};
#endif