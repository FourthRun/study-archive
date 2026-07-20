#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, d, k, c, left, right, res, now;

    cin >> n >> d >> k >> c;

    vector<int> v(n);
    vector<int> cnt(d + 1);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    left = 0;
    right = k;
    now = 1;
    ++cnt[c];

    for(int i = left; i < right; ++i) {
        if(cnt[v[i]] == 0) ++now;

        ++cnt[v[i]];
    }

    res = now;

    for(int i = 0; i < n - 1; ++i) {
        --cnt[v[left]];

        if(cnt[v[left]] == 0) --now;

        ++cnt[v[right]];
        
        if(cnt[v[right]] == 1) ++now;

        res = max(res, now);

        ++left;
        ++right;

        right %= n;
    }

    cout << res;

    return 0;
}