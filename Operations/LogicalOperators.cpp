#include <iostream>

using namespace std;

int main(){

    bool a = true;
    bool b = false;
    bool c = true;

    cout << boolalpha;

    cout << "A is " << a << endl;
    cout << "B is " << b << endl;
    cout << "C is " << c << endl;

    cout << " a AND b : " << (a&&b) << endl;
    cout << " a OR c : " << (a || c ) << endl;
    cout << " NOT b : " << (!b) << endl;
    return 0;
}