#include <iostream>
#include <iomanip>

#include "solution.h"

int main(){

    Solution solution;
    // printing the values as bools
    std::cout << std::boolalpha; 
    std::cout << solution.isPalindrome(453) << std::endl;

    return 0;
}