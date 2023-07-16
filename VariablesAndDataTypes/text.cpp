#include <iostream>

using namespace std;

int main() {
    char value = 65; // ASCII code for 'A'

    cout << "Value: " << value << endl;
    cout << "Value (int): " << static_cast<int>(value) << endl;
}