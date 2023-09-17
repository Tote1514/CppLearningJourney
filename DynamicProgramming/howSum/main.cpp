#include <iostream>
#include <vector>
#include <map>

std::vector<int> howSum(int targetSum, int array[], int size, std::map<int, std::vector<int>> &m){
    
    if(m.find(targetSum) != m.end())
        return m[targetSum];

    if(targetSum < 0)
        return std::vector<int>();
    if(targetSum == 0)  
        return std::vector<int>(1, 0);


    for(int i = 0; i < size; i++){
        int remainder = targetSum - array[i];
        std::vector<int> aux = howSum(remainder, array, size, m);
        if(!aux.empty()){
            aux.push_back(array[i]);
            //aux.erase(aux.begin());
            m[targetSum] = aux;
            return aux;
        }
    }
    m[targetSum] = std::vector<int>();
    return std::vector<int>();
}

// function to test the howSum function
// the function just show the result of the howSum function

void test(int targetSum, int array[], int size){
    std::map<int, std::vector<int>> m;
    std::vector<int> result = howSum(targetSum, array, size, m);
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
    test(7, new int[3]{2, 3}, 2);
    test(7, new int[4]{5, 3, 4, 7}, 4);
    test(8, new int[3]{2, 3}, 2);
    
    return 0;
}