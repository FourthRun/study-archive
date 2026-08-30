#include <iostream>

using namespace std;

int main() {
    int q;
    long long a, b;

    cin >> q;

    for(int i = 0; i < q; ++i) {
        cin >> a >> b;

        if(b % a == 0 && b >= 2 * a) cout << 1 << "\n";
        else cout << 0 << "\n";
    }

    return 0;
}