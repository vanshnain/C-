#include <iostream>
using namespace std;
int gcdRecursive(int a, int b) {
    return (b == 0) ,a : gcdRecursive(b, a % b);
}
// Iterative GCD
int gcdIterative(int a, int b) {
    while (b) {
        a = a % b;
        swap(a, b);
    }
    return a;
}
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "GCD (Recursive): " << gcdRecursive(a, b) << endl;
    cout << "GCD (Iterative): " << gcdIterative(a, b) << endl;
}
