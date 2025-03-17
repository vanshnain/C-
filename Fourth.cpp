Fourth Practical With Output
#include <iostream>
#include <cstring> // For character arrays

using namespace std;

// Function to display ASCII values of a string
void displayASCII(const char str[]) {
    cout << "ASCII values:\n";
    for (int i = 0; str[i] != '\0'; i++) {
        cout << str[i] << " -> " << int(str[i]) << endl;
    }
}

// Function to concatenate two strings (without built-in functions)
void concatenateStrings(char str1[], const char str2[]) {
    int i = 0, j = 0;
    while (str1[i] != '\0') i++; // Move to end of first string
    while (str2[j] != '\0') {
        str1[i] = str2[j]; // Append second string
        i++;
        j++;
    }
    str1[i] = '\0'; // Null-terminate the concatenated string
}

// Function to compare two strings manually
int compareStrings(const char str1[], const char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i]; // Return difference
        }
        i++;
    }
    return str1[i] - str2[i]; // Handles different lengths
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


![Screenshot 2025-03-16 131811](https://github.com/user-attachments/assets/2f8aab81-52ac-485a-8016-a92e8cd32340)
![Screenshot 2025-03-16 133210](https://github.com/user-attachments/assets/d579a8f3-2298-4c25-8c49-cdd4dd4ae096)
![Screenshot 2025-03-16 133234](https://github.com/user-attachments/assets/cbd50cae-5656-4fdc-9ef8-76ed0377cd28)
![Screenshot 2025-03-16 133300](https://github.com/user-attachments/assets/16b436f3-50a6-446a-a5e0-eaf6420c999c)

