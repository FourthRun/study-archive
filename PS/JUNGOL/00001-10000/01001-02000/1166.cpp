#include <iostream>

using namespace std;

int main() {
    int n, result;

    while(cin >> n) {
        if(n == 0) break;

        result = n;

        for(int i = 2; i * i <= n; ++i) {
            if(n % i == 0) {
                while(n % i == 0) {
                    n /= i;
                }

                result -= result / i;
            }
        }

        if(n > 1) result -= result / n;

        cout << result << "\n";
    }

    return 0;
}