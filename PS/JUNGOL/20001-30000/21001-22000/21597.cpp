#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long res = 0;

    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<>());

    for(int i = 0; i < n; ++i) {
        if(i % 2 == 0) res += v[i];
        else res -= v[i];
    }

    cout << res;

    return 0;
}