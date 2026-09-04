#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int res = 0;
    string s;

    cin >> n >> s;

    for(int i = 0; i < n - 1; ++i) {
        if(s[i] == 'C' && s[i + 1] >= '0' && s[i + 1] <= '9') ++res;
    }

    cout << res;

    return 0;
}