#ifndef NURSE_H
#define NURSE_H

#include <iostream>
#include <string>
#include "person.h"
using namespace std;
// Nurse will do protected inheritance
class Nurse:protected Person
{
    friend ostream& operator<<(ostream& out, const Nurse& nurse);
private:
    int practice_certificate_id = 0;
public:
    Nurse(/* args */);
    ~Nurse();
    void treat_unwell_person(){
        fullname = "Grey";//OK because the member is protected now with the inheritance
        age = 23;// OK because the member is protected now with the inheritance
        //address = "Hollywood"; Compile error because the member is private
    }
};

Nurse::Nurse(/* args */)
{
}

Nurse::~Nurse()
{
}
ostream& operator<<(ostream& out, const Nurse& nurse){
    out << "My name is " << nurse.get_fullname() <<
        ", I am " << nurse.get_age() << " years old, I live in " 
            << nurse.get_address() << " and I am a nurse with a practise service id number " 
            << nurse.practice_certificate_id;
    return out;
}
#endif