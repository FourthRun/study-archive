#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, t, low, high, mid, total, pre, cnt, res;

    cin >> n >> t;

    vector<long long> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    low = 1;
    high = v[n - 1] - v[0];

    while(low <= high) {
        mid = low + (high - low) / 2;
        pre = v[0];
        cnt = 1;

        for(int i = 1; i < n; ++i) {
            if(v[i] - pre >= mid) {
                ++cnt;
                
                pre = v[i];
            }
        }

        if(cnt >= t) {
            res = mid;

            low = mid + 1;
        }
        else high = mid - 1;
    }

    cout << res;

    return 0;
}