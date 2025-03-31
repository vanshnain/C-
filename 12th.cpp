#include <iostream> // Includes the iostream library for input and output operations
#include <stdexcept> // Includes the stdexcept library for handling standard exceptions
using namespace std; // allow functions
class PrimeException : public exception { 
public:
    const char* what() const noexcept { return "Number must be greater than 1!"; }
}
bool isPrime(int num){
    if (num < 2) throw PrimeException();
    for (int i = 2; i * i <= num; i++)  // for loop
        if (num % i == 0) return false;
    return true;
}
int main(){
    try {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        cout << (isPrime(num) ? "Prime" : "Not Prime") cout<<endl;
    } catch (PrimeException& e) {
        cout << e.what()
cout<<endl;
    }
}
