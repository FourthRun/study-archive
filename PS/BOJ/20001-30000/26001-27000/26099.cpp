#include <iostream>

using namespace std;

int main() {
    long long n;
    long long sum = -1;

    cin >> n;

    for(int i = 0; i < 10; i++) {
        if((n - 3 * i) % 5 == 0 && n >= 3 * i) {
            sum = (n - 3 * i) / 5 + i;
            
            break;
        }
    }

    cout << sum;

    return 0;
}