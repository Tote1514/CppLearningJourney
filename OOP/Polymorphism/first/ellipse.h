#ifndef ELLIPSE_H
#define ELLIPSE_H

#include <iostream>
#include "shape.h"
#include <string_view>

class Ellipse: public Shape
{
private:
    double x_radius;
    double y_radius;
public:
    Ellipse(string description, double x_radius, double y_radius);
    ~Ellipse();
    int get_count() const override{
        return count;
    }
    static int count;
};

int Ellipse::count = 0;

Ellipse::Ellipse(string description, double x_radius, double y_radius)
    :Shape(description), x_radius(x_radius), y_radius(y_radius)
{
    count++;
}

Ellipse::~Ellipse()
{
    count--;
}

#endif