#ifndef CAT_H
#define CAT_H

#include <iostream>
#include <string_view>
#include "felines.h"

using std::cout;
using std::string;
using std::string_view;
using std::endl;
// Now, none can't inherit from the cat class
class Cat final:public Felines
{
public:
    Cat(string_view description, string_view fur_style);
    ~Cat();
    void miaw() const{
        cout << "The cat is miawing. Miaw!!" << endl;
    }
    void breathes() const override{
        cout << "the cat is breathing and it is adorable" << endl; 
    }
    void run() const override{
        cout << "Cat run called for " << description << endl;
    }
    void stream_insert(std::ostream& out) const override{
        out << "The Cat is a " << description << " with a fur style " << fur_style;
    }
};

Cat::Cat(string_view description, string_view fur_style)
    :Felines(description, fur_style){}

Cat::~Cat()
{

}

#endif