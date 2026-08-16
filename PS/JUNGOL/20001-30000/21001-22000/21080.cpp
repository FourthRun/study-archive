#include <iostream>

using namespace std;

int main() {
    long long x1, x2, x3, y1, y2, y3;
    long long res;

    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    res = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);

    if(res > 0) cout << 1;
    else if(res < 0) cout << -1;
    else cout << 0;

    return 0;
}