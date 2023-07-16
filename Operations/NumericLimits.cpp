#include <iostream>
#include <limits>

using namespace std;

int main(){

    cout << "The lowest value of an integer is " << numeric_limits<int>::min() << endl;
    cout << "The biggest value of an integer is " << numeric_limits<int>::max() << endl;
    cout << "The lowest value of a float is " << numeric_limits<float>::lowest() << endl;
    return 0;
}