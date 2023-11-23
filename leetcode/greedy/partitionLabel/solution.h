#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>
#include <string>
#include <map>
#include <vector>

class Solution {

private:
    void reorganize(std::map<char, int> & letters,int pos, std::vector<int>& p)
    {
        for(auto &l: letters)
        {
            if(l.second > pos)
                l.second = pos;
        }
        int newSize = 1;
        int sizeOfvector = p.size();
        for (int i = sizeOfvector-1; i >= pos; i--)
        {
            newSize += p[i];
            p.pop_back();
        }
        p.push_back(newSize);
    }

public:
    std::vector<int> partitionLabels(std::string s) {
        std::map<char, int> letters;
        std::vector<int> partitions;
        for (int i = 0; i < s.size(); i++)
        {
            auto it = letters.find(s[i]);
            if (it == letters.end())
            {
                letters.emplace(s[i], partitions.size());
                partitions.push_back(1);
                continue;
            } 
            reorganize(letters, it->second, partitions);
                   
        }
        return partitions;
    }
};

#endif // SOLUTION_H