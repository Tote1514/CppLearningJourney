#include <iostream> 
#include <cmath>



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
    Cylinder(double radius_param, double height_param){
        radius = radius_param;
        height = height_param;
    }
    // Setters
    void set_height(double h){
        height = h;
    }
    void set_radius(double r){
        radius = r;
    }
    //Getter
    double get_height(){
        return height;
    }
    double get_radius(){
        return radius;
    }
    // Methods
    double volume(){
        return M_PI * height * radius;
    }
};