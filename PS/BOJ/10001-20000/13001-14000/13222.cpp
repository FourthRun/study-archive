#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, w, h, check;

    cin >> n >> w >> h;

    float len = sqrt(w * w + h * h);

    for(int i = 0; i < n; i++) {
        cin >> check;

        if(check <= len) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}