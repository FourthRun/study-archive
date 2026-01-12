#include <iostream>

using namespace std;

int main() {
    int l, r;
    int branch = 2;
    int result = 0;

    cin >> l >> r;

    while(true) {
        l = l * r / 100;

        if(l <= 5) break;

        result += branch * l;

        branch *= 2;
    }

    cout << result;

    return 0;
}