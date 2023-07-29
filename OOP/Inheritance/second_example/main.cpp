#include <iostream>
#include "person.h"
#include "engineer.h"
#include "nurse.h"
#include "player.h"


using namespace std;

int main(){
    Engineer myfirsteng;
    cout << myfirsteng << endl;

    myfirsteng.fullname = "Kanye";// OK
    //myfirsteng.age = 50; Compiler error because the member is protected
    //myfirsteng.address = "Rua maranca"; Compiler erro because the member is private

    cout << myfirsteng << endl;
    cout << "------------------------" << endl;
    Nurse myfirstnurse;

    cout << myfirstnurse << endl;

    /*
    None of the base members are accessible because they are at least protected thanks to the protected
    Inheritance
    myfirstnurse.fullname = "Karol";
    myfirstnurse.age = 12;
    myfirstnurse.address = "Disneyland";
    */
   cout << "--------------------------------------------" << endl;

    Player myfirstgamer;

    cout << myfirstgamer << endl;
    /*
    None of the members are able to be access outside the class 
    because they all are private thanks to the private inheritance
    myfirstgamer.fullname = "Mario and luigi"; 
    myfirstgamer.age = 43;
    myfirstgamer.address = "The beach";
    */

    return 0;
}