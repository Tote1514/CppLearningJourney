#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>
#include <string>
#include <algorithm>


class Solution {
public:

    bool isPalindrome(int x){
        std::string numberString = std::to_string(x);

        std::string aux = numberString;

        std::reverse(aux.begin(), aux.end());
        
        if(aux == numberString){
            return true;
        }else{
            return false;
        }
    }
    /*bool isPalindrome(int x){
        if (x < 0) return false;
        int temp = x;
        int reverse = 0;
        while (temp != 0){
            reverse = reverse * 10 + temp % 10;
            temp /= 10;
        }
        return reverse == x;
    }*/
};

#endif