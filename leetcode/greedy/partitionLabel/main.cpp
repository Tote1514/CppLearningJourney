#include <iostream>
#include <vector>
#include "solution.h"

// funcao para testar a solucao
void testSolution(std::string s, std::vector<int> expected)
{
    Solution sol;
    std::vector<int> result = sol.partitionLabels(s);
    if (result == expected)
        std::cout << "Teste passou\n";
    else
    {
        std::cout << "Teste falhou\n";
        //print result
        std::cout << "Result: ";
        for (auto &r: result)
            std::cout << r << " ";
        std::cout << "\n";
    }
}

int main()
{
    
    testSolution("aebbedaddc", {9, 1});
    return 0;
}