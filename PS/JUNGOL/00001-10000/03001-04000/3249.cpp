#include <iostream>
#include <string>

using namespace std;

string s;
int idx = 0;
bool grid[1025][1025];

void compare(int r, int c, int size) {
    if(s[idx] == 'X') {
        ++idx;

        compare(r, c, size / 2);

        compare(r, c + size / 2, size / 2);

        compare(r + size / 2, c, size / 2);

        compare(r + size / 2, c + size / 2, size / 2); 
    }
    else {
        for(int i = r; i < r + size; ++i) {
            for(int j = c; j < c + size; ++j) {
                grid[i][j] = s[idx] - '0';
            }
        }

        ++idx;
    }
}

int main() {
    int n;

    cin >> n >>  s;

    compare(1, 1, n);

    cout << n << "\n";

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            cout << grid[i][j] << " ";
        }

        cout << "\n";
    }
    
    return 0;
}