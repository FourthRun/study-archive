#include <iostream>

using namespace std;

int gcd(long long a, long long b) {
    if(b == 0) return a;

    return gcd(b, a % b);
}

int main() {
    long long a, b, result;

    cin >> a >> b;

    result = gcd(a, b);

    cout << a * b / result;

    return 0;
}