Program-3 With Output
#include <iostream>
#include <string>
#include <map>
using namespace std;
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


<img width="839" alt="image" src="https://github.com/user-attachments/assets/a6803e01-8d20-40de-91d8-a753fbd670f4" />
