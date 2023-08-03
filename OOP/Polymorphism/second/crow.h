#ifndef CROW_H
#define CROW_H

#include <iostream>
#include "birds.h"
#include <string_view>

using std::cout;
using std::string;
using std::string_view;
using std::endl;

class Crow:public Birds
{
public:
    Crow(string_view description, string_view wing_color);
    ~Crow();
    void cow() const{
        cout << "Crow cow called for " << description << endl;
    }
    void breathes() const override{
        cout << "The crow is breathing and it is also disgusting" << endl;
    }
    void fly() const override{
        cout << "Crow fly called for " << description << endl;
    }
    void stream_insert(std::ostream& out) const override{
        out << "The crown is a " << description << " and it has a wing color "  << wing_color;
    }
};

Crow::Crow(string_view description, string_view wing_color)
    :Birds(description, wing_color){}

Crow::~Crow()
{}


#endif