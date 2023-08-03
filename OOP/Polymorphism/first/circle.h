#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <string>
#include "oval.h"

using namespace std;

class Circle:public Oval
{
public:
    Circle() = default;
    Circle(string description, double radius);
    ~Circle();
    void draw() const override{
        cout << "Circle draw called. Drawing " << description 
            << " with radius " << get_xradius() << endl;
    }
};

Circle::Circle(string description, double radius)
    :Oval(description, radius, radius){}

Circle::~Circle()
{
}

#endif