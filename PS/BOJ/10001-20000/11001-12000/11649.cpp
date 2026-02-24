#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s;
    vector<string> v;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> s;

        reverse(s.begin(), s.end());

        v.push_back(s);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++) {
        cout << v[i] << "\n";
    }

    return 0;
}