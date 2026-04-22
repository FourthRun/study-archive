#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, s1, s2;

    cin >> s >> s2;

    for(char c : s) {
        if(!((c >= '0') && c <= '9')) s1 += c;
    }
    
    if(s1.find(s2) != string::npos) cout << 1;
    else cout << 0;

    return 0;
}