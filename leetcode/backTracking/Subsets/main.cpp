#include <iostream>
#include <vector>
#include "solution.h"

// function to test the solution
void testeSolution(std::vector<int> t)
{
    Solution s;
    std::vector<std::vector<int>> result = s.subsets(t);
    std::cout << "Input: [";
    for (int i = 0; i < t.size(); i++)
    {
        std::cout << t[i];
        if (i < t.size() - 1)
            std::cout << ", ";
    }
    std::cout << "]" << std::endl;
    std::cout << "Output: [";
    for (int i = 0; i < result.size(); i++)
    {
        std::cout << "[";
        for (int j = 0; j < result[i].size(); j++)
        {
            std::cout << result[i][j];
            if (j < result[i].size() - 1)
                std::cout << ", ";
        }
        std::cout << "]";
        if (i < result.size() - 1)
            std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}

int main()
{
    std::vector<int> t1 = {1, 2, 3};
    std::vector<int> t2 = {0};
    testeSolution(t1);
    testeSolution(t2);   
    return 0;
}