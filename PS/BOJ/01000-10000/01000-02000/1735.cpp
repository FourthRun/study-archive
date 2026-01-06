#include <iostream>
#include <numeric>

using namespace std;

int main() {
    int a, b, c, d, num, den;

    cin >> a >> b >> c >> d;

    den = lcm(b, d);

    num = a * den / b + c * den / d;

    if(gcd(num, den) != 1) {
        int temp = gcd(num, den);
        num /= temp;
        den /= temp;
    }

    cout << num << " " << den;

    return 0;
}