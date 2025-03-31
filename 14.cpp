#include <fstream>  // Include for file handling
#include <iostream> // Include for input/output
using namespace std;
void removeSpace(string inFile, string outFile) {  // Function to remove spaces
    ifstream in(inFile);  // Open input file for reading
    ofstream out(outFile); // Open output file for writing
    char ch;  // Variable to store each character
    while (in.get(ch))  // Read each character from the input file
        if (!isspace(ch)) out.put(ch);  // Write non-whitespace characters to output
    cout << "Whitespace removed!\n";  // Output success message
}
int main() {
    removeSpace("input.txt", "output.txt");  // Call function with input/output files
}  
