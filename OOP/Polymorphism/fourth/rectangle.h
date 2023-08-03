#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <string_view>
#include "shape.h"

using std::cout;
using std::string;
using std::endl;
using std::string_view;

class Rectangle:public Shape
{
private:
    double width;
    double height;
public:
    Rectangle(string_view description, double width, double height);
    ~Rectangle();
    double perimeter() const override{
        return (2*width) + (2*height);
    }
    double surface() const override{
        return (width * height);
    }
};

Rectangle::Rectangle(string_view description, double width, double height)
    :Shape(description), width(width), height(height){}

Rectangle::~Rectangle()
{
}

#endif