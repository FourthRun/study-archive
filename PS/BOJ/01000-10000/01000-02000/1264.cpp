#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    int cnt;

    while(1) {
        cnt = 0;

        getline(cin, s);

        if(s == "#") break;
        else {
            for(int i = 0; i < s.size(); i++) {
                s[i] = tolower(s[i]);

                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                    ++cnt;
                }
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}