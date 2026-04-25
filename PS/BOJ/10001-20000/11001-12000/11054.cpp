#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    int n, num;

    cin >> n;

    vector<int> v(n);
    vector<int> dp(n);
    vector<int> dp1(n, 1);
    vector<int> dp2(n, 1);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < i; ++j) {
            if(v[i] > v[j]) dp1[i] = max(dp1[i], dp1[j] + 1);
        }
    }

    for(int i = n - 1; i >= 0; --i) {
        for(int j = n - 1; j > i; --j) {
            if(v[i] > v[j]) dp2[i] = max(dp2[i], dp2[j] + 1);
        }

        dp[i] = dp1[i] + dp2[i] - 1;
    }

    cout << *max_element(dp.begin(), dp.end());

    return 0;
}