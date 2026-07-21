#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> adj[1001];
int indegree[1001];

int main() {
    int n, m, u, v, k, cur;
    queue<int> q;
    vector<int> res;

    cin >> n >> m;

    for(int i = 0; i < m; ++i) {
        cin >> k >> u;

        for(int j = 0; j < k - 1; ++j) {
            cin >> v;

            adj[u].push_back(v);
            ++indegree[v];

            u = v;
        }
    }

    for(int i = 1; i <= n; ++i) {
        if(indegree[i] == 0) q.push(i);
    }

    while(!q.empty()) {
        cur = q.front();
        q.pop();

        res.push_back(cur);

        for(int next : adj[cur]) {
            --indegree[next];

            if(indegree[next] == 0) q.push(next);
        }
    }

    if(res.size() != n) cout << 0;
    else {
        for(int i : res) {
            cout << i << "\n";
        }
    }

    return 0;
}