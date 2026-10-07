#include <iostream>
#include <string>

using namespace std;

int dp[4001][4001];

int main() {
    string s1, s2;
    int res = 0;

    cin >> s1 >> s2;

    for(int i = 0; i < s1.size(); ++i) {
        for(int j = 0; j < s2.size(); ++j) {
            if(s1[i] == s2[j]) dp[i + 1][j + 1] = dp[i][j] + 1;
            else dp[i + 1][j + 1] = 0;

            res = max(res, dp[i + 1][j + 1]);
        }   
    }

    cout << res;

    return 0;
}