#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include "stream_insertable.h"
#include <string_view>


using std::string;
using std::cout;
using std::endl;
using std::string_view;

class Animal:public Stream_insertable
{
protected:
    string description;
public:
    Animal(string_view description);
    // we need to mark our base destructors as virtual because 
    // when a derived object is destructed, if it is not virtual, 
    //It will only call the base constructor which is dangerous
    virtual ~Animal();
    virtual void breathes() const{
        cout << "The " << description << " is breathing!!!" << endl;
    }
    void stream_insert(std::ostream& out) const override{
        out << "Animal description = " << description; 
    }
};

Animal::Animal(string_view description)
    :description(description){}

Animal::~Animal()
{
    cout << "Animal has been destructed" << endl;
}

#endif