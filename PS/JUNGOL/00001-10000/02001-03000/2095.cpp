#include <iostream>

using namespace std;

long long dp[101][101];

int main() {
    for(int i = 0; i < 101; ++i) {
        dp[i][0] = i;
        dp[0][i] = i;
    }

    dp[1][1] = 3;

    for(int i = 1; i < 101; ++i) {
        for(int j = 1; j < 101; ++j) {
            dp[i][j] = ((dp[i - 1][j - 1] + dp[i - 1][j]) % 880228 + dp[i][j - 1] + 1) % 880228;
        }
    }

    int x, y;

    cin >> x >> y;

    cout << dp[x][y];

    return 0;
}