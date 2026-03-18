#include <iostream>

using namespace std;

int main() {
    int x, n;
    int cnt = 0;

    cin >> x >> n;

    if(x <= 0 && n == 0) cout << 0;
    else if(n == 0) cout << "INFINITE";
    else if(n == 1) {
        if(x >= 0) cout << 0;
        else if(x < 0) cout << "INFINITE";
    }
    else if(n % 2 == 1) cout << "ERROR";
    else {
        n /= 2;
        x -= n;

        while(0 < x) {
            ++cnt;

            x -= n;
        }

        cout << cnt;
    }

    return 0;
}