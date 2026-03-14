#include <iostream>

using namespace std;

int s[100001];
int dp[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int result = -1000000001;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> s[i];
    }

    dp[1] = s[1];

    for(int i = 2; i <= n; i++) {
        dp[i] = max(dp[i - 1] + s[i], s[i]);
    }

    for(int i = 1; i <= n; i++) {
        if(result < dp[i]) result = dp[i];
    }

    cout << result;

    return 0;
}