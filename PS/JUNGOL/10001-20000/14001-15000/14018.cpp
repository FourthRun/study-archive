#include <iostream>

using namespace std;

int main() {
    long long a, b;
    long long pow1 = 5;
    long long pow2 = 2;
    int cnt1 = 0;
    int cnt2 = 0;
    int res1 = 0;
    int res2 = 0;

    cin >> a >> b;

    --a;

    while(pow1 <= b) {
        ++cnt1;

        if(b / pow1 - a / pow1 > 0) res1 = cnt1;

        pow1 *= 5;
    }

    while(pow2 <= b) {
        ++cnt2;

        if(b / pow2 - a / pow2 > 0) res2 = cnt2;

        pow2 *= 2;
    }

    cout << min(res1, res2);

    return 0;
}