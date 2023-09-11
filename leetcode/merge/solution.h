#ifndef SOLUTION_H 
#define SOLUTION_H

#include <vector>
#include <stack>
#include <iostream>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        stack<int> aux;
        // Store the elements of nums1 in a stack
        // Because the final array is going to be nums1
        for (int i = m - 1; i >= 0; i--)
        {
            //cout << "here is working" << endl;
            aux.push(nums1[i]);
            //nums1.pop_back();
        }

        

        
        // Merge the two arrays
        int j = 0; // index for nums2
        for(int i = 0; i < (n+m); i++)
        {
            if(aux.empty() || (j < n && aux.top() > nums2[j]))
            {
                nums1[i] = nums2[j];
                j++;
                cout << nums1[i] << endl;
            }
            else
            {
                nums1[i] = aux.top();
                aux.pop();
                cout << nums1[i] << endl;
            }
        }
        
    }
};


#endif // SOLUTION_H