#include <iostream>  // Include iostream for input and output operations
using namespace std; // Use the standard namespace to avoid prefixing 'std::'
// Define a class named Student
class Student {  
public:  
    int RollNo, year;  // Declare integer variables for Roll Number and Year  
    string name, className;  // Declare string variables for Name and Class  
    float totalMarks;  // Declare a floating-point variable for Total Marks  
    // Function to input student details  
    void input() {  
        cout << "Enter Roll No, Name, Class, Year, Marks: "; // Prompt user for input  
        cin >> rollNo >> name >> className >> year >> totalMarks; // Read input values  
    }  
    // Function to display student details  
    void display() {  
        cout << "Roll No: " << rollNo << " Name: " << name  
             << " Class: " << className << " Year: " << year  
             << " Marks: " << totalMarks << endl; // Print student details  
    }  
};  
int main() {  
    Student students[5];  // Declare an array of 5 Student objects  

    for (int i = 0; i < 5; i++) {  // Loop to input details of 5 students  
        cout << "Student " << i + 1 << ":\n"; // Print student number  
        students[i].input();  // Call input function for each student  
    }  
}  
