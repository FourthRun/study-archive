#include <iostream>

using namespace std;

int main() {
    int n, r, num;
    int cnt = 0;

    cin >> n >> r;

    while(n--) {
        cin >> num;

        if(num + r > num * 2) cnt--;
        else if(num + r < num * 2) cnt++;
    }

    if(cnt < 0) cout << 1;
    else if(cnt > 0) cout << 2;
    else cout << 0;

    return 0;
}