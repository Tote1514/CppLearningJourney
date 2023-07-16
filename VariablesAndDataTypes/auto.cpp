#include <iostream>

using namespace std;

int main() {
    auto var1 = 12;
    auto var2 = 13.0;
    auto var3 = 15.3f;
    auto var4 = 14.5l;


    cout << "Type of the variable 1: " << typeid(var1).name() << endl;
    cout << "Type of the variable 2: " << typeid(var2).name() << endl;
    cout << "Type of the variable 3: " << typeid(var3).name() << endl;

    cout << "Size of the variable 1: " << sizeof(var1) << endl;
    cout << "Size of the variable 2: " << sizeof(var2) << endl;
    cout << "Size of the variable 3: " << sizeof(var3) << endl;

    return 0;
}