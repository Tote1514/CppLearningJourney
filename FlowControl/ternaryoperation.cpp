#include <iostream>

using namespace std;

int main(){

    int a = 4;
    float b = 5.4;

    auto max = (a > b) ? a : b;

    cout << "max: " << max << endl; 
    return 0;
}