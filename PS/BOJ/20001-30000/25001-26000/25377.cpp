#include <iostream>

using namespace std;

int main() {
    int n, a, b;
    int minB = 1001;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a >> b;

        if(b - a >= 0 && minB > b) {
            minB = b;
        }
    }

    if(minB == 1001) cout << -1;
    else cout << minB;

    return 0;
}