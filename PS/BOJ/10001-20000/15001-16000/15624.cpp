#include <iostream>

using namespace std;

const int MAX = 1000001;

long long dp[MAX];

int main() {
    int n;
    dp[1] = 1;
    dp[2] = 1;
    
    cin >> n;

    for(int i = 3; i <= MAX; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000007;
    }

    cout << dp[n];

    return 0;
}