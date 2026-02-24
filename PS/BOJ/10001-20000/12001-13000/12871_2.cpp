#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2;

    cin >> s1 >> s2;

    if(s1 + s2 == s2 + s1) cout << 1;
    else cout << 0;

    return 0;
}