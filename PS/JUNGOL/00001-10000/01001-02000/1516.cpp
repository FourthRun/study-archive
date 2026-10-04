#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string s, temp;
    map<string, int> m;
    int idx;

    while(getline(cin, s)) {
        if(s == "END") break;

        m.clear();

        idx = 0;
        
        for(int i = 1; i < s.size(); ++i) {
            if(s[i] == ' ') {
                temp = s.substr(idx, i - idx);

                idx = i + 1;

                ++m[temp];
            }
        }

        temp = s.substr(idx, s.size() - idx);

        ++m[temp];

        for(auto it : m) {
            cout << it.first << " : " << it.second << "\n";
        }
    }

    return 0;
}