#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using  namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, max_val;
    int cnt = 1;

    cin >> n;

    vector<pair<int, int>> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;

        v[i].second += v[i].first;
    }

    sort(v.begin(), v.end());

    max_val = v[0].second;

    for(int i = 1; i < n; ++i) {
        if(max_val <= v[i].first) {
            ++cnt;

            max_val = v[i].second;
        }
        
        max_val = min(max_val, v[i].second);
    }

    cout << cnt;

    return 0;
}