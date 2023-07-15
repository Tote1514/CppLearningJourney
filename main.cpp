#include <iostream>

int sum(int x, int y){
    return x + y;
}

int main(){

    int first_number; 
    int second_number;

    // reading data for the user
    std::cout << "Please, enter a valid first number: " << std::endl;
    std::cin >> first_number;
    if (first_number < 0)
    {
        std::cerr << "The number entered is an invalid number!" << std::endl;
        return 1;
    }
    std::cout << "Please, enter a second number" << std::endl;
    std::cin >> second_number;
    if (second_number < 0)
    {
        std::cerr << "The number entered is an invalid number !" << std::endl;
    }
    int answer = sum(first_number, second_number);
    std::cout << "The answer for the sum of the two numbers is " << answer << std::endl;
    return 0;
}