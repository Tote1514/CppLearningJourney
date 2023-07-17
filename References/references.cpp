#include <iostream>

using namespace std;

int main(){

    int var = 5;

    int& reference_var = var; // a references to the variable var

    cout << "The Address of the variables var is " << &var << endl;
    cout << "The Adress of the reference is " << &reference_var << endl;
    cout << "the value of the variabls is " << var << endl;
    cout << "the value of the reference is " << reference_var << endl;

    cout << endl;
    cout << endl;
    reference_var = 6;
    cout << "Now the value of var is " << var << endl;
    cout << "Now the value of the reference is " << reference_var << endl;

    cout << endl << endl;
    var = 12;
    cout << "finally, the value of var is " << var << endl;
    cout << "And finally, the value of the reference is " << reference_var << endl;


    //const references
    const int& const_ref = var;

    cout << "the value of the constant reference is " << const_ref << endl;
    var++;
    cout << "Now the value of the constant is " << const_ref << endl;
    //const_ref++; it is not possible to modify the value through the reference
    return 0;
}