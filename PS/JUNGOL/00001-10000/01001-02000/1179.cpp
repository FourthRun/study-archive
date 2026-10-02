#include <iostream>

using namespace std;

long long dp[50001];

int main() {
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 2;

    for(int i = 4; i <= 50000; ++i) {
        dp[i] = (dp[i - 2] + dp[i - 3]) % 1'000'000'007;
    }

    int n;

    cin >> n;

    cout << dp[n - 1];

    return 0;
}