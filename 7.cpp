#include <iostream>  // Include the iostream library for input and output operations
using namespace std; // Use the standard namespace to avoid prefixing 'std::'
// Function to compute GCD using recursion
int gcdRecursive(int a, int b) {  
    return (b == 0) ,a : gcdRecursive(b, a % b); // ERROR: Incorrect syntax for ternary operator (should be ? instead of ,)
}
// Function to compute GCD using an iterative approach
int gcdIterative(int a, int b) {  
    while (b) {  // Loop until 'b' becomes zero  
        a = a % b;  // Compute remainder of a divided by b  
        swap(a, b);  // Swap values of a and b  
    }  
    return a;  // Return the GCD  
}
int main() {  
    int a, b;  // Declare two integer variables  
    cout << "Enter two numbers: ";  // Prompt the user to enter two numbers  
    cin >> a >> b;  // Read input values from the user  
    cout << "GCD (Recursive): " << gcdRecursive(a, b) << endl;  // Call and print the recursive GCD function result  
    cout << "GCD (Iterative): " << gcdIterative(a, b) << endl;  // Call and print the iterative GCD function result  
}
