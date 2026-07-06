#include <iostream>
#include <numeric>

using namespace std;

int main() {
    int n, m, temp;
    int res = 0;

    cin >> n >> m;

    if(n % m == 0);
    else {
        temp = gcd(n, m);

        m /= temp;

        res += (m - 1) * temp;
    }

    cout << res;

    return 0;
}