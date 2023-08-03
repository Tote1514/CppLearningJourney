#include<iostream>
#include "animal.h"
#include "felines.h"
#include "birds.h"
#include "pigeon.h"
#include "crow.h"
#include "dog.h"
#include "cat.h"

using std::string;
using std::string_view;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    // Animal polymorphism
    Dog dog1("dog1", "dark gray");
    Cat cat1("cat1", "black stripes");
    Pigeon pigeon1("pigeon1", "gray");
    Crow crow1("crow1", "black");
    
    Animal* animal_collection[] = {&dog1, &cat1, &pigeon1, &crow1};

    for (auto &i : animal_collection)
    {
        i->breathes();
    }
    cout << "-----------------------------------" << endl;
    // Felines polymorphism
    Felines* felines_collection[] = {&dog1, &cat1};

    for (auto &x : felines_collection)
    {
        x->run();
    }
    cout << "-----------------------------------" << endl;

    // Bird polymorphism
    Birds* bird_collection[] = {&pigeon1, &crow1};

    for (auto &&j : bird_collection)
    {
        j->fly();
    }
    
    
    return 0;
}
