Program-11 with output
#include <iostream>
#include <stdexcept>
using namespace std;
class MatrixException : public exception {
public:
    const char* what() const noexcept { return "Matrix dimensions are incompatible!"; }
}
void checkCompatibility(int c1, int r2) {
    if (c1 != r2) throw MatrixException();
}
int main() {
    try {
        checkCompatibility(6, 4);
    } catch (MatrixException& e) {
        cout << "Error: " << e what() 
          cout<<endl;
    }
}
