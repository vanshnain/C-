#include <iostream>  // Include for input/output operations
#include <vector>    // Include for vector operations
using namespace std; // Recursive Binary Search function
int binarySearchRecursive(vector<int>& arr, int left, int right, int key) {
    if (left > right) return -1;  // Base case: key not found
    int mid = (left + right) / 2;  // Find the middle element
    if (arr[mid] == key) return mid;  // Key found, return index // Recur on the left or right half based on comparison
    return (arr[mid] > key) ? binarySearchRecursive(arr, left, mid - 1, key)
                            : binarySearchRecursive(arr, mid + 1, right, key); // Iterative Binary Search function
int binarySearchIterative(vector<int>& arr, int key) {
    int left = 0, right = arr.size() - 1;  // Initialize left and right pointers
    while (left <= right) {  // While there is still a search range
        int mid = (left + right) / 2;  // Find the middle element
        if (arr[mid] == key) return mid;  // Key found, return index // Adjust search range based on comparison
        (arr[mid] > key) ? right = mid - 1 : left = mid + 1;
    }
    return -1;  // If key is not found
}
int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};  // Sorted array for searching
    int key = 7;  // Key to search for Call and print result of recursive binary search
    cout << "Recursive: " << binarySearchRecursive(arr, 0, arr.size() - 1, key) << endl; // Call and print result of iterative binary search
    cout << "Iterative: " << binarySearchIterative(arr, key) << endl;
    return 0;
}
