#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int count = 1;

    cin >> n;

    while(n > 1) {
        n -= count * 6;
        count++;
    }

    cout << count;

    return 0;
}