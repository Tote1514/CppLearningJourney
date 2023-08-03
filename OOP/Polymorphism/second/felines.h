#ifndef FELINES_H
#define FELINES_H

#include<iostream>
#include "animal.h"
#include <string_view>

using std::cout;
using std::string;
using std::endl;
using std::string_view;

class Felines:public Animal
{
protected:
    string fur_style;
public:
    Felines() = default;
    Felines(string_view description, string_view fur_style);
    virtual ~Felines();
    virtual void run() const{
        cout << "The " << description << " is running " << endl;
    }
    void doing_something_feline(){
        cout << "Doing something feline thingy" << endl;
    }
    void stream_insert(std::ostream& out) const override{
        out << "The Feline is a " << description << " with a fur style " << fur_style;
    }
};

Felines::Felines(string_view description, string_view fur_style)
    :Animal(description), fur_style(fur_style){}

Felines::~Felines()
{
    cout << "The feline has been destructed" << endl;
}


#endif