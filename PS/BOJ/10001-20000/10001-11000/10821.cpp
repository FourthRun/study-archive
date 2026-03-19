#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    int cnt;

    cin >> s;

    cnt = count(s.begin(), s.end(), ',');

    cout << cnt + 1;

    return 0;
}