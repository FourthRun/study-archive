#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int l, r;
    int cnt = 0;
    string a, b;

    cin >> l >> r;

    a = to_string(l);
    b = to_string(r);

    if(a.size() == b.size()) {
        for(int i = 0; i < a.size(); i++) {
            if(a[i] == '8' && b[i] == '8') ++cnt;
            else if(a[i] != b[i]) break;
        }
    } 

    cout << cnt;

    return 0;
}