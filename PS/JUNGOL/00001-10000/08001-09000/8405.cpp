#include <iostream>

using namespace std;

long long dp[16][16];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 1; i <= 15; ++i) {
        dp[0][i] = i;
    }

    for(int i = 1; i <= 15; ++i) {
        for(int j = 1; j <= 15; ++j) {
            for(int k = 1; k <= j; ++k) {
                dp[i][j] += dp[i - 1][k];
            }
        }
    }

    int x, y;

    while(cin >> x >> y) {
        cout << dp[x][y] << "\n";
    }

    return 0;
}