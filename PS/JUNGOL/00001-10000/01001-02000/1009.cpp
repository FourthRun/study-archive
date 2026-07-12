#include <iostream>

using namespace std;

int main() {
    int n, temp, cnt, pow;
    bool check;

    while(cin >> n) {
        if(n == 0) break;
        else {
            temp = n;
            cnt = 0;
            check = false;

            while(temp > 0) {
                if(temp % 10 != 0) check = true;

                if(check) cout << temp % 10;

                cnt += temp % 10;

                temp /= 10;
            }

            cout << " " << cnt << "\n";
        }
    }

    return 0;
}