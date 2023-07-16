#include <ios>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    // endl : places a new line character

    cout << "this is " << endl;
    cout << "an example."<< endl;

    //------------------
    // std::flush = flushes the output buffer to its final destination
    cout<<"I want this message imediately in the terminal"  << endl << flush;

    //----------------

    cout << "Formatted Table" << endl;

    cout <<  setw(15)<< left << "Last Name"<< setw(10)<< right <<  "First Name"  << endl;
    cout << setw(15) <<  left << "Jose " << setw(10) << right  << "Castro"  << right << endl;


    //--------------------
    // Internal justified = sign is left, data is right justified
    int numberTest = -5;
    cout << "Test: " << endl;
    cout << setw(5) << internal << numberTest << endl;

    // ---------------------

    // setfill
    cout << setfill('*') << setw(50);
    cout << left << "this is an example" << right << "of the use of set fill" << endl;

    cout << endl;
    cout << setw(100) << setfill(' ');
    cout << left << "Now i want to see if it returns to normal after an endl character or not" << "OK" << endl;
    cout << setw(0);


    // boolalpha

    bool a = false;
    bool b = true;
    cout << boolalpha;
    cout << "Value of a is " <<  a << endl;
    cout << "Value of b is " << b << endl;

    cout << noboolalpha;
    cout << "Value of a is " << a << endl;
    cout << "Value of b is " << b << endl;

    // showpos

    int anotherNumber = 7;
    cout << showpos;
    cout << "the number is " << anotherNumber << endl;
    cout << noshowpos;
    cout << "Also the number is " << anotherNumber << endl;

    cout << endl;
    // set the base of the number

    int numberPos = 4;
    int numberNeg = -6;

    

    cout << "The number is " << oct << numberNeg << endl;
    cout << "The number also is " << hex << numberNeg << endl;
    cout << "And in decimal base, the number is " << dec << numberNeg << endl;

    cout << "The number is " << oct << numberPos << endl;
    cout << "The number also is " << hex << numberPos << endl;
    cout << "And in decimal base, the number is " << dec << numberPos << endl;

    // Fixed and scientific Notation
    cout << endl;

    double numberScientific = 1.4523424321234;

    cout << scientific << "the number is " << numberScientific << endl;
    cout << fixed << "The number also is " << numberScientific << endl;


    //-----------------------------------------------
    // setprecision()
    cout << endl;
    long double bigNumber = 43.342143253452452345234522342;
    cout << setprecision(15) <<  "This is a big number : "  << bigNumber << endl;
    cout<< setprecision(3) << "This is the same number but with less precision : " <<  bigNumber << endl;

    // showpoint

    double numberwithpoint = 12.0;
    cout << noshowpoint << numberwithpoint << endl;
    cout << showpoint << numberwithpoint << endl;

    return 0;
}