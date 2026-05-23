#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, min_val, max_val;

    cin >> n;

    vector<int> v(n + 1);
    vector<int> mindp(n + 1);
    vector<int> maxdp(n + 1);
    vector<int> s(n + 1);

    for(int i = 1; i <= n; ++i) {
        cin >> v[i];

        mindp[i] = min(v[i], v[i] + mindp[i - 1]);
        maxdp[i] = max(v[i], v[i] + maxdp[i - 1]);

        s[i] = v[i] + s[i - 1];
    }

    min_val = *min_element(mindp.begin() + 1, mindp.end());
    max_val = *max_element(maxdp.begin() + 1, maxdp.end());

    if(s[n] == min_val) cout << max_val;
    else cout << max(max_val, s[n] - min_val);

    return 0;
}