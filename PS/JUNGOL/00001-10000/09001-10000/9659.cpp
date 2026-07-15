#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> tree[1001];

int res1, x, x_parent;
int res2 = 0;
int res3 = 0;
int res4 = 0;

void dfs1(int node, int parent, int depth) {
    if(node == x) {
        res1 = depth;
        x_parent = parent;

        return;
    }
    
    for(int next : tree[node]) {
        if(next == parent) continue;
        else dfs1(next, node, depth + 1);
    }
}

void dfs2(int node, int parent) {
    ++res2;

    for(int next : tree[node]) {
        if(next == parent) continue;
        else dfs2(next, node);
    }
}

void dfs3(int node, int parent, int depth) {
    res3 = max(res3, depth);

    for(int next : tree[node]) {
        if(next == parent) continue;
        else dfs3(next, node, depth + 1);
    }
}

void dfs4(int node, int parent, int depth) {
    res4 = max(res4, depth);

    for(int next : tree[node]) {
        if(next == parent) continue;
        else dfs4(next, node, depth + 1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, u, v;

    cin >> n;

    for(int i = 0; i < n - 1; ++i) {
        cin >> u >> v;

        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    for(int i = 1; i <= n; ++i) {
        sort(tree[i].begin(), tree[i].end());
    }

    cin >> x;

    dfs1(1, 0, 0);
    dfs2(x, x_parent);
    dfs3(x, x_parent, 0);
    dfs4(x, 0, 0);

    cout << res1 << "\n" << res2 << "\n" << res3 << "\n" << res4;

    return 0;
}