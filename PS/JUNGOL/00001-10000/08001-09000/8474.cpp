#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;
int degree[200001];
int visit[200001];
int dist[200001];
vector<int> adj[200001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, u, v, res1, res2, temp;
    int resd = 200001;
    bool check = false;
    queue<pair<int, int>> q;

    cin >> n;

    for(int i = 0; i < n - 1; ++i) {
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);

        ++degree[u];
        ++degree[v];
    }

    for(int i = 1; i <= n; ++i) {
        if(degree[i] == 1) {
            q.push({i, i});

            visit[i] = i;
        }
    }

    while(!q.empty()) {
        auto [now, s] = q.front();

        q.pop();

        for(int next : adj[now]) {
            if(!visit[next]) {
                visit[next] = s;
                dist[next] = dist[now] + 1;

                q.push({next, s});
            }
            else if(visit[next] != s) {
                temp = dist[now] + dist[next] + 1;

                if(temp < resd) {
                    res1 = s;
                    res2 = visit[next];
                    resd = dist[now] + dist[next] + 1;
                    check = true;
                }
            }
        }

        if(check) break;
    }

    cout << resd << "\n";
    cout << res1 << " " << res2;

    return 0;
}