#include <iostream>

using namespace std;

int dp[100001];

int main() {
    dp[0] = 1;

    int n, k;

    cin >> n >> k;

    for(int i = 1; i <= 100001; i++) {
        if(i > k) {
            dp[i] = (dp[i - 1] + dp[i - k - 1]) % 5000011;
        }
        else  {
            dp[i] = (dp[i - 1] + 1) % 5000011;
        }
    }

    cout << dp[n];

    return 0;
}