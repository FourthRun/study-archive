#include <iostream>
#include <numeric>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    long long n, now, pre;
    long long res = 0;
    set<long long> s;

    cin >> n >> pre;

    for(int i = 1; i < n; ++i) {
        cin >> now;

        res = gcd(res, abs(now - pre));

        pre = now;
    }

    for(int i = 1; i * i <= res; ++i) {
        if(res % i == 0) {
            s.insert(i);
            s.insert(res / i);
        }
    }

    for(long long i : s) {
        if(i != 1) cout << i << " ";
    }

    return 0;
}