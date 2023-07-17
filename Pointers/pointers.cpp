#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    //Declaring pointers
    int* p_number;//can only store an address of an integer variable
    double* p_fractional_number; // can only store an address of a variable double type

    //Explicitly initialize to nullptr
    int* p_number1 = nullptr;
    int* p_fractional_number1 = nullptr;

    //Initialize a pointer and assigning them data

    int a = 6;

    p_number = &a;
    // Modifying the data of the original variable through the pointer
    cout << "The memory of the data " << (*p_number) << " is " << p_number << endl; 
    (*p_number)++;
    cout << "The value of a is now " << a << endl;

    //Printing the null pointer
    cout << "The value of the null pointer is " << p_number1 << endl;

    ///***********************Pointer to char***************************************
    cout << endl;
    // Pointer to char can also do something special
    // You can initialize with a string literal
    char* p_message= {"I dont know how this is going to work"}; // the string literal is made of 
    // const char. Trying to modify any of them will result in disaster.

    cout << "the first character of the message is " << *p_message << endl;
    cout << "the message is " << p_message << endl;

    return 0;
}