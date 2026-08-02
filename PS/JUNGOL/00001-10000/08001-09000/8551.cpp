#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;

    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    cin >> a >> b;

    sort(v.begin() + a, v.begin() + b + 1);

    for(int i : v) {
        cout << i << " ";
    }

    cout << "\n";

    sort(v.begin(), v.end());

    for(int i : v) {
        cout << i << " ";
    }

    return 0;
}