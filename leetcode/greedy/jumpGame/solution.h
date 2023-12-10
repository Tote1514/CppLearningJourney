#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    bool canJump(std::vector<int>& nums) 
    {       
        int reachable = 0; 
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > reachable)
            {
                return false;
            }
            reachable = std::max(reachable, i + nums[i]);
        }
        return true;
    }
};


#endif // SOLUTION_H