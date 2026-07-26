#include <iostream>

using namespace std;

int main() {
    long long x, y, z, res, mid, target;
    long long low = 1;
    long long high = 1000000000;

    cin >> x >> y;

    z = (y * 100) / x;

    if (z >= 99) res = -1;

    while (low <= high) {
        mid = (low + high) / 2;
        target = ((y + mid) * 100) / (x + mid);

        if (target > z) {
            res = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }

    cout << res;

    return 0;
}