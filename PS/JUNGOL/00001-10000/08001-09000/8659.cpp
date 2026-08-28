#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;

    cin >> s;

    for(int i = 0; i < s.size(); ++i) {
        cout << s[i];

        if(i == 0 || i == 1 || i == 4) cout << "!";
    }

    cout << "!";

    return 0;
}