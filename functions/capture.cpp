#include <iostream>

using namespace std;

int main(){
    // Capture list

    double a = 10;
    double b = 20;
    
    // Capture list gives you access to things that are declare outside the scope of the function
    auto func = [a, b](){
        cout << "a + b = " << a + b << endl;
    };
    func();

    // Capturing by value: what we have in the lambda function is a variable
    int c = 43;
    auto func1 = [c](){
        cout << "Inner value : " << c << endl;
    };

    for(size_t = 0; i < 5; i++){
        cout << "Outer value : " << c << endl;
        func1();
        ++c;
    }

    // Capturing by reference : working with the original outside value

    int x = 56;
    auto func2 = [x](){
        cout << "Inner value : " << x << endl;
    };

    for(size_t = 0; i < 5; i++){
        cout << "Outer value : " << x << endl;
        ++x;
    }


    return 0;
}