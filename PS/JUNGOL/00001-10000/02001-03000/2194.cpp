#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s;
    long long cnt = 0;

    cin >> n >> s;

    vector<pair<int, int>> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
    }

    for(int i = 0; i < n; ++i) {
        if(i == 0) cnt += v[i].first * v[i].second;
        else {
            v[i].first = min(v[i].first, v[i - 1].first + s);

            cnt += v[i].first * v[i].second;
        }
    }

    cout << cnt;

    return 0;
}