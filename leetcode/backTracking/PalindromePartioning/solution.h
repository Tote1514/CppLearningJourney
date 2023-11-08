#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

class Solution{
private:

    std::vector<std::string> palindrome;
    std::string pal;
    std::vector<bool> hasBeenUsed;

    bool isPalindrome(const std::string& x)
    {
        std::string aux = x;
        std::reverse(aux.begin(), aux.end());
        std::cout << aux << " " << x << std::endl;
        std::cout << (aux == x) << std::endl;
        return aux == x;
    }
    void backTracking(int index, const std::string &p, std::vector<std::vector<std::string>> &solution)
    {
        
        for(int i = 0; i < p.size(); i++)
        {
            std::string aux = pal + p[i];
            //std::cout << aux << std::endl;
            if( !hasBeenUsed[i] && aux[0] == p[i] && std::find(palindrome.begin(), palindrome.end(), aux) == palindrome.end())
            {
                pal = aux;
                hasBeenUsed[i] = true;
                palindrome.push_back(pal);
                if(index == p.size()- 1)
                {
                    solution.push_back(palindrome);
                    std::fill(hasBeenUsed.begin(), hasBeenUsed.end(), false);
                    palindrome.clear();
                }
                else
                {
                    backTracking(index + 1, p, solution);
                }
                hasBeenUsed[i] = false;
                pal.pop_back();
            }
            
        }
    }

public:
    std::vector<std::vector<std::string>> partition(std::string s)
    {
        std::vector<std::vector<std::string>> solution;
        pal = "";
        hasBeenUsed.resize(s.size());
        std::fill(hasBeenUsed.begin(), hasBeenUsed.end(), false);
        backTracking(0, s, solution);
        return solution;
    }
    
};


#endif // SOLUTION_H