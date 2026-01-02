#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;

    while(cin >> s1) {
        s2 = s1;
        reverse(s2.begin(), s2.end());

        if((int)s1[0] == '0') break;
        else if(s1 == s2) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}