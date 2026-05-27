#include <iostream>
#include <string>

using namespace std;

int dp[41];

int main() {
    dp[0] = 1;
    dp[1] = 1;

    for(int i = 2; i < 41; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    string s;
    long long res = 1;
    int cnt = 0;

    cin >> s;

    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == '0') {
            if(i == 0) res = 0;
            else if(s[i - 1] - '0' > 0 && s[i - 1] - '0' < 4) {
                res *= dp[cnt - 1];

                cnt = 0;
            }
            else res = 0;
        }
        else if(s[i] - '0' < 4) ++cnt;
        else {
            if(i == 0) continue;
            else if((s[i - 1] - '0') * 10 + (s[i] - '0') <= 34) res *= dp[cnt + 1];
            else res *= dp[cnt];

            cnt = 0;
        }
    }

    res *= dp[cnt];

    cout << res;

    return 0;
}