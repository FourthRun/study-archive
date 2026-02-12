#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    cout << ((((a + b) + 1) % 4) + (((c + d) + 1) % 4)) % 4 + 1;

    return 0;
}