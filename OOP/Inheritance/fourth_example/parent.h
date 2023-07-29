#ifndef PARENT_H
#define PARENT_H

#include <iostream>

using namespace std;
class Parent
{
protected:
    int member_number = 100;
public:
    Parent(/* args */);
    ~Parent();
    void print() const{
        cout << "The value of the member is " << member_number << endl;
    }
};

Parent::Parent(/* args */)
{
}

Parent::~Parent()
{
}

#endif