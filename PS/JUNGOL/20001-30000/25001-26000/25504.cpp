#include <iostream>
#include <vector>
#include <utility>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, t;
    int table = 0;
    priority_queue<long long, vector<long long>, greater<>> pq;

    cin >> n;

    vector<pair<long long, long long>> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
    }

    for(int i = 0; i < n; ++i) {
        t = v[i].first;

        while(!pq.empty() && t >= pq.top()) {
            pq.pop();
        }

        pq.push(v[i].second);

        table = max(table, (int)pq.size());
    }

    cout << table;

    return 0;
}