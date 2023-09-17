#include <iostream>
#include <vector>

// function to calculate the number of ways to travel in a grid

long int gridTraveller(int m, int n, std::vector<std::vector<long int>> &v){
    
    if(v[m][n] != -1 )
        return v[m][n];
    

    if(m == 1 && n == 1)
        return 1;
    if(m < 1 || n < 1)
        return 0;
    
    v[m][n] = gridTraveller(m-1, n , v) +gridTraveller(m, n-1, v);
    //std::cout << "m: " << m << " n: " << n << " v[m][n]: " << v[m][n] << std::endl;
    return v[m][n];

}

//function to test the gridTraveller function
void testGridTraveller(int m, int n, long int expected){

    std::vector<std::vector<long int>> v(m+1, std::vector<long int>(n+1, -1));
    long result = gridTraveller(m, n, v);
    if(result == expected)
        std::cout << "Test Passed" << std::endl;
    else
        std::cout << "Test Failed" << std::endl;

}

int main(){

    // Testing the gridTraveller function
    testGridTraveller(1, 1, 1);
    testGridTraveller(2, 3, 3);
    testGridTraveller(3, 2, 3);
    testGridTraveller(3, 3, 6);
    testGridTraveller(18, 18, 2333606220);

    return 0;
}