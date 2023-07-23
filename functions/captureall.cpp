#include <iostream>

using namespace std;

int main(){
    // Capturing everything by value
    int c = 43;
    auto func = [=](){
        cout << "Inner value : " << c << endl;
    };
    for(size_t i = 0; i < 5; i++){
        cout << "Outer value : " << c << endl;
        func();
        c++;
    }

    // Capturing everything by reference
    int a = 5;
    int b = 4;
    auto func1 = [&](){
        cout << "Inner value of a : " << a << endl;
        cout << "Inner value of b : " << b << endl;
    };
    for(size_t i = 0; i < 5; i++){
        cout << "The Outer value of a : " << a << endl;
        cout << "The Outer value of b : " << b << endl;
        func1();
        c++;
        d += 0.5;
    }
    return 0;
}