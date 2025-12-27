#include <iostream>

using namespace std;

int main() {
    int n;
    int count = 0;

    cin >> n;

    while(n > 2) {
        if(n % 5 == 0) {
            count += n / 5;
            n = 0;
            break;
        }
        else {
            count++;
            n -= 3;
        }
    }

    if(n == 0) cout << count;
    else cout << -1;

    return 0;
}