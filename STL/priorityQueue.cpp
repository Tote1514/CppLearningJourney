#include <iostream>
#include <queue>
#include <list>
#include <deque>

int main(){

    std::priority_queue<int> q; // deque

    std::priority_queue<int, std::list<int>> q1; // list

    std::priority_queue<int, std::deque<int>> q2; // deque

    q.push(10);
    q.push(2);
    q.push(4);

    std::cout << "The elm at the top is: " << q.top() << "\n"; // 10
    q.pop();
    std::cout << "The elm at the top is: " << q.top() << "\n"; // 4

    q.push(30);

    // Displaying the elements of the queue
    while(!q.empty()){
        std::cout << q.top() << " ";
        q.pop();
    }
    std::cout << std::endl;
    return 0;
}