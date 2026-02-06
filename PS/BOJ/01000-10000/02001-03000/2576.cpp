#include <iostream>

using namespace std;

int main() {
    int n;
    int sum = 0;
    int min = 101;

    while(cin >> n) {
        if(n % 2 == 1) {
            sum += n;

            if(min > n) {
                min = n;
            }
        }
    }

    if(sum) cout << sum << "\n" << min;
    else cout << -1;

    return 0;
}