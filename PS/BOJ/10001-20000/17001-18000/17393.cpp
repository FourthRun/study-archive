#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;

    cin >> n;

    vector<long long> a(n);
    vector<long long> b(n);

    for(long long i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for(long long i = 0; i < n; ++i) {
        cin >> b[i];
    }

    for(long long i = 0; i < n; ++i) {
        cout << (upper_bound(b.begin() + i, b.end(), a[i]) - b.begin()) - i - 1 << " ";
    }

    return 0;
}