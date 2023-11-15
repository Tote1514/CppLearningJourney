#include <iostream>
#include <vector>
#include "solution.h"



void teste(std::vector<std::vector<char>> board, std::string word, bool expected)
{
    Solution s;
    bool result = s.exist(board, word);
    if (result == expected)
    {
        std::cout << "Teste passou\n";
    }
    else
    {
        std::cout << "Teste falhou\n";
    }
}

int main()
{

    std::vector<std::vector<char>> board = {{'C', 'A', 'A'},
                                         {'A', 'A', 'A'},
                                         {'B', 'C', 'D'}};

    std::string word = "AAB";
    bool expected = true;
    teste(board, word, expected);            

    return 0;
}