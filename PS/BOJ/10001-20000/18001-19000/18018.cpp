#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main() {
    vector<string> v;
    string animal, s;
    set<char> charSet;
    int n;
    char c, lastC;
    bool check = true;

    cin >> animal >> n;

    c = animal[animal.size() - 1];

    for(int i = 0; i < n; i++) {
        cin >> s;

        if(s[0] == c) v.push_back(s);
        else charSet.insert(s[0]);
    }

    if(v.size() == 0) cout << "?";
    else {
        for(string s : v) {
            lastC = s[s.size() - 1];

            if(!charSet.count(lastC)) {
                if(lastC == c && v.size() != 1) {
                    continue;
                }

                cout << s << "!";

                check = false;

                break;
            }
        }

        if(check) {
            cout << v[0];
        }
    }

    return 0;
}