#include <iostream>
#include <vector>
using namespace std;
// Recursive Binary Search
int binarySearchRecursive(vector<int>& arr, int left, int right, int key) {
    if (left > right) return -1;
    int mid = (left + right) / 2;
    if (arr[mid] == key) return mid;
    return (arr[mid] > key) ? binarySearchRecursive(arr, left, mid - 1, key)
                            : binarySearchRecursive(arr, mid + 1, right, key);
}
int binarySearchIterative(vector<int>& arr, int key) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key) return mid;
        (arr[mid] > key) ? right = mid - 1 : left = mid + 1;
    }
}
int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int key = 7;
    cout << "Recursive: " << binarySearchRecursive(arr, 0, arr.size() - 1, key) << endl;
    cout << "Iterative: " << binarySearchIterative(arr, key) << endl;
    return 0;
}
