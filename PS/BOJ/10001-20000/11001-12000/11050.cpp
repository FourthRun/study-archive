#include <iostream>

using namespace std;

int fact(int n) {
    int count = 1;

    for(int i = 2; i <= n; i++) {
        count *= i;
    }

    return count;
}


int main() {
    int n, k;

    cin >> n >> k;

    cout << fact(n) / (fact(k) * fact(n - k));

    return 0;
}