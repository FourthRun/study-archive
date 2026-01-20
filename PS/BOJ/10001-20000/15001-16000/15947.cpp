#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    if(n % 14 == 1 || n % 14 == 13) cout << "baby";
    else if(n % 14 == 2 || n % 14 == 0) cout << "sukhwan";
    else if(n % 14 == 5) cout << "very";
    else if(n % 14 == 6) cout << "cute";
    else if(n % 14 == 9) cout << "in";
    else if(n % 14 == 10) cout << "bed";
    else if(n % 14 == 3 || n % 14 == 7 || n % 14 == 11) {
        cout << "tu";

        if(n / 14 < 3) {
            for(int i = -2; i < n / 14; i++) {
                cout << "ru";
            }
        }
        else cout << "+ru*" << n / 14 + 2;
    }
    else {
        cout << "tu";

        if(n / 14 < 4) {
            for(int i = -1; i < n / 14; i++) {
                cout << "ru";
            }
        }
        else cout << "+ru*" << n / 14 + 1;
    }

    return 0;
}