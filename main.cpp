#include <iostream>

using namespace std;

int sum(int x, int y){
    return x + y;
}

int main(){

    int first_number; 
    int second_number;
    string name;

    cout << "First of all, enter your name: " << std::endl;
    getline(std::cin, name);


    // reading data for the user
    cout << "Please, enter a valid first number: " << endl;
    cin >> first_number;
    if (first_number < 0)
    {
        cerr << "The number entered is an invalid number!" << endl;
        return 1;
    }
    cout << "Please, enter a second number" << endl;
    cin >> second_number;
    if (second_number < 0)
    {
        cerr << "The number entered is an invalid number !" << endl;
    }
    int answer = sum(first_number, second_number);
    cout << "The answer for the sum of the two numbers is " << answer << ", "<< name << endl;
    return 0;
}