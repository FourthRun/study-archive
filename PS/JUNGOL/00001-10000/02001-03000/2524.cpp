#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    long long   res;
    long long sum = 0;

    cin >> n >> k;

    vector<long long> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for(int i = 0; i < k; ++i) {
        sum += v[i];
    }

    res = sum;

    for(int i = 0; i < n - k; ++i) {
        sum -= v[i];
        sum += v[i + k];

        res = max(res, sum);
    }

    cout << res;

    return 0;
}