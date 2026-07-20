#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, res, right, left;
    int now = 0;

    cin >> n >> k;

    vector<int> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    left = 0;
    right = k;

    for(int i = left; i < right; ++i) {
        now += v[i];
    }

    res = now;

    for(int i = 0; i < n - k; ++i) {
        now += v[right] - v[left];

        ++right;
        ++left;

        res = max(now, res);
    }

    cout << res;

    return 0;
}