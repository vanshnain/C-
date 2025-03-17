Program-1 With Output

#include <cmath>
using namespace std;

double seriesSum(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        double term = 1.0 / pow(i, i);
        if (i % 2 == 0) {
            sum -= term;
        } else {
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

<img width="826" alt="image" src="https://github.com/user-attachments/assets/e493e7f9-9bad-4ad6-8afb-490100d32cee" />
