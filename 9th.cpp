#include <iostream>  // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid prefixing 'std::'
class Person { // Define a base class named 'Person'
protected:
    string name; int age; // Declare protected members 'name' and 'age'
public:
    void input() { // Function to take input for name and age
        cout << "Enter name & age: "; // Prompt the user
        cin >> name >> age; // Read name and age from user
    }
    void display() { // Function to display name and age
        cout << "Name: " << name << ", Age: " << age << endl; // Print name and age
    }
} // ERROR: Missing semicolon ';' after class definition (should be `};` but left unchanged)
class Student : public Person { // Define a 'Student' class that inherits from 'Person'
    string course; // Declare a private member 'course'
public:
    void input() { // Function to take input for student details
        Person::input(); // Call base class input function to get name and age
        cout << "Enter course: "; // Prompt user for course name
        cin >> course; // Read course name from user
    }
    void display() { // Function to display student details
        Person::display(); // Call base class display function to print name and age
        cout << "Course: " << course << endl; // Print the course name
    }
};
class Employee : public Person { // Define an 'Employee' class that inherits from 'Person'
    int salary; // Declare a private member 'salary'
public:
    void input() { // Function to take input for employee details
        Person::input(); // Call base class input function to get name and age
        cout << "Enter salary: "; // Prompt user for salary
        cin >> salary; // Read salary from user
    }
    void display() { // Function to display employee details
        Person::display(); // Call base class display function to print name and age
        cout << "Salary: " << salary << endl; // Print the salary amount
    }
}
int main() { // Main function
    Student s; Employee e; // Declare objects of 'Student' and 'Employee' classes
    s.input(); e.input(); // Take input for student and employee details
    cout << "\nStudent Details:\n"; // Print heading for student details
    s.display(); // Display student details
    cout << "\nEmployee Details:\n"; // Print heading for employee details
    e.display(); // Display employee details
}
