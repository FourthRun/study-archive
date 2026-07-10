#include <iostream>

using namespace std;

int main() {
    int n, m, k, x, y;
    int cnt = 1;

    cin >> n >> m >> k;

    --n;
    --m;

    if((n + 1) * (m + 1) < k) cout << 0;
    else {
        while(k > n * 2 + m * 2) {
            k -= n * 2 + m * 2;
            n -= 2;
            m -= 2;
            ++cnt;
        }
        x = cnt;
        y = cnt;

        if(k > n + m * 2) x += 1 - k + n * 2 + m * 2;
        else if(k > n + m) {
            x += n;
            y += 1 - k + n + m * 2;
        }
        else if(k > m) {
            x += k - m - 1;
            y += m;
        }
        else y += k - 1;

        cout << x << " " << y;
    }

    return 0;
}