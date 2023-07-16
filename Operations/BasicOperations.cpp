#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    
    int x = 5;
    int y = 6;
    int z = 4;

    int sum = x + y + z;

    int diff = x - y - z;

    int div = x / z;

    int mult = x * y;

    int mod = x / z;

    cout << "Results:" << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Multiplication: " << mult << endl;
    cout << "Division: " << div << endl;
    cout << "Modulus: " << mod << endl;

    int value = 5;

    cout << "Incrementing before: " << ++value << endl;
    value = 5;
    cout << "Incrementing after: " << value++ << endl;

    value = 5;

    cout << "Decrementing before: " << --value << endl;
    value = 5;
    cout << "Decrementing after: " << value-- << endl;

    return 0;
}
