#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t, x1, y1, x2, y2, r1, r2;

    cin >> t;

    while(t--) {
        cin >> x1 >> y1 >> r1 >>  x2 >> y2 >> r2;

        int dx = x1 - x2;
        int dy = y1 - y2;
        int dpow = dx * dx + dy * dy;

        if(dx == 0 && dy == 0 && r1 == r2) cout << -1 << "\n";
        else if((r1 + r2) * (r1 + r2) == dpow) cout << 1 << "\n";
        else if((r1 - r2) * (r1 - r2) == dpow) cout << 1 << "\n";
        else if((r1 + r2) * (r1 + r2) < dpow) cout << 0 << "\n";
        else if((r1 - r2) * (r1 - r2) > dpow) cout << 0 << "\n";
        else cout << 2 << "\n";
    }

    return 0;
}