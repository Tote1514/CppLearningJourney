#include <iostream>
#include "solution.h"

void teste(std::vector<int>& nums)
{
    Solution s;
    std::vector<std::vector<int>> solution = s.permute(nums);
    for(auto& v : solution)
    {
        for(auto& i : v)
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
}

int main(){

    std::vector<int> nums = {1,2,3};
    std::vector<int> nums2 = {0,1};
    std::vector<int> nums3 = {1};
    teste(nums);
    teste(nums2);
    teste(nums3);

    return 0;
}