#ifndef SHAPE_H
#define SHAPE_H

using namespace std;
#include <iostream>
#include <string>

class Shape
{
protected:
    string description = "";
public:
    Shape() = default;
    Shape(string description);
    virtual ~Shape();
    virtual void draw() const{
        cout << "Shape draw called. Drawing " << description << endl;
    }
    virtual void draw(int color_depth) const{
        cout << "Shape::Drawing a " << description <<" with color depth " << color_depth << endl;
    }
    virtual int get_count() const {
        return count;
    }
    static int count;
};

int Shape::count = 0;

Shape::Shape(string description)
    :description(description)
{
    count++;
}

Shape::~Shape()
{
    count--;
}

#endif