13-program with output
#include <iostream>
using namespace std;
class Student {
public:
    int RollNo, year;
    string name, className;
    float totalMarks;
    void input() {
        cout << "Enter Roll No, Name, Class, Year, Marks: ";
        cin >> rollNo >> name >> className >> year >> totalMarks;
    }
    void display() {
        cout << "Roll No: " << rollNo << " Name: " << name
             << " Class: " << className << " Year: " << year
             << " Marks: " << totalMarks << endl;
    }
};
int main() {
    Student students[5];
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ":\n";
        students[i].input();
    }
}
