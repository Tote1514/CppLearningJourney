#ifndef PIGEON_H
#define PIGEON_H

#include <iostream>
#include <string_view>
#include "birds.h"

using std::cout;
using std::string;
using std::string_view;
using std::endl;

class Pigeon:public Birds
{
public:
    Pigeon(string_view description, string_view wing_color);
    ~Pigeon();
    void coo() const{
        cout << "Pigeon::coo called for " << description << endl;
    }
    void fly() const override{
        cout << "Pigeon fly called for " << description << endl;
    }
    void stream_insert(std::ostream& out) const override{
        out << "The pigeon is a " << description << " and it has a wing color " << wing_color;
    }

};

Pigeon::Pigeon(string_view description, string_view wing_color)
    :Birds(description, wing_color){}

Pigeon::~Pigeon()
{
}


#endif