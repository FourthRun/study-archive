#include <iostream>

using namespace std;

int main() {
    int n, a, b;
    int sum = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a >> b;

        sum += b % a;
    }

    cout << sum;

    return 0;
}