#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string s[20000];

bool compare(string a, string b) {
    if(a.length() == b.length()) {
        return a < b;
    }
    else {
        return a.length() < b.length();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }

    sort(s, s + n, compare);

    for(int i = 0; i < n; i++) {
        if(s[i] != s[i - 1]) cout << s[i] << "\n";
    }

    return 0;
}