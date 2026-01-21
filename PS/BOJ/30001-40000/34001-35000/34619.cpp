#include <iostream>

using namespace std;

int main() {
    int a, b, n, k, temp;

    cin >> a >> b >> n >> k;

    if(k % n == 0) temp = k / n;
    else temp = k / n + 1;

    if(temp % b == 0) cout << temp / b << " " << b;
    else cout << temp / b + 1 << " " <<  temp % b;

    return 0;
}