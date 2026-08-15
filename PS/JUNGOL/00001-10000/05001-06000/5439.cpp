#include <iostream>

using namespace std;

int main() {
    int n;
    int result = 4;

    cin >> n;

    for(int i = 1; i * i <= n; i++) {
        if(i * i == n) {
            result = 1;

            break;
        }

        for(int j = 1; i * i + j * j <= n; j++) {
            if(i * i + j * j == n) result = min(2, result);

            for(int k = 1; i * i + j * j + k * k <= n; k++) {
                if(i * i + j * j + k * k == n) result = min(3, result);
            }
        }
    }

    if(n == 0) cout << 0;
    else cout << result;

    return 0;
}