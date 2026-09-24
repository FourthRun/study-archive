#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <queue>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long res = 0;
    priority_queue<int, vector<int>, greater<>> pq;

    cin >> n;

    vector<pair<int, int>> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n; ++i) {
        if(v[i].first > pq.size()) pq.push(v[i].second);
        else if(pq.top() < v[i].second) {
            pq.pop();

            pq.push(v[i].second);
        }
    }

    while(!pq.empty()) {
        res += pq.top();

        pq.pop();
    }

    cout << res;

    return 0;
}   