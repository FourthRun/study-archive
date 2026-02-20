#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> adj[100001];
int visit[100001];
int cnt = 0;

void bfs(int start) {
    queue<int> q;
    int x, y;

    q.push(start);

    visit[start] = ++cnt;

    while(!q.empty()) {
        x = q.front();

        q.pop();

        for(int i = 0; i < adj[x].size(); i++) {
            y = adj[x][i];
            if(visit[y] == 0) {
                q.push(y);
                visit[y] = ++cnt;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, r, u, v;

    cin >> n >> m >> r;

    for(int i = 0; i < m; i++) {
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 1; i <= n; i++) {
        sort(adj[i].begin(), adj[i].end(), greater<int>());
    }

    bfs(r);

    for(int i = 1; i <= n; i++) {
        cout << visit[i] << "\n";
    }

    return 0;
}