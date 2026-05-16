#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int alpabet[26];

int main() {
    int n;
    string s1, s2;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> s1 >> s2;

        for(int j = 0; j < 26; ++j) {
            alpabet[j] += max(count(s1.begin(), s1.end(), char('a' + j)), count(s2.begin(), s2.end(), char('a' + j)));
        }
    }

    for(int i = 0; i < 26; ++i) {
        cout << alpabet[i] << "\n";
    }

    return 0;
}