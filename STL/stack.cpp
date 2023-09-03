#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <deque>

int main(){

    std::stack<int> s; // deque

    std::stack<int, std::vector<int>> s1; // vector
    std::stack<int, std::list<int>> s2; // list
    std::stack<int, std::deque<int>> s3; // deque



    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "The top of the stack is: " << s.top() << std::endl;

    int element = s.top();

    s.pop();

    std::cout << "The number " << element << " was removed from the stack" << std::endl;

    while(s.size() > 0) {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << std::endl;
    return 0;
}