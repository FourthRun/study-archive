#include <iostream>

using std::cout;
using std::cin;

int main() {
    int a, b;

    cin >> a >> b;

    cout << a * (b % 10) << '\n';
    cout << a * ((b / 10) % 10) << '\n';
    cout << a * (b / 100) << '\n';
    cout << a * b;

    return 0;
}