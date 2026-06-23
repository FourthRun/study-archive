#include <iostream>

using namespace std;

long long calc(long long n) {
    if(n <= 1) {
        cout << "1! = 1\n";

        return 1;
    }
    else {
        cout << n << "! = " << n << " * " << n - 1 << "!\n";

        return n * calc(n - 1);
    }
}

int main() {
    long long n;

    cin >> n;

    cout << calc(n);

    return 0;
}