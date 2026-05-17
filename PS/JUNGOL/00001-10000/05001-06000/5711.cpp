#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool map[102][102];
int dp[102][102];

int main() {
    int n, m, a, b, x, y, x2, y2;
    bool check = true;

    cin >> n >> m >> a >> b;
    
    vector<pair<int, int>> v(a);

    for(int i = 0; i < a; ++i) {
        cin >> v[i].first >> v[i].second;
    }

    v.push_back({1, 1});
    v.push_back({n, m});

    sort(v.begin(), v.end());

    dp[1][1] = 1;

    for(int i = 0; i < b; ++i) {
        cin >> x >> y;

        map[x][y] = 1;
    }

    for(int i = 0; i < a + 1; ++i) {
        x = v[i].first;
        y = v[i].second;
        x2 = v[i + 1].first;
        y2 = v[i + 1].second;

        if(x > x2 || y > y2) {
            check = false;

            break;
        }

        for(int j = x; j <= x2; ++j) {
            for(int k = y; k <= y2; ++k) {
                if(j == x && k == y) continue;
                else if(map[j][k] == 0) dp[j][k] = dp[j - 1][k] + dp[j][k - 1];
                else if(map[j][k] == 1) dp[j][k] = 0;
            }
        }
    }


    cout << dp[n][m];

    return 0;
}