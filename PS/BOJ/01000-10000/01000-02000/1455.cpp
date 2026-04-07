#include <iostream>
#include <string>

using namespace std;

bool arr[101][101];

int main() {
    int n, m;
    int cnt = 0;
    string s;

    cin >> n >> m;

    for(int i = 0; i < n; ++i) {
        cin >> s;

        for(int j = 0; j < m; ++j) {
            if(s[j] == '0') arr[i][j] = 0;
            else arr[i][j] = 1;
        }
    }

    --n;
    --m;

    while(n >= 0 || m >= 0) {
        if(n > m) {
            for(int k = m; k >= 0; --k) {
                if(arr[n][k] == 1) {
                    for(int i = 0; i <= n; ++i) {
                        for(int j = 0; j <= k; ++j) {
                            arr[i][j] = !arr[i][j];
                        }
                    }

                    ++cnt;
                }
            }

            --n;
        }
        else {
            for(int k = n; k >= 0; --k) {
                if(arr[k][m] == 1) {
                    for(int i = 0; i <= k; ++i) {
                        for(int j = 0; j <= m; ++j) {
                            arr[i][j] = !arr[i][j];
                        }
                    }

                    ++cnt;
                }
            }

            --m;
        }
    }

    cout << cnt;

    return 0;
}