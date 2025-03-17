#include <iostream>
using namespace std;
class Matrix {
    int mat[3][3]; // 3x3 matrix
public:
    void input() {
        cout << "Enter matrix (3x3):\n";
        for (auto &row : mat)
            for (int &ele : row) cin >> ele;
    }
    void display() {
        for (auto &row : mat) {
            for (int ele : row) cout << ele << " ";
            cout << endl;
        }
    }
    Matrix operator+(Matrix m) {
        Matrix res;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                res.mat[i][j] = mat[i][j] + m.mat[i][j];
        return 0;
    }
}
int main() {
    Matrix A, B, C;
    A.input(); B.input();
    C = A + B;
    cout << "Resultant Matrix:\n";
    C.display();
    return 0;
}
