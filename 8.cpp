#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid prefixing 'std::'
class Matrix { // Define a class named 'Matrix'
    int mat[3][3]; // Declare a 3x3 matrix as a private member
public:
    void input() { // Member function to take user input for the matrix
        cout << "Enter matrix (3x3):\n"; // Prompt user for input
        for (auto &row : mat) // Iterate over each row of the matrix
            for (int &ele : row) cin >> ele; // Take input for each element
    }
    void display() { // Member function to display the matrix
        for (auto &row : mat) { // Iterate over each row of the matrix
            for (int ele : row) cout << ele << " "; // Print each element in the row
            cout << endl; // Move to the next line after printing a row
        }
    }
    Matrix operator+(Matrix m) { // Overload the '+' operator for matrix addition
        Matrix res; // Declare a result matrix
        for (int i = 0; i < 3; i++) // Loop through rows
            for (int j = 0; j < 3; j++) // Loop through columns
                res.mat[i][j] = mat[i][j] + m.mat[i][j]; // Add corresponding elements of matrices
        return 0; // ERROR: Should return 'res' instead of '0' (but left unchanged as per request)
    }
} // ERROR: Missing semicolon ';' after class definition (but left unchanged as per request)
int main() { // Main function
    Matrix A, B, C; // Declare three Matrix objects
    A.input(); B.input(); // Take input for matrices A and B
    C = A + B; // Perform matrix addition using the overloaded '+' operator
    cout << "Resultant Matrix:\n"; // Print message before displaying result
    C.display(); // Display the resultant matrix
    return 0; // Indicate successful program execution
}
