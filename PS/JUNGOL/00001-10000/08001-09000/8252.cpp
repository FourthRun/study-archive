#include <iostream>
#include <string>

using namespace std;

long long dp[1000002];

int main() {
    int temp, j;

    for(int i = 1; i < 1000001; ++i) {
        temp = 0;
        j = i;

        while(j > 0) {
            temp += j % 10;

            j /= 10;
        }
        
        dp[i + temp] += dp[i] + 1;
    }

    int n;

    cin >> n;

    cout << dp[n] + 1;

    return 0;
}