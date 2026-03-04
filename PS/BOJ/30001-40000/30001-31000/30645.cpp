#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int table[1001][1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r, c, n;
    int cnt = 0;
    bool check = false;

    cin >> r >> c;

    cin >> n;

    vector<int> v(n + 1);

    v[0] = 0;

    for(int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());

    for(int i = 0; i < c; i++) {
        if(n != 0) {
            table[0][i] = v[n];
            ++cnt;
            --n;
        }
        else break;
    }

    for(int i = 1; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(n != 0) {
                while(!table[i][j] && n > 0) {
                    if(table[i - 1][j] > v[n]) {
                        table[i][j] = v[n];
                        ++cnt;
                        --n;
                    }
                    else {
                        --n;
                    }
                }
            }
            else {
                check = true;

                break;
            }
        }

        if(check) break;
    }

    cout << cnt;

    return 0;
}