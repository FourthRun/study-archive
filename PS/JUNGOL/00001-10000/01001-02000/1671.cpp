#include <iostream>

using namespace std;

bool paint[102][102];

int main() {
    int n, x, y;
    int res = 0;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> x >> y;

        for(int j = x; j < x + 10; ++j) {
            for(int k = y; k < y + 10; ++k) {
                paint[j][k] = true;
            }
        }
    }

    for(int i = 0; i <= 100; ++i) {
        for(int j = 0; j <= 100; ++j) {
            if(paint[i][j] != paint[i + 1][j]) ++res;

            if(paint[i][j] != paint[i][j + 1]) ++res;
        }
    }

    cout << res;

    return 0;
}