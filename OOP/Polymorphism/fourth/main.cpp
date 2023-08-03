#include <iostream>
#include <string_view>
#include "circle.h"
#include "rectangle.h"

using std::cout;
using std::endl;
using std::string;
using std::string_view;

int main(){
    // You cannot create abstracts objects
    //Shape* shape_ptr = new Shape; compiler error

    Shape* rect_ptr = new Rectangle("Rectangle1", 10, 10);
    cout << "dynamic type of the rect_ptr " << typeid(*rect_ptr).name() << endl;
    cout << "The surface of the rect is " << rect_ptr->surface() << endl;

    cout << "******************************************" << endl;
    
    Shape* circle_ptr = new Circle("Circle1", 2);
    cout << "dynamic type of the circle_ptr " << typeid(*circle_ptr).name() << endl;
    cout << "The surface of the circle is " << circle_ptr->surface() << endl;
    return 0;
}