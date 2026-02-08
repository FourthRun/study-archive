#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, a, b;
    long long x = 0;
    long long y = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a >> b;

        if(a < b) swap(a, b);

        if(x < a && y < b) {
            x = a;
            y = b;
        }
        else if(x < a && y >= b) x = a;
        else if(x >= a && y < b) y = b;
    }

    cout << x * y;

    return 0;
}