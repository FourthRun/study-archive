#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, s, n, q, p, sum;

    cin >> t;

    for(int i = 0; i < t; i++) {
        sum = 0;

        cin >> s >> n;

        sum += s;

        for(int j = 0; j < n; j++) {
            cin >> q >> p;

            sum += q * p;
        }

        cout << sum << "\n";
    }

    return 0;
}