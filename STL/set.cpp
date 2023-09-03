#include <iostream>
#include <set>
#include <unordered_set>



class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
private:
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

std::ostream &operator<<(std::ostream &os, const Person &p) {
    os << p.name << ":" << p.age;
    return os;
}


int main() {
    std::set<int> s1{1, 4, 3, 5, 2};

    std::set<std::string> s2{"A", "B", "C", "D", "E"};

    s1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (const auto &elem : s1) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    std::set<int> s3{4, 4, 3, 2, 1, 0, 6 };

    for (const auto &elem : s3) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    std::cout<< "==========================================" << std::endl;
    std::cout << "The size of s1 is: " << s1.size() << std::endl;
    std::cout << "The max size of s1 is " << s1.max_size() << std::endl;


    // s3.at(0); // This is not possible because set is not a sequential container
    // s3.front(); // This is not possible because set is not a sequential container
    // s3.back(); // This is not possible because set is not a sequential container


    // Inserting an element in a set
    std::cout<< "==========================================" << std::endl;
    s3.insert(5);

    //Printing the elements of the set
    for (const auto &elem : s3) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    s3.erase(3);

    for (const auto &elem : s3) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Finding an element in a set

    auto it = s3.find(5);

    if(it != s3.end()) {
        std::cout << "Found: " << *it << std::endl;
    }

    // Counting the number of elements with a specific key

    std::cout << "Count: " << s3.count(5) << std::endl; // it is going to be 0 or 1


    std::cout<< "==========================================" << std::endl;

    Person p1{"Larry", 18};
    Person p2{"Moe", 20};
    Person p3{"Curly", 15};


    std::set<Person> stooges{p2, p1};

    auto result = stooges.insert(p3);

    for(const auto &i : stooges) {
        std::cout << i << std::endl;
    }

    std::cout << std::boolalpha;
    std::cout << "First: " << *(result.first) << std::endl;
    std::cout << "Second: " << result.second << std::endl;

    // The multiset 

    std::cout<< "==========================================" << std::endl;

    std::multiset<int> mset{1, 2, 3, 4, 5, 1, 2, 3, 4, 5}; // allows duplicates

    for(const auto &i : mset) {
        std::cout << i << " ";
    }
    std::cout << std::endl;


    // The unordered set

    std::cout<< "==========================================" << std::endl;
    std::cout << "The unordered set" << std::endl;

    std::unordered_set<int> uset{1, 2, 3, 4, 5, 1, 2, 3, 4, 5}; // don't allow duplicates

    for(const auto &i : uset) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << "==========================================" << std::endl;
    std::cout << "The unordered multiset" << std::endl;

    std::unordered_multiset<int> umset{1, 2, 3, 4, 5, 1, 2, 3, 4, 5}; // allows duplicates

    for(const auto &i : umset) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}