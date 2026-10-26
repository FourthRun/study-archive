#include <iostream>

using namespace std;

int arr[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
bool as[10];
bool bs[10];

int main() {
    int a, b;
    int c = 0;

    cin >> a >> b;

    for(int i = 9; i >= 0; --i) {
        if(a >= arr[i]) {
            as[i] = true;

            a -= arr[i];
        }

        if(b >= arr[i]) {
            bs[i] = true;

            b -= arr[i];
        }
    }

    for(int i = 0; i < 10; ++i) {
        if(as[i] != bs[i]) c += arr[i];
    }

    cout << c;

    return 0;
}