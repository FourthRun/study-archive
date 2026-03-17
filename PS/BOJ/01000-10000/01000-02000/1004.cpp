#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, x1, x2, y1, y2, n, cx, cy, r, cnt, start, end;

    cin >> t;

    while(t--) {
        cnt = 0;

        cin >> x1 >> y1 >> x2 >> y2 >> n;

        for(int i = 0; i < n; i++) {
            cin >> cx >> cy >> r;

            start = (cx - x1) * (cx - x1) + (cy - y1) * (cy - y1);
            end = (cx - x2) * (cx - x2) + (cy - y2) * (cy - y2);

            if(start > r * r && end < r * r) ++cnt;
            else if(start < r * r && end > r * r) ++cnt;
        }

        cout << cnt << "\n";
    }

    return 0;
}