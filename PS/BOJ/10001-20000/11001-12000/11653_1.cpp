#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    while(n != 1) {
        bool check = true;

        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                cout << i << "\n";
                n /= i;
                check = false;
                break;
            }
        }

        if(n != 1 && check) {
            cout << n;
            n = 1;
        }
    }

    return 0;
}