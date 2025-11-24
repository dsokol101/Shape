#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include <iostream>
using namespace std;
// we would like to try out the Rectangle class that
// uses inheritance

int main()
{
    // create and initialize an object on the stack
    Rectangle rect; // default constructor
    cout << " color of rect (default): " << rect.get_color() << endl;
    /** 
    rect.set_values(3, 4);
    cout << "area: " << rect.area()  << endl;
    string color = "red";
    rect.set_color(color); // calls the parent's class set_color
    cout << " the first time (red): " << rect.get_color() << endl;
    rect.set_color(2); // calls the overloaded funtion in the derived class 
    cout << " the second time (2): " << rect.get_color() << endl;
    
    Rectangle rect6(5, 6, "orange"); 
    
    cout << "rect6, width: " << rect6.get_width() << " length: " << rect6.get_height() << endl;
    cout <<  " color: " << rect6.get_color() << endl;  
    cout << "area: " << rect6.area() << endl; // calls area() in the derived class
    
    Rectangle* rectPtr = &rect6;
    cout << "color: " << rectPtr->get_color() << endl;
    cout << "width: " << rectPtr->get_width() << endl;
    cout << "height: " << rectPtr->get_height() << endl;

    Rectangle & rectRef = rect6; // reference to an object (alias)
    cout << "color: " << rectRef.get_color() << endl;
    cout << "width: " << rectRef.get_width() << endl;
    cout << "height: " << rectRef.get_height() << endl;
    
    // create and initialize an object on the heap (dynamic memory)
    Rectangle* rectPtr2 = new Rectangle(7, 8, "blue");
    cout << "color: " << rectPtr2->get_color() << endl;
    cout << "width: " << rectPtr2->get_width() << endl; 

    Shape* shapePtr = new Rectangle(); // upcasting
    cout << "color: " << shapePtr->get_color() << endl;
    cout << "area: LINE 46 " << shapePtr->area() << endl; 
    // calls the base class area function UNLESS it is virtual
    // in which case we will have "dynamic binding" and the child class
    // area function will be called
    // this is called "dynamic binding" or "late binding"
    
    delete rectPtr2;
    delete shapePtr; // deleting the Rectangle object on the heap
    shapePtr = new Circle(5,"red");
    cout << shapePtr->area() << endl;
    delete shapePtr; // deleting the Circle object on the heap
    shapePtr = new Triangle(5,6,7,"blue");    
    cout << shapePtr->area() << endl;
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
        */
    return 0;
}
