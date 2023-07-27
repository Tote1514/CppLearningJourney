#include <iostream>
#include <cmath>
#include "cylinder.h"

using namespace std;


int main(){
    // Stack object notation 
    Cylinder c1(10, 2);

    cout << "The first cylinder has a volume of " << c1.volume() <<endl;

    // Heap object : dereference and -> pointer notation

    Cylinder* c2 = new Cylinder(11,3);

    cout << "The second clyinder has a volume of " << (*c2).volume() << endl;
    cout << "The second clylinder still has a volume of " << c2->volume() << endl;

    Cylinder* c3 = &c1;

    cout << "The volume of the first cylinder is still " << c3->volume() << endl;


    delete c2;
    c2 = nullptr;
    return 0;
}