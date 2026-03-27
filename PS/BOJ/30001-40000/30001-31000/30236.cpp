#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, n, res, num;

    cin >> t;

    while(t--) {
        res = 0;

        cin >> n;

        for(int i = 0; i < n; i++) {
            ++res;

            cin >> num;

            if(res == num) ++res;
        }

        cout << res << "\n";
    }

    return 0;
}