#include <iostream>
#include <list>
#include <forward_list>
#include "person.h"

int main(){


    std::cout << "List" << std::endl;
    std::list<int> l1 {1, 2, 3, 4, 5};
    std::list<int> l2(10, 100); // list of 10 elements with value 100

    std::list<std::string> stooges{
        std::string("Larry"),
        "Moe", 
        std::string("Curly")
    };

    l1 = {10, 20, 30};

    for (auto &i : l1)
    {
        std::cout << i << std::endl;
    }   
    
    // Common methods

    std::list<int> test { 1, 2, 3, 4, 5};

    std::cout << "Size: " << test.size() << std::endl;
    std::cout << "Max size " << test.max_size() << std::endl;


    std::cout << "Front: " << test.front() << std::endl;
    std::cout << "Back: " << test.back() << std::endl;

    Person p1 {"Jose", 21};

    std::list<Person> players;

    players.push_back(p1);

    players.emplace_back("Victor", 20);
    players.emplace_front("Luis", 19);


    // displaying the elements
    for (auto &i : players)
    {
        std::cout << i << std::endl;
    }

    auto it = std::find(test.begin(), test.end(), 3);

    test.insert(it, 100);

    std::cout << "==========================" << std::endl;
    for(auto &i : test){
        std::cout << i << std::endl;
    }

    std::cout << "==========================" << std::endl;

    auto it1 = std::find(test.begin(), test.end(), 3);

    std::cout << *it1 << std::endl;
    it1++;
    std::cout << *it1 << std::endl;
    it1--;
    std::cout << *it1 << std::endl;

    std::cout << "==========================" << std::endl;
    std::cout << "Forward list" << std::endl;

    // Some common methods
    std::forward_list<int> flist {1, 2, 3, 4, 5};

    // std::cout << flistt.size(); // not available
    std::cout << "Max size: " << flist.max_size() << std::endl;

    std::cout << "Front: " << flist.front() << std::endl;
    //std::cout << "Back: " << flist.back() << std::endl; // not available


    Person p2 {"Vinicius", 32};

    std::forward_list<Person> people;

    people.push_front(p2);
    people.pop_front();

    people.emplace_front("Victor", 20);

    std::cout << std::endl;

    for (auto &i : people)
    {
        std::cout << i << std::endl;
    }       
    
    
    std::cout << std::endl;


    auto it2 = std::find(people.begin(), people.end(), Person{"Victor", 20});

    people.insert_after(it2, Person{"Jose", 21});
    people.emplace_after(it2, "Luis", 19);

    for (auto &i : people)
    {
        std::cout << i << std::endl;
    }

    return 0;
}