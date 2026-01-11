#include <iostream>

using namespace std;

int arr[14][14] = {0, };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b;

    for(int i = 0; i < 14; i++) {
        arr[i][0] = 1;

        for(int j = 1; j < 14; j++) {
            if(i == 0) {
                arr[0][j] = j + 1;
            }
            else arr[i][j] = arr[i][j - 1] + arr[i - 1][j];
        }

    }

    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> a >> b;

        cout << arr[a][b - 1] << "\n";
    }

    return 0;
}