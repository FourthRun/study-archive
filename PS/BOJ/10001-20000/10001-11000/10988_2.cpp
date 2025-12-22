#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;

    cin >> s;

    if (equal(s.begin(), s.begin() + s.size() / 2, s.rbegin())) cout << 1;
    else cout << 0;

    return 0;
}