#ifndef CIVILENGINEER_H
#define CIVILENGINEER_H

#include <iostream>
#include <string>
#include "engineer.h"

using namespace std;

class Civilengineer:public Engineer
{
    friend ostream& operator<<(ostream& out, const Civilengineer civil);
private:
    int inteligence = 75;
public:
    Civilengineer();
    Civilengineer(const Civilengineer& source);
    Civilengineer(string fullname, int age, string address, double salary, int inteligence);
    ~Civilengineer();
    void buildsomethingcivil(){
        /*
        Can't access the members because they are private to the engineer class
        fullname = "Frank";
        age = 15;
        address = "Shooping";
        */
       add(15, 2);
       add(45, 2, 32);
    }
};
ostream& operator<<(ostream& out, const Civilengineer civil){
    // Now, the friend function has access to the getters because they are now protected in the engineer class
    // by the "using" definition
    out << "My name is " << civil.get_fullname() << " and i am " 
        << civil.get_age() << " years old and I live in " << civil.get_address();
    out << endl << "I am a civil engineer!!";
    return out;
}
Civilengineer::Civilengineer(string fullname, int age, string address, double salary, int inteligence)
    :Engineer(fullname, age, address, salary), inteligence(inteligence){
        cout<< "Custom constructor for civil engineer called " << endl;
    }

Civilengineer::Civilengineer(const Civilengineer& source)
    :Engineer(source), inteligence(source.inteligence){
        cout << "Copy constructor for civil engineer called " << endl;
    }
Civilengineer::Civilengineer()
{
    cout << "Default constructor for civil engineer called " << endl;
}

Civilengineer::~Civilengineer()
{
    //cout << "I am called first" << endl;
}


#endif