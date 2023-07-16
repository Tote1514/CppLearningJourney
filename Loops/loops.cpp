#include <iostream>
#include <ios>
#include <iomanip>

using namespace std;

int main(){

    int count;
    cout << "Please, enter a number of iterations: " << endl;
    cin >> count;

    cout << "Size of a size_t: " << sizeof(size_t) << endl;

    // *************************FOR LOOPS**********************************************
    // size_t : is a representation of some unsigned long int for positive numbers [sizes]
    for (size_t i = 0; i < count; i++)
    {
        cout << setw(50);
        cout << "I love C++" << endl;
    }
    // Another for loop
    for (size_t i = 0; i < count; i++)
    {
        cout<< setw(0);
        cout << "The double of " << i << " is " << (2*i) << endl; 
    }
    //***********************WHILE LOOPS************************************

    cout << "Please enter another value for the number of iterations: " << endl;
    cin >> count;
    size_t n = 0;
    while (n < count)
    {
        cout << "I really love C++" << endl;
        n++;
    }
    
    //*********************DO WHILE LOOPS*************************************
    cout << "Please, enter the final value of iterations: " << endl;
    cin >> count;
    size_t w = 0;
    do
    {
        cout << "c++ is awesome!!!!" << endl;
        w++;
    } while (w < count);
    
    
    
    return 0;
}