#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

long long dist[20001];
const long long INF = 1e18;
vector<pair<long long, int>> adj[20001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    fill(dist, dist + 20001, INF);

    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq; // {가중치, 노드}

    int n, m, u, v, w, next;
    long long next_cost;

    cin >> n >> m;

    for(int i = 0; i < m; ++i) {
        cin >> u >> v >> w;

        adj[u].push_back({w, v});
    }

    dist[1] = 0;
    pq.push({0, 1});

    while(!pq.empty()) {
        auto [cost, cur] = pq.top();
        pq.pop();

        if(dist[cur] < cost) continue;

        for(auto it : adj[cur]) {
            next_cost = it.first + cost;
            next = it.second;

            if(next_cost < dist[next]) {
                dist[next] = next_cost;
                
                pq.push({next_cost, next});
            }
        }
    }

    cout << dist[n];

    return 0;
}