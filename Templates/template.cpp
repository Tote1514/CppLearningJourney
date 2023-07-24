#include <iostream>

using namespace std;
// template function
template <typename T> T maximum(T a, T b);
template <typename T> const T& minimum(const T& x, const T& y);

// template function
template <>
const char* maximum<const char*>(const char* a, const char* b);

int main(){
    int a = 3;
    int b = 4;

    double c = 4.3;
    double d = 6.7;

    string name = "Jose";
    string lastname = "Castro";

    cout << "max(int)= " << maximum(a, b) << endl;// int type deduced 
    cout << "max(double)= " << maximum(c,d) << endl; // double type deduced
    cout << "max(string)= " << maximum(name, lastname) << endl; // string type deduced


    cout << "max between a and c : " << maximum<double>(a,b) << endl; // parameters are from different types 
                                                                      // there is implicit conversion from int to double
                                                                      // for the first parameter
    cout << "max between c and d : " << maximum<double>(c, d) << endl;//explicitly say we want the double version
                                                                      // called, if an instance it is not there already 
                                                                      // it will be created

    int x = 5;
    int y = 4;

    cout << "Out &x = " << &x << endl;
    auto answer = minimum(x, y);

    cout << "The minimum value between x and y is " << answer << endl;

    const char* first = {"First"};
    const char* second = {"second"};

    cout << "The greater string is the " << maximum(first, second) << endl;

    return 0;
}
// template function definition
template <typename T> T maximum(T a, T b){
    return (a > b) ? a : b; // a and b must support the operator >, otherwise, hard error
}
// template specialization definition

template<>
const char* maximum <const char*>(const char* a, const char* b){
    return (strcmp(a, b) > 0) ? a : b;
}
template <typename T> const T& minimum(const T& x, const T& y){
    cout << "In &x= " << &x << endl;
    return (x < y) ? x : y;
}