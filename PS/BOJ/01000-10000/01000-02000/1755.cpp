#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

bool compare(pair<string, string> a, pair<string, string> b) {
    return a.first < b.first;
}

int main() {
    int n, m;
    int cnt = 0;
    string s;
    vector<string> vs = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cin >> n >> m;

    vector<pair<string, string>> v(m - n + 1);

    for(int i = n; i <= m; i++) {
        s = to_string(i);

        for(char c : s) {
            v[i - n].first += vs[c - '0'];
            v[i - n].second += c;
        }
    }

    stable_sort(v.begin(), v.end(), compare);

    for(int i = 0; i < m - n + 1; i++) {
        cout << v[i].second << " ";

        if((i + 1) % 10 == 0) cout << "\n";
    }
    
    return 0;
}