#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> adj[100001];
int visit[100001];
int cnt = 0;

void dfs(int cur) {
    visit[cur] = ++cnt;

    for(int next : adj[cur]) {
        if(visit[next] == 0) dfs(next);
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

    for(int i = 1; i <=n; i++) {
        sort(adj[i].begin(), adj[i].end());
    }

    dfs(r);

    for(int i = 1; i <= n; i++) {
        cout << visit[i] << "\n";
    }

    return 0;
}