#include <iostream>

using namespace std;

int main() {
    long long n;
    long long temp = 1;
    int res = 1;

    cin >> n;

    if(n == 0) res = 0;
    else if(n == 1) res = 1;
    else {
        while(n > temp) {
            temp *= 2;

            ++res;
        }
    }

    cout << res;

    return 0;
}