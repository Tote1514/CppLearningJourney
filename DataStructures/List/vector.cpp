#include <iostream>
#include <vector>

int main() {
    // Creating a vector of integers
    std::vector<int> dynamicList;

    // Adding elements to the vector
    dynamicList.push_back(1);
    dynamicList.push_back(2);
    dynamicList.push_back(3);

    // Deleting an element at index 1
    dynamicList.erase(dynamicList.begin() + 1);

    // Accessing elements
    std::cout << "First element: " << dynamicList[0] << std::endl;

    // Modifying elements
    dynamicList[1] = 10;

    // Size of the vector
    std::cout << "Size of the vector: " << dynamicList.size() << std::endl;

    // Iterating through the vector
    std::cout << "Elements in the vector: ";
    for (int num : dynamicList) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
