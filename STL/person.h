#ifndef PERSON_H 
#define PERSON_H

#include <iostream>

class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    std::string name;
    int age;
public:
    Person() = default;
    Person(std::string name, int age) : name{name}, age{age} {}
    bool operator<(const Person &rhs) const {
        return this->age < rhs.age;
    }
    bool operator==(const Person &rhs) const {
        return (this->name == rhs.name && this->age == rhs.age);
    }
}; 


std::ostream &operator<<(std::ostream &os, const Person &p){
    os << p.name << ":" << p.age;
    return os;
}


#endif // PERSON_H