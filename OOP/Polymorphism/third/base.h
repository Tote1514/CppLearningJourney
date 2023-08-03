#ifndef BASE_H
#define BASE_H

#include <iostream>

using std::cout;
using std::string;
using std::endl;

class Base
{
protected:
    int value;
public:
    Base(/* args */);
    virtual ~Base();
    virtual void setup(){
        cout << "Base setup called " << endl;
        value = 10;
    }
    virtual void cleanup(){
        cout << "Base cleanup called " << endl;
    }
    virtual double add(double a = 5, double b = 5) const{
        cout << "Base add called." << endl;
        return (a + b + 1);
    }
    int get_value() const{
        return value;
    }
};

Base::Base(/* args */)
{
    cout << "Base constructor called " << endl;
    // don't do this
    //this->setup();// Static binding kicks in here
}

Base::~Base()
{
    cout << "Base Destructor called" << endl;
    // Neither this
    //this->cleanup();
}

#endif