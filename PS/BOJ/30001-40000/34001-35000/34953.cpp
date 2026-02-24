#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(i % 3 == 1 || i % 3 == 2) cout << 'S';
        else cout << 'H';
    }

    return 0;
}