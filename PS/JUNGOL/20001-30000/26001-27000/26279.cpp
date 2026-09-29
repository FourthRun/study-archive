#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <utility>

using namespace std;

const long long INF = 1e18;
priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> pq;
vector<pair<long long, int>> adj[1001];
stack<int> res;
long long dist1[1001];
long long dist2[1001];
long long dist3[1001];
int parent1[1001];
int parent2[1001];
int parent3[1001];
int md_idx;

void dijkstra(int start, long long dist[], int parent[]) {
    pq.push({0, start});
    dist[start] = 0;
    int next;
    long long next_cost;

    while(!pq.empty()) {
        auto [cost, cur] = pq.top();
        pq.pop();

        if(cost > dist[cur]) continue;

        for(auto it : adj[cur]) {
            next_cost = it.first + cost;
            next = it.second;

            if(dist[next] > next_cost) {
                dist[next] = next_cost;
                parent[next] = cur;

                pq.push({next_cost, next});
            }
        }
    }
}

void find_par(int target, int parent[]) {
    int now = md_idx;

    res.push(now);

    while(now != target) {
        now = parent[now];

        res.push(now);
    }

    cout << res.size() << "\n";

    while(!res.empty()) {
        cout << res.top() << " ";

        res.pop();
    }

    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    fill(dist1, dist1 + 1001, INF);
    fill(dist2, dist2 + 1001, INF);
    fill(dist3, dist3 + 1001, INF);

    int n, m, u, v, w, s1, s2, s3;
    long long now;
    long long md = INF;

    cin >> n >> m;

    for(int i = 0; i < m; ++i) {
        cin >> u >> v >> w;

        adj[u].push_back({w, v});
        adj[v].push_back({w, u});
    }

    cin >> s1 >> s2 >> s3;

    dijkstra(s1, dist1, parent1);
    dijkstra(s2, dist2, parent2);
    dijkstra(s3, dist3, parent3);

    for(int i = 1; i <= n; ++i) {
        now = dist1[i] + dist2[i] + dist3[i];

        if(md > now) {
            md_idx = i;
            md = now;
        }
    }

    cout << md << "\n" << md_idx << "\n";

    find_par(s1, parent1);
    find_par(s2, parent2);
    find_par(s3, parent3);
    
    return 0;
}