#include <iostream>

using namespace std;

int main() {
    int n, k, pow;
    long long num = 0;
    string s;

    cin >> n >> k;

    for(int i = 1; i <= n; ++i) {
        pow = i;

        while(pow) {
            pow /= 10;

            num *= 10;
        }
        num += i;

        num %= k;
    }

    cout << num;

    return 0;
}