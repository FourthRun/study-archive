#include <iostream>

using namespace std;

long long calc(long long a, long long b) {
    return (a + b) * (a - b);
}

int main() {
    long long num1, num2;

    cin >> num1 >> num2;

    cout << calc(num1, num2);

    return 0;
}