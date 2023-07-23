#include <iostream>

using namespace std;

int main(){
    // the signature of a lambda function 
    auto func = [](double a, double b){ cout << "The result of the sum is " << (a + b) << endl;};
    // Calling the lambda funciton that was assigned to a variable
    func(1.5, 2.5);

    //Call the lambda function directly after its declaration

    [](){
        cout << "A lambda function was called" << endl;
    }();

    [](int x, int y){
        cout << "The result is " << (x + y) << endl;
    }(3, 2);
    
    
    auto sum = [](int a, int b) -> int {
        return a + b;
    };

    // Call the lambda function
    int result = sum(3, 5);
    cout << "The sum is: " << result << endl;


    // A lambda function that returns something

    auto area = [](int width, int length){
        return width * length;
    }(10, 3);

    cout << "the area is " << area << endl;

    // Print result directly
    cout << "the result of the difference is " [](int num1, int num2){return a-b;}(3, 2) << endl;

    // Specify a return type

    auto maior = [](int x, int y) -> int {
        return (x > y) ? x : y;
    };

    int myMayor = maior(3, 2);

    cout << "The greater number is " << myMayor << endl;
    return 0;
}