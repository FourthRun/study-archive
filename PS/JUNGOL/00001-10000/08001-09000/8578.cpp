#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int cnt = 1000000001;

    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < n - 1; ++i) {
        cnt = min(cnt, v[i + 1] - v[i]);
    }

    cout << cnt;

    return 0;
}