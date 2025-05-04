Shape class and Rectangle class
This is the code from class 4/29 and 5/1/2025
Inheritance

notes from May 1st (notes from 4/29 are in the .h and .cpp files)

If you do not put in a call to the super class's constructor, the default
constructor of the super class will be called. The compiler puts in 
the call, ex Shape()
What happens if the parent doesn't have a default constructor?
You get a compiler error if your constructor doesn't invoke an existing 
parent constructor.
Therefore, it is recommended to always include a default constructor in a class for purposes of inheritance (note the Shape default constructor does nothing and yet it serves an important purpose.)

OVERRIDING functions
if the child class defines a function with identical signature to parent function, this is calling overriding the function, and the child function gets
called (the parent function is inaccessible to a child object).

OVERLOADING
if the child class defines a function with the same name but different param lists, both functions are accessible to a child object only if the parent function is explicity
brought into the child class with a 'using' directive.

Polymorphism, virtual functions, abstract classes

Polymorphism is only relevant when dealing with pointers to objects
or object references.

What can I do due to polymorphism?
I can have a pointer (or reference) to the base class point to an object
of the child class.
What functions can be called on the pointer?
only functions that exist in the BASE class
This is due to compiler type checking.

What about overridden methods????
example: area method in the Shape class returns 0
the area method in the Rectangle class calculates the area.

In our example, we saw that the Shape class's area function is called.
In general, the base class's function is called unless the function is declared to be virtual 
(next time.)

