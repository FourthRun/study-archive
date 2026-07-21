#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>

using namespace std;

vector<pair<int, int>> adj[101];
int indegree[101];
int cnt[101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, u, v, k, cur;
    vector<pair<int, int>> res;
    queue<int> q;

    cin >> n >> m;

    for(int i = 0; i < m; ++i) {
        cin >> u >> v >> k;

        adj[u].push_back({v, k});
        ++indegree[v];
    }

    for(int i = 1; i <= n; ++i) {
        if(indegree[i] == 0) q.push(i);
    }
    
    cnt[n] = 1;

    while(!q.empty()) {
        cur = q.front();
        q.pop();

        if(adj[cur].size() == 0) res.push_back({cur, cnt[cur]});
        else {
            for(auto it : adj[cur]) {
                --indegree[it.first];

                cnt[it.first] += cnt[cur] * it.second;

                if(indegree[it.first] == 0) q.push(it.first);
            }
        }
    }

    sort(res.begin(), res.end());

    for(auto it : res) {
        cout << it.first << " " << it.second << "\n";
    }

    return 0;
}