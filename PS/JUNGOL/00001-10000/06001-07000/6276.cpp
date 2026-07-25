#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b) {
    if(a.first * b.second != b.first * a.second) return a.first * b.second > b.first * a.second;

    return a.first > b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long t = 0;

    cin >> n;

    vector<pair<int, int>> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < n; ++i) {
        t = (t + (t * v[i].first) % 40000 + v[i].second) % 40000;
    }

    cout << t;

    return 0;
}