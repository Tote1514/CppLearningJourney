#ifndef POINT_H
#define POINT_H

#include <iostream>
#include "stream_insertable.h"

using namespace std;

class Point:public Stream_insertable
{
private:
    double x;
    double y;
public:
    Point(double x, double y);
    ~Point();
    void stream_insert(ostream& out) const override{
        out << "Point: x = " << x << " y = " << y; 
    }
};

Point::Point(double x, double y)
    :x(x), y(y){}

Point::~Point()
{
}


#endif