program-10 with output
#include <iostream>
#include <cmath>
using namespace std;
class Triangle {
public:
    double area(double b, double h) { return 0.5 * b * h; }
    double area(double a, double b, double c){
        double s = (a + b + c)/2;
        return sqrt(s*(s - a)*(s - b)*(s - c));
    }
}
int main() {
    Triangle t;
    cout << "Area (Base, Height): " << t.area(7, 30) cout<<endl;
    cout << "Area (Three Sides): " << t.area(4, 7, 9) cout<<endl;
}

