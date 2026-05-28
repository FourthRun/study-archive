#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, m, l, r, temp1, temp2;
    long long res = 0;

    cin >> t >> m >> n;

    vector<int> v1(m * 2 + 1);
    vector<int> v2(n * 2 + 1);
    vector<int> s1(m * 2 + 1);
    vector<int> s2(n * 2 + 1);
    vector<int> r1;
    vector<int> r2;

    r1.push_back(0);
    r2.push_back(0);

    for(int i = 1; i <= m; ++i) {
        cin >> v1[i];
        v1[i + m] = v1[i];
    }

    for(int i = 1; i <= n; ++i) {
        cin >> v2[i];
        v2[i + n] = v2[i];
    }

    for(int i = 1; i <= m * 2; ++i) {
        s1[i] = s1[i - 1] + v1[i];
    }

    for(int i = 1; i <= n * 2; ++i) {
        s2[i] = s2[i - 1] + v2[i];
    }

    for(int i = 1; i < m; ++i) {
        for(int j = 1; j <= m; ++j) {
            r1.push_back(s1[i + j - 1] - s1[j - 1]);
        }
    }

    for(int i = 1; i < n; ++i) {
        for(int j = 1; j <= n; ++j) {
            r2.push_back(s2[i + j - 1] - s2[j - 1]);
        }
    }
    
    r1.push_back(s1[m] - s1[0]);
    r2.push_back(s2[n] - s2[0]);

    sort(r1.begin(), r1.end());
    sort(r2.begin(), r2.end());

    l = 0;
    r = r2.size() - 1;

    while(l < r1.size() && r >= 0) {
        if(r1[l] + r2[r] == t) {
            temp1 = r1[l];
            temp2 = r2[r];

            auto high = upper_bound(r1.begin() + l, r1.end(), temp1);
            auto low = lower_bound(r2.begin(), r2.begin() + r + 1, temp2);

            long long cnt1 = high - (r1.begin() + l);
            long long cnt2 = (r2.begin() + r + 1) - low;

            res += cnt1 * cnt2;

            l = high - r1.begin();
            r = low - r2.begin() - 1;
        }
        else if(r1[l] + r2[r] < t) ++l;
        else --r;
    }

    cout << res;

    return 0;
}