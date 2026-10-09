#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <utility>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, num;
    int nmin = 1e9;
    int nmax = 0;
    int res = 1e9;

    cin >> n >> m;

    vector<priority_queue<int, vector<int>, greater<>>> v(n);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> num;

            v[i].push(num);
        }
    }

    for(int i = 0; i < n; ++i) {
        num = v[i].top();
        v[i].pop();

        pq.push({num, i});

        nmin = min(nmin, num);
        nmax = max(nmax, num);
    }

    res = min(res, nmax - nmin);

    while(1) {
        auto it = pq.top();
        pq.pop();

        if(v[it.second].empty()) break;

        pq.push({v[it.second].top(), it.second});

        nmin = pq.top().first;
        nmax = max(nmax, v[it.second].top());

        v[it.second].pop();

        res = min(res, nmax - nmin);
    }

    cout << res;

    return 0;
}