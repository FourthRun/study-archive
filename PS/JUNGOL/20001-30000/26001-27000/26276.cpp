#include <iostream>
#include <vector>
#include <utility>
#include <queue>

using namespace std;

bool visit[10001];
vector<pair<int, int>> adj[10001];
priority_queue<pair<int, int>> pq; // {가중치, 노드번호}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, u, v, w, s, e, weight, now;
    int res = 1e9;

    cin >> n >> m;

    for(int i = 0; i < m; ++i) {
        cin >> u >> v >> w;

        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    cin >> s >> e;

    pq.push({res, e});

    while(1) {
        weight = pq.top().first;
        now = pq.top().second;
        
        pq.pop();

        if(visit[now]) continue;

        // cout << weight << " " << now << "\n";

        res = min(res, weight);
        visit[now] = true;

        if(now == s) break;
        else {

            for(auto it : adj[now]) {
                pq.push({it.second, it.first});
            }
        }
    }

    cout << res;

    return 0;
}