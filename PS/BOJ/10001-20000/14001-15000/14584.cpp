#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<string> v;
    string original, s, vary;

    cin >> original >> n;

    while(n--) {
        cin >> s;

        v.push_back(s);
    }

    for(int i = 0; i < 26; i++) {
        vary = "";

        for(int c : original) {
            c += i;

            if(c > 'z') c -= 26;

            vary += char(c);
        }

        for(int j = 0; j < v.size(); j++) {
            if(vary.find(v[j]) != string::npos) {
                cout << vary;
                break;
            }
        }
    }

    return 0;
}