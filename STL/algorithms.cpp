#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cctype>

class Person {
    std::string name;
    int age;
public:
    Person() = default;
    Person(std::string name, int age) : name{name}, age{age} {}
    bool operator<(const Person &rhs) const {
        return this->age < rhs.age;
    }
    bool operator==(const Person &rhs) const {
        return (this->name == rhs.name && this->age == rhs.age);
    }
}; 

// Find an element in a container

void find_text(){
std::cout << "\n===========================================" << std::endl;

    std::vector<int> vec{1, 2, 3, 4, 5};

    auto loc = std::find(std::begin(vec), std::end(vec), 1);

    if (loc != vec.end())
    {
        std::cout << "Found the number: " << *loc << std::endl;
    }
    else
    {
        std::cout << "Couldn't find the number" << std::endl;
    }
    
}

int main()
{
    std::cout << "Test to find an element in a container" << std::endl;
    find_text();
    return 0;
}