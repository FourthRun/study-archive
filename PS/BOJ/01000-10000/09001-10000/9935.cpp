#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    string bomb;
    string result;

    cin >> s >> bomb;

    for(int i = 0; i < s.size(); i++) {
        result += s[i];

        if(result.size() >= bomb.size()) {
            if(s[i] == bomb[bomb.size() - 1]) {
                if(result.substr(result.size() - bomb.size(), bomb.size()) == bomb) {
                    for(int j = 0; j < bomb.size(); j++) {
                        result.pop_back();
                    }
                }
            }
        }
    }

    if(result.size()) cout << result;
    else cout << "FRULA";

    return 0;
}