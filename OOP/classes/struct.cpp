#include <iostream> 

using namespace std;
class Dog
{
    string name;
};
struct Cat
{
    string name;
};


int main(int argc, char const *argv[])
{
    Cat cat1;
    Dog dog1;

    //dog1.name = "Firulais";  // Compiler error because the members of a class are private by default

    cat1.name = "Juny";

    cout << "the name of my cat is " << cat1.name << endl;
    return 0;
}
