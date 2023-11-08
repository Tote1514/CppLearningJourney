#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <iostream>

class Solution {
private:
    std::vector<bool> hasBeenUsed;
    std::vector<int> perms;

    void setUsed(int size)
    {
        hasBeenUsed.resize(size);
        std::fill(hasBeenUsed.begin(), hasBeenUsed.end(), false);
    }

    void setPerms(int size)
    {
        perms.resize(size);

    }

    void backTracking(int index, std::vector<int>& nums, std::vector<std::vector<int>>& solution)
    {
        for(int i = 0; i < nums.size(); i++)
        {
            if(hasBeenUsed[i])
            {
                continue;
            }
            perms[index] = nums[i];
            hasBeenUsed[i] = true;
            if(index == nums.size() -1)
                solution.push_back(perms);
            else    
                backTracking(index + 1, nums, solution);
            hasBeenUsed[i] = false;
        }

    }

public:
    std::vector<std::vector<int>> permute(std::vector<int>& nums) 
    {
        std::vector<std::vector<int>> solution;
        setUsed(nums.size());
        setPerms(nums.size());
        backTracking(0, nums, solution);
        return solution;
    }
};

            
#endif // SOLUTION_H

