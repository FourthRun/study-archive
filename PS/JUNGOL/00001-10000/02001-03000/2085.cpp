#include <iostream>

using namespace std;

int main() {
    long long n, m, cnt;

    cin >> m >> n;

    cnt = (m / 4) - (m / 100) + (m / 400) - ((n / 4) - (n / 100) + (n / 400));

    cout << cnt;

    return 0;
}