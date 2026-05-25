#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> adj[501];
bool visit[501];

void dfs(int cur, int cnt) {
    visit[cur] = true;

    if(cnt == 2) return;
    ++cnt;
    
    for(int i : adj[cur]) {
        dfs(i, cnt);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, u, v;
    int cnt = 0;
    int res = 0;

    cin >> n >> m;

    for(int i = 1; i <= m; i++) {
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0);

    for(int i = 1; i <= n; ++i) {
        if(visit[i]) ++res;
    }

    cout << res - 1;

    return 0;
}