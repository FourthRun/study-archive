#include <iostream>

using namespace std;

long long calc(long long x) {
    if(x == 0) return 1;
    else if(x > 1) return x * calc(x - 1);
    else return x;
}

int main() {
    long long n;

    cin >> n;

    cout << calc(n);

    return 0;
}