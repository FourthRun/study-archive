#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;
    int i = 1;

    cin >> s;

    sort(s.begin(), s.end());

    while(s[0] == '0') {
        swap(s[0], s[i]);

        i++;
    }

    cout << s;

    return 0;
}