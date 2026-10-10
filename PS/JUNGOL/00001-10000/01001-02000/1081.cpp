#include <iostream>
#include <vector>
#include <utility>

using namespace std;

vector<int> adj[1001];
vector<vector<pair<int, int>>> rc(1001);
int col = 1;

void dfs(int now, int level) {
    if(adj[now].size() == 0) {
        rc[level].push_back({col, now});
        ++col;

        return;
    }
    else {
        if(adj[now][0] != -1) dfs(adj[now][0], level + 1);

        rc[level].push_back({col, now});
        ++col;

        if(adj[now][1] != -1) dfs(adj[now][1], level + 1);

        return;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, u, v, res1;
    int res2 = 0;

    cin >> n;

    for(int i = 1; i <= n; ++i) {
        cin >> u;

        for(int j = 0; j < 2; ++j) {
            cin >> v;
            
            adj[u].push_back(v);
        }
    }

    dfs(1, 1);

    for(int i = 1; i <= n; ++i) {
        if(rc[i].empty()) break;
        else {
            if(rc[i].back().first - rc[i].front().first + 1 > res2) {
                res1 = i;
                res2 = rc[i].back().first - rc[i].front().first + 1;
            }
        }
    }

    cout << res1 << " " << res2;

    return 0;
}