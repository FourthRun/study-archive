#include <iostream>

using namespace std;

int main() {
    int year, day;

    cin >> year >> day;

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) cout << 30;
    else cout << 29;

    return 0;
}