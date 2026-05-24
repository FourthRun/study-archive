#include <iostream>

int dp[31][31];

using namespace std;

int main() {
    for(int i = 1; i <= 30; ++i) {
        for(int j = 0; j <= 30; ++j) {
            if(j == 0) dp[i][j] = 1;
            else if(i == j) dp[i][j] = 1;
            else dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
        }
    }

    int n, k;

    cin >> n >> k;
    
    cout << dp[n][k];

    return 0;
}