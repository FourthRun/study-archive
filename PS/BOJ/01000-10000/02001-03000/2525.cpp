#include <iostream>

using std::cout;
using std::cin;

int main() {
    int h, m, addM, newM;

    cin >> h >> m >> addM;

    cout << (h + (m + addM) / 60) % 24 << " " << (m + addM) % 60;

    return 0;
}