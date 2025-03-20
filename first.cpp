#include <iostream> // (this is for input and output like cout and cin)
#include <cmath> // (cmath library for maths)
using namespace std; // allow functions
double seriesSum(int n){ // taking integers n with double floating
    double sum = 0; // this is variable to store sum of the series
    for (int i = 1; i <= n; i++){ // this is loop 
        double term = 1.0 / pow(i, i); // pow is power i is the power of other i.
        if (i % 2 == 0){ // this is the function
            sum -= term;
        } 
        else{
            sum += term;
        }
    }
    return sum;
}
int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Sum of series: " << seriesSum(n);
    cout << endl;
}
