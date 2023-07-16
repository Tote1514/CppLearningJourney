#include <iostream>

using namespace std;
int main(){
    // Printing out a bool
    // 1--> true
    // 0--> false
    bool green_light = true;
    bool red_light = false;

    cout << "Red_light : " << red_light << endl;
    cout << "Green light : " << green_light << endl;

    //Print out true and false

    cout<< endl;
    cout << boolalpha; // Forces the output format to true / false
    cout << "Red Light : " << red_light << endl;
    cout << "Green Light : " << green_light << endl;

    if (green_light)
    {
        cout << "the light is green" << endl;

    }else{
        cout << "the light is red" << endl;
    }
    


}