#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string_view>

using std::cout;
using std::endl;
using std::string;
using std::string_view;

class Shape
{
protected:
    string description;
public:
    Shape(string_view description);
    virtual ~Shape();
    virtual double perimeter() const = 0;
    virtual double surface() const = 0;
};

Shape::Shape(string_view description)
    :description(description){}

Shape::~Shape()
{}


#endif