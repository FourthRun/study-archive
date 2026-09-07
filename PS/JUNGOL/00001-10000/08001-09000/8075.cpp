#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int dp[21][100];

int main() {
    int n;

    cin >> n;

    vector<pair<int, int>> v(n + 1);

    for(int i = 1; i <= n; ++i) {
        cin >> v[i].first;
    }

    for(int i = 1; i <= n; ++i) {
        cin >> v[i].second;
    }

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j < 100; ++j) {
            if(j >= v[i].first) dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v[i].first] + v[i].second);
            else dp[i][j] = dp[i - 1][j];
        }
    }

    cout << dp[n][99];

    return 0;
}