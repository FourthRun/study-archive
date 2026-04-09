#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, r;
    int cnt = 0;

    cin >> n >> m;

    vector<int> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<>());

    if(v.size() % 2 == 1) r = min(m, (int)v.size() / 2 + 1);
    else r = min(m, (int)v.size() / 2);

    for(int i = 0; i < r; ++i) {
        if(v[i] > 0) cnt += v[i];
        else break;
    }

    cout << cnt;

    return 0;
}