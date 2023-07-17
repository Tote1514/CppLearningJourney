#include <iostream>

using namespace std;

int main() {
    const size_t size = 10;
    double* ptr = new(nothrow) double [100];
    int* ptr1 = new(nothrow) int[size]; // initialize with all 0
    //int* ptr2 = new(nothrow) int[size]{1,2,3, 4,5}; // the rest of the values will be 0

    // It is not possible to use an for arrange because it is a pointer
    for (size_t i = 0; i < size; i++)
    {
        ptr1[i] = i;
        cout<< "The " << (i+1) << "º is " << ptr1[i] << ":" << *(ptr1 + i) << endl;
    }
    /*for (size_t i = 0; i < size; i++)
    {
        cout<< "The " << (i+1) << "º is " << ptr2[i] << ":" << *(ptr2 + i) << endl;
    }*/
    delete[] ptr;
    ptr = nullptr;

    delete[] ptr1;
    ptr1 = nullptr;

    /*delete[] ptr2;
    ptr2 = nullptr;*/

    return 0;
}