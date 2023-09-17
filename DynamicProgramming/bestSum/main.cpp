#include <iostream>
#include <map>
#include <vector>

std::vector<int> bestSum(int targetSum, int array[], int size, std::map<int, std::vector<int>> &m){
    
    if(m.find(targetSum) != m.end())
        return m[targetSum];

    if(targetSum < 0)
        return std::vector<int>();
    if(targetSum == 0)  
        return std::vector<int>(1, 0);
    

    std::vector<int> shortestCombination;
    for(int i = 0; i < size; i++){
        int remainder = targetSum - array[i];
        std::vector<int> aux = bestSum(remainder, array, size, m);
        if(!aux.empty()){
            aux.push_back(array[i]);
            if(shortestCombination.empty() || aux.size() < shortestCombination.size()){
                shortestCombination = aux;
                m[targetSum] = shortestCombination;
            }
        }
    }
    m[targetSum] = shortestCombination;
    return shortestCombination;
}

void test(int targetSum, int array[], int size){
    std::map<int, std::vector<int>> m;
    std::vector<int> result = bestSum(targetSum, array, size, m);
    if(result.empty())
        std::cout << "null" << std::endl;
    else{
        std::cout << "[";
        for(int i = 0; i < result.size(); i++){
            std::cout << result[i];
            if(i != result.size() - 1)
                std::cout << ", ";
        }
        std::cout << "]" << std::endl;
    }
}

int main() {
    

    // tests
    test(7, new int[4]{5, 3, 4, 7}, 4);
    test(8, new int[3]{2, 3, 5}, 3);
    test(8, new int[3]{1, 4, 5}, 3);
    return 0;
}