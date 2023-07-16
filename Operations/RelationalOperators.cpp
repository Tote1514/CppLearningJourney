#include <iostream>

using namespace std;

int main() {
    int number1 = 7;
    int number2 = 5;

    cout << boolalpha;
    cout << "number1 < number2 :" << (number1<number2) << endl;
    cout << "number1 > number2 : " << (number1 > number2) << endl;
    cout << "number1 == number2 : " << (number1 == number2) << endl;
    cout << "number1 != number2 : " << (number1 != number2) << endl;
    return 0;
}