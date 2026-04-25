#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    double x1, y1, x2, y2, x3, y3, x4, y4, a1, a2, b1, b2, c1, c2, det;

    cin >> n;
    cout << fixed << setprecision(2);

    while(n--) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        a1 = y1 - y2;
        b1 = x2 - x1;
        c1 = -(a1 * x1 + b1 * y1);

        a2 = y3 - y4;
        b2 = x4 - x3;
        c2 = -(a2 * x3 + b2 * y3);

        det = a1 * b2 - a2 * b1;

        if(det == 0) {
            if(a1 * c2 == a2 * c1 && b1 * c2 == b2 * c1) cout << "LINE\n";
            else cout << "NONE\n";
        }
        else {
            cout << "POINT " << (b1 * c2 - b2 * c1) / det << " " << (c1 * a2 - c2 * a1) / det << "\n";
        }
    }

    return 0;
}