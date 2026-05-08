#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    bool check = false;
    long long n, k;
    long long result;

    cin >> n >> k;

    vector<long long> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    result = k + 1;

    for(int i = 1; i < n; ++i) {
        result += min(v[i] - v[i - 1], k + 1);
    }

    cout << result;

    return 0;
}