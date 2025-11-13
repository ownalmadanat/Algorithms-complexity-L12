#ifndef SEARCHUTILS_H
 
#define SEARCHUTILS_H
 
#include <vector>
 
inline int linearSearch(std::vector<int>& arr, int key, int& comparisons) {
 
    comparisons = 0;
 
    for (int i = 0; i < static_cast<int>(arr.size()); i++) {
 
        comparisons++;
 
        if (arr[i] == key)
 
            return i;
 
    }
 
    return -1;
 
}
 
inline int binarySearch(const std::vector<int>& arr, int key, int& comparisons) {
 
    int left = 0;
 
    int right = static_cast<int>(arr.size()) - 1;
 
    comparisons = 0;
 
    while (left <= right) {
 
        int mid = left + (right - left) / 2;
 
        comparisons++;
 
        if (arr[mid] == key)
 
            return mid;
 
        else if (arr[mid] < key)
 
            left = mid + 1;
 
        else
 
            right = mid - 1;
 
    }
 
    return -1;
 
}
 
inline std::vector<int> generateSortedVector(int n) {
 
    std::vector<int> vec;
 
    vec.reserve(n);
 
    for (int i = 1; i <= n; i++)
 
        vec.push_back(i);
 
    return vec;
 
}
 
#endif