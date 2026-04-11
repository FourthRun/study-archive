#include <iostream>

using namespace std;

int main() {
    int a, b;
    int cnt = 1;

    cin >> a >> b;

    while(b > a) {
        if(b % 10 == 1) {
            b -= 1;
            b /= 10;
        }
        else if(b % 2 == 0) b /= 2;
        else break;

        ++cnt;
    }

    if(a == b) cout << cnt;
    else cout << -1;

    return 0;
}