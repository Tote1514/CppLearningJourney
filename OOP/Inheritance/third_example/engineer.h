#ifndef ENGINEER_H
#define ENGINEER_H

#include <iostream>
#include "person.h"
#include <string>

class Engineer:public Person
{
    //using Person::Person; // Inheriting the constructor
    // it is bringing all the constructor from Person except the copy constructor
    friend ostream& operator<<(ostream& out, const Engineer& engineer);
private:
    double salary;
protected:
    // Resurrecting members that were inherated at some point with private inherance 
    /*using Person::get_address;
    using Person::get_age;
    using Person::get_fullname;*/
    //using Person::address; Compiler error becaue it is not possible to resurrect a private member of a base class

public:
    Engineer();
    Engineer(string fullname, int age, string address, double salary);
    Engineer(const Engineer& source);
    ~Engineer();
    using Person::add; // it is going to resurrect all the versions of the function overloaded
    void buildsomething(){
        fullname = "Bob The constructor";
        age = 22;
        // address = "Rua Visconde Piraja"; It is not accessible cause is private to the base class
    }
};

ostream& operator<<(ostream& out, const Engineer& engineer){
    out << "Hello, My name is " << engineer.get_fullname() << ", I am "
        << engineer.get_age() << " years old and I live in " << engineer.get_address();
    out << endl << "I am an engineer by the way ";
    return out;
}

Engineer::Engineer(string fullname, int age, string address, double salary)
    :Person(fullname, age, address), salary(salary){
        cout << "Custom constructor for engineer called " << endl;
    }
Engineer::Engineer(const Engineer& source)
    :Person(source), salary(source.salary){
        cout << "Copy constructor for engineer called..." << endl;
    }

Engineer::Engineer()
{
    cout << "Default constructor for engineer called" << endl;
}

Engineer::~Engineer()
{
    //cout << "i just died " << endl;
}
#endif