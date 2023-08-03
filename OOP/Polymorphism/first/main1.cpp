#include <iostream>
#include <string_view>
//#include "shape.h"
#include "ellipse.h"

using std::cout;
using std::string;
using std::string_view;
using std::endl;

int main(int argc, char const *argv[])
{
    Shape shape1("shape1");

    cout << "shape count " << Shape::count << endl;// 1

    Shape shape2("shape2");
    
    cout << "shape count " << Shape::count << endl;// 2

    Shape shape3("shape3");

    cout << "shape count " << Shape::count << endl;// 3

    cout << "************************************************" << endl;
    Ellipse ellipse1("ellipse1", 2.0, 3.0);

    cout << "ellipse count " << Ellipse::count << endl;// 1
    cout << "shape count " << Shape::count << endl;// 4

    cout << "*************************************************" << endl;

    Shape* shape_collection[] ={&shape1, &ellipse1};

    for (auto &i : shape_collection)
    {
        cout<< "count = " << i->get_count()<< endl;;
    }
    

    return 0;
}
