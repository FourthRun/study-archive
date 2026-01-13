#include <iostream>

using namespace std;

int main() {
    long long n, m, a, b;

    cin >> n >> m;

    if(n < m) {
        a = n;
        b = m;
    }
    else {
        a = m;
        b = n;
    }

    if(a == b || abs(a-b) == 1) {
        cout << 0;
    }
    else {
        cout << b - a - 1 << "\n";

    for(long long i = a + 1; i < b; i++) {
            cout << i << " ";
        }
    }

    return 0;
}