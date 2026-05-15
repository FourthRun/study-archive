#include <iostream>

using namespace std;

bool paper[52][52];

int main() {
    int n, m, row, col;

    cin >> n >> m;

    for(int i = 0; i < m; ++i) {
        cin >> row >> col;

        for(int j = row; j < row + 3; ++j) {
            for(int k = col; k < col + 3; ++k) {
                paper[j][k] = true;
            }
        }
    }

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            cout << paper[i][j] << " ";
        }

        cout << "\n";
    }

    return 0;
}