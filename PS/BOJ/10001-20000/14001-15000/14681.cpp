#include <iostream>

using std::cout;
using std::cin;

int main() {
    int x, y;

    cin >> x >> y;

    if(x > 0 && y > 0) cout << 1;
    else if(x < 0 && y > 0) cout << 2;
    else if(x < 0 && y < 0) cout << 3;
    else cout << 4;

    return 0;
}