#include <iostream>
#include <deque>
#include "person.h"

int main() {

    std::deque<int> d {1, 2, 3, 4, 5};

    std::deque<int> d1 {10, 100}; // ten 100's

    std::deque<std::string> stooges{
        std::string("larry"), 
        "moe",
        std::string("curly")
    };


    d = {2, 4, 5, 6};

    for (auto &i : d)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    //Some common methods

    std::cout << "Front: " << d.front() << std::endl;
    std::cout << "Back: " << d.back() << std::endl;

    std::cout << "Max size : " << d.max_size() << std::endl;    
    std::cout << "The size of d is " << d.size() << std::endl;
    
    std::cout << d.at(2) << std::endl;
    std::cout << d[1] << std::endl;

    Person p1 {"Jose", 21};
    std::deque<Person> developers;

    developers.push_back(p1);
    developers.emplace_back("Victor", 20);
    developers.emplace_front("Luis", 19);

    for (auto &i : developers)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    
    return 0;
}