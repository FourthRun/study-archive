#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, a, b, c;

    cin >> t;

    for(int i = 1; i <= t; ++i) {
        cin >> a >> b >> c;

        cout << "Case #" << i;

        if(c * c == a * a + b * b || a * a == b * b + c * c || b * b == a * a + c * c) cout << ": YES\n";
        else cout << ": NO\n";
    }

    return 0;
}