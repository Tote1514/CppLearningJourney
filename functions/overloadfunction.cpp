#include <iostream>

using namespace std;

string max(string a, string b);
int max(int a, int b);
double max(double a, double b);
double area(double length, double width);
double area (double l);

int main(){
    int a = 5;
    int b = 6;
    // call to the int max function
    cout << "The max number is " << max(a, b) << endl;

    double x = 5.6;
    double y = 7.5;
    // call to the double max function
    cout << "The max number is " << max(x, y) << endl;

    string name = "Jose";
    string lastname = "Castro";
    // call to the string max function 
    cout << "the max string is " << max(name, lastname) << endl;

    double l = 10;
    double width = 2;
    double length = 3;
    // Calling the same function with different number of parameters
    cout << "The area of the square is "<<  area(x) << endl;
    cout << "The area of the rectangular is " << area(length, width) << endl;
    return 0;
}


double max (double a, double b){
    return (a > b) ? a : b;
}

string max(string a, string b){
    return (a > b) ? a : b;
}
int max(int a, int b){
    return (a > b) ? a : b;
}

double area (double length, double width){
    return length * width;
}
double area (double l){
    return l * l;
}