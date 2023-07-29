#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person
{
    friend ostream& operator<<(ostream& out, const Person& person);
private:
    string address = "None";

protected:
    int age = 0;
public:
    string fullname = "None";

    Person() = default;
    Person(string fullname, int age, string address);
    Person* set_age(int age);
    Person* set_fullname(string fullname);
    Person* set_address(string address);
    int get_age() const;
    string get_fullname() const;
    string get_address() const;
   
};

// Define the friend

ostream& operator<<(ostream& out , const Person& person){
    out << "My name is " << person.fullname << " and i am " << person.age << " years old and i live in " 
        << person.address;
    return out;
}

// Getters
int Person::get_age() const{
    return this->age;
}

string Person::get_address() const{
    return this->address;
}

string Person::get_fullname() const{
    return this->fullname;
}
//Setters
Person* Person::set_age(int age){
    this->age = age;
    return this;
}
Person* Person::set_fullname(string fullname){
    this->fullname = fullname;
    return this;
}
Person* Person::set_address(string address){
    this->address = address;
    return this;
}


Person::Person(string fullname, int age, string address)
    :fullname(fullname), age(age), address(address)
{}


#endif