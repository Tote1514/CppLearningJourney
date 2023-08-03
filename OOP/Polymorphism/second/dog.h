#ifndef DOG_H
#define DOG_H

#include <iostream>
#include "felines.h"
#include <string_view>

using std::cout;
using std::string;
using std::string_view;
using std::endl;

class Dog:public Felines
{

public:
    Dog() = default;
    Dog(string_view description, string_view fur_style);
    ~Dog();
    void bark() const {
        cout << "This dog is barking. Woof" << endl;
    }
    void breathes() const override{
        cout << "The " << description << " is breathing. And it has a " << fur_style << " style." << endl;
    }
    // the run method in the subclass dog can't be override 
    //further, derived classes are forced to use the implementation in dog
    void run() const override final{
        cout << "Dog run called for " << description << endl;
    }
    void stream_insert(std::ostream& out) const override{
        out << "The dog is a " << description << " with a fur style " << fur_style;
    }
};

Dog::Dog(string_view description, string_view fur_style)
    :Felines(description, fur_style){}

Dog::~Dog()
{
    cout << "The dog has been destructed" << endl;
}

#endif