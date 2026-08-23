#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int res1 = 0;
    int res2 = 0;

    cin >> s;

    for(int i = 0; i < s.size() - 2; ++i) {
        if(s.substr(i, 3) == "KOI") ++res1;

        if(s.substr(i, 3) == "IOI") ++res2;
    }

    cout << res1 << "\n" << res2;

    return 0;
}