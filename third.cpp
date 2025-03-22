Program-3 With Output
#include <iostream> // (this is for input and output like cout and cin)
#include <string>  // Includes the standard C++ string class for handling text data.
#include <map>
using namespace std; // allow functions
void countOccurrences(string str) {
    map<char, int> freq;
    for (char c : str) {
        if (isalpha(c)) {
            freq[tolower(c)]++;
        }
    }
    cout << "Character Frequency Table:\n";
    for (auto pair : freq) {
        cout << pair.first << " -> " << pair.second cout<<endl;
    }
}
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    countOccurrences(input);
    return 0;
}
