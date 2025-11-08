#include "Searching.h"
#include <iostream>

int main() {
	std::vector<int> v = {2, 4, 7, 9, 12, 15, 15, 15, 15, 15, 29, 70, 80, 80};
	std::array<int, 14> a = {2, 4, 7, 9, 12, 15, 15, 15, 15, 15, 29, 70, 80, 80};
	int target = 15;

	std::cout << "=== Testing std::vector ===" << std::endl;
	std::cout << "binarySearch result: " << binarySearch(v, target) << std::endl;
	std::cout << "binarySearchFirst result: " << binarySearchFirst(v, target) << std::endl;

	std::cout << "\n=== Testing std::array ===" << std::endl;
	std::cout << "binarySearch result: " << binarySearch(a, target) << std::endl;
	std::cout << "binarySearchFirst result: " << binarySearchFirst(a, target) << std::endl;

	return 0;
}

