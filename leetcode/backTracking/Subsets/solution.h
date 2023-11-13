#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <iostream>

class Solution 
{
private:

    std::vector<int> aux;
    std::vector<bool> hasBeenUsed;

    void backTracking(int index, const std::vector<int> &nums, std::vector<std::vector<int>>& solution)
    {
        
        solution.push_back(aux);

        for (int i = index; i < nums.size(); i++)
        {
            aux.push_back(nums[i]);

            backTracking(i + 1, nums, solution);

            aux.pop_back();
        }
        
        
    }

public:
    std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
        std::vector<std::vector<int>> solution;
        backTracking(0, nums, solution);
        return solution;
    }
};

#endif // SOLUTION_H