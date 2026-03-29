#include <iostream>

using namespace std;

int main() {
    int a, b, c, t, temp;
    int res = 0;

    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> a >> b >> c;

        if(a == b && b == c) temp = 10000 + 1000 * c;
        else if(a == b || b == c) temp = 1000 + 100 * b;
        else if(c == a) temp = 1000 + 100 * c;
        else temp = max(a, max(b, c)) * 100;

        if(temp > res) res = temp;
    }

    cout << res;

    return 0;
}