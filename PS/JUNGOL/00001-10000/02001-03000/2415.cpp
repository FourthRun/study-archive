#include <iostream>

using namespace std;

long long dp[21];
long long arr[21];

int main() {
    int n, idx;
    long long res = 0;

    cin >> n;

    for(int i = 1; i <= n; ++i) {
        cin >> dp[i];

        if(dp[i] == -1) idx = i;
    }

    if(idx == 1 && dp[4] - dp[3] - dp[2] > 0) dp[1] = dp[4] - dp[3] - dp[2];
    else if(idx == 2 && dp[4] - dp[3] - dp[1] > 0) dp[2] = dp[4] - dp[3] - dp[1];
    else if(idx == 3 && dp[4] - dp[2] - dp[1] > 0) dp[3] = dp[4] - dp[2] - dp[1];

    arr[1] = dp[1];
    arr[2] = dp[2];
    arr[3] = dp[3];

    for(int i = 1; i <= n; ++i) {
        if(i < 4) {
            if(arr[i] <= 0) {
                res = -1;

                break;
            }
        }
        else {
            arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];

            if(i != idx && dp[i] != arr[i]) {
                res = -1;

                break;
            }
        }
    }

    if(res == -1) cout << res;
    else cout << arr[idx];

    return 0;
}