#include <iostream>
#include <vector>
#include "solution.h"

// function to test the solution
void testSolution(std::vector<int>& nums, bool expected)
{
    Solution s;
    
    bool actual = s.canJump(nums);
    if (actual == expected)
    {
        std::cout << "PASSED" << std::endl;
    }
    else
    {
        std::cout << "FAILED" << std::endl;
    }
}


int main()
{
    std::vector<int> nums1 = {2, 3, 1, 1, 4};
    testSolution(nums1, true);
    std::vector<int> nums2 = {3, 2, 1, 0, 4};
    testSolution(nums2, false);
    std::vector<int> nums3 = {2, 0};
    testSolution(nums3, true);
    std::vector<int> nums4 = {4, 2, 0, 0, 1, 1, 4, 4, 4, 0, 4, 0};
    testSolution(nums4, true);
    return 0;
}