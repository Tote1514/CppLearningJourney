#ifndef OVAL_H
#define OVAL_H

#include <iostream>
#include <string>
#include "shape.h"
#include <string_view>

using namespace std;

class Oval:public Shape
{
private:
    double x_radius = 0;
    double y_radius = 0;
public:
    Oval() = default;
    Oval(string description, double x_radius, double y_radius);
    ~Oval();
    double get_xradius() const;
    double get_yradius() const;
    virtual void draw() const override{
        cout << "Oval draw called. Drawing " << description 
            << " with x radius : " << x_radius << " and y radius : " 
                << y_radius << endl;
    }
    virtual void draw(int color_depth, string_view color){
        cout << "Drawing a " << description << " with color depth " << color_depth 
            << " and color " << color << endl;
    }
};
// Getters
double Oval::get_xradius() const{
    return this->x_radius;
}
double Oval::get_yradius() const{
    return this->y_radius;
}
Oval::Oval(string description, double x_radius, double y_radius)
    :Shape(description), x_radius(x_radius), y_radius(y_radius){}

Oval::~Oval()
{
}

#endif