#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q, a, b, aloc, bloc;

    cin >> n >> q;

    vector<long long> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < q; ++i) {
        cin >> a >> b;

        aloc = lower_bound(v.begin(), v.end(), a) - v.begin();
        bloc = upper_bound(v.begin(), v.end(), b) - v.begin();

        cout << bloc - aloc << "\n";
    }

    return 0;
}