#include <iostream>

using namespace std;

bool dp[5000001];

int main() {
    int t, a, b, c, d, e;

    cin >> t >> a >> b;

    c = a / 2;
    d = b / 2;
    e = (a + b) / 2;

    dp[a] = true;
    dp[b] = true;
    dp[c] = true;
    dp[d] = true;

    if(a + b <= t) dp[e] = true;

    for(int i = 0; i <= 5000000; ++i) {
        if(dp[i]) {
            if(i + a <= 5000000) dp[i + a] = true;
            if(i + b <= 5000000) dp[i + b] = true;
        }
    }

    for(int i = t; t > 0; --i) {
        if(dp[i]) {
            cout << i;

            break;
        }
    }

    return 0;
}