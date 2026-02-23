#include <iostream>

using namespace std;

int main() {
    int r, w, l;
    int cnt = 1;

    while(true) {
        cin >> r;

        if(r == 0) break;

        cin >> w >> l;

        r *= 2;

        if(r * r >= w * w + l * l) cout << "Pizza " << cnt << " fits on the table.\n";
        else cout << "Pizza " << cnt << " does not fit on the table.\n";

        cnt++;
    }

    return 0;
}