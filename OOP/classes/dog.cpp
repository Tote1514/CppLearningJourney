#include <iostream> 
#include "dog.h" 

using namespace std;


dog::dog(){
    name = "Firulais";
    breed = "Golden Retriver";
    age = new int;
    *age = 0;
    cout << "Dog " << name << " was constructred at " << this << endl;
}

dog::dog(string name_param, string breed_param, int age_param)
{
    name = name_param;
    breed = breed_param;
    age = new int;
    *age = age_param;
    cout << "Dog " << name << " was constructred at " << this << endl;

}

dog::~dog()
{
    delete age;   
    cout << "The desctructor was called for " << name << endl;
}

void dog::print_info(){
    cout << "My name is " << name << " and i am a dog" << endl;
    cout << "I am " << *age << " years old" << endl;
    cout << "I am a " << breed << endl; 
}

dog* dog::set_name(string name){
    this->name = name;
    return this;
}
dog* dog::set_breed(string breed){
    this->breed = breed;
    return this;
}
dog* dog::set_age(int age){
    *(this->age) = age;
    return this;
}
string dog::get_name(){
    return this->name;
}