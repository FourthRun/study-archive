#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t, a, b, c, min;
    cin >> t;

    while(t--) {
        cin >> a >> b >> c;

        min = c * c + (a + b) * (a + b);

        if(min > a * a + (b + c) * (b + c)) min = a * a + (b + c) * (b + c);
        if(min > b * b + (a + c) * (a + c)) min = b * b + (a + c) * (a + c);

        cout << min << "\n";
    }

    return 0;
}