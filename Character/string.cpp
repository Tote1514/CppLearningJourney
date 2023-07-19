#include <iostream>
#include <string>

using namespace std;

int main(){
    // It is much better than an array of characters
    // so i dont know why i am learning so much char functions 
    string name = "Jose";
    string fullname = "Jose Antonio";

    string lastname = fullname.substr(5);

    cout << "My name is " << name << endl;
    cout << "My last name is " << lastname << endl;
    return 0;
}