#include "cylinder.h"

Cylinder::Cylinder(double radius_param, double height_param){
    radius = radius_param;
    height = height_param;
}

double Cylinder::volume(){
    return PI * height * radius;
}

 // Setters
void Cylinder::set_height(double h){
    height = h;
}
void Cylinder::set_radius(double r){
    radius = r;
}
//Getter
double Cylinder::get_height(){
    return height;
}
double Cylinder::get_radius(){
    return radius;
}