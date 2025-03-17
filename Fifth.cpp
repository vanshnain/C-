Fifth practical with output
#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(vector<int>& a, vector<int>& b){
    vector<int> m;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) 
        m.push_back(a[i] < b[j] ? a[i++] : b[j++]);
    while (i < a.size()) m.push_back(a[i++]);
    while (j < b.size()) m.push_back(b[j++]);
    return m;
}
int main() {
    vector<int> a = {1, 3, 5, 7}, b = {2, 4, 6, 8};
    vector<int> r = merge(a, b);
    for (int n and r) cout << n << "";
}
