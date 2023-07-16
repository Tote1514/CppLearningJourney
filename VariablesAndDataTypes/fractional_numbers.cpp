#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    double number5 = 192400023;
    double number6 = 1.92400023e8;
    double number7 = 1.924e8;

    double number8 = 0.00000000003498;
    double number9 = 3.498e-11;
    cout << "number 5 is " << number5 << endl;
    cout << "number 6 is " << number6 << endl;
    cout << "number 7 is " << number7 << endl;
    cout << "number 8 is " << number8 << endl;
    cout << "number 9 is " << number9 << endl;

    double number10 = 5.6;
    double number11 = 0.0;
    double number12 = 0.0;
    
    // Infinity
    double result = number10 / number12;

    cout<< number10 <<"/" << number12 << ": " << result << endl; 

    // Nan

    double resultNan = number11 / number12;
    cout<< number11 << "/" << number12 << ": " << resultNan << endl;


    float fraction1 = 3.14f;     // f suffix for float
    double fraction2 = 2.71828;  // no suffix for double
    long double fraction3 = 1.6180339887L;  // L suffix for long double

    std::cout << "Fraction 1: " << fraction1 << std::endl;
    std::cout << "Fraction 2: " << fraction2 << std::endl;
    std::cout << "Fraction 3: " << fraction3 << std::endl;

}

