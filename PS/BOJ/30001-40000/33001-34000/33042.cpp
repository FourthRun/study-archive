#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int n;
    int res = 0;
    string s;
    map<string, int> m;

    cin >> n;

    for(int i = 1; i <= n; i++) {
        cin >> s;

        ++m[s];

        if(m[s] == 5 && res == 0) res = i;
    }

    cout << res;

    return 0;
}