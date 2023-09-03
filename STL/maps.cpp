#include <iostream>
#include <map>

int main(){

    std::map<std::string, int> m1{
        {"Larry", 3},
        {"Moe", 1},
        {"Curly", 2}
    };

    std::map<std::string, std::string> m2{
        {"Jose", "C"},
        {"Carlos", "C++"},
        {"Thiago", "Python"}
    };

    std::cout << "The max size of the map m1 is " << m1.max_size() << std::endl;
    std::cout << "The Size of the map m1 is " << m1.size() << std::endl;

    //Inserting an element in a map

    std::cout << "==========================================" << std::endl;
    std::pair<std::string, std::string> p1{"Frank", "Ruby"};

    m2.insert(p1);

    m2.insert(std::make_pair("John", "Java"));

    // Printing the map

    for (const auto &elem : m2) {
        std::cout << elem.first << " " << elem.second << std::endl;
    }
    std::cout << "==========================================" << std::endl;

    // Inserting and updating an element in a map
    m2["John"] = "C#";

    m2["John"] = "Fortran";
    // m2.at("John") = "Fortran"; // This is the same as the line above

    for(const auto &elem : m2) {
        std::cout << elem.first << " " << elem.second << std::endl;
    }


    // Finding an element in a map
    if(m2.find("John") != m2.end()) {
        std::cout << "Found John" << std::endl;
    }

    auto it = m2.find("John");

    if(it != m2.end()) {
        std::cout << "Found: " << it->first << " " << it->second << std::endl;
    }

    // multimap
    std::cout << "==========================================" << std::endl; 

    std::multimap<std::string, std::string> m3 = {
        {"Larry", "C"},
        {"Moe", "C++"},
        {"Larry", "Ruby"},
        {"Larry", "Python"},
        {"Moe", "Python"},
        {"Curly", "C"}
    }; // it allows duplicated keys
    // Also it is ordered by the key

    for(const auto &elem : m3) {
        std::cout << elem.first << " " << elem.second << std::endl;
    }

    // m3["Jose"] = "C";  // This is not allowed because 

    
    return 0;
}