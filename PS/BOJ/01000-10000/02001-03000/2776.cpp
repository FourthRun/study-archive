#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, m, num;

    cin >> t;

    while(t--) {
        cin >> n;

        vector<int> v(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        cin >> m;

        for(int i = 0; i < m; i++) {
            cin >> num;

            cout << binary_search(v.begin(), v.end(), num) << "\n";
        }
    }

    return 0;
}