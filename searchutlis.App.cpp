#include <iostream>
#include <cstdlib>
#include <ctime>
#include "searchUtils.h"
 
int main() {
    int n;
    std::cout << "Enter the size of the vector: ";
    std::cin >> n;
 
    auto arr = generateSortedVector(n);
 
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int key = 1 + std::rand() % (n + 1);
 
    int linComp = 0, binComp = 0;
    int linIndex = linearSearch(arr, key, linComp);
    int binIndex = binarySearch(arr, key, binComp);
 
    std::cout << "Searching for key = " << key << std::endl;
    std::cout << "Linear search: vector size = " << n << ", comparisons = " << linComp << std::endl;
    std::cout << "Binary search: vector size = " << n << ", comparisons = " << binComp << std::endl;
 
    if (linIndex == -1)
        std::cout << "Key not found in linear search." << std::endl;
    if (binIndex == -1)
        std::cout << "Key not found in binary search." << std::endl;
 
    return 0;
}
 