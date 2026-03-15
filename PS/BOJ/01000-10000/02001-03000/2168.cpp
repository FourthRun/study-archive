#include <iostream>
#include <numeric>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    cout << n + m - gcd(n, m);

    return 0;
}