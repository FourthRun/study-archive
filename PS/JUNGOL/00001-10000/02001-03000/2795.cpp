#include <iostream>

using namespace std;

long long dp[16][16];

int main() {
    dp[1][1] = 1;

    int n, m, k, r, c;

    cin >> n >> m >> k;

    if(k == 0) {
        for(int i = 1; i <= n; ++i) {
            for(int j = 1; j <= m; ++j) {
                if(i == 1 && j == 1) continue;

                dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
            }
        }
    }
    else {
        r = (k + m - 1) / m;
        c = (k - 1) % m + 1;

        for(int i = 1; i <= r; ++i) {
            for(int j = 1; j <= c; ++j) {
                if(i == 1 && j == 1) continue;

                dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
            }
        }

        for(int i = r; i <= n; ++i) {
            for(int j = c; j <= m; ++j) {
                if(i == 1 && j == 1) continue;

                dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
            }
        }
    }

    cout << dp[n][m];

    return 0;
}