#include "animal.h"
#include "felines.h"
#include "dog.h"
#include <iostream>

using std::cout;
using std::string;
using std::endl;

void doing_something_with_animalptr(Animal* animal);
void doing_something_with_animalref(Animal& animal);

int main(int argc, char const *argv[])
{
    // Virtual Destructors lesson
    Animal* dog_ptr = new Dog("dog pointer", "gray");
    cout << "**********************************" << endl;
    delete dog_ptr;

    cout << "*************************************" << endl;

    // Dynamic Cast lesson
    Animal* animal = new Felines("Feline pointer", "stripes");
    // testing with pointer
    doing_something_with_animalptr(animal);

    // Testing with references
    Felines newfeline("feline reference" , "stripes");
    Animal& animal1 = newfeline;
    doing_something_with_animalref(animal1);
    delete animal;

    return 0;
}

// this dynamic casting is usually done in functions
void doing_something_with_animalptr(Animal* animal){
    // We are doing dynamic cast to get access to the not polymorphic methods of the derived class
    Felines* feline_ptr = dynamic_cast<Felines*>(animal);

    // We need to check if the feline pointer is not null
    if (!(feline_ptr == nullptr))
    {
        feline_ptr->doing_something_feline();
    }
    else
    {
        cout << "Couldn't cast to a feline pointer, sorry" << endl;
    }
    
}
void doing_something_with_animalref(Animal& animal){
    // Doing the same thing, but with references
    // As the references doesn't have a null pointer, we need to make the cast to a pointer
    Felines& feline_ref = dynamic_cast<Felines&>(animal);
    // doing proper checks with references

    Felines* check_ptr = dynamic_cast<Felines*>(&feline_ref);
    if (check_ptr)
    {
        cout << "******************************************" << endl;
        cout << "doing something with a reference:"<<endl;
        check_ptr->doing_something_feline();
    }
    else
    {
        cout << "Couldn't cast to a feline reference" << endl;
    }
    
    
}