#include <iostream>

using namespace std;

int store[501][501];
int arr[501];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, num, cnt;
    bool check;

    cin >> t;

    while(t--) {
        check = true;

        cin >> n;

        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                cin >> store[i][j];
            }
        }

        for(int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        cnt = 0;

        for(int i = 0; i < n; ++i) {
            if(arr[i] < 0) {
                check = false;

                break;
            }

            for(int j = i + 1; j < n; ++j) {
                arr[j] -= store[i][j] * arr[i];
            }

            cnt += arr[i];
        }

        if(check) cout << "1 " << cnt << "\n";
        else cout << "0\n";
    }

    return 0;
}