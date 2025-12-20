#include <iostream>

using std::cout;
using std::cin;

int main() {
    int h, m;

    cin >> h >> m;

    if(m < 45) {
        if(h == 0) cout << 23 << " " << m + 15;
        else cout << h - 1 << " " << m + 15;
    }
    else {
        cout << h << " " << m - 45;
    }

    return 0;
}