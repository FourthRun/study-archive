#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<char, char> m;

    string s1, s2;

    cin >> s1;

    cin.ignore();

    getline(cin, s2);

    for(int i = 0; i < s1.size(); ++i) {
        m['a' + i] = s1[i];
    }

    for(int i = 0; i < s2.size(); ++i) {
        if(s2[i] >= 'A' && s2[i] <= 'Z') cout << char(m[s2[i] + 32] - 32);
        else if(s2[i] >= 'a' && s2[i] <= 'z') cout << m[s2[i]];
        else cout << s2[i];
    }

    return 0;
}