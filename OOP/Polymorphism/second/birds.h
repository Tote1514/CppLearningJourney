#ifndef BIRDS_H
#define BIRDS_H

#include <iostream>
#include "animal.h"
#include <string_view>

using std::cout;
using std::string;
using std::endl;
using std::string_view;

class Birds:public Animal
{
protected:
    string wing_color;
public:
    Birds(string_view description, string_view wing_color);
    virtual ~Birds();
    virtual void fly() const{
        cout << "Bird::fly called for bird " << description << endl;
    }
    void breathes() const override{
        cout << "the pigeon is breathing and it is disgusting" << endl;
    }
    void stream_insert(std::ostream& out) const override{
        out << "The Bird is " << description << " with a wing color " << wing_color;
    }
};

Birds::Birds(string_view description, string_view wing_color)
    :Animal(description), wing_color(wing_color){}

Birds::~Birds()
{
}

#endif