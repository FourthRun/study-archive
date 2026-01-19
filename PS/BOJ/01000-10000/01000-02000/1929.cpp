#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    bool check;

    cin >> m >> n;

    for(int i = m; i <= n; i++) {
        check = true;

        if(i != 1) {
            for(int j = 2; j * j <= i; j++) {
                if(i % j == 0) {
                    check = false;

                    break;
                }
            }
        }
        else check = false;

        if(check) cout << i << "\n";
    }

    return 0;
}