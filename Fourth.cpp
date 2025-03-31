#include <iostream>  // Include the iostream library for input and output operations
#include <cstring>   // Include cstring for character array operations
using namespace std; // Use the standard namespace to avoid prefixing 'std::'
// Function to display ASCII values of each character in a string
void displayASCII(const char str[]) {  
    cout << "ASCII values:\n"; // Print header message  
    for (int i = 0; str[i] != '\0'; i++) { // Loop through each character until the null terminator is encountered  
        cout << str[i] << " -> " << int(str[i]) << endl; // Print the character and its corresponding ASCII value  
    }  
}
// Function to concatenate two strings manually
void concatenateStrings(char str1[], const char str2[]) {  
    int i = 0, j = 0; // Initialize index variables for both strings  
    while (str1[i] != '\0') i++; // Move index 'i' to the end of str1  
    while (str2[j] != '\0') { // Loop through each character of str2 until null terminator  
        str1[i] = str2[j]; // Append character from str2 to str1  
        i++; // Move to the next index in str1  
        j++; // Move to the next index in str2  
    }  
    str1[i] = '\0'; // Append null terminator at the end to mark the end of the string  
}
// Function to compare two strings manually
int compareStrings(const char str1[], const char str2[]) {  
    int i = 0; // Initialize index variable  
    while (str1[i] != '\0' && str2[i] != '\0') { // Loop through both strings until a null terminator is encountered  
        if (str1[i] != str2[i]) { // If characters do not match, return their ASCII difference  
            return str1[i] - str2[i]; // Return difference between ASCII values  
        }  
        i++; // Move to the next character  
    }  
    return str1[i] - str2[i]; // Return the difference if one string is longer than the other  
}
int main() {  
    char str1[100], str2[100]; // Declare character arrays to store input strings  
    cout << "Enter first string: "; // Prompt user to enter the first string  
    cin.getline(str1, 100); // Read the first string including spaces  
    cout << "Enter second string: "; // Prompt user to enter the second string  
    cin.getline(str2, 100); // Read the second string including spaces  
    cout << "\nDisplaying ASCII values for first string:\n";  
    displayASCII(str1); // Call function to display ASCII values of the first string  
    cout << "\nConcatenating strings...\n";  
    concatenateStrings(str1, str2); // Call function to concatenate the second string to the first  
    cout << "Concatenated string: " << str1 << endl; // Print the concatenated result  
    cout << "\nComparing strings...\n";  
    int cmp = compareStrings(str1, str2); // Call function to compare the two strings  
    if (cmp == 0) { // Check if the strings are equal  
        cout << "Strings are equal.\n";  
    } else if (cmp > 0) { // Check if the first string is lexicographically greater  
        cout << "First string is greater.\n";  
    } else { // Otherwise, the second string is greater  
        cout << "Second string is greater.\n";  
    }  
    return 0; // Indicate successful program execution  
}
