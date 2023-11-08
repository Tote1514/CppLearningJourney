#include <iostream>
#include <vector>
#include "solution.h"

int main()
{   
    Solution sl;
    std::string s = "aab";
    std::vector<std::vector<std::string>> solution = sl.partition(s);
    for(int i = 0; i < solution.size(); i++)
    {
        std::cout << "[ ";
        for(int j = 0; j < solution[i].size(); j++)
        {
            std::cout << solution[i][j] << " ";
        }
        std::cout << "]" << std::endl;
    }
    return 0;
}