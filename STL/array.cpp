#include <iostream>
#include <array>
#include <algorithm>

int main(){

    std::array<int, 5> arr1 {1,2,3,4,5};
    std::array<int, 5> arr3 {10,20,30,40,50};


    std::array<std::string, 3> arr2 {std::string("one"), "two", "three"};


    arr2 = { "new_one", "new_two", "new_three" };

    std::cout << "Array size: " << arr1.size() << std::endl;

    std::cout << "Array elements: ";
    for (auto &i : arr1)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;


    // Printing the elements of the arr2 array

    for (auto &i : arr2)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    
    // Some comon methods of the array class

    std::cout << "First element of the array: " << arr1.front() << std::endl;
    std::cout << "Last element of the array: " << arr1.back() << std::endl;


    std::cout << "The element at the second position is " << arr1.at(1) << std::endl;
    std::cout << "The element at the third position is " << arr1[2] << std::endl; // same as arr1.at(2) 

    std::cout << "Is the array empty? " << std::boolalpha << arr1.empty() << std::endl;


    arr3.swap(arr1);

    std::cout << "Array elements: ";

    for (auto &i : arr1)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;

    int * data = arr1.data();

    std::cout << "Array elements: ";    
    for (size_t i = 0; i < arr1.size(); i++)
    {
        std::cout << " " << data[i] << " ";

    }
    std::cout << std::endl;
    
    
    return 0;
}