#include <iostream>

using namespace std;

int main() {
    int number1 = 10;
    int number2 = 2;

    if(number1 < number2){
        cout << "It entered the first if statement" << endl;
    }else if (number1 == number2){
        cout << "It entered the second if statement" << endl;

    }else{
        cout << "It entered the else statement" << endl;
    }

    return 0;
}