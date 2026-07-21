#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> adj[10001];
vector<int> adj_re[10001];
vector<int> temp[10001];
int indegree[10001];
long long dp[10001];
bool check1[10001];
bool check2[10001];

void bfs1() {
    queue<int> q;
    int cur;

    q.push(1);
    check1[1] = true;

    while(!q.empty()) {
        cur = q.front();
        q.pop();

        for(int next : adj[cur]) {
            if(!check1[next]) {
                check1[next] = true;

                q.push(next);
            }
        }
    }
}

void bfs2() {
    queue<int> q;
    int cur;

    q.push(2);
    check2[2] = true;

    while(!q.empty()) {
        cur = q.front();
        q.pop();

        for(int next : adj_re[cur]) {
            if(!check2[next]) {
                check2[next] = true;
                
                q.push(next);
            }
        }
    }
}

int main() {
    int n, m, u, v, cur;
    int valid = 0;
    int cnt = 0;
    queue<int> q;
    dp[1] = 1;

    cin >> n >> m;

    for(int i = 0; i < m; ++i) {
        cin >> u >> v;

        adj[u].push_back(v);
        adj_re[v].push_back(u);
    }

    bfs1();
    bfs2();

    for(int i = 1; i <= n; ++i) {
        if(check1[i] && check2[i]) ++valid;
    }

    for(int i = 1; i <= n; ++i) {
        if(check1[i] && check2[i]) {
            for(int j : adj[i]) {
                if(check1[j] && check2[j]) ++indegree[j];
            }
        }
    }

    for(int i = 1; i <= n; ++i) {
        if(indegree[i] == 0 && check1[i] && check2[i]) {
            q.push(i);

            ++cnt;
        }
    }

    while(!q.empty()) {
        cur = q.front();
        q.pop();

        for(int next : adj[cur]) {
            if(!check1[next] || !check2[next]) continue;

            --indegree[next];

            dp[next] = (dp[next] + dp[cur]) % 1000000000;

            if(indegree[next] == 0) {
                q.push(next);

                ++cnt;
            }
        }
    }

    if(valid == cnt) cout << dp[2];
    else cout << "inf";

    return 0;
}