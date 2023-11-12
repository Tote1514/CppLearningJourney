#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

class Solution{
private:

    std::vector<std::string> palindrome;
    std::vector<bool> hasBeenUsed;

    bool isPalindrome(const std::string& x)
    {
        std::string aux = x;
        std::reverse(aux.begin(), aux.end());
        return aux == x;
    }
    void backTracking(int index, const std::string &p, std::vector<std::vector<std::string>> &solution)
    {
        std::string pal = ""; 
        for(int i = index; i < p.size(); i++)
        {
            pal = pal + p[i];
            // if it is palindrome
            if(isPalindrome(pal))
            {
                palindrome.push_back(pal);
                if(i == p.size()-1)
                {
                    solution.push_back(palindrome);
                }
                else
                {
                    // Looking for the rest of the partitions in the string 
                    backTracking(i + 1, p, solution);
                }
                palindrome.pop_back();
            }
        }
    }

public:
    std::vector<std::vector<std::string>> partition(std::string s)
    {
        std::vector<std::vector<std::string>> solution;
        backTracking(0, s, solution);
        return solution;
    }
    
};


#endif // SOLUTION_H