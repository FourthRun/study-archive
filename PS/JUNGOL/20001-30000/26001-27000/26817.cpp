#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, cnt;
    string s, a, b;
    bool check = false;

    cin >> n >> s;

    for(int i = 1; i < n; ++i) {
        a = s.substr(0, i);
        b = s.substr(n - i, i);
        cnt = 0;

        for(int j = 0; j < i; ++j) {
            if(a[j] != b[j]) ++cnt;
        }

        if(cnt == 1) {
            check = true;
            
            break;
        }
    }

    if(check) cout << "YES";
    else cout << "NO";

    return 0;
}