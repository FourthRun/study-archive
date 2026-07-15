#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

vector<int> tree[100001];

pair<int, int> nodeA = {0, 0};
pair<int, int> nodeB = {0, 0};

void dfs1(int node, int parent, int depth) {
    if(tree[node].size() == 1 && nodeA.second < depth) nodeA = {node, depth};
    else {
        for(int next : tree[node]) {
            if(next == parent) continue;
            else dfs1(next, node, depth + 1);
        }
    }
}

void dfs2(int node, int parent, int depth) {
    if(tree[node].size() == 1 && nodeB.second < depth) nodeB = {node, depth};
    else {
        for(int next : tree[node]) {
            if(next == parent) continue;
            else dfs2(next, node, depth + 1);
        }
    }
}
    

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, u, v;

    cin >> n;

    for(int i = 1; i < n; ++i) {
        cin >> u >> v;

        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    for(int i = 1; i <= n; ++i) {
        sort(tree[i].begin(), tree[i].end());
    }

    dfs1(1, 0, 0);

    dfs2(nodeA.first, 0, 0);

    cout << nodeB.second;

    return 0;
}