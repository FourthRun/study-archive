#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int res = 1;
    pair<int, int> nowMax;

    cin >> n;

    vector<pair<int, int>> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), greater<>());

    nowMax = {v[0].first, v[0].second};

    for(int i = 1; i < n; i++) {
        if(nowMax.first > v[i].first && v[i].second > nowMax.second) {
            nowMax.first = v[i].first;
            nowMax.second = v[i].second;
            ++res;
        }
    }

    cout << res;

    return 0;
}