#include <iostream>
#include <string>
#include "shape.h"
#include "oval.h"
#include "circle.h"


void draw_something(Shape& s);
int main(int argc, char const *argv[])
{
    Shape shape1("Shape");
    shape1.draw();

    Oval oval1("Oval", 2.3, 1.4);
    oval1.draw();

    Circle circle1("Circle", 2);
    circle1.draw();

    cout << "------------------------------" << endl;

    Shape* shape1_ptr = &shape1;
    shape1_ptr->draw();

    shape1_ptr = &oval1;
    shape1_ptr->draw();

    shape1_ptr = &circle1;
    shape1_ptr->draw();

    cout << "------------------------------" << endl;

    Shape& shape_ref = shape1;
    shape_ref.draw();// Shape draw

    Shape& shape_ref1 = oval1;
    shape_ref1.draw();// Oval draw

    Shape& shape_ref2 = circle1;
    shape_ref2.draw();// Circle draw
    

    cout << "------------------------------------" << endl;
    draw_something(shape_ref2);

    cout << "------------------------------------" << endl;
    // this is goind to work because the type is a pointer 
    Shape* shape_collection[] = {&shape1, &oval1, &circle1};

    for (Shape* s : shape_collection)
    {
        s->draw();        
    }
    
    // This is going to slice off the information of the derived class because it's using a base type
    Shape shape_collection2[] = {shape1, oval1, circle1};
    for (Shape i : shape_collection2)
    {
        i.draw();
        // this will be still just the base part 
        // When we slice off the derived class of an object 
        // It is not possible to get it back 
        Shape* i_ptr = &i;
        i_ptr->draw();
    }
    // this is not going to compile because you cannot reassing a reference variable 
    //Shape& shape_collection3[] = {shape1, oval1, circle1};


    //This functions is being hidden by the overload function that is being overrided in circle
    circle1.Shape::draw(44);


    // This method cannot participe in the polymorphism because it is not present in the base class
    oval1.draw(1, "red");


    return 0;
}
void draw_something(Shape& s){
    s.draw();
}