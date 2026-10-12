#include <iostream>

using namespace std;

int v[50001];
int tree[50001 * 4];
int l, r;

void make(int node, int s, int e) {
    if(s == e) {
        tree[node] = v[s];

        return;
    }

    int mid = (s + e) / 2;

    make(node * 2, s, mid);
    make(node * 2 + 1, mid + 1, e);

    tree[node] = max(tree[node * 2], tree[node * 2 + 1]);
}

int find(int node, int s, int e) {
    if(r < s || e < l) return 0;
    else if(l <= s && e <= r) return tree[node];
    else {
        int mid = (s + e) / 2;

        int a = find(node * 2, s, mid);
        int b = find(node * 2 + 1, mid + 1, e);

        return max(a, b);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;

    cin >> n >> q;

    for(int i = 1; i <= n; ++i) {
        cin >> v[i];
    }

    make(1, 1, n);

    while(q--) {
        cin >> l >> r;

        cout << find(1, 1, n) << "\n";
    }

    return 0;
}