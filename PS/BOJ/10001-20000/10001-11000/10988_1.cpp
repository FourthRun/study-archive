#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s;

    cin >> s;

    string s_rev = s;

    reverse(s_rev.begin(), s_rev.end());

    if(s == s_rev) cout << 1;
    else cout << 0;

    return 0;
}