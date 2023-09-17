#include <iostream>
#include <iomanip>
#include <vector>
#include <map>

// function to calculate the fibonaci sequence using dynamic programming
long int fibonaci(int n, std::vector<long int> &v){
    // q: what is the time complexity of this algorithm?
    // a: O(n)
    if(v[n] != -1)
        return v[n];

    if(n == 0)
        return 0;

    if( n == 1)
        return 1;

    v[n] = fibonaci(n-1, v) + fibonaci(n-2, v);
    return v[n];
}

// Function to calculate the fibonaci sequence
long int fibonaci(int n){

    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return fibonaci(n-1) + fibonaci(n-2);
    }
}

// function to do unitary tests
bool test(int n, long int expected){

    if(fibonaci(n) == expected){
        return true;
    }
    else{
        return false;
    }
}

bool test(int n, long int expected, int test){

    std::vector<long int> v(n+1, -1);
    if(fibonaci(n, v) == expected){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    // Unitary tests
    std::cout << "Unitary tests: " << std::endl;
    std::cout << std::boolalpha;
    std::cout << "Test 1: " << test(6, 8) << std::endl;
    std::cout << "Test 2: " << test(7, 13) << std::endl;
    std::cout << "Test 3: " << test(8, 21) << std::endl;

    // Unitary test for dynamic programming
    std::cout << "Unitary tests for dynamic programming: " << std::endl;
    std::cout << std::boolalpha;
    std::cout << "Test 1: " << test(6, 8, 1) << std::endl;
    std::cout << "Test 2: " << test(7, 13, 2) << std::endl;
    std::cout << "Test 3: " << test(8, 21, 3) << std::endl;
    std::cout << "Test 4: " << test(50, 12586269025, 4) << std::endl;
    //std::cout << "Test 5: " << test(100, 354224848179261915075, 5) << std::endl;



    return 0;
}