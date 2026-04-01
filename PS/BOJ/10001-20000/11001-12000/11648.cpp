#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int n;
    int cnt = 0;

    cin >> s;

    while(s.size() > 1) {
        n = 1;

        for(char c : s) {
            n *= c - '0';
        }

        s = to_string(n);

        ++cnt;
    }

    cout << cnt;

    return 0;
}