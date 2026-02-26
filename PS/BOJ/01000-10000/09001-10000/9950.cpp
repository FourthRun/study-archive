#include <iostream>

using namespace std;

int main() {
    int l, w, a;

    while(cin >> l >> w >> a) {
        if(l == 0 && w == 0 && a == 0) break;
        else if(l == 0) l = a / w;
        else if(w == 0) w = a / l;
        else a = l * w;

        cout << l << " " << w << " " << a << "\n";
    }

    return 0;
}