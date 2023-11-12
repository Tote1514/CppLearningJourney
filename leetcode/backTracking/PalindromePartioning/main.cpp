#include <iostream>
#include <vector>
#include "solution.h"

void teste(std::string s)
{
    Solution sl;
    std::vector<std::vector<std::string>> solution = sl.partition(s);
    std::cout << "Solution for " << s << std::endl;
    for(int i = 0; i < solution.size(); i++)
    {
        std::cout << "[ ";
        for(int j = 0; j < solution[i].size(); j++)
        {
            std::cout << solution[i][j] << " ";
        }
        std::cout << "]" << std::endl;
    }

}

int main()
{   
    std::string s = "aab";
    std::string s1 = "cdd";
    std::string s2 = "bb";
    teste(s);
    teste(s1);
    teste(s2);
    return 0;
}