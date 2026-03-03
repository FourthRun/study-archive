#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int cnt0;
int cnt1;
vector<pair<long long, long long>> memo(41);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;

    memo[0] = {1, 0};
    memo[1] = {0, 1};
    memo[2] = {1, 1};

    for(int i = 3; i <= 40; i++) {
        memo[i].first = memo[i - 1].first + memo[i - 2].first;
        memo[i].second = memo[i - 1].second + memo[i - 2].second;
    }

    cin >> t;

    while(t--) {
        cin >> n;

        cout << memo[n].first << " " << memo[n].second << "\n";
    }

    return 0;
}