#include <iostream>
#include <memory>
#include "point.h"
#include "animal.h"
#include "dog.h"
#include "pigeon.h"
#include "cat.h"
#include "crow.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Point p1(1, 1);


    cout << "Point 1: " << p1 << endl;


    cout << "**********************************" << endl;

    std::shared_ptr<Animal> animals[] ={
        std::make_shared<Dog>("dog1", "stripes"),
        std::make_shared<Cat>("cat1", "black stripes"),
        std::make_shared<Pigeon>("pigeon1", "white wings"),
        std::make_shared<Crow>("crow1", "black wings")
    };

    for (auto &i : animals)
    {
        cout << *i << endl;
    }
    
    return 0;
}
