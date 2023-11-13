#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

class Solution {
private:

    std::vector<int> aux;
    std::vector<bool> hasBeenUsed;

    bool isEqual(std::vector<int> aux, int target)
    {
        return std::accumulate(aux.begin(), aux.end(), 0) == target;
    }

    void backTracking(int index, const std::vector<int> & p, const int target, 
                        std::vector<std::vector<int>> & solution)
    {
        for (int i = index; i < p.size(); i++)
        {
            int sum = std::accumulate(aux.begin(), aux.end(), 0);
            if(sum + p[i] <= target)
            {
                aux.push_back(p[i]);
                if(isEqual(aux, target))
                    solution.push_back(aux);
                else
                    backTracking(i, p, target, solution);
                aux.pop_back();
            }
        }
        
    }

public:
    std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target) 
    {
        std::vector<std::vector<int>> solution;
        hasBeenUsed.resize(candidates.size(), false);
        backTracking(0, candidates, target, solution);
        return solution;
    }
};

#endif // SOLUTION_H