#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cctype>
#include "person.h"

// Find an element in a container

void find_text(){
std::cout << "\n===========================================" << std::endl;

    std::vector<int> vec{1, 2, 3, 4, 5};
    // find algorithm returns an iterator to the first match
    auto loc = std::find(std::begin(vec), std::end(vec), 1);

    if (loc != vec.end())
    {
        std::cout << "Found the number: " << *loc << std::endl;
    }
    else
    {
        std::cout << "Couldn't find the number" << std::endl;
    }
    std::list<Person> players {
        {"Larry", 18},
        {"Moe", 20},
        {"Curly", 21}
    };

    auto loc1 = std::find(players.begin(), players.end(), Person{"Moe", 20});

    if (loc1 != players.end())
    {
        std::cout << "Found Moe" << std::endl;
    }
    else
    {
        std::cout << "Moe not found" << std::endl;
    }
}

// Count the number of elements in a container
void count_test(){
std::cout << "\n===========================================" << std::endl;

    std::vector<int> vec{1, 2, 3, 4, 5, 1, 2, 1};
    int num = std::count(vec.begin(), vec.end(), 1);
    std::cout << num << " occurrences found" << std::endl;
}

void count_if_test(){
std::cout << "\n===========================================" << std::endl;

    // count only if the element is even
    // lambda expression
    std::vector<int> vec{1, 2, 3, 4, 5, 1, 2, 1, 100};
    int num = std::count_if(vec.begin(), vec.end(), [](int x){ return x % 2 == 0; });
    std::cout << num << " even numbers found" << std::endl;

    int num2 = std::count_if(vec.begin(), vec.end(), [](int x){return x >= 5;});

    std::cout << num2 << " numbers greater than 5." << std::endl;
}


void replace_text(){
    std::cout << "\n===========================================" << std::endl;
    std::vector<int>vec {1, 2, 3, 4, 5, 1, 2, 1};
    
    for(auto i: vec){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::replace(vec.begin(), vec.end(), 1, 100); // the replace algorithm will replace all the 1's with 100's

    for(auto i: vec){
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

void all_of_test(){


    std::cout << "\n===========================================" << std::endl;

    std::vector<int> vec1 {1, 3, 5, 7, 9, 1, 3, 13, 19, 5};

    if (std::all_of(vec1.begin(), vec1.end(), [](int x){return x > 10;}))
    {
        std::cout << "All the elements are > 10" << std::endl;
    }else{
        std::cout << "Not all the elements are > 10" << std::endl;
    }

    if(std::all_of(vec1.begin(), vec1.end(), [](int x){return x < 20;})){
        std::cout << "All the elements are < 20" << std::endl;      
    }else{
        std::cout << "Not all the elements are < 20" << std::endl;
    }
    
}

void string_transform_test(){
    std::cout << "\n===========================================" << std::endl;

    std::string str1 {"This is a test"};
    std::cout << "Before transform: " << str1 << std::endl;
    std::transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    std::cout << "After transform: " << str1 << std::endl;
}

int main()
{
    std::cout << "Test to find an element in a container" << std::endl;
    find_text();

    std::cout << "Test to count the number of elements in a container" << std::endl;
    count_test();

    std::cout << "Test to count the number of elements in a container" << std::endl;
    count_if_test();

    std::cout << "Test to replace the number of elements in a container" << std::endl;
    replace_text();

    std::cout << "Test to check if all the elements in a container are greater than 10" << std::endl;
    all_of_test();

    std::cout << "Test to transform a string to uppercase" << std::endl;
    string_transform_test();

    return 0;
}