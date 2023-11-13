#include <iostream>
#include "solution.h"

void teste(std::vector<int> &v, int target)
{
    Solution s;
    std::vector<std::vector<int>> result = s.combinationSum(v, target);
    std::cout << "Solution for candidates = [";
    for (auto &e : v)
    {
        std::cout << e << " ";
    }
    std::cout << "] and target = " << target << std::endl;
    for (auto &v : result)
    {
        for (auto &e : v)
        {
            std::cout << e << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    std::vector<int> v1 = {2, 3, 6, 7};
    teste(v1, 7);
    std::cout << std::endl;

    std::vector<int> v2 = {2, 3, 5};
    teste(v2, 8);
    std::cout << std::endl;

    std::vector<int> v3 = {2};
    teste(v3, 1);
    std::cout << std::endl;

    std::vector<int> v4 = {1};
    teste(v4, 1);
    std::cout << std::endl;

    std::vector<int> v5 = {1};
    teste(v5, 2);
    std::cout << std::endl;

    return 0;
    
}