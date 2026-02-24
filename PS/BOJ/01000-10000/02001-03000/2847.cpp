#include <iostream>

using namespace std;

int arr[101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, calc;
    int cnt = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = n - 1; i > 0; i--) {
        if(arr[i - 1] > arr[i]) {
            calc = arr[i - 1] - arr[i] + 1;

            cnt += calc;

            arr[i - 1] -= calc;
        }

        else if(arr[i - 1] == arr[i]) {
            cnt++;

            arr[i - 1]--;
        }
    }

    cout << cnt;

    return 0;
}