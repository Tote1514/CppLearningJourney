#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <iostream>

class Solution 
{
private:

    std::string found;
    std::string hasFound = "";
    std::vector<std::vector<bool>> visited;

    bool isValid(int x, int y, const std::vector<std::vector<char>> &board)
    {
        return x >= 0 && x < board.size() && y >= 0 && y < board[0].size();
    }

    void backTracking(int x, int y, const std::vector<std::vector<char>> &board, const std::string & word)
    {
        if(found == word)
        {
            hasFound = found;
            return;
        }

        std::cout << "x: " << x << " y: " << y << " found: " << found << std::endl;
        
        std::vector<std::pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

        for(auto & move : directions)
        {
            if(isValid(x+move.first, y+move.second, board) && !visited[x + move.first][y + move.second])
            {
                visited[x + move.first][y + move.second] = true;
                found += board[x + move.first][y + move.second];

                backTracking(x + move.first, y + move.second, board, word);

                visited[x + move.first][y + move.second] = false;
                found.pop_back();
            }
        }

    }
public:
    bool exist(std::vector<std::vector<char>>& board, std::string word) 
    {
        for(int i = 0; i < board.size(); i++)
        {
            for(int j = 0; j < board[0].size(); j++)
            {
                if(board[i][j] == word[0])
                {
                    found = "";
                    visited.resize(board.size(), std::vector<bool>(board[0].size(), false));
                    visited[i][j] = true;
                    found += board[i][j];
                    backTracking(i, j, board, word);
                    if(!hasFound.empty())
                    {
                        return true;
                    }
                    visited.clear();
                    std::fill(visited.begin(), visited.end(), std::vector<bool>(board[0].size(), false));
                        
                }
            }
        }

        return false;
    }
};



#endif // SOLUTION_H