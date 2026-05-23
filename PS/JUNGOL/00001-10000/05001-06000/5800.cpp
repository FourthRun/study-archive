#include <iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned long long n, temp;

    cin >> n;

    temp = (unsigned long long)sqrt(n);

    while(temp * temp > n) {
        temp--;
    }

    cout << (temp + 1) * (temp + 1);

    return 0;
}