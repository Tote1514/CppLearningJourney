#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

void display(const std::vector<int>& vec){
    std::cout << "[ ";
    for(auto const& i: vec){
        std::cout << i << " ";
    }
    std::cout << "]" << std::endl;
}


void teste1(){
    std::cout << "\n========================" << std::endl;

    std::vector<int> vec1 {1,2,3,4,5};

    auto it = vec1.begin(); // point to 1

    it++;

    std::cout << *it << std::endl;  // point to 2

    it += 2;
    std::cout << *it << std::endl;      // point to 4

    it = vec1.end() - 1;    // point to 5

    std::cout << *it << std::endl;
}


void teste2() {
    std::cout << "\n==============================" << std::endl;

    //display all vector elements using an iterador

    std::vector<int> nums1 {1, 2, 3, 4, 5};

    //Declaring the iterator

    std::vector<int>::iterator it = nums1.begin();

    while (it != nums1.end())
    {
        std::cout << *it << std::endl;
        it++;
    }

    //change all vector elements to 0

    it = nums1.begin();
    while(it != nums1.end()){
        *it = 0;
        it++;
    }
    

    display(nums1);
}


void teste3(){

    //using a const iterator
    std::cout << "\n==============================================" << std::endl;

    std::vector<int>nums1 {1,2, 3, 4, 5};
    std::vector<int>::const_iterator it1 = nums1.begin();

    // Another way
    // auto it1 = nums1.cbegin();

    while(it1 != nums1.end()){
        std::cout << *it1 << std::endl;
        it1++;
    }

    // compiler error when we try to change element

    it1 = nums1.begin();

    while (it1 != nums1.end())
    {
        // *it1 = 0;   //compiler error
        it1++;
    }    

}


void teste4(){
    // more iteratos
    // using a reverse iterator

    std::vector<int> vec { 1, 2, 3, 4};

    auto it1 = vec.rbegin(); // using a reverse iterator
    while (it1 != vec.rend())
    {
        std::cout << *it1 << std::endl;
        it1++;
    }

    // const reverse iterator over a list

    std::list<std::string> name {"Larry", "Moe", "Curly"};

    auto it2 = name.crbegin(); // const reverse iterator over a list
    std::cout <<*it2 << std::endl;
    it2++;
    std::cout <<*it2 << std::endl;

    // iterator over a map
    std::map<std::string, std::string> favorites {
        {"Frank", "C++"},
        {"Bill", "Java"},
        {"James", "Haskell"}
    };

    auto it3 = favorites.begin();
    while (it3 != favorites.end())
    {
        std::cout << it3->first << " : " << it3->second << std::endl;
        it3++;
    }

}

void teste5(){
    // iterator over a subset of a container
    std::vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};           
    auto start = vec.begin() + 2;
    auto finish = vec.end() - 3;

    while (start != finish)
    {
        std::cout << *start << std::endl;
        start++;
    }
    
}

int main(){

    std::cout << "Teste 1: " << std::endl;
    teste1();

    std::cout << "Teste 2: " << std::endl;
    teste2();

    std::cout << "Teste 3: " << std::endl;
    teste3();

    std::cout << "Teste 4: " << std::endl;
    teste4();

    std::cout << "Teste 5: " << std::endl;
    teste5();


    return 0;
}