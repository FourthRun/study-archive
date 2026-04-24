#include <iostream>

using namespace std;

long long dp[32][32];

int main() {
    int n, m, res;

    cin >> n >> m;

    dp[1][1] = 1;

    for (int i = 1; i <= 31; i++) {
        for (int j = 1; j <= 31; j++) {
            if (i < j) break;

            if (i > 0) dp[i][j] += dp[i - 1][j];

            if (j > 0) dp[i][j] += dp[i][j - 1];
        }
    }

    // for(int i = 2; i <= 31; ++i) {
    //     for(int j = 1; j <= 31; ++j) {
    //         if(i < j) break;
    //         else if(i > j) {
    //             for(int k = 1; k <= j; ++k) {
    //                 dp[i][j] += dp[i - 1][k];
    //             }
    //         }
    //         else {
    //             dp[i][j] = dp[j][j - 1];
    //         }
    //     }
    // }

    res = abs(n - m) + 1;

    cout << dp[res][res];
    
    return 0;
}