
#include <iostream>
#include "constants.h"

using namespace std;

//const double PI = 3.14;

class Cylinder{ 

// Properties
private:
    double radius;
    double height;
public:

    /*Cylinder(){
        radius = 2;
        height = 3;
    }*/
    // Constructors
    // Default Constructor
    Cylinder() = default;
    Cylinder(double radius_param, double height_param);
   
    // Methods
    double volume();
    void set_height(double h);
    void set_radius(double r);
    double get_height();
    double get_radius();
};

