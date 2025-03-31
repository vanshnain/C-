#include <iostream> // (this is for input and output like cout and cin)
#include <cmath> // (cmath library for maths)
using namespace std; // allow functions
class Triangle { // // Define a class named Triangle, A class is a user-defined data type
public:
    double area(double b, double h) { return 0.5 * b * h; } // formula 
    double area(double a, double b, double c){  
        double s = (a + b + c)/2; // formula
        return sqrt(s*(s - a)*(s - b)*(s - c)); // formula
    }
}
int main() {
    Triangle t; // t is defined as triangle
    cout << "Area (Base, Height): " << t.area(7, 30) cout<<endl;
    cout << "Area (Three Sides): " << t.area(4, 7, 9) cout<<endl;
}
