#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

bool check[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num, idx;

    cin >> n;

    vector<pair<int, int>> v(n);
    vector<int> dp;
    vector<int> store(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; ++i) {
        num = v[i].second;

        idx = lower_bound(dp.begin(), dp.end(), num) - dp.begin();

        store[i] = idx;

        if(idx == dp.size()) dp.push_back(num);
        else dp[idx] = num;
    }

    cout << n - dp.size() << "\n";

    idx = dp.size() - 1;

    for(int i = n - 1; i >= 0; --i) {
        if(store[i] == idx) {
            check[i] = true;

            --idx;
        }
    }

    for(int i = 0; i < n; ++i) {
        if(!check[i]) cout << v[i].first << "\n";
    }

    return 0;
}