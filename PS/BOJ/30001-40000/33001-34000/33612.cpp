#include <iostream>

using namespace std;

int main() {
    int n;
    int year = 2024;
    int month = 8;

    cin >> n;

    month += 7 * (n - 1) - 1;

    year += month / 12;
    month %= 12;

    cout << year << " " << month + 1;

    return 0;
}