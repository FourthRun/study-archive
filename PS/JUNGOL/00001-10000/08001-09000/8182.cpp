#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, num;
    int m = 0;
    bool check = true;

    cin >> n;

    for(int i = 0; i < n; ++i) {
        cin >> num;

        if(num == 1 && check) ++m;
        else check = false;
    }

    if(check) {
        if(n % 2 == 0) cout << 'H';
        else cout << 'J';
    }
    else {
        if(m % 2 == 0) cout << 'J';
        else cout << 'H';
    }

    return 0;
}