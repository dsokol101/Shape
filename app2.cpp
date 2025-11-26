#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include <iostream>
using namespace std;
// we would like to try out the Rectangle class that
// uses inheritance
void printArea(Shape *s);
int main()
{
    // create and initialize an object on the stack
    Rectangle rect; // default constructor
    cout << " color of rect (default): " << rect.get_color() << endl;
    rect.set_color(2);
    cout << " color of rect (after set_color(2)): " << rect.get_color() << endl;
    rect.set_color("purple"); // will call my inherited set_color from Shape
    cout << " color of rect (after set_color(\"purple\")): " << rect.get_color() << endl;

    rect.set_values(3, 4);
    cout << "area: " << rect.area()  << endl;
    
    Shape *shapePtr = &rect; // upcasting, polymorphism
    Shape &shapeRef = rect; // upcasting, polymorphism
    // what functions can I call on shapePtr?
    cout << " area via shapePtr: " << shapePtr->area() << endl;
    cout << " area via shapeRef: " << shapeRef.area() << endl;
      
    // create and initialize an object on the heap (dynamic memory)
    Rectangle* rectPtr2 = new Rectangle(7, 8, "yellow");
    cout << "color: " << rectPtr2->get_color() << endl; // function in Shape class
    cout << "width: " << rectPtr2->get_width() << endl; // function in Rectangle class
    // typically, you would not do the following since it is dangerous to have 2 pointers
    // within a function pointing to the same object.
    // However, we are doing this to show that you are allowed to upcast, and typical
    // use of this is passing a parameter, as in the printArea function.
    shapePtr = rectPtr2; // upcasting
    // new Rectangle(); // upcasting
    cout << "color: " << shapePtr->get_color() << endl;
    cout << "area of rectangle object: "; // << shapePtr->area() << endl; 
    printArea(shapePtr);
    // calls the base class area function UNLESS it is virtual
    // in which case we will have "dynamic binding" and the child class
    // area function will be called
    // this is called "dynamic binding" or "late binding"
    
    delete rectPtr2;
     
    shapePtr = new Circle(5,"red");
    cout << "aread of circle object: ";
    // << shapePtr->area() << endl;
    printArea(shapePtr);
    delete shapePtr; // deleting the Circle object on the heap
    shapePtr = new Triangle(5,6,7,"blue");    
    cout << "area of triangle object: " <<  shapePtr->area() << endl;
    delete shapePtr; // deleting the Triangle object on the heap
    // Circle * circlePointer = new Shape(); downcasting is NOT allowed
    // I want a container that holds Shape objects (Circle, Rectangle, Triangle

    Shape* shapeArray[3]; // c-style array of Shape pointers
    shapeArray[0] = new Circle(5,"red");
    shapeArray[1] = new Rectangle(5,6,"blue");
    shapeArray[2] = new Triangle(5,6,7,"green");
    for (int i = 0; i < 3; i++)
    {
        cout << "area: " << shapeArray[i]->area() << endl; // virtual function
        // causes late binding
    }
    return 0;
}
/** showing polymorphism  */
void printArea(Shape *s) {
    cout << "Area: " << s->area() << endl;
}