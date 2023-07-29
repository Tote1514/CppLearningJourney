#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person
{
    friend ostream& operator <<(ostream& out, const Person& person);
protected:
    string first_name = "Mysterious";
    string last_name = "Person";
public:
    Person() = default;
    Person(string name, string last_name);
    ~Person();
    string get_firstname() const;
    string get_lastname() const;
    void set_firstname(string firstname);
    void set_lastname(string lastname);
};
#endif
