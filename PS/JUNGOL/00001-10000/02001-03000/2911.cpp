#include <iostream>

using namespace std;

int main() {
    int n, a, b;
    int res = 0;

    cin >> n;

    while(n--) {
        cin >> a >> b;

        res += b % a;
    }

    cout << res;

    return 0;
}