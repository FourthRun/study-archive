#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    long long p, v, k, temp;
    vector<long long> a(4);

    cin >> p >> v >> k;

    temp = lcm(p + 1, v + 1);

    a[1] = k / temp;
    a[2] = k / (v + 1) - a[1];
    a[3] = k / (p + 1) - a[1];
    a[0] = k - a[1] - a[2] - a[3];

    for(int i = 0; i < 4; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}