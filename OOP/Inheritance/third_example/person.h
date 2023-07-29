#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>

using namespace std;
class Person
{
    friend ostream& operator<<(ostream& out, const Person& person);
private:
    string address = "Rua Duque de Caxias";
protected:
    int age = 5;
public:
    string fullname = "Jose Castro";
    Person();
    // Copy constructor
    Person(const Person& source); // Copy constructors are not inheritable
    Person(string fullname, int age, string address);
    ~Person();
    int get_age() const;
    string get_fullname() const;
    string get_address() const;
    int add(int a, int b, int c) const{
        return a + b + c;
    }
    int add(int a, int b) const{
        return a + b;
    }
};
// Getters
int Person::get_age() const{
    return this->age;
}

string Person::get_fullname() const{
    return this->fullname;
}
string Person::get_address() const{
    return this->address;
}
ostream& operator<<(ostream& out, const Person& person){
    out << "My name is " << person.fullname << ", I am " << person.age << " years old and I live in "
        << person.address;
    return out;
}
// Constructors

Person::Person(const Person& source)
    :fullname(source.fullname), age(source.age), address(source.address){
        cout << "Copy constructor for person called..." << endl;
    }


Person::Person()
{
    cout << "Default constructor for person called " << endl;
}
Person::Person(string fullname, int age, string address)
    :fullname(fullname), age(age), address(address){
        cout << "Custom constructor called for person" << endl;
    }

Person::~Person()
{
    //cout << "I am called last " << endl;
}


#endif