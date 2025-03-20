Program-2 With Output
#include <iostream> // (this is for input and output like cout and cin)
#include <vector> // Include vector for storing terms
#include <set> // Include set for unique values
using namespace std; // allow functions
void removeDuplicates(vector<int>& arr){ // array stores multiple values
    set<int> uniqueElements(arr.begin(), arr.end()); // this is the functions
    arr.assign(uniqueElements.begin(), uniqueElements.end()); 
}
int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 5, 6, 6, 7, 7, 8, 8};
    cout << "Original array: ";
    for (int num : arr) cout << num << " ";
    removeDuplicates(arr);
    cout << " Array after removing duplicates: ";
    for (int num : arr) cout << num << " ";
    return 0; // the code is end if return 0 is in line
}
