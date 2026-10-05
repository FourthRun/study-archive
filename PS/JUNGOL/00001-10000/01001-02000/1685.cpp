#include <iostream>

using namespace std;

int grid[101][101];
int dp[101][101];

int main() {
    int n;
    int res = 0;

    cin >> n;

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= i; ++j) {
            cin >> grid[i][j];
        }
    }

    dp[1][1] = grid[1][1];

    for(int i = 2; i <= n; ++i) {
        for(int j = 1; j <= i; ++j) {
            dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + grid[i][j]; 
        }
    }

    for(int i = 1; i <= n; ++i) {
        res = max(res, dp[n][i]);
    }

    cout << res;

    return 0;
}