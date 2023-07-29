#ifndef ENGINNER_H
#define ENGINNER_H

#include <iostream>
#include <string>
#include "person.h"


using namespace std;

class Engineer : public Person
{
    friend ostream& operator<<(ostream& out, const Engineer& engineer);

private:
   int start_year = 0;
   int salary = 0;
  
public:
    Engineer();
    void buildsomething(){
        fullname = "Yezus";// OK
        age = 33; // OK
        //address = "Egypt"; Compiler error because the member is private in the base class

    }  
};

Engineer::Engineer(/* args */)
{

}
ostream& operator<<(ostream& out, const Engineer& engineer){
    out << "My name is "<< engineer.get_fullname() << " and i am " << engineer.get_age() 
        << " years old, I live in " << engineer.get_address() << " and I am an engineer";
    return out;
}






#endif