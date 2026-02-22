#include <iostream>

using namespace std;

int d[21][21][21];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, result;

    for(int i = 0; i < 21; i++) {
        for(int j = 0; j < 21; j++) {
            for(int k = 0; k < 21; k++) {
                if(i == 0 || j == 0 || k == 0) d[i][j][k] = 1;
                else if(i < j && j < k) d[i][j][k] = d[i][j][k - 1] + d[i][j - 1][k - 1] - d[i][j - 1][k];
                else d[i][j][k] = d[i - 1][j][k] + d[i - 1][j - 1][k] + d[i - 1][j][k - 1] - d[i - 1][j - 1][k - 1];
            }
        }
    }

    while(true) {
        cin >> a >> b >> c;

        if(a == -1 && b == -1 && c == -1) break;
        else if(a <= 0 ||  b <= 0 || c <= 0) result = 1;
        else if(a > 20 || b > 20 || c > 20) result = d[20][20][20];
        else result = d[a][b][c];

        cout << "w(" << a << ", " << b << ", " << c << ") = " << result << "\n";
    }

    return 0;
}