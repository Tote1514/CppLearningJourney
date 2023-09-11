#include <iostream>
#include <vector>

#include "solution.h"

using namespace std;


int main(){

    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};

    Solution sol;

    sol.merge(nums1, 3, nums2, 3);

    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }

    cout << endl;

    return 0;
}