#include <iostream>

using namespace std;

int main() {
    int n;
    int result = 4;

    cin >> n;

    for(int i = 1; i * i <= 100000; i++) {
        if(i * i == n) {
            result = 1;

            break;
        }

        for(int j = 1; j * j <= 100000; j++) {
            if(i * i + j * j == n) result = min(2, result);

            for(int k = 1; k * k <= 100000; k++) {
                if(i * i + j * j + k * k == n) result = min(3, result);
            }
        }
    }

    cout << result;

    return 0;
}