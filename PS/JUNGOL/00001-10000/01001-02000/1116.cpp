#include <iostream>

using namespace std;

int arr[9][9];

int main() {
    int res = -1;
    int r, c;

    for(int i = 0; i < 9; ++i) {
        for(int j = 0; j < 9; ++j) {
            cin >> arr[i][j];

            if(res < arr[i][j]) {
                r = i + 1;
                c = j + 1;

                res = arr[i][j];
            }
        }
    }

    cout << res << "\n" << r << " " << c;

    return 0;
}