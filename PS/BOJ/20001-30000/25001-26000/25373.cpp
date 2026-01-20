#include <iostream>

using namespace std;

int main() {
    long long n;

    cin >> n;

    if(n > 15) {
        if(n % 7 == 0) cout << n / 7 + 3;
        else cout << n / 7 + 4;
    }
    else if(n > 10) cout << 5;
    else if(n > 6) cout << 4;
    else if(n > 3) cout << 3;
    else if(n > 1) cout << 2;
    else cout << 1;

    
    return 0;
}