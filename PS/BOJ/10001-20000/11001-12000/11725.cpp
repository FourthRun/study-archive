#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int MAX = 100001;
vector<int> adj[MAX];
int parent[MAX];
int n;

void bfs(int start) {
    queue<int> q;
    int curr;
    
    q.push(start);
    parent[start] = start;

    while(!q.empty()) {
        curr = q.front();
        q.pop();

        for(int next : adj[curr]) {
            if(parent[next] == 0) {
                parent[next] = curr;
                q.push(next);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int u, v;
    cin >> n;

    for(int i = 0; i < n - 1; i++) {
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs(1);
    
    for(int i = 2; i <= n; i++) {
        cout << parent[i] << "\n";
    }

    return 0;
}