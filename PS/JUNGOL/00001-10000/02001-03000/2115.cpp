#include <iostream>
#include <string>

using namespace std;

int grid[50][50];
long long dp[50][50];

int main() {
    int n, tmp;
    string s;

    cin >> n;

    dp[0][0] = 1;

    for(int i = 0; i < n; ++i) {
        cin >> s;

        for(int j = 0; j < n; ++j) {
            grid[i][j] = s[j] - '0';

            if(grid[i][j]) {
                tmp = grid[i][j];

                dp[i + tmp][j] += dp[i][j];
                dp[i][j + tmp] += dp[i][j];
            }
        }
    }

    cout << dp[n - 1][n - 1];

    return 0;
}