#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

bool compare(const pair<string, int>& a, const pair<string, int>& b) {
    return a.second > b.second;
}

int main() {
    int n, m, cnt;
    int invalid = 0;
    string s;

    cin >> n >> m;

    vector<pair<string, int>> v(n);

    for(int i = 0; i < n; i++) {
        cin >> s;

        v[i] = {s, 0};
    }

    for(int i = 0; i < m; i++) {
        cnt = -1;

        cin >> s;

        for(int j = 0; j < n; j++) {
            if(s[j] == 'X' && cnt == -1) cnt = j;
            else if(s[j] == 'X' && cnt != -1) cnt = -2;
        }

        if(cnt == -1 || cnt == -2) ++invalid;
        else ++v[cnt].second;
    }

    stable_sort(v.begin(), v.end(), compare);

    for(int i = 0; i < n; i++) {
        cout << fixed << setprecision(2);
        cout << v[i].first << " " << round(v[i].second * 10000 / (double)m) / 100 << "%\n";
    }

    cout << "Invalid " << round(invalid * 10000 / (double)m) / 100 << "%";

    return 0;
}