#include <iostream>
#include "derived.h"

using std::cout;
using std::string;
using std::endl;

int main(int argc, char const *argv[])
{
    
    // Default parameters in virtual functions lesson
    Base* derived_ptr = new Derived;
    double result = derived_ptr->add();
    // We are going to use the override method in the derived class
    // but with the default arguments of the base class
    // This happens because the default arguments are static binding
    // while the virtual function is dinamic binding
    cout << "Result (base ptr) = " << result << endl;// 12
    cout << "*****************************************" << endl;

    delete derived_ptr;
    derived_ptr = nullptr;

    
    Derived derived1;
    Base& derived_ref = derived1;
    result = derived_ref.add();
    cout << "Result (base reference) = "<< result << endl; // It is still 12

    cout << "****************************************" << endl;

    // raw object
    Base base1;
    result = base1.add();
    cout << "Result (base raw object) = " << result << endl;

    cout << "*************************************" << endl;
    Base base2 = derived1;
    result = base2.add();
    cout << "Result with slicing = " << result << endl;

    cout << endl << endl;
    // Virtual functions in destructors and constructors lesson
    Base* b_ptr = new Derived;

    // It is better to call the virtual method after the constructor call
    b_ptr->setup();

    cout << "the value is " << b_ptr->get_value()<< endl;

    // and, also, it is better to call the virtual method before the destructor call
    b_ptr->cleanup();
    delete b_ptr;

    return 0;
}
