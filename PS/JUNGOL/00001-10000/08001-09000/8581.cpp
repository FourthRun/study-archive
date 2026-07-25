#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    long long res = 0;

    cin >> n;

    vector<long long> v1(n);
    vector<long long> v2(n);

    for(int i = 0; i < n; ++i) {
        cin >> v1[i];
    }

    for(int i = 0; i < n; ++i) {
        cin >> v2[i];
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    for(int i = 0; i < n; ++i) {
        res += v1[i] * v2[i];
    }

    cout << res;

    return 0;
}