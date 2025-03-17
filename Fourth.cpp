Fourth Practical With Output
#include <iostream>
#include <cstring> // For character arrays
using namespace std;
void displayASCII(const char str[]) {
    cout << "ASCII values:\n";
    for (int i = 0; str[i] != '\0'; i++) {
        cout << str[i] << " -> " << int(str[i]) << endl;
    }
}
void concatenateStrings(char str1[], const char str2[]) {
    int i = 0, j = 0;
    while (str1[i] != '\0') i++;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
    }
    str1[i] = '\0';
}
// Function to compare two strings manually
int compareStrings(const char str1[], const char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i]; 
}
int main() {
    char str1[100], str2[100];
    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);
    cout << "\nDisplaying ASCII values for first string:\n";
    displayASCII(str1);
    cout << "\nConcatenating strings...\n";
    concatenateStrings(str1, str2);
    cout << "Concatenated string: " << str1 << endl;
    cout << "\nComparing strings...\n";
    int cmp = compareStrings(str1, str2);
    if (cmp == 0) {
        cout << "Strings are equal.\n";
    } else if (cmp > 0) {
        cout << "First string is greater.\n";
    } else {
        cout << "Second string is greater.\n";
    }
    return 0;
}
