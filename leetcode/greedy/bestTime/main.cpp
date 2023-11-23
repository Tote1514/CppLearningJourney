#include <iostream>
#include <vector>
#include "solution.h"

// funcao para testar a solucao
void testSolution(std::vector<int> prices, int expected)
{
    Solution s;
    int result = s.maxProfit(prices);
    if(result == expected)
        std::cout << "Teste passou" << std::endl;
    else
        std::cout << "Teste falhou" << std::endl;
}

int main()
{
    std::vector<int> prices = {7,1,5,3,6,4};
    testSolution(prices, 5);
    prices = {7,6,4,3,1};
    testSolution(prices, 0);
    
    return 0;
}