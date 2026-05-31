#include <iostream>

using namespace std;

int main() {
    int n, k;
    int res = 0;

    cin >> n >> k;

    for(int i = 1; i <= n; ++i) {
        if(n % i == 0) {
            --k;

            if(k <= 0) {
                res =  i;
                break;
            }
        }
    }

    cout << res;

    return 0;
}