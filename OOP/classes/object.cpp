#include <iostream>
#include <cmath>
#include "cylinder.h"

using namespace std;

int main(){
    Cylinder cylinder1;
    
    cout << "The volume of my first cylinder is " << cylinder1.volume() << endl;

    cylinder1.set_height(3);
    cylinder1.set_radius(5);

    cout << "Now, the volume of my first cylinder is " << cylinder1.volume() << endl;

    Cylinder cylinder2(4, 2);

    cout << "The volume of my second cylinder is " << cylinder2.volume() << endl;
    return 0;
}