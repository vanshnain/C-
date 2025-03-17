12th-program with output
#include <iostream>
#include <stdexcept>
using namespace std;
class PrimeException : public exception {
public:
    const char* what() const noexcept { return "Number must be greater than 1!"; }
}
bool isPrime(int num){
    if (num < 2) throw PrimeException();
    for (int i = 2; i * i <= num; i++) 
        if (num % i == 0) return false;
    return true;
}
int main(){
    try {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        cout << (isPrime(num) ? "Prime" : "Not Prime") << endl;
    } catch (PrimeException& e) {
        cout << e.what()
cout<<endl;
    }
}



