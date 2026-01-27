#include <iostream>

using namespace std;

int main() {
    int k, newA, newB;
    int a = 1;
    int b = 0;

    cin >> k;

    for(int i = 0; i < k; i++) {
        newA = b;
        newB = a + b;

        a = newA;
        b = newB;
    }

    cout << a << " " << b;

    return 0;
}