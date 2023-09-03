#include <iostream>
#include <queue>
#include <list>
#include <deque>


int main(){

    std::queue<int> q; // deque

    std::queue<int, std::list<int>> q1; // list
    std::queue<int, std::deque<int>> q2; // deque

    q.push(10);
    q.push(20);
    q.push(30);

    std::cout << "The front of the queue is: " << q.front() << std::endl;
    std::cout << "The back of the queue is: " << q.back() << std::endl;

    while( q.size() > 0 ) {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;
    
    return 0;
}