#include <iostream>
#include <string>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

using namespace std;

int main(int argc, char const *argv[])
{
    
    Person p1("Nick Fury", 55, "The avengers tower");

    cout << p1 << endl;
    cout << "------------------------------------------" << endl;

    Engineer e1("Home Simpson", 34, "Boulevard 234", 20.000);

    cout << e1 << endl;
    cout << "-------------------------------------------" << endl;

    Civilengineer c1("Batman", 100000, "BatCave", 10000000000, 180);
    cout << c1 << endl;
    cout << "--------------------------------------------------------" << endl;
    // Creating copies of the objects

    Person p2 = p1;
    cout << p2 << endl;

    cout << "----------------------------------------" << endl;
    Engineer e2 = e1;
    cout << e1 << endl;

    cout << "-----------------------------------------" << endl;

    Civilengineer c2 = c1;
    cout << "-----------------------------------------" << endl;
    cout << c2 << endl;
    /* this is possible, because the engineer class is inheriting the base constructor
    Engineer e3("Marcos", 34, "New york");
    cout << e3 << endl;*/


    return 0;
}
