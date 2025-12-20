#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::setprecision;

int main() {
    int a, b;

    cin >> a >> b;

    cout << setprecision(12) << (double)a / b;

    return 0;
}