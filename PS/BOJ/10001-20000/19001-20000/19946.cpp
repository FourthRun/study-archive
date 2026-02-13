#include <iostream>

using namespace std;

int main() {
    unsigned long long n;

    cin >> n;

    for(int i = 0; i < 64; i++) {
        if(n % 2 == 0) n /= 2;
        else {
            cout << 64 - i;

            break;
        }
    }

    return 0;
}