#include <iostream>
#include <algorithm>

using std::cout;
using std::cin;
using std::max;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if (a == b && b == c) cout << a * 1000 + 10000;
    else if(a == b || b == c) cout << b * 100 + 1000;
    else if(c == a) cout << a * 100 + 1000;
    else cout << max({a, b, c}) * 100;

    return 0;
}