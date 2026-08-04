#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, u, m, v;
    vector<int> tree(101);

    cin >> n;

    while(cin >> u) {
        if(u == -1) break;
        else {
            cin >> m;

            for(int i = 0; i < m; ++i) {
                cin >> v;

                tree[v] = u;
            }
        }
    }

    while(1) {
        if(n == 0) break;

        cout << n << " ";

        n = tree[n];
    }

    return 0;
}