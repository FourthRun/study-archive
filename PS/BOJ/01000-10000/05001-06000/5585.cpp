#include <iostream>

using namespace std;

int main() {
    int n;
    int cnt = 0;
    int arr[] = {500, 100, 50, 10, 5, 1};

    cin >> n;

    n = 1000 - n;

    for(int i = 0; i < 6; i++) {
        while(n >= arr[i]) {
            n -= arr[i];

            cnt++;
        }
    }

    cout << cnt;

    return 0;
}