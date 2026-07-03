#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> a(10);
    vector<int> b(10);
    int acnt = 0;
    int bcnt = 0;

    for(int i = 0; i < 10; ++i) {
        cin >> a[i];
    }

    for(int i = 0; i < 10; ++i) {
        cin >> b[i];
    }

    for(int i = 0; i < 10; ++i) {
        if(a[i] > b[i]) ++acnt;
        else if(a[i] < b[i]) ++bcnt;
    }

    if(acnt > bcnt) cout << "A";
    else if(acnt < bcnt) cout << "B";
    else cout << "D";

    return 0;
}