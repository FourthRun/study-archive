#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long a, b, sum;

    cin >> a >> b;

    if(a > b) swap(a, b);

    if(a == b) sum = a;
    else if(b - a == 1) sum = a + b;
    else if((b - a) % 2 == 1) sum = (a + b) * ((b - a) / 2 + 1);
    else sum = (a + b) * (b - a) / 2 + (a + b) / 2;

    cout << sum;

    return 0;
}