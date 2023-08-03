#ifndef DERIVED_H
#define DERIVED_H

#include <iostream>
#include "base.h"

using std::cout;
using std::string;
using std::endl;

class Derived:public Base
{
public:
    Derived(/* args */);
    ~Derived();
    void setup() override{
        cout << "Derived setup called " << endl;
        value = 100;
    }
    void cleanup() override{
        cout << "Derived cleanup called " << endl;
    }
    double add(double a = 10, double b = 10) const override{
        cout << "Derived add called " << endl;
        return (a + b + 2);
    }
};

Derived::Derived(/* args */)
    :Base()
{
    cout << "Derived constructor called " << endl;
    //this->setup();

}

Derived::~Derived()
{
    cout << "Derived destructor called " << endl;
    //this->cleanup();
}

#endif