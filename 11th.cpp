Program-11 with output
#include <iostream> // Includes the iostream library for input and output operations
#include <stdexcept> // Includes the stdexcept library for handling standard exceptions
using namespace std; // allow functions
class MatrixException : public exception { // Define a custom exception class that inherits from the standard exception class
public:
    const char* what() const noexcept { return "Matrix dimensions are incompatible!"; } // Return the custom error message
}
void checkCompatibility(int c1, int r2) { // If the number of columns of matrix 1 is not equal to the number of rows of matrix 2
    if (c1 != r2) throw MatrixException();  //  Throw the custom MatrixException
}
int main() {
    try { 
        checkCompatibility(6, 4);  // Catch the MatrixException
    } catch (MatrixException& e) {
        cout << "Error: " << e what() // print error
          cout<<endl;
    }
}
