#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, l, r;

    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    cin >> l >> r;

    reverse(v.begin() + l, v.begin() + r + 1);

    for(int i : v) {
        cout << i << " ";
    }

    cout << "\n";

    sort(v.begin(), v.end(), greater<>());

    for(int i : v) {
        cout << i << " ";
    }

    return 0;
}