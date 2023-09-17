#include <iostream>
#include <map>
#include <algorithm>

// function to check if the targetSum can be achieved by adding any combination of numbers from the numbers array
// implementation using memoization
// q: what is m and n?
// a: m = targetSum, n = size of numbers array
// time complexity: O(m*n)
// space complexity: O(m)
bool canSumMemo(int targetSum, int numbers[], int size, std::map<int, bool> &memo){
    if(memo.find(targetSum) != memo.end()) return memo[targetSum];
    if(targetSum == 0) return true;
    if(targetSum < 0) return false;
    
    for(int i = 0; i < size; i++){
        int remainder = targetSum - numbers[i];
        if(canSumMemo(remainder, numbers, size, memo)){
            memo[targetSum] = true;
            return true;
        }
    }
    memo[targetSum] = false;
    return false;
}
bool canSum(int targetSum, int numbers[], int size){
    if(targetSum == 0) return true;
    if(targetSum < 0) return false;
    
    for(int i = 0; i < size; i++){
        int remainder = targetSum - numbers[i];
        if(canSum(remainder, numbers, size)){
            return true;
        }
    }
    return false;
}
// function to test the canSum function
bool testCanSum(int targetSum, int numbers[], int size, bool expected){
    bool result = canSum(targetSum, numbers, size);
    if(result == expected){
        std::cout << "Test Passed" << std::endl;
        return true;
    }
    else{
        std::cout << "Test Failed" << std::endl;
        return false;
    }
}
// function to test the canSumMemo function
bool testCanSumMemo(int targetSum, int numbers[], int size, bool expected){
    std::map<int, bool> memo;
    bool result = canSumMemo(targetSum, numbers, size, memo);
    if(result == expected){
        std::cout << "Test Passed" << std::endl;
        return true;
    }
    else{
        std::cout << "Test Failed" << std::endl;
        return false;
    }
}
int main(){


    // test cases
    int numbers1[] = {2, 3};
    int numbers2[] = {5, 3, 4, 7};
    int numbers3[] = {2, 4};
    int numbers4[] = {2, 3, 5};

    testCanSum(7, numbers1, 2, true);
    testCanSum(7, numbers2, 4, true);
    testCanSum(7, numbers3, 2, false);
    testCanSum(8, numbers4, 3, true);
    

    return 0;
}