#include <iostream>

using namespace std;

int main(){
    //Initialize a null pointer
    int* pt = nullptr;
    pt = new int; // allocating dynamically memory in the heap

    *pt = 7;
    cout << "the value of our dinamically allocated variable is " << *pt << endl;

    // Releasing and resetting 

    delete pt;
    pt = nullptr;// good practice

    // another way of initialize 
    int* pt1 = new int (22);
    cout << "the value of another pointer is " << *pt1 << endl;

    delete pt1;
    pt1 = nullptr;
    return 0;
}