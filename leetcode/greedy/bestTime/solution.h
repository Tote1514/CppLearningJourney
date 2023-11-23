#ifndef SOLUTION_H_
#define SOLUTION_H_

#include <vector>
#include <iostream>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int profit = 0;
        int buy = prices[0];
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] < buy)
            {
                buy = prices[i];
                continue;
            }
            if((prices[i]- buy) > profit)
                profit = prices[i] - buy;
        }
        return profit;
    }
};


#endif  // SOLUTION_H_