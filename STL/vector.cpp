#include <iostream>
#include <vector>
#include <algorithm>
#include "person.h"

int main(){

    std::vector<int> vec{1, 2, 3, 4, 5, 1, 2, 1};

    for (auto &i : vec)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    vec.push_back(20); // it will allocate more memory and copy the elements to the new memory location 

    for (auto &i : vec)
    {
        std::cout << i << " ";
    }   
    std::cout << std::endl;
    

    vec = { 2, 3, 6, 8, 9, 2, 3, 1, 0, 5, 6, 7, 8, 9, 10, 11, 12, 13};

    for (auto &i : vec)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // some common vector operations

    std::cout << "Size: " << vec.size() << std::endl;
    std::cout << "Max Size: " << vec.max_size() << std::endl;
    std::cout << "Capacity: " << vec.capacity() << std::endl;

    std::cout << "Is empty: " << vec.empty() << std::endl;
    std::cout << vec.at(2) << std::endl;
    std::cout << vec[3] << std::endl;


    std::cout << "Front: " << vec.front() << std::endl;
    std::cout << "Back: " << vec.back() << std::endl;
    

    std::vector<Person> people;

    Person p1 {"Larry", 18};

    people.push_back(p1);
    people.emplace_back("Moe", 20);

    for (auto &i : people)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::vector<Person> new_people {{"Curly", 30}, {"Larry", 25}};

    new_people.swap(people);

     for (auto &i : people)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Sorting the people vector

    std::sort(people.begin(), people.end());

    for (auto &i : people)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;


    std::vector<int> vec1 {1, 2, 3, 4, 5};
    std::vector<int> vec2 {10, 20, 30, 40, 50};

    auto it = std::find(vec1.begin(), vec1.end(), 3);
    vec1.insert(it, 100);

    for (auto &i : vec1)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    it = std::find(vec1.begin(), vec1.end(), 4);
    vec1.insert(it, vec2.begin(), vec2.end());

    for (auto &i : vec1)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}