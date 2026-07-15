#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int tree[10001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, u, v, a, b, cur, res;
    vector<int> Aarray;
    vector<int> Barray;

    cin >> n;

    for(int i = 1; i < n; ++i) {
        cin >> u >> v;

        tree[v] = u;
    }

    cin >> a >> b;

    cur = a;

    while(cur != 0) {
        Aarray.push_back(cur);

        cur = tree[cur];
    }

    cur = b;

    while(cur != 0) {
        Barray.push_back(cur);

        cur = tree[cur];
    }

    reverse(Aarray.begin(), Aarray.end());
    reverse(Barray.begin(), Barray.end());

    res = Aarray[0];

    for(int i = 1; i < min(Aarray.size(), Barray.size()); ++i) {
        if(Aarray[i] == Barray[i]) res = Aarray[i];
        else break;
    }

    cout << res;

    return 0;
}