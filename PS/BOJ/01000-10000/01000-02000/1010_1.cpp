#include <iostream>
#include <algorithm>

using namespace std;

int calc(int n, int k) {
    int r = min(k, n-k);
    int result = 1;

    for(int i = 1; i <= r; i++) {
        result = result * (n - r + i) / i;
    }

    cout << result << "\n";

    return 0;
}


int main() {
    int t;
    long long n, k;

    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> k >> n;

        calc(n, k);
    }

    return 0;
}