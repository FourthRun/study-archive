#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int dp[1001][10001];

int main() {
    int n, w;

    cin >> n >> w;

    vector<pair<int, int>> v(n + 1);

    for(int i = 1; i <= n; ++i) {
        cin >> v[i].first >> v[i].second;
    }

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= w; ++j) {
            if(j >= v[i].first) dp[i][j] = max(dp[i - 1][j], dp[i][j - v[i].first] + v[i].second);
            else dp[i][j] = dp[i - 1][j];
        }
    }

    cout << dp[n][w];

    return 0;
}