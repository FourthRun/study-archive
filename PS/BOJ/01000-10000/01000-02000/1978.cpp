#include <iostream>

using namespace std;

int main() {
    int t, n;
    int count = 0;

    cin >> t;

    for(int i = 0; i < t; i++) {
        bool check = true;
        
        cin >> n;

        if(n > 1) {
            for(int j = 2; j * j <= n; j++) {
                if(n % j == 0) {
                    check = false;
                    break;
                }
            }
        }
        else check = false;

        if(check) count++;
    }

    cout << count;

    return 0;
}