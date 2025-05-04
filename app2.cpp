#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include <iostream>
using namespace std;
// 4/29/2025
// we would like to try out the Rectangle class that
// uses inheritance

int main()
{
    // create and initialize an object on the stack
    Rectangle rect; // default constructor
    cout << " color of rect (default): " << rect.get_color() << endl;
    rect.set_values(3, 4);
    cout << "area: " << rect.area()  << endl;
    string color = "red";
    rect.set_color(color); // calls the parent's class set_color
    rect.set_color(2); // calls the overloaded funtion in the derived class 
    
    Rectangle rect6(5, 6, "orange"); 
    
    cout << "rect6, width: " << rect6.get_width() << " length: " << rect6.get_height() << endl;
    cout <<  " color: " << rect6.get_color() << endl;  
    
    Rectangle* rectPtr = &rect6;
    cout << "color: " << rectPtr->get_color() << endl;
    cout << "width: " << rectPtr->get_width() << endl;
    cout << "height: " << rectPtr->get_height() << endl;

    Rectangle & rectRef = rect6; // reference to an object (alias)
    cout << "color: " << rectRef.get_color() << endl;
    cout << "width: " << rectRef.get_width() << endl;
    cout << "height: " << rectRef.get_height() << endl;
    
    // create and initialize an object on the heap
    Rectangle* rectPtr2 = new Rectangle(7, 8, "blue");
    cout << "color: " << rectPtr2->get_color() << endl;
    cout << "width: " << rectPtr2->get_width() << endl; 

    Shape* shapePtr = new Rectangle(); // upcasting
    cout << "color: " << shapePtr->get_color() << endl;
    cout << "area: " << shapePtr->area() << endl; // calls the base class area function
    // delete the object on the heap    
    delete rectPtr2;
    delete shapePtr;
    shapePtr = new Circle(5,"red");
    cout << shapePtr->area() << endl;
    delete shapePtr;
   // shapePtr = new Triangle(5,6,"blue");    
   //  cout << shapePtr->area() << endl;
   // delete shapePtr;
    return 0;
}
