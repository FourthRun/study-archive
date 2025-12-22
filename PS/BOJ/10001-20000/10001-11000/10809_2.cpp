#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;

    cin >> word;

for (char c = 'a'; c <= 'z'; c++) {
        int pos = word.find(c);
        
        if (pos == string::npos) cout << -1 << " ";
        else cout << pos << " ";
    }

    return 0;
}