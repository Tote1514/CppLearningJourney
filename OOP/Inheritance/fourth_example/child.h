#ifndef CHILD_H
#define CHILD_H

#include <iostream> 
#include "parent.h"

using namespace std;

class Child:public Parent
{
private:
    int member_number = 20;
    
public:
    Child(/* args */);
    ~Child();
    void print() const{
        cout << "The value in child is " << member_number << endl;
    }
};

Child::Child(/* args */)
{
}

Child::~Child()
{
}




#endif