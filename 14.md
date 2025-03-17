14th-program with output
#include <fstream>
#include <iostream>
using namespace std;
void removeSpace(string inFile, string outFile) {
    ifstream in(inFile);
    ofstream out(outFile);
    char ch;
    while (in.get(ch)) if (!isspace(ch)) out.put(ch);
    cout << "Whitespace removed!\n";
}
int main() {
    removeSpace("input.txt", "output.txt");
}
