#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    char c;
    int n, l, r;

    cin >> s >> n;

    vector<vector<int>> v(s.size() + 1, vector<int>(26));

    for(int i = 1; i <= s.size(); ++i) {
        v[i] = v[i - 1];

        ++v[i][s[i - 1] - 'a'];
    }

    for(int i = 0; i < n; ++i) {
        cin >> c >> l >> r;

        cout << v[r + 1][c - 'a'] - v[l][c - 'a'];

        cout << "\n";
    }

    return 0;
}