#include "person.h"

Person::Person(string first_name, string last_name)
    :first_name(first_name),last_name(last_name)
{}
Person::~Person()
{
    cout << "the person "<< this->first_name << " has died. =(" << endl;
}
// The definition of the getters
string Person::get_firstname() const {
    return this->first_name;
}
string Person::get_lastname() const{
    return this->last_name;
}
// Setters
void Person::set_firstname(string firstname){
    this->first_name = firstname;
}
void Person::set_lastname(string lastname){
    this->last_name = lastname;
}

// Definition of the friend
ostream& operator <<(ostream& out, const Person& person){
    out << "My name is " << person.first_name;
    return out;
}