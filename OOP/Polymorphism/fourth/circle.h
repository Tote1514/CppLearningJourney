#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <string_view>
#include "shape.h"

using std::cout;
using std::string;
using std::string_view;
using std::endl;

class Circle:public Shape
{
private:
    double radius;
    inline static double PI = 3.1417;
public:
    Circle(string_view description, double radius);
    ~Circle();
    double perimeter() const override{
        return (2*PI*radius);
    }
    double surface() const override{
        return (PI * radius * radius);
    }
};

Circle::Circle(string_view description, double radius)
    :Shape(description), radius(radius){}

Circle::~Circle()
{
}

#endif