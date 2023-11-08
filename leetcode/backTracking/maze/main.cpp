#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <algorithm>

std::list<int> maze[9];
std::vector<int> path;
std::vector<bool> visited;

void createMaze(std::map<int, std::vector<int>> &mazeToCreate){
    
    // The maze is going to be an array of linked lists
    // Each linked list will contain the possible paths from that node
    // The parameter of the funtion is the maze that is going to be created
    // Clearing the maze
    for(int i = 0; i < 9; i++){
        maze[i].clear();
    }

    // Creating the maze
    auto it = mazeToCreate.begin();
    for(int i = 0; i < mazeToCreate.size(); i++){
        for(int j = 0; j < it->second.size(); j++){
            maze[i].push_back(it->second[j]);
        }
        std::cout << std::endl;
        it++;
    }
   
}

void printPath(){
    for(int i = 0; i < path.size(); i++)
    {
        std::cout << path[i] << " ";
    }
    std::cout << std::endl;
}

void mazeSolution(int node, int end){

    // If the node is the end, then print the path
    if(node == end){
        printPath();
        return;
    }

    visited[node] = true;

    for(auto it = maze[node].begin(); it != maze[node].end(); it++)
    {
        if(!visited[*it])
        {
            path.push_back(*it);
            mazeSolution(*it, end);
            path.pop_back();
        }
    }

}

void teste(){

    //std::cout << "Entrei aqui" << std::endl;
    std::map<int , std::vector<int>> maze1 = {
        {0, {1, 3}},
        {1, {0, 2}},
        {2, {1}},
        {3, {0, 4, 6}},
        {4, {3, 5, 7}},
        {5, {4}},
        {6, {3}},
        {7, {4, 8}},
        {8, {7}}
    };
    createMaze(maze1);
    visited.resize(9, false);
    path.push_back(0);
    mazeSolution(0, 8);

}

int main(){

    teste(); 

    return 0;
}