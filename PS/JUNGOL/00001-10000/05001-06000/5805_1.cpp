#include <iostream>

using namespace std;

int main() {
    long long x, y, z, res;

    cin >> x >> y;

    z = (y * 100) / x;

    if(z >= 99) res = -1;
    else res = ((z + 1) * x - 100 * y + 99 - z - 1) / (99 - z);

    cout << res;

    return 0;
}