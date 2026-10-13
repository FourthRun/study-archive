#include <iostream>

using namespace std;

int par[50001];
int s_node[50001];

int find(int x) {
    if(x == par[x]) return x;
    else return par[x] = find(par[x]);
}

void unite(int a, int b) {
    a = find(a);
    b = find(b);

    if(a == b) return;
    else {
        if(s_node[a] < s_node[b]) swap(a, b);

        par[b] = a;
        s_node[a] += s_node[b];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i = 1; i <= 50000; ++i) {
        par[i] = i;
        s_node[i] = 1;
    }

    int n, q, com, u, v;

    cin >> n >> q;

    while(q--) {
        cin >> com;
        
        if(com == 1) {
            cin >> u >> v;

            unite(u, v);
        }
        else {
            cin >> u;

            cout << s_node[find(u)] << "\n";
        }
    }

    return 0;
}